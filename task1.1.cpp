#include<iostream>
using namespace std;
void add(int number1,int number2);
void subtract(int number1,int number2);
void mul(int number1,int number2);
void division(float number1,float number2);
main()
{
 float num1,num2;
 char operation;
 while(true)
  {
   cout << "Enter first number: ";
   cin >> num1;
   cout << "Enter second number: ";
   cin >> num2;
   cout << "Enter operator(+,-,/,*): ";
   cin >> operation;

   if(operation == '+')
   {
   add(num1,num2);
   cout<<endl;
   }
   if(operation == '-')
   {
   subtract(num1,num2);
   cout<<endl;
   }
   if(operation == '*')
   {
   mul(num1,num2);
   cout<<endl;
   }
   if(operation == '/')
   {
   division(num1,num2);
   cout<<endl;
   }
 
   }


}
void add(int number1,int number2)
{
 int sum;
 sum = number1 + number2;
 cout << "sum is: "<< sum;
}
void mul(int number1,int number2)
{
 int product;
 product = number1 * number2;
 cout << "product is: "<< product;
}
void subtract(int number1,int number2)
{
 int subtract;
 subtract = number1 - number2;
 cout << "subtraction of two number is:  "<<subtract;
}
void division(float number1,float number2)
{
 float divide;
 divide = number1/number2; 
 cout << "division is: "<<divide;
}