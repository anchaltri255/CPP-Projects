#include<iostream>
#include<iomanip> //Including the header file for formatted I/O

using namespace std;

int main(){
	cout<<"\n\n Formatting the output :\n";
	cout<<"------------------------------\n";
	
	double pi = 3.14159265;
	cout<<fixed <<setprecision(4); //Setting output format to fixed with 4 decimal places
	cout<<"The value od pi :"<<pi<<endl;
	
	cout<<"The value of pi 4 decimal place of total width 8 :|"<< setw(8)<<pi<<"|"<<endl;
	cout<<"The value of pi 4 decimal place of total width 8 :|"<< setw(10)<<pi<<"|"<<endl;
	
	cout<< setfill('-'); //setting the fill character to '-'
	cout<<"The value of pi 4 decimal place of total width 8 :|"<< setw(8)<<pi<<"|"<<endl;
	cout<<"The value of pi 4 decimal place of total width 8 :|"<< setw(10)<<pi<<"|"<<endl;
	
	
}