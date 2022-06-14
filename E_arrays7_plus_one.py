# You are given a large integer represented as an integer array digits, where each digits[i] is the ith digit of the integer. 
# The digits are ordered from most significant to least significant in left-to-right order. The large integer does not contain any leading 0's.

# Increment the large integer by one and return the resulting array of digits.

class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        
        
        for i in reversed(range(0, len(digits))):
            
            if digits[i]==9:
                
                digits[i]=0
                    
            else:
                
                digits[i]+=1
                break
        
        if digits[0]==0:
            #insert item at the beginning of the list
            digits.insert(0,1)
            
                
        return digits
      
      
      
# Other solution: with list comprehension:
      
# class Solution:
#     def plusOne(self, digits: List[int]) -> List[int]:
        
        
#         num = int("".join(str(e) for e in digits))
#         num2 = num + 1
#         res = [int(i) for i in str(num2)]
#         return res

