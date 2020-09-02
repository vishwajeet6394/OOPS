#include<iostream>
#include<cstring>
#include<string.h>
using namespace std;
void stringReverse(string str,int start,int end)
{
	cout<<str[end]<<" ";
	
	if(start==end)
	{
		return;
	}
	
	return stringReverse(str,start,end-1);
}
int main()
{
    string str;
    cout<<"Enter String:";
    getline(cin,str);
    int c= str.length();
    
	cout<<"The Reverse String is: ";
    stringReverse(str,0,c);
}
