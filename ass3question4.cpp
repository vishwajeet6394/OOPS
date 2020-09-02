#include<iostream>
#include<cmath>
using namespace std;
inline double sphereVolume(double radius)
{
    return(( 4.0/3.0)*3.14159*pow(radius,3));
}
   int main()
   { 
        double rad;
        cout<<"Please unput the radius of the shphere:";
        cin>>rad;
        cout<< "THe volume of the sphere is"<<sphereVolume(rad)<<endl;
        return 0;
        }
