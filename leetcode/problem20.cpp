// Constraints:
// 
// 1 <= s.length <= 104
// s consists of parentheses only '()[]{}'.

#include <bits/stdc++.h>

using namespace std;



// worst practice
class Solution {
public:
    bool isValid(string s) {
      stack<char> st;
       for(auto i : s){
       	if(i=='(' || i== '{' || i == '[') {
       		st.push(i);
       	} //push on stack 
       	else{
       		if(st.empty() or (i==')' &&  st.top() != '(') or (i=='}' &&  st.top() != '{') or (i==']' &&  st.top() != '[')){
       			return false;
       			 	
       		}
       		st.pop();
       	}
       }
      
      return st.empty();
    }
};



int main(){
	string input;
	getline(cin,input);
	Solution mySolution;
	mySolution.isValid(input);
	return 0;
}