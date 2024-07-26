#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    	
		// for(auto x: nums2){  // O(n) time
				// nums1.push_back(x);
// 		
		// }
// 
// 
		// sort(nums1.begin(), nums1.end()); // log(m+n))
// 		
		// cout << nums1.size() << " " ;
		
		
		int i = m -1;
		int j = n -1;
		int k = m+n -1;
		
		while(j>=0){
			if(i>=0 && nums1[i] > nums2[j]){
				
				nums1[k--] = nums1[i--];
			}else{
				
				nums1[k--] = nums2[j--];
			}
		
		}
	
    }
};



int main(){
	 vector<int> nums1 = {1,2,3,0,0,0};
	vector<int> nums2= {2,5,6};
	int m = 3;
	int n = 3;
  	Solution mySolution;
  	mySolution.merge(nums1,m,nums2,n);
  
    return 0; 
}