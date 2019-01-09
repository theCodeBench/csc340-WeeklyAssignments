#include "catch.hpp"
#include "integerInfo.h"

TEST_CASE("Count Ones for zero should return 0", "[count]")
{
   IntegerInfo info(0);
   
   REQUIRE(info.countOnes() == 0);
}

TEST_CASE("Count Ones for 1 should return 1", "[count]")
{
   IntegerInfo info(1);
   
   REQUIRE(info.countOnes() == 1);
}

TEST_CASE("Count Ones for 2 should return 1", "[count]")
{
   IntegerInfo info(2);
   
   REQUIRE(info.countOnes() == 1);
}

TEST_CASE("Count Ones for 3 should return 2", "[count]")
{
   IntegerInfo info(3);
   
   REQUIRE(info.countOnes() == 2);
}

TEST_CASE("Count Ones for 4 should return 1", "[count]")
{
   IntegerInfo info(4);
   
   REQUIRE(info.countOnes() == 1);
}

TEST_CASE("Count Ones for 7 should return 3", "[count]")
{
   IntegerInfo info(7);
   
   REQUIRE(info.countOnes() == 3);
}

TEST_CASE("Count Ones for 1023 should return 10", "[count]")
{
   IntegerInfo info(1023);
   
   REQUIRE(info.countOnes() == 10);
}
