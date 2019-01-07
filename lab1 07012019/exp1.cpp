#include<iostream>
using namespace std;
int main()
{
  int a,b[10],i=0,j;
  cout<<"\nEnter decimal number ";
  cin>>a;
  cout<<"\nBinary number of "<<a<<" is ";
  if(a==0 || a==1)
   {
     cout<<a;
     return 0;
   }
  while(a!=0)
   {
     b[i]=a%2;
     a=a/2;
     i++;
   }
   for(j=i-1;j>=0;j--)
    cout<<b[j];
  cout<<"\nProgram ended";
}
