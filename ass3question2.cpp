#include<iostream>
using namespace std;
class complex
{
 private:
  double real;
  double imag;
  public:
  complex operator*(complex c)
  { 
   double real1,real2;
   real=real1;
   real2=c.real;
   real=(real*c.real)-(imag*c.imag);// (a,b)(c,d)=(ac-bd,ad+bc)
   imag=(real1*c.imag)+(imag*real2);
   complex temp;
   temp.real=real;
   temp.imag=imag;
   return temp;
   }
     void showData()
     { 
     cout<<"("<<real<<","<<imag<<")"<<endl;
        }
        void set()
        {
         cout<<"enter real="<<endl;
         cin>>real;
         cout<<"enter imag="<<endl;
         cin>>imag;
         }};
         int main()
         {
          complex c1,c2;
          c1.set();
          cout<<"enter second complex :"<<endl;
          c2.set();
          c1*c2;
          c1.showData();
          }
        
