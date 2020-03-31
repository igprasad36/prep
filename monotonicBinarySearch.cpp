#include<bits/stdc++.h>
using namespace std;

int f(int x){
	return x*x - 10*x - 20;
}

int findHigh(){
	int i = 1;
	int res = f(i);
	while(res<=0){
		i = i*2;
		res = f(i);
	}
	return i;
}

int main(){
	int high = findHigh();
	int start = (high/2);
	int mid,midF,midF1;
	while(start<=high){
		mid = (start+high) / 2;

		midF = f(mid);
		midF1 = f(mid-1);
	
		if((midF > 0) && (midF1 <= 0) ){
			cout<<"First integer with positive output is "<<mid<<endl;
			return 0;
		}
		else if((midF > 0) && (midF1 > 0)){
			high = mid - 1;
		}
		else if(midF<=0){
			start = mid + 1;
		}
	}

}