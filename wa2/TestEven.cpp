#include "catch.hpp"
#include "integerInfo.h"

TEST_CASE("Is Zero Even Result True", "[even]")
{
   IntegerInfo info(0);
   
   REQUIRE(info.isEven() == true);
}

TEST_CASE("Is One Even Result False", "[even]")
{
   IntegerInfo info(1);
   
   REQUIRE(info.isEven() == false);
}

TEST_CASE("Is Two Even Result True", "[even]")
{
   IntegerInfo info(2);
   
   REQUIRE(info.isEven() == true);
}

TEST_CASE("Is minus Two Even Result True", "[even]")
{
   IntegerInfo info(-2);
   
   REQUIRE(info.isEven() == true);
}

TEST_CASE("Is minus Three Even Result False", "[even]")
{
   IntegerInfo info(-3);
   
   REQUIRE(info.isEven() == false);
}

TEST_CASE("Is large number Even Result true", "[even]")
{
   IntegerInfo info(1234534);
   
   REQUIRE(info.isEven() == true);
}
