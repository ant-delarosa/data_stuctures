# Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

# You may assume that each input would have exactly one solution, and you may not use the same element twice.

# You can return the answer in any order.

# Example 1:

# Input: nums = [2,7,11,15], target = 9
# Output: [0,1]
# Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].


# My first solution, brute force, valid but time limit exceeded
class Solution2:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        
        res=[]
        
        for i in range(0, len(nums)):
            
            for j in range(0, len(nums)):
                
                if nums[i]+nums[j]==target and i!=j:
                    
                    res.append(i)
                    res.append(j)
                    
            if len(res)==2:
                
                break
                    
                    
                     
    
        
        return res
      
      
      
