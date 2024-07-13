#include<bits/stdc++.h>
#include<iostream>


using namespace std;
class Solution {
public:
    string simplifyPath(string path) {
		stack<string> st;
	   	string result;
	   	string temp;
	   	istringstream ss(path);
	   	
	   	while(getline(ss,temp,'/')){
	   		if(temp == "." || temp == "/") continue;
	   		else if(temp == ".."){
	   			if(!st.empty()) st.pop();
	   		}else{
	   			cout << temp << endl;
	   			if(temp.length()){
	   				st.push(temp);
	   			}
	   			
	   			
	   		}
	   	}
	   	
	   	while(!st.empty()){
	   		// cout <<result << endl;
	   		// cout << st.size() << " " << st.top() << endl;
	   		// cout << "/" <<  st.top() << endl;
	   		result =  "/"+ st.top()+result;
	   		st.pop();
	   	}
	   	
	   	result = result.empty() ? "/" : result;
	   	
	cout <<result;
	   	
		return "";  
    }
};


int main(){
	string input;
	getline(cin,input);
	Solution mySolution;
	mySolution.simplifyPath(input);
	return 0;
}