#include<bits/stdc++.h>
using namespace std;


int linearSearch(int* arr,int key,int pos,int n){

	if(arr[pos] == key){
		return pos;
	}

	else{
		pos = pos + 1;
		if(pos<n)
			return linearSearch(arr,key,pos,n);
		else
			return -1;
	}

}


int main(){
	int n;
	cout<<"Enter array size."<<endl;
	cin>>n;
	int arr[n];
	
	for(int i = 0;i<n;i++){
		cin>>arr[i];
	}

	cout<<"Enter Key item to search."<<endl;
	int key;
	cin>>key;

	int res = linearSearch(arr,key,0,n);
	if(res==-1){
		cout<<"Key not found."<<endl;
	}
	else{
		cout<<"Key found at index "<<res<<"."<<endl;
	}

}