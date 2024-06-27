#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    for (int i=0 ;i<5;i++ ){
        v.push_back(i);
        cout<<endl;

    }
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
}