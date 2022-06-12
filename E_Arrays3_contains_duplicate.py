class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        
        
        myset=set()
        
        for item in nums:
            
            
            if item in myset:
                return True
                
            myset.add(item)
            
        
        return False