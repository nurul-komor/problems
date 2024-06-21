#include <bits/stdc++.h>
using namespace std;


void swap(int &first,int &second){
	int temp = first;
	first = second;
	second = temp;
}
int main(){
	int a,b;
	cin >> a >> b;
	
	swap(a,b);
	
	cout << a << " " << b << endl;
	
}