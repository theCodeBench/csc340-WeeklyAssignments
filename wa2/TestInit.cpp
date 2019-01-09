#include "catch.hpp"
#include "integerInfo.h"

TEST_CASE("Create an IntegerInfo object", "[init]")
{
   IntegerInfo info;
}

TEST_CASE("Create an initialized IntegerInfo object", "[init]")
{
   IntegerInfo info(10);
}
