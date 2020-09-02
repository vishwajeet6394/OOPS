#include<iostream>
using namespace std;
float calculateCharges(float customer_time);
int main()
{
  int num;
 cout<< "enter the num of customers";
 cin>>num;
 float customerfees[num];
   float customertimes[num];
   int i; 
   float a,b;
   for(i=0;i<num;i++)
    {
      cout<<"enter the time of parking "<<i+1<<"cumstomer:";
      cin>>customertimes[i];
      a=a+customertimes[i];
      customerfees[i]=calculateCharges(customertimes[i]);
      }
      for(i=0;i<num;i++)
      {
        cout<<"customer fee for="<<customertimes[i]<<endl;
        b=b+customerfees[i];
        }
         cout<<"\ntotal hour="<<a<<endl;
         cout<<"\ntotal chareges="<<b<<endl;
         return 0;
         }
         float calculateCharges(float customertimes)
         {
           float amt=2+(0.5*((int)customertimes-3));
           if(amt>10)
           return 10;
           else
            return amt;
            }
           
      
