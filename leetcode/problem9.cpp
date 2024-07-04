#include <bits/stdc++.h>
#include <iostream>
using namespace std;
 
 
class Solution {
public:
    bool isPalindrome(int x) {
    	string inputNumber = to_string(x);
    	string temp;
		if((inputNumber[0] =='+' || inputNumber[0]=='-')){
			return false;
		}
    	for(int i=inputNumber.length()-1;i>=0;i--){
    			temp+=inputNumber[i];
    	}

    	try{
    		
    		if(stoi(temp)==x && temp==inputNumber){
    			return true;
    		}
    		return false;
    		
    	}catch(const std::out_of_range& e){
    		return false;
    	}catch(const std::invalid_argument& e){
    		return false;
    	}
    
    }
};

 
 int main(){
 	int x;
 	cin >> x;
 	Solution mySolution;
 	mySolution.isPalindrome(x);
 	return 0;
 }
 
 
