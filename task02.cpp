#include<iostream>
using namespace std;
main()
{
 string name;
 int marks;
 cout << "Enter your name: ";
 cin >> name;
 cout << "Enter your marks: ";
 cin >> marks;
 if(name == "ali")
 {
  cout << "Welcome Ali"<<endl;
 }
 if(marks > 50)
 {
  cout << "You have passed";
 }
 
 if(marks < 50)
 {
  cout << "You are fail";
 } 
 
 if(marks == 50)
 {
  cout << "Need improvement";
 }  

}