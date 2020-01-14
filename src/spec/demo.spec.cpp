#include "../lib/Catch2/single_include/catch2/catch.hpp"
#include "../examples/demo.h"

using Catch::WithinAbs;

TEST_CASE("Demo Code", "[test]") {

    Demo demo;

    SECTION( "doubles a number" ) {
        REQUIRE( demo.doubleANumber(2) == 4 );
    }

    SECTION( "squares a float" ) {
        REQUIRE_THAT( demo.squareAFloat(2.54), WithinAbs(6.45f, .003f) );
    }

}
