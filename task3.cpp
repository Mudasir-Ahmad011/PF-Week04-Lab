#include<iostream>
using namespace std;
void isEligible(int age);
main()
{
 int age;
 while(true)
 {
  cout << "Enter age: ";
  cin >> age;
  isEligible(age);
  cout << endl;
 }
}
void isEligible(int age)
{
 if (age >= 18)
  {
   cout << "You are Eligible to vote";
  }
 if(age < 18)
  {
   cout << "You are not Eligible to vote";
  }
}

