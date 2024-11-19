
//five intiger number accepte users sum and product in array
#include<iostream>
using namespace std;
int main(){
int arr[5];
int sum=0;
int prod=1;
cout<<"Enter five Intiger Nember: ";
for(int i=0;i<5;i++)
{
    cin>>arr[i];
}
for(int i=0;i<5;i++)
{
    sum=sum+arr[i];
    prod=prod*arr[i];
}
cout<<"the sum of five number is: "<<sum<<endl;
cout<<"the product of five number is: "<<prod;
return 0;
}
