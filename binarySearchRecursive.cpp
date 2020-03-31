#include<bits/stdc++.h>
using namespace std;

int binarySearch(int* arr,int start,int end,int key){
	if(start > end){
		return -1;
	}
	else{
		int mid = (start + end) / 2;
		if(arr[mid] == key){
			return mid;
		}
		else if(arr[mid]<key){
			start = mid +1;
		}	
		else{
			end = mid - 1;
		}

		return binarySearch(arr,start,end,key);
	}
}



int main(){
	int n;
	cout<<"Enter array size"<<endl;
	cin>>n;
	int arr[n];
	
	for(int i = 0;i<n;i++){
		cin>>arr[i];
	}

	cout<<"Enter Key item to search"<<endl;
	int key;
	cin>>key;

	int ret = binarySearch(arr,0,n-1,key);
	if(ret == -1){
		cout<<"Key not found"<<endl;
	}
	else{
		cout<<"Key found at index " << ret <<"."<<endl;
	}

}