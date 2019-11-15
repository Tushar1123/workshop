#include<iostream>
using namespace std;
int main()
{

   unsigned long long int n=1000000000000000000000000000000000,i=1,d=10000019,p=0,r=0,q=0,temp=0;
   while(q>n)
   {
       q=d*i;
       p=q;
       while(p>0)
       {
           r=r%10;
           p=p/10;
           temp=temp*10+r;
       }

       i++;
       if(temp==q)
       {
           sum++;
       }

   }
cout<<sum;
}
