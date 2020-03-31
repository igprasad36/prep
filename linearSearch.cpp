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


	for(int i=0;i<n;i++){
		if(arr[i] == key){
			cout<<"Key found at index "<<i<<"."<<endl;
			return 0;
		}
	}

	cout<<"Key not found."<<endl;

}