// max value of given arrey


#include<bits/stdc++.h>
using namespace std;
int main(){
    int sum = 0;
    vector<int> arr = {2, 3, 4, 5, 6, 7, 9, 6, 5, 3, 2, 1};
    // int size= arr.size();
    
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > sum)
            
            {
                sum = arr[i];
            }
    }
    cout << "max / peak is " << sum;

    return 0;
}