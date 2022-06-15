class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        int i;
        
        for (i=0; i<nums.size(); i++){
            
            cout<<nums[0]<<", ";
            
            
            if (nums[i]==0){
                nums.push_back(0);
                nums.erase(nums.begin()+i);
                
                

//                 for (int j=0; j<nums.size(); j++){
                    
//                     cout<<nums[j]<<", ";
                
//                 }
//                 cout<<endl;
            }
            
        
            
        }
        
        
    }
};
