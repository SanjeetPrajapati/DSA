// max profit of share price of daily base :
//ex : prices = {5, 2, 6, 9, 8, 11} so if person buy share at i[1]=2 and sell on i[5]=11;
// than he will have max profit , ie ; 11-2 = 9 profit


#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v={5, 2, 6, 9, 8, 11};
    int min_price= INT_MAX;
    int max_profit= 0; // assuming zero to comapre with first profit
    for (int i = 0; i < v.size(); i++)
    {
        min_price=min(min_price,v[i]);// gives minimum price to stat with
        int current_profit=v[i]-min_price; // check the current profit to update in max profit
        max_profit=max(max_profit,current_profit); // most prorfit
    }
    
    cout<<max_profit;
    return 0;
}