#include<iostream>

using namespace std;

int main(){
	int n;
	cin>>n;
	int row=1;
	int count = 1;
	while(row<=n){
		
		int col=0;
		while(col<=row-1){
			cout<<count<<" ";
			count=count+1;
			col=col+1;
		}
		//col=0;
		row=row+1;
		cout<<endl;
	}
}