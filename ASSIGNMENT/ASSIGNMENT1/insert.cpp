

#include<iostream>
using namespace std;

int main()
{
int n,a[50];
cin>>n;
for(int i=0;i<n;i++){
cin>>a[i];
}
for(int i=1;i<n;i++){
int value=a[i];
int   k=i;
while(k>0&&a[k-1]>value){
a[k]=a[k-1];
k=k-1;
}
a[k]=value;
}
for(int i=0;i<n;i++){
cout<<a[i]<<' ';}
     return 0;

}
