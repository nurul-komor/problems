#include<bits/stdc++.h>
using namespace std;

void insersionSort(int array[],int low, int high){
	for(int i=low+1;i<=high;i++){
		int curr = array[i];
		int prev = i-1;
		while(prev>=low && array[prev] >= curr){
			array[prev+1] = array[prev];
			prev--;
		}
		array[prev+1] = curr;
	}
}

int main(){
	int n = 6;
	int array[n] = {4,5,2,7,9,6};
	insersionSort(array,0,n-1);
	
	for(int i = 0;i<n;i++){
		cout << array[i] << endl;
	}
}
