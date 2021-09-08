#include<bits/stdc++.h>
using namespace std;

void findMiddleIndex(vector<int>& nums) {
        int n=nums.size();
        vector<int> v1(n+2);
        vector<int> v2(n+2);
        v1[0]=0;
        v1[n+1]=0;
        v2[0]=0;
        v2[n+1]=0;
        for(int i=0;i<n;i++)
        {
           v1[i+1]=nums[i]+v1[i];
           cout<<v1[i+1]<<" ";
        }
        for(int i=n-1;i>=0;i--)
        {
           v2[i+1]=nums[i]+v2[i+2];
           cout<<v2[i+1]<<" ";
        }
        for(int i=0;i<n;i++)
        {
            
            if(v1[i]==v2[i+2])
                cout<< i<<" ";
        }

    }

int main()
{
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int inp;
        cin>>inp;
        v.push_back(inp);
    }
    findMiddleIndex(v);
    return 0;
}