
#include<iostream>
using namespace std;
int n,i,s;
int main()
{ cout<<"N=";cin>>n;
   for(i=2;i<=n/2;i++)
    if(n%i==0)
    s=s+1;
   if(n>=s)
    cout<<"nr este supraaglomerat";
   else
    cout<<"nr nu e supraaglomerat";
   return 0; }
