#include<bits/stdc++.h>
using namespace std;


/*
1) optimal size of block is sqrt(n)
2) Time complexity if sqrt(n)
*/

int main(){
	int n;
	cout<<"Enter array size"<<endl;
	cin>>n;
	int arr[n];
	
	for(int i = 0;i<n;i++){
		arr[i] = i+1;
		// cin>>arr[i];
	}

	cout<<"Enter Key item to search"<<endl;
	int key;
	cin>>key;

	int step = sqrt(n);
	int prev = 0;

	for(int i=step-1;arr[i]<key;i = min(i+step,n-1)){

		prev = prev + step;
		if((prev) >= n){
			cout<<"Key not Found."<<endl;
			return 0;
		}
	}

	int j = prev;
	while(arr[j] < key){
		j++;
	}

	if(arr[j]==key){
		cout<<"Key found at index "<<j<<"."<<endl;
			return 0;
	}
	cout<<"Key not Found."<<endl;



	
}