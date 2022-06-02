#include <iostream>
#include <vector>

using namespace std;

void rotate(vector<int>& nums, int k);

int main() {
    vector<int> pricestest{1,2,3,4,5,6,7};
    vector<int> pricestest2{-1,-100,3,99};
    vector<int> pricestest3{-1};


    rotate(pricestest2, 2);


    cout<<endl;

  
    return 0;
}


void rotate(vector<int>& nums, int k) {

    int shift;
    int i;
    shift=k%nums.size();
    
    vector<int> vec1(shift);
    vector<int> vec2(nums.size()-shift);
    vector<int> nums2(nums.size());

    //create vec1
    for(i=nums.size()-shift;i<nums.size();i++){
        
        vec1[i-(nums.size()-shift)]=nums[i];
    }
    //create vec2
    for(i=0;i<nums.size()-shift;i++){
    
        vec2[i]=nums[i];
    }
    //concatenate vec1 and vec2 in nums2
    for(i=0;i<vec1.size();i++){
    
        nums2[i]=vec1[i];
    }

    for(i=0;i<vec2.size();i++){
    
        nums2[i+vec1.size()]=vec2[i];
    }


    //assign nums2 to nums
    for(i=0;i<nums.size();i++){
    
        nums[i]=nums2[i];
    }

//print results for testing
//     for(int i=0;i<nums2.size();i++){

//         cout<<nums2[i];
//         cout<<",";
//     }


    
}


//other solution => worse runtime but less memory usage
void rotate2(vector<int>& nums, int k) {

    int shift;
    int i;
    shift=k%nums.size();

    vector<int> vec1(shift);
    vector<int> vec2(nums.size()-shift);
    //vector<int> nums2(nums.size());

    //create vec1
    for(i=nums.size()-shift;i<nums.size();i++){

        vec1[i-(nums.size()-shift)]=nums[i];
    }
    //create vec2
    for(i=0;i<nums.size()-shift;i++){

        vec2[i]=nums[i];
    }
    //concatenate vec1 and vec2 in nums2
    for(i=0;i<vec1.size();i++){

        nums[i]=vec1[i];
    }

    for(i=0;i<vec2.size();i++){

        nums[i+vec1.size()]=vec2[i];
    }
}
