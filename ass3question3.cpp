#include<iostream>
using namespace std;
class complex
{
  public:
 double real;
 double imaginary;
  friend bool operator==(const complex & lhs,const complex & rhs); 
  friend bool operator!=(const complex & lhs,const complex & rhs);
  bool operator==(const  complex & rhs)
  {
  if(real==rhs.real && imaginary==rhs.imaginary)
  {
     cout<<"you have entered equal complex number";
     return true;
     }
     else
      return false;
       }
       bool operator!=(const complex & rhs)
       { 
       if (real!=rhs.real || imaginary!=rhs.imaginary)
       { 
          cout<<" entered complex number not equal operator";
          return true;
          }
          return false;
             }
          };

              int main()
              {
              complex c1,c2;
              cout<<"enter  First the real and imaginary number\n";
              cin>>c1.real>>c1.imaginary;
              cout<<"enter  second the real and imaginary number\n";
               cin>>c2.real>>c2.imaginary;
              c1!=c2;
              c1==c2;
              }
