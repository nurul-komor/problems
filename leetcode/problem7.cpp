#include<bits/stdc++.h>
#include<iostream>


using namespace std;

class Solution {
public:
    int reverse(int x) {
    	string inputString = to_string(x);
    	string temp;
    	int final;
    	for(int i = inputString.length()-1;i>=0;i--){
    			if(i==0 && inputString[i] == '+' || inputString[i] == '-'){
    				if(inputString[i] == '-'){
    					temp = inputString[0] + temp;
    				}
    			}else{
    				temp+= inputString[i];
    			}
    	}
    try {
            final = stoi(temp);
        } catch(const std::out_of_range& e) {
            return 0; // Handle integer overflow
        } catch(const std::invalid_argument& e) {
            return 0; // Handle invalid input
        }
    
    	cout << (final);
    	
	
    	return final;
    }
};


int main(){
	int input;
	// cout << "Type a integer:" <<endl;
	cin >>input;
	Solution mySolution;
	mySolution.reverse(input);
}
// 
// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Reverse Integer.
// Memory Usage: 8.3 MB, less than 5.98% of C++ online submissions for Reverse Integer.