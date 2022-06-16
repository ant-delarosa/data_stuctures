// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

// You may assume that each input would have exactly one solution, and you may not use the same element twice.

// You can return the answer in any order.

 

// Example 1:

// Input: nums = [2,7,11,15], target = 9
// Output: [0,1]
// Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].


//my solution: brute force

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        
        vector<int> res;
        int i,j;
        
        for (i=0; i<nums.size(); i++){
            
            
            for (j=i+1; j<nums.size(); j++){
                
                if(nums[i]+nums[j]==target){
                    
                    
                    res.push_back(i);
                    res.push_back(j);
                    return res;
                }
                
            }
            
            
        }
       return nums; 
    }
};

//other more efficiend solution
//very PRO
class Solution2 {
public:
  vector<int> twoSum(vector<int> &nums, int target) {
    std::set<int> seen_nums;
    for (std::size_t i = 0; i != nums.size(); i++) {
      int num = nums[i];
      // if (seen_nums.contains(target - num)) {
      if (seen_nums.count(target - num)) {
        auto it = std::find(nums.begin(), nums.end(), target - num);
        assert(it != nums.end());
        return vector{(int)std::distance(nums.begin(), it), (int)i};
      }
      static_cast<void>(seen_nums.insert(num));
    }
    throw std::runtime_error("NOTREACHED");
  }
};

//another one

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++)
        {
            int diff=target-nums[i];
            if(m.find(diff)!=m.end())
            {
                return {m[diff],i};
            }
            m[nums[i]]=i;
        }
        return {};
    }
};
