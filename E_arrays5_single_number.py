class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        
        myset1=set()
        myset2=set()
        myset3=set()
        
        for item in nums:
            
            if item in myset1:
                myset2.add(item)
            else:
                myset1.add(item)
                
        
        #Difference, myset1 contains the result
        myset3=myset1-myset2
        
        #convert set to list to extract the first item
        return list(myset3)[0]
