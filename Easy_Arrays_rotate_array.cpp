#include <iostream>
#include <vector>

using namespace std;

void rotate(vector<int>& nums, int k);

int main(){

    vector<int> test1{1,2,3,4,5,6,7};

    rotate(test1, 3);

    for (int i=0;i<test1.size();i++){
        cout<<test1[i]<<", ";
    }


    
    return 0;
}

void rotate(vector<int>& nums, int k) {
    
}
