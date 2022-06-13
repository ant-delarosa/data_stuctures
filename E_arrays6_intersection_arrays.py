# Given two integer arrays nums1 and nums2, return an array of their intersection. 
# Each element in the result must appear as many times as it shows in both arrays and you may return the result in any order.


#More efficient, using break
class Solution:
    def intersect(self, nums1: List[int], nums2: List[int]) -> List[int]:
           
        nums3=[]
        
        for item in nums1:

            for item2 in nums2:

                if item2==item:
                    
                    nums3.append(item)
                    nums2.remove(item2)
                    #we exit from the second for to avoid comparing item again
                    break
               
        return nums3



#Less efficient
class Solution2:
    def intersect(self, nums1: List[int], nums2: List[int]) -> List[int]:
        
        
        nums3=[]
        repeat_found=False
        
        for item in nums1:

            for item2 in nums2:

                if (item2==item and repeat_found==False):

                    repeat_found=True
                    nums3.append(item)
                    nums2.remove(item2)
            
            repeat_found=False

            
        return nums3
