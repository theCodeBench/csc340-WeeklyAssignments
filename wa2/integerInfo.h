/**************************************************************************//**
 * @file integerInfo.h
 *****************************************************************************/
#include <iostream>
#include <cmath>
#include <list>
#include <algorithm>
#include <sstream>
#include <stack>

/**************************************************************************//**
 * @class IntegerInfo
 *****************************************************************************/
class IntegerInfo
{
   int theNumber;
public:
   IntegerInfo(int i = 0);

   bool isComposite();
   bool isPrime();
   bool isOdd();
   std::list<int> factors();
   bool isEven();
   int countOnes();
   std::string convertToBase(int);
};
