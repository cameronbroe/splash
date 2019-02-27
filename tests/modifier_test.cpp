#include <catch2/catch.hpp>
#include "splash/modifier.h"

TEST_CASE("Testing splash modifier class", "[splash::modifier]") {

    SECTION("Text attribute is added") {
        splash::modifier modifier;
        modifier.addAttribute(splash::attribute::BOLD);
        REQUIRE(modifier.wrap("hello") == "\033[1mhello\033[0m");
    }

    SECTION("Foreground attribute is added") {
        splash::modifier modifier;
        modifier.addAttribute(splash::attribute::FG_RED);
        REQUIRE(modifier.wrap("hello") == "\033[31mhello\033[0m");
    }

    SECTION("Background attribute is added") {
        splash::modifier modifier;
        modifier.addAttribute(splash::attribute::BG_BLUE);
        REQUIRE(modifier.wrap("hello") == "\033[44mhello\033[0m");
    }

    SECTION("Multiple attributes are added") {
        splash::modifier modifier;
        modifier.addAttribute(splash::attribute::BOLD);
        modifier.addAttribute(splash::attribute::FG_RED);
        modifier.addAttribute(splash::attribute::BG_BLUE);
        REQUIRE(modifier.wrap("hello") == "\033[1;31;44mhello\033[0m");
    }
}
