#include "catch.hpp"
#include "integerInfo.h"

TEST_CASE("Prime Factors of Zero Should be empty list", "[factors]")
{
   IntegerInfo info(0);
   std::list<int> answer;

   REQUIRE(info.factors() == answer);
}

TEST_CASE("Prime Factors of One Should be empty list", "[factors]")
{
   IntegerInfo info(1);
   std::list<int> answer;

   REQUIRE(info.factors() == answer);
}

TEST_CASE("Prime Factors of Two Should be {2}", "[factors]")
{
   IntegerInfo info(2);
   std::list<int> answer {2};

   REQUIRE(info.factors() == answer);
}

TEST_CASE("Prime Factors of 4 Should be {2,2}", "[factors]")
{
   IntegerInfo info(4);
   std::list<int> answer {2, 2};

   REQUIRE(info.factors() == answer);
}

TEST_CASE("Prime Factors of 15 Should be {3,5}", "[factors]")
{
   IntegerInfo info(15);
   std::list<int> answer {3, 5};

   REQUIRE(info.factors() == answer);
}

TEST_CASE("Prime Factors of 3*3*7*11*23 Should be {3, 3, 7, 11, 23}", "[factors]")
{
   IntegerInfo info(3*3*7*11*23);
   std::list<int> answer {3, 3, 7, 11, 23};

   REQUIRE(info.factors() == answer);
}
