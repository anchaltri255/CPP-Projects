#include<iostream>

using namespace std;

int main(){
	int ch ='1';
	
	cout<<endl;
	switch(ch){
		case '1': cout<<"first"<<endl;
		break;
		
		case '2': cout<<"second"<<endl;
		break;
		
		default: cout<<"It is default case"<<endl;
	}
	
	cout<<endl;
	
	return 0;
}