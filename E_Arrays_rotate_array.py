class Solution:
    def rotate(self, nums: List[int], k: int) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        shift=k%len(nums)
        
        list1=nums[len(nums)-shift:]
        list2=nums[:len(nums)-shift]
        
        
        nums2=list1+list2
        
        for i in range(0, len(nums)):
            nums[i]=nums2[i]

