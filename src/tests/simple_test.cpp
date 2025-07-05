#define CATCH_CONFIG_MAIN
#include <catch2/catch_all.hpp>
#include "utils/math.hpp"

TEST_CASE("Simple Test", "[math]") {
    REQUIRE(1 + 1 == 2);
}

TEST_CASE("Simple case with external code", "[math]") {
    int result = add(1, 1);
    REQUIRE(result == 2);
}
