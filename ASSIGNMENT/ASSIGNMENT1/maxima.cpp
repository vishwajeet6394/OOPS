
#include<iostream>
using namespace std;

int main()
{
int n,a[50];
cin>>n;
for(int i=0;i<n;i++){
cin>>a[i];
}
for(int i=0;i<n-1;i++){
for(int j=i+1;j<n;j++){
if(a[i]>a[j]){
int temp=a[j];
    a[j]=a[i];
    a[i]=temp;
}
}
}
cout<<""<<a[1]<<" second minimum\n";
cout<<""<<a[n-2]<<" second maximum\n";
     return 0;

}
