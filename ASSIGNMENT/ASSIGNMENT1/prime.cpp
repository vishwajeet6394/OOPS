
#include<iostream>
using namespace std;


int main()
{
int n;
cin>>n;

for(int i=2;i*i<=n;i++){
if(n%i==0){
cout<<"not prime";
n=0;
break;

}
}
if(n){
    cout<<"prime";
  }
    return 0;
}
