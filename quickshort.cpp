
#include<bits/stdc++.h>
using namespace std;

void swap(int array[], int low, int high){
	int temp;
	temp = array[low];
	array[low] = array[high];
	array[high] = temp;
}

int devide(int array[], int low, int high,int pivot){
	int i = low;
	int j = low;
	while(i<=high){
		if(array[i]<=pivot){
			swap(array,i,j);
			i++;
			j++;
		}else{
			i++;
		}
	}
	return j-1;
}

void quickSort(int array[], int low, int high){
	if(low<high){
		int pivot = array[high];
		int position = devide(array,low,high,pivot);
		
		quickSort(array,low,position-1);
		quickSort(array,position+1,high);
	}
}
int main(){
	int n = 6;
	int array[n] = {4,5,2,7,9,6};
	quickSort(array,0,n-1);
	
	for(int i = 0;i<n;i++){
		cout << array[i] << endl;
	}
}
