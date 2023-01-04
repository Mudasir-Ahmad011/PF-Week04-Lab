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
 if(day != "sunday")
  {
   cout << "Total amount is: "<<amount;
  }
}

