#include <bits/stdc++.h>

using namespace std;


class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
       // while(nums.size()){
//        
       	// nums.pop_back();
       // }
       	cout << nums.back();
        return result;
    }
};

int main(){
	vector<int> nums;
    string line;
    
    // Read the entire line of input
    getline(cin, line);

    // Use a string stream to split the line into integers
    istringstream ss(line);
    int num;
    while (ss >> num) {
        nums.push_back(num);
    }

  Solution mySol;
  mySol.threeSum(nums);

    return 0;
}