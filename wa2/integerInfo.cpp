#include "integerInfo.h"

IntegerInfo::IntegerInfo(int num) : theNumber(num) {}

bool IntegerInfo::isComposite()
{
   if (theNumber < 4) return false;
   return !(isPrime());
}

bool IntegerInfo::isPrime()
{
   if (theNumber <= 1) return false;
   int limit = sqrt(theNumber);

   if (theNumber == 2) return true;

   if (!(theNumber % 2)) return false;

   for (int i = 3 ; i < limit + 1 ; i += 2)
      if (theNumber % i == 0)
         return false;

   return true ; 
}

bool IntegerInfo::isOdd()
{
   return (abs(theNumber % 2) == 1);
}

std::list<int> IntegerInfo::factors()
{
   std::list<int> result;
   int number = theNumber;

   if (number > 1)
   {
      while(number % 2 == 0)
      {
         result.push_back(2);
         number /= 2;
      }

      for (int i = 3 ; i <= sqrt(number) ; i += 2) 
      {
         while (number % i == 0)
         {
            result.push_back(i);
            number /= i;
         }
      }

      if (number > 2) result.push_back(number);
   }

   result.sort();

   return result;
}

bool IntegerInfo::isEven()
{
   return (!isOdd());
}

int IntegerInfo::countOnes()
{
   int count = 0;
   int num = theNumber;

   while (num > 0)
   {
      if (num % 2 == 1) count++;
      num = num >> 1;
   }
   return count;
}

std::string IntegerInfo::convertToBase(int base)
{
   std::stringstream ss;
   std::stack<char> remainders;
// std::string validBase {"0123456789abcdefghijklmnopqrstuvwxyz"};

   if (base < 2 || base > 36)
   {
      ss << "Invalid base for conversion: [" << base << "]";
      throw std::runtime_error(ss.str());
   }
   
   int number = theNumber;

   while (number > 0)
   {
      remainders.push((number % base) + '0');
      number /= base;
   } 
   while (!remainders.empty())
   {
      ss << remainders.top();
      remainders.pop();
   }
   return ss.str();
}
   
