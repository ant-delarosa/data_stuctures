//in progress

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        
        
        vector<int> nums3;
        
//         for (auto item : nums1)

//             for (auto item2 : nums2)

//                 if (item2==item){
                    
//                     nums3.push_back(item);
//                     nums2.pop(item2);
//                     break
                    
                    
//                 }
        
        int i,j;
        
        for (i=0; i<nums1.size();i++){

            for(j=0;j<nums2.size();j++){
                

                if (nums2[j]==nums1[i]){
                    
                    nums3.push_back(nums1[i]);
                    nums2.erase(nums2.begin(), nums2.begin()+j);
                    break;
                }
                
                
            }

        }
                    

            
          
        return nums3;
        
    }
};
