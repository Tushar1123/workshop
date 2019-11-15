#include<iostream>
using namespace std;
int main()
{
    int n=0,sun=0;
    string a[7]={"MONDAY","TUESDAY","WENESDAY","THURSDAY","FRIDAY","SATURDAY","SUNDAY"};

    cout<<"ENTER YEAR";
    cin>>n;
    int temp=0;
    for(int i=1901;i<=n;i++)
    {

      if((i-1)%4==0 || (i-1)%400==0)
      {
            if((i-1)%4==0 && (i-1)%100!=0)
           {
               temp=temp+2;
           }
           else
            {

                 if((i-1)%400==0)
                {
               temp=temp+2;
                }
                else
                {
                temp=temp+1;
                }
            }

      }
     else
     {
        temp=temp+1;
     }
        if(temp>6)
        {
            temp=temp-7;
        }
       cout<<i<<"="<<a[temp]<<endl;
       if(a[temp]=="SUNDAY")
       {
           sun++;
       }

    }
    temp=(temp%7);
   // cout<<"1 jan "<<n<<"="<<a[temp]<<endl;
    cout<<"sun="<<sun<<endl;

}
