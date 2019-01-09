#include "catch.hpp"
#include "IntegerInfo.h"
#include <vector>
using namespace std;

TEST_CASE("Create an IntegerInfo object") {
    IntegerInfo info;
}

TEST_CASE("Initiate an IntegerInfo object") {
    IntegerInfo info1(5);
    IntegerInfo info2(0);
    IntegerInfo info3(-8);
}

TEST_CASE("Initiate and check for correct value") {
    IntegerInfo info1(5);
    REQUIRE(info1.getValue() == 5);
    IntegerInfo info2(0);
    REQUIRE(info2.getValue() == 0);
    IntegerInfo info3(-8);
    REQUIRE(info3.getValue() == -8);
}

TEST_CASE("Check even function of integer") {
    IntegerInfo info1(5);
    REQUIRE(!info1.isEven());
    IntegerInfo info2(10);
    REQUIRE(info2.isEven());
    IntegerInfo info3(0);
    REQUIRE(info3.isEven());
    IntegerInfo info4(-8);
    REQUIRE(info4.isEven());
    IntegerInfo info5(-11);
    REQUIRE(!info5.isEven());
}

TEST_CASE("Check odd function of integer") {
    IntegerInfo info1(5);
    REQUIRE(info1.isOdd());
    IntegerInfo info2(10);
    REQUIRE(!info2.isOdd());
    IntegerInfo info3(0);
    REQUIRE(!info3.isOdd());
    IntegerInfo info4(-8);
    REQUIRE(!info4.isOdd());
    IntegerInfo info5(-11);
    REQUIRE(info5.isOdd());
}

TEST_CASE("Check prime function for Integer") {
    vector<int> primes = {2,3,5,7,11,13,17,19,23,29};
    for(int i = -30; i <= 30; ++i) {
        IntegerInfo info(i);
        bool shouldBePrime = false;
        for(int p : primes) {
            if(i == p) {
                shouldBePrime = true;
                break;
            }
        }
        REQUIRE(info.isPrime() == shouldBePrime);
    }
}

TEST_CASE("Check composite function for Integer") {
    vector<int> primes = {2,3,5,7,11,13,17,19,23,29};
    for(int i = -30; i <= 30; ++i) {
        IntegerInfo info(i);
        bool shouldBeComposite = true;
        for(int p : primes) {
            if(i == p) {
                shouldBeComposite = false;
                break;
            }
        }
        REQUIRE(info.isComposite() == shouldBeComposite);
    }
}

TEST_CASE("Check prime factor list for Integer") {
    IntegerInfo info(4);
    vector<int> factors = {2,2};
    REQUIRE(info.primeFactors() == factors);
    IntegerInfo info1(-6);
    factors = {2,3};
    REQUIRE(info1.primeFactors() == factors);
    IntegerInfo info2(3628800);
    factors = {2,2,2,2,2,2,2,2,3,3,3,3,5,5,7};
    REQUIRE(info2.primeFactors() == factors);
    IntegerInfo info3(5040);
    factors = {2,2,2,2,3,3,5,7};
    REQUIRE(info3.primeFactors() == factors);
    IntegerInfo info4(1000000007);
    factors = {1000000007};
    REQUIRE(info4.primeFactors() == factors);
    IntegerInfo info5(36213619);
    factors = {13,41,67943};
    REQUIRE(info5.primeFactors() == factors);
    IntegerInfo info6(-273612936);
    factors = {2,2,2,3,239,47701};
    REQUIRE(info6.primeFactors() == factors);
    IntegerInfo info7(-221313123);
    factors = {3,3,17,29,31,1609};
    REQUIRE(info7.primeFactors() == factors);
    IntegerInfo info8(0);
    factors = {};
    REQUIRE(info8.primeFactors() == factors);
    IntegerInfo info9(-1);
    factors = {};
    REQUIRE(info9.primeFactors() == factors);
    IntegerInfo info10(1);
    factors = {};
    REQUIRE(info10.primeFactors() == factors);
    IntegerInfo info11(2);
    factors = {2};
    REQUIRE(info11.primeFactors() == factors);
    IntegerInfo info12(25);
    factors = {5,5};
    REQUIRE(info12.primeFactors() == factors);
}

TEST_CASE("Checking number of 1's in bit representatoin of number") {
    IntegerInfo info(4);
    REQUIRE(info.numOneBits() == 1);
    IntegerInfo info1(0);
    REQUIRE(info1.numOneBits() == 0);
    IntegerInfo info2(21318263);
    REQUIRE(info2.numOneBits() == 13);
    IntegerInfo info3(32893715);
    REQUIRE(info3.numOneBits() == 16);
    IntegerInfo info4(1023);
    REQUIRE(info4.numOneBits() == 10);
    IntegerInfo info5((1<<30)-1);
    REQUIRE(info5.numOneBits() == 30);
    IntegerInfo info6(1<<27);
    REQUIRE(info6.numOneBits() == 1);
    IntegerInfo info7(-36216);
    REQUIRE(info7.numOneBits() == 8);
    IntegerInfo info8(-1);
    REQUIRE(info8.numOneBits() == 1);
    IntegerInfo info9(32331399);
    REQUIRE(info9.numOneBits() == 15);
}














