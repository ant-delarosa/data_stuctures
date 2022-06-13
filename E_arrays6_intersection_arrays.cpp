//in progress

class Solution {
public:
        vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
               
        vector<int> nums3;
        
        int i,j;
        
        for (i=0; i<nums1.size();i++){

            for(j=0;j<nums2.size();j++){
                

                if (nums2[j]==nums1[i]){
                    
                    nums3.push_back(nums1[i]);
                    nums2.erase(nums2.begin()+j);
                    break;
                }
                
                
            }

        }
                      
        return nums3;
        
    }
};


//Other efficient runtime solution:
// class Solution {
// public:
//     vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        
//         map<int,int> table;
//         vector<int> ans;
        
//         for(int x:nums1) table[x]++;
//         for(int x:nums2)
//             if(table.count(x) && table[x]>0){
//                 table[x]--;
//                 ans.push_back(x);
//             }
        
//         return ans;
        
        
//     }
// };
