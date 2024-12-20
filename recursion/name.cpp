// prining name n times by recursion
#include <bits/stdc++.h>
using namespace std;
int i = 0;
void name(int n)
{
    if (i >= n)
        return ;
    
    else 
        cout<< "sanjeet" << endl;
        i++;
        name(n);
}
int main()
{
    int n;
    cout << "enter num : ";
    cin >> n;
    name(n);
}