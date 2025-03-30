#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n) {
    if (n < 2) return false;
    if (n == 2 or n == 3) return true;
    if (n % 2 == 0 or n % 3 == 0) return false;
    for (int i = 5; i*i <= n; i += 6) {
        if (n % i == 0 or n % (i + 2) == 0) return false;
    }
    return true;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int cnt = 0;
        for (int i = 1; i<n; i++)
        {
            for (int j = i+1; j<=n; j++)
            {
                int hcf = __gcd(i,j);
                int lcm = ((i*j)/hcf);
                if (isPrime(lcm/hcf) == 1)
                cnt++;
            }
        }
        cout<<cnt;
    }
}
