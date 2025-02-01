#include<iostream>

using namespace std;

int main(){
	cout<<"\n\n Check overflow/underflow during various arithmetic operation :\n";
	
	int n1=2147483647;
	cout<<"Overflow the integer range and set in minimum range :"<<n1 + 1<<endl;
	cout<<"Increasing from its minimum range :"<<n1+2<<endl;
	cout<<"Product is :"<<n1 * n1<< endl;
	
}