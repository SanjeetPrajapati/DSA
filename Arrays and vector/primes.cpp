#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int countPrimes(int n)
    {
        int count = 0;
        for (int i = 2; i < n; i++)
        {
            for (int j = 2; j <= i; j++)
            {
                int mod = i % j;

                if (mod == 0)
                {
                    
                }
                cout<<mod;
                count++;
            }

           
        }
        return count;
    }
};

int main()
{
    Solution sol;
    int result = sol.countPrimes(14); // You can test with any number
    cout << "\nCount of primes: " << result << endl;
    return 0;
}