#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> a;
    cout << "capacity is " << a.capacity() << endl;
    cout << "size is " << a.size() << endl;
    // 

    cout << "after pushsing back \n";
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    a.push_back(4);
    a.push_back(7);
    a.push_back(7);
    a.push_back(7);
    a.push_back(7);
    a.push_back(7);
    a.push_back(7);
    a.push_back(7);
    a.push_back(7);
    a.push_back(7);
    a.push_back(7);
    a.push_back(7);
    a.push_back(7);
    a.push_back(7);

    cout << "capacity is " << a.capacity() << endl;
    cout << "size is " << a.size() << endl;
    a.push_back(7);
    return 0;
}