// Missing and Repeating in an array
// not completed
#include <bits/stdc++.h>
using namespace std;
int main(){

    vector<int> a={7, 3, 4, 5, 5, 6, 2};
    sort(a.begin(), a.end());
    // int max= *max_element(a.begin(), a.end());
    // int min= *min_element(a.begin(), a.end());
    sort(a.begin(), a.end());

// repeating number
    for (int i = 0; i < a.size() ;i++)
    {
        if (a[i]==a[i+1])
        {
           cout<< "repeating is " << a[i];
          
        }      
    }

    //  Missing number 
    for (int j = a[0]; j < a.size(); j++)
    {
        if (j==a[j])
        {
            
          continue;;
        }
        else
        cout<< j;
        
       
    }
    
    




    return 0;
}