#include <iostream>
#include <vector>

using namespace std;

int maxProfit(vector<int>& prices);

int main() {
    vector<int> pricestest{7,1,5,3,6,4};
    vector<int> pricestest2{1,2,3,4,5};
    vector<int> pricestest3{7,6,4,3,1};


    
    int prof = maxProfit(pricestest3);

    cout<<prof<<endl;

  
    return 0;
}


int maxProfit(vector<int>& prices) {
    
    // bool recent_buy=false;
    // int money_spent=0;
    // int money_earned=0;
    // //int profit=(&money_earned)-(&money_spent);

    
    // for (int i=0; i< prices.size(); i++){
        
    //     //buy
    //     if (prices[i+1]>prices[i] && i!=(prices.size()-1) && !recent_buy){
            
    //         money_spent+=prices[i];
    //         recent_buy=true;
            
    //     }
    //     cout<<"money spent: "<<money_spent<<endl;
    //     //sell
    //     if (prices[i+1]<prices[i] && money_spent>0 && i!=(prices.size()-1)){
            
    //         money_earned+=prices[i];
    //         recent_buy=false;
    //     }
    //     // if (prices[i]>prices[i-1] && money_spent>0 && i==(prices.size()-1)){
    //     //     money_earned+=prices[i];
    //     //     recent_buy=false;
    //     // }

    //     if (i==prices.size()-1){
            
    //         if (prices[i]>prices[i-1]) {
    //         money_earned+=prices[i];
    //         recent_buy=false;
    //         }
    //     } 
    //     cout<<"money earned: "<<money_earned<<endl;

        
    // }
    
    // int profit=money_earned-money_spent;
    // cout<<"prfit: "<<profit<<endl;

    int profit=0;
    
    for(int i=0; i<prices.size()-1; i++){
        
        if (prices[i]<prices[i+1]){

            profit=profit-prices[i]+prices[i+1];
        }
    }

    return profit;
}
