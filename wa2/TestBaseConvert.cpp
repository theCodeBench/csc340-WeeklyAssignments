#include "catch.hpp"
#include "integerInfo.h"

TEST_CASE("Convert Zero to base zero should throw exception", "[base]")
{
   IntegerInfo info(0);
   
   REQUIRE_THROWS_AS(info.convertToBase(0), std::runtime_error);
}

TEST_CASE("Convert Zero to base two should return empty string", "[base]")
{
   IntegerInfo info(0);
   
   REQUIRE(info.convertToBase(2) == "");
}

TEST_CASE("Convert 1 to base two should return '1'", "[base]")
{
   IntegerInfo info(1);
   
   REQUIRE(info.convertToBase(2) == "1");
}
