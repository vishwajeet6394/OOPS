

#include<iostream>
#include<string>
using namespace std;


int main()
{
int f=1;
char s[50];
cin>>s;

for(int i=0;i<strlen(s)/2;i++){
if(s[i]!=s[strlen(s)-i-1]){
cout<<"not";
 f=0;
break;
}
}

if(f){
    cout<<"palindrome";
  }
    return 0;
}
