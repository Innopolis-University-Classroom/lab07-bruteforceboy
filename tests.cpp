// Test definitions. Do NOT edit this file!

#include <tuple>

#define CATCH_CONFIG_MAIN // defines main() automatically
#include "catch.hpp"

#include "ex01.hpp"
#include "ex02.hpp"

TEST_CASE("Ex01", "[exercise]") {
    int y = 0;
    multiples(y, 1, 2);

    REQUIRE(y == 4);

    float y2 = 0.0;
    multiples<float>(y2, 1.5, 3.0);

    REQUIRE(y2 == 10);
}

TEST_CASE("Ex02", "[exercise]") {
    Calculator<int> intCalc(2, 1);

    REQUIRE(intCalc.add() == 3);
    REQUIRE(intCalc.multiply() == 2);
    REQUIRE(intCalc.divide() == 2);
    REQUIRE(intCalc.subtract() == 1);

    Calculator<float> floatCalc(12.0, 3.0);

    REQUIRE(floatCalc.add() == 15.0);
    REQUIRE(floatCalc.multiply() == 36.0);
    REQUIRE(floatCalc.divide() == 4.0);
    REQUIRE(floatCalc.subtract() == 9.0);

}