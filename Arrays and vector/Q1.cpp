// sumof 2 numb in a vector
// sum of 2 number :10

#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {2, 4, 3, 7, 1, 11};
    sort(v.begin(), v.end());
    cout << "after sorting \n";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i];
    }
    int start = 0, end = v.size() - 1, target = 10; // v[] starts from zero
    bool outpt = false;
    while (start < end)
    {
        int sum = v[start] + v[end];
        if (target == sum)
        {
            cout << "\n yes \n";
            cout << "numb are " << v[start] << " and " << v[end] << endl;
            // outpt=true;
            break;
        }
        else if (sum < target)
        {
            start++;
        }
        else if (sum > target)
        {
            end--;
        }
        else
        {

            cout << " number is not in the vector";
        }
    }

    return 0;
}