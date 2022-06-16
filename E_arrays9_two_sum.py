# Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

# You may assume that each input would have exactly one solution, and you may not use the same element twice.

# You can return the answer in any order.

# Example 1:

# Input: nums = [2,7,11,15], target = 9
# Output: [0,1]
# Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

# My second solution, brute force but a bit tweaked
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        
        res=[]
        
        for i in range(0, len(nums)):
            
            #dont start by 0, start by i because previous casa are already checked
            for j in range(i, len(nums)):
                
                if nums[i]+nums[j]==target and i!=j:
                    
                    #you can return directly the items in a list
                    return [i, j]
                     
        return res

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
      
   
# Very efficient solution, complexity les than 0(n^2)
   class Solution3:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        # In this problem, you initialize a dictionary (seen). 
        # This dictionary will keep track of numbers (as key) and indices (as value). 
        # when going through the array, you calculate the remaining and check 
        # to see whether remaining is in the seen dictionary (line #3). 
        # If it is, you're done! you're current number 
        # and the remaining from seen would give you the output (line #4). 
        # Otherwise, you add your current number to the dictionary (line #5) 
        # since it's going to be a remaining for (probably) 
        # a number you'll see in the future assuming that there is at least one instance of answer.
        # T: O(n), S: O(n) for dict extra space
        seen = dict()
        for i, value in enumerate(nums): #1
            remaining = target - nums[i] #2

            if remaining in seen: #3
                return [i, seen[remaining]]  #4   
