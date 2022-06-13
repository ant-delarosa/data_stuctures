// Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.
// You must implement a solution with a linear runtime complexity and use only constant extra space.
// Each element in the array appears twice except for one element which appears only once.

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        set<int> myset1;
        set<int> myset2;
        set<int> myset3;
        
        
        for (auto item : nums)
            
            if (myset1.count(item)){
                
                myset2.insert(item);
                    
                }
            else{
                
                myset1.insert(item);
            }
        
        
        //to extract the difference between the two sets in a new vector
        vector<int> diff;
  
        set_difference(myset1.begin(), myset1.end(), myset2.begin(), myset2.end(),
                        inserter(diff, diff.begin()));
            
            

        return diff[0];
    }
};


//More efficient solution, less runtime, using XOR operator ^, 1^1=0 1^0=1
class Solution2 {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        for(auto x:nums )
        {
            ans^=x;
            
        }
        return ans;
    }
};
