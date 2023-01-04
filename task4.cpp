#include<iostream>
using namespace std;
void Checker(int number);
main()
{
 int num;
 cout << "Enter Number: ";
 cin >> num;
 Checker(num);
}
void Checker(int number)
{
 if(number%2==0)
  {
   cout << "Entered Number is even";
  }
 if(number%2!=0)
  {
   cout << "Entered Number is odd";
  }
}

