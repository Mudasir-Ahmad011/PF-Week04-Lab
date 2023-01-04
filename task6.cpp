#include<iostream>
using namespace std;
void calculateBill(string day,int amount);
main()
{
 string day;
 int total_purchase;
 while(true)
 {
  cout << "Enter day: ";
  cin >> day;
  cout << "Enter total amount: ";
  cin >> total_purchase;
  calculateBill(day,total_purchase);
  cout << endl; 
 }
}
void calculateBill(string day,int amount)
{
 int after_discount,discount;
 if(day == "sunday")
  {
   discount = (amount * 10)/100;
   after_discount = amount - discount;
   cout << "Total amount is: "<<after_discount;
  }
 if(day == "monday")
  {
   discount = (amount * 5)/100;
   after_discount = amount - discount;
   cout << "Total amount is: "<<after_discount;
  }
 if(day == "tuesday")
  {
   discount = (amount * 5)/100;
   after_discount = amount - discount;
   cout << "Total amount is: "<<after_discount;
  }
 if(day == "wednesday")
  {
   discount = (amount * 5)/100;
   after_discount = amount - discount;
   cout << "Total amount is: "<<after_discount;
  }
  if(day == "thursday")
  {
   discount = (amount * 5)/100;
   after_discount = amount - discount;
   cout << "Total amount is: "<<after_discount;
  }
 if(day == "friday")
  {
   discount = (amount * 5)/100;
   after_discount = amount - discount;
   cout << "Total amount is: "<<after_discount;
  }
 if(day == "saturday")
  {
   discount = (amount * 5)/100;
   after_discount = amount - discount;
   cout << "Total amount is: "<<after_discount;
  }
}

