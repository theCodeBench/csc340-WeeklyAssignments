#include "catch.hpp"
#include "integerInfo.h"

TEST_CASE("Is One Composite Result False", "[composite]")
{
   IntegerInfo info(1);
   
   REQUIRE(info.isComposite() == false);
}

TEST_CASE("Is Zero Composite Result False", "[composite]")
{
   IntegerInfo info(0);

   REQUIRE(info.isComposite() == false);
}

TEST_CASE("Is Three Composite Result False", "[composite]")
{
   IntegerInfo info(3);
   REQUIRE(info.isComposite() == false);
}

TEST_CASE("Is Four Composite Result True", "[composite]")
{
   IntegerInfo info(4);

   REQUIRE(info.isComposite() == true);
}

TEST_CASE("Is Thirteen Composite Result False", "[composite]")
{
   IntegerInfo info(13);

   REQUIRE(info.isComposite() == false);
}

TEST_CASE("Is Twenty-four Composite Result true", "[composite]")
{
   IntegerInfo info(24);

   REQUIRE(info.isComposite() == true);
}
