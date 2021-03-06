#include <iostream>
#include <vector>
#include <set>

using namespace std;

bool containsDuplicate(vector<int>& nums);

int main() {
    vector<int> pricestest{2,14,18,22,22};
    vector<int> pricestest2{-1,-100,3,99};
    vector<int> pricestest3{-1};


    bool result=false;
    
    result=containsDuplicate(pricestest);

    cout<<result<<endl;

  
    return 0;
}


bool containsDuplicate(vector<int>& nums) {
        
    int i;
    
    //we have to use a set
    set<int> myset;
    
    for(i=0; i<nums.size();i++){
        
        //check if new element is present in the set
        // First way: const bool is_in = myset.find(nums[i]) != myset.end();
        
        //First way: if (is_in){
        
        //Second way (easier)
        if (myset.count(nums[i])){

            return true;
            }
        
        myset.insert(nums[i]);


    }

    return false;
}


//function OK but exceedes time limit
bool containsDuplicate2(vector<int>& nums) {
    
    int i,j;
    
    for(i=0; i<nums.size();i++){

        for(j=0; j<nums.size();j++){
            
            if (j!=i && nums[j]==nums[i]){
                  
                return true;
                }
        }

        
        
    }
    
    return false;
}
