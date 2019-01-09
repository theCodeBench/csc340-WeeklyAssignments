#include "catch.hpp"
#include "integerInfo.h"

TEST_CASE("Is Zero Prime Result False", "[prime]")
{
   IntegerInfo info(0);
   
   REQUIRE(info.isPrime() == false);
}

TEST_CASE("Is One Prime Result False", "[prime]")
{
   IntegerInfo info(1);
   
   REQUIRE(info.isPrime() == false);
}

TEST_CASE("Is Two Prime Result True", "[prime]")
{
   IntegerInfo info(2);
   
   REQUIRE(info.isPrime() == true);
}

TEST_CASE("Is Three Prime Result True", "[prime]")
{
   IntegerInfo info(3);
   
   REQUIRE(info.isPrime() == true);
}

TEST_CASE("Is Four Prime Result False", "[prime]")
{
   IntegerInfo info(4);
   
   REQUIRE(info.isPrime() == false);
}

TEST_CASE("Is Thirteen Prime Result True", "[prime]")
{
   IntegerInfo info(13);
   
   REQUIRE(info.isPrime() == true);
}

TEST_CASE("Is Twenty-Four Prime Result False", "[prime]")
{
   IntegerInfo info(24);
   
   REQUIRE(info.isPrime() == false);
}
