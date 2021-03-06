#include <catch2/catch.hpp>
#include "splash/splash.h"

TEST_CASE("Testing splash helpers", "[splash::helpers]") {

    SECTION("Bold helper is used") {
        REQUIRE(splash::bold("hello") == "\033[1mhello\033[0m");
    }

    SECTION("Underline helper is used") {
        REQUIRE(splash::underline("hello") == "\033[4mhello\033[0m");
    }

    SECTION("Black helper is used") {
        REQUIRE(splash::black("hello") == "\033[30mhello\033[0m");
    }

    SECTION("Red helper is used") {
        REQUIRE(splash::red("hello") == "\033[31mhello\033[0m");
    }

    SECTION("Green helper is used") {
        REQUIRE(splash::green("hello") == "\033[32mhello\033[0m");
    }

    SECTION("Yellow helper is used") {
        REQUIRE(splash::yellow("hello") == "\033[33mhello\033[0m");
    }

    SECTION("Blue helper is used") {
        REQUIRE(splash::blue("hello") == "\033[34mhello\033[0m");
    }

    SECTION("Magenta helper is used") {
        REQUIRE(splash::magenta("hello") == "\033[35mhello\033[0m");
    }

    SECTION("Cyan helper is used") {
        REQUIRE(splash::cyan("hello") == "\033[36mhello\033[0m");
    }

    SECTION("White helper is used") {
        REQUIRE(splash::white("hello") == "\033[37mhello\033[0m");
    }
}