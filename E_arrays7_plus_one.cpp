//in progress

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        
        for (int i=(digits.size()-1); i=0; i--){
            cout<<i<<endl;
            if (digits[i]==9){
                
                digits[i]=0;

            }
            else{
                
                digits[i]+=1;
                break;
                    
            }
                
               
            
        }
        
        
        if (digits[0]==0){
            
            //insert item at the beginning of the list
            digits.insert(digits.begin(),1);
            
        }

        return digits;
        
    }
};
