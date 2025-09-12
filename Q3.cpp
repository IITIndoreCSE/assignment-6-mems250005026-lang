//Write a program that asks the user for an integer number and finds the sum of all natural numbers upto that number 
#include <iostream>
using namespace std;
int main()
{
  
    int n;
    cout<<"emter the value of n: ";
    cin>>n;
    int sum = 0;
    for(n;n>0;n--)
    {
        sum += n;
    }
    cout<<"sum: "<<sum<<endl;
   
  
  
}
