#include <bits/stdc++.h>
#include<iostream>
using namespace std;


class Solution {
public:
     vector<int> twoSum(vector<int>& nums, int target) {
        int temp;
        for(int i =0;i<nums.size();i++){
        	temp = target - i;
        	if (find(target - nums[i]) != nums.end()) {
                return {target - nums[i], i};
            }
        }
        return {};
    }
};


int main(){
	 std::vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    Solution mySolution;

    // Call twoSum method with correct initialization of vector
    mySolution.twoSum(nums, target);

    return 0;

}