
// print number form 1 to n .. using recursion
#include <bits/stdc++.h>
using namespace std;
int i = 0;
void num(int n)
{
    if (i >= n)
    {
        return ;
    }
    else
    {
        i++;
        cout << i << endl;
        num(n);
    }
}

int main()
{
    int n;
    cout << " enter n : ";
    cin >> n;
    num(n);
}