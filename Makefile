#File Directory things (might be overkill idk yet)
INCLUDE = -I$(SRC_DIR)/headers
SRC_DIR = src
OBJ_DIR = obj
LOG_DIR = logs

#Compiler and linker things
CC = g++
CCFLAGS = -g -Wall -Wextra --std=c++20
SDL = `sdl2-config --cflags --libs`

rwildcard=$(foreach d,$(wildcard $(1:=/*)),$(call rwildcard,$d,$2) $(filter $(subst *,%,$2),$d))

#Essential files and groups
OBJ = gameboy-emu
SRCS = $(call rwildcard, $(SRC_DIR), *.cpp)
OBJS = $(patsubst $(SRC_DIR)/%.cpp, $(OBJ_DIR)/%.o, $(SRCS))

all: $(OBJ) 
	@mkdir -p $(LOG_DIR)
	@mkdir -p $(@D)
	@echo ---- Generating $^ ---

$(OBJ): $(OBJS)
	@echo ---- Linking $^ ----
	@mkdir -p $(@D)
	$(CC) $^ -o $@ $(SDL)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@echo ---- Compiling $^ ----
	@mkdir -p $(@D)
	$(CC) $(CCFLAGS) $(INCLUDE) -c $< -o $@

clean:
	rm $(OBJ)
	rm -rf $(OBJ_DIR)/
	rm -rf $(LOG_DIR)/
