#include <bits/stdc++.h>
using namespace std;
#define deb(x) cout<<#x<<" "<<x<<'\n'

int main()
{
    long long t = 1;
    int n = 2;
    while(t<10002)
    {
        
        bool flag = false;
        for (int i = 2; i < n; i++)
        {
            if(n%i == 0)
            {
                flag  = true;
                break;
            }
        }
        if(!flag)
        {
            cout<<t<<": "<<n<<endl;
            t++;
        }
        n++;
    }
    
    return 0;
}
