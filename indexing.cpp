#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){
	int start = 0;
	int end = size-1;
	
	int mid = start+(end-start)/2;
	
	while(start<=end){
		if(arr[mid] == key){
			return mid;
		}
		// go to  right wala part
		if(key>arr[mid]){
			start = mid+1;
		}
		else{
			end = mid-1;
		}
		mid = start+(end-start)/2;
	} 
	return -1;
	
}

int main(){
	
	int even[6] = {2,4,6,11,18,19};
	int odd[5] = {2,3,4,5,6};
	
	int evenIndex = binarySearch(even, 6,18);
	
	cout<<" Index of 18 is "<<evenIndex<<endl;
	
	int oddIndex = binarySearch(odd, 5,20)
	
	cout<<" Index of 20 is "<<oddIndex<<endl;
	
	return 0;
}