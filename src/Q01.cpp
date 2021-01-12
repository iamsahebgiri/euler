/* 
    Question 01:
*/

#include <bits/stdc++.h>

using namespace std;

#define deb(x) cout << #x << " " << x << '\n'

int main()
{
    long long n = 1000;

    long long sum = 0;
    for (long long i = 1; i < n; i++)
    {
        if ((i % 3 == 0) || (i % 5 == 0))
        {
            sum += i;
        }
    }

    cout << sum << "\n"; // 233168

    return 0;
}
