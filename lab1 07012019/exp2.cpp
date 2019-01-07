#include<iostream>
using namespace std;
int main()
{
  int a,b[],i=0,j,d=0;
  cout<<"\nEnter binary number ";
  cin>>a;
  cout<<"\nDecimal number of "<<a<<" is ";
  while(a!=0)
   {
     b[i]=a%10;
     a=a/10;
     i++;
   }
  j=i;
   for(i=0;i<j;i++)
    d=d+(pow(b[i],i));
  cout<<d;
}
