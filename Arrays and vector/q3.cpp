// max value of given arrey
//time com[lexity : O(n) 
// space complexity: O(1) // sum is used


#include<bits/stdc++.h>
using namespace std;
int main(){
    
    vector<int> arr0 = {2, 3, 4, 5, 6, 7, 9, 6, 5, 3, 2, 1};
    vector<int> arr = {-5, -4 , -2, -5, -6};
    // int size= arr.size();
    
    int sum = INT_MIN ; // INT-MIN IS NEGATIVE INFINITY
    //OR int sum= arr[i]
    cout<<sum<<"\n";
    
    for (int i = 0; i < arr0.size(); i++)
    {
        // if (arr[i] > sum)
            
        //     {
        //         sum = arr[i];
        //     }
        sum= (arr0[i] > sum) ? arr0[i] : sum;
    }
    cout << "max / peak is " << sum;

    return 0;
}