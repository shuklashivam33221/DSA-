#include<bits/stdc++.h> 
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        int hash[10001]={0};
        int digits = 0;
        for (int i = 0; i<n; i++)
        {
            cin>>arr[i];
            hash[arr[i]]++;
        }
        if(hash[0]>=3 and hash[1]>=1 and hash[3]>=1 and hash[5]>=1 and hash[2]>=2) 
        {
            digits = hash[0]+hash[1]+hash[2]+hash[3]+hash[5];
            cout<<digits;
        }
        else cout<<0;
    }
}