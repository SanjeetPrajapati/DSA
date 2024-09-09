//  Lragest of an arrey
// i have assignd  verible a[0]
// time complexity : 0(N)

#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> a={2,3,4,5,6,7,8,9,5,4,2,6};
    int highest=a[0];
    for(int i=0; i<a.size();i++){
        highest=(highest<a[i])? a[i]: highest;
    }
    cout<<highest;

// cout<<"a -1 " <<a[-1];
    return 0;
}