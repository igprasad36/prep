#include<bits/stdc++.h>
using namespace std;


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


	int end = n-1;
	int start = 0;
	int mid;

	while(start<=end){
		mid = (start + end)/2;
		if(arr[mid] == key){
			cout<<"Key found at index " << mid <<"."<<endl;
			break;
		}
		else if(arr[mid] < key){
			start = mid+1;
		}
		else{
			end = mid-1;
		}
	}

	if(start>end){
		cout<<"Key not found"<<endl;
	}

}