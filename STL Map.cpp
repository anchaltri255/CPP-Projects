#include<iostream>
#include<map>

using namespace std;

int main(){
	
	map<int, string>m;
	
	map[1]="babaer";
	map[13]="kumar";
	map[5]="love";
	
	m.insert({5,"bheem"});
	
	cout<<"before erase"<<endl;
	
	for(auto i:m){
		cout<<i.first<<" "<<i.second<<endl;
	}
	
}