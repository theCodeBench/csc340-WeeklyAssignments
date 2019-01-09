#include "catch.hpp"
#include "integerInfo.h"

TEST_CASE("Is Zero Odd Result False", "[odd]")
{
   IntegerInfo info(0);
   
   REQUIRE(info.isOdd() == false);
}

TEST_CASE("Is One Odd Result True", "[odd]")
{
   IntegerInfo info(1);
   
   REQUIRE(info.isOdd() == true);
}

TEST_CASE("Is Two Odd Result False", "[odd]")
{
   IntegerInfo info(2);
   
   REQUIRE(info.isOdd() == false);
}
