#include<iostream>

using namespace std;

void printArray(int arr[], int size){
	cout<<"Printing the array"<<endl;
	
	for(int i=0; i<size; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl<<"Printing DONE"<<endl;
}

int main(){
	int number[15] = {2,7};
	
	int n=15;
	
//	printArray(number,15);
	
	int fifth[10]= {1};
	n=10;
	//printArray(fifth, 10);
	
	int fifthSize = sizeof(fifth)/sizeof(int);
	//cout<<" Size of fifth is "<<fifthSize<<endl;
	
	char ch[5] = {'a','b','c','d','e'};
	cout<<ch[3] <<endl;
	
	cout<<" Printing the array"<<endl;
	//print the array
	
	for(int i=0; i<5; i++){
		cout<<ch[i]<<" ";
	}
	cout<<"printing done"<<endl;
	
	double firstDouble[5];
	float firstFloat[6];
	bool firstBool[9];
	
	
	
	
	return 0;
}