#include<bits/stdc++.h>
using namespace std;

void swap(int array[], int low, int high){
	int temp;
	temp = array[low];
	array[low] = array[high];
	array[high] = temp;
}


void bubbleShort(int array[],int low,int high){
	for(int i= 0;i<=high;i++){
		for(int j= i+1;j<=high;j++){
			if(array[i]>array[j]){
				swap(array,i,j);
			}
		}
	}
}

int main(){
	int n = 6;
	int array[n] = {4,5,2,7,9,6};
	bubbleShort(array,0,n-1);
	
	for(int i = 0;i<n;i++){
		cout << array[i] << endl;
	}
}
