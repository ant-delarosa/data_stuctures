//in progress

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        
        if (digits[digits.size()-1]==9){
            
            digits[digits.size()-1]=1;
            digits.push_back(0);
        }
        
        else {
            
            digits[digits.size()-1]+=1;
        }
        
        
        
        
        return digits;
    }
};
