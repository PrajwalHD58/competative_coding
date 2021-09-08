#include<bits/stdc++.h>
using namespace std;

int main()
{
   

    vector<int> v;
    v.push_back(1);
    v.push_back(7);
    v.push_back(3);
    v.push_back(4);
    v.push_back(-7);
    int n=5;
    //o(nlog(n))
    //sorting 
    //array 
    //(arr,arr+n);
    //vector
    //sort(v.begin(),v.end());

    // for(int I=0;I<n;I++)
    // {
    //     cout<<arr[I]<<" ";
    // }
    // cout<<endl;
    // for(int I=0;I<v.size();I++)
    // {
    //     cout<<v[I]<<" ";
    // }
    // cout<<"\n";
    //reverse
    // reverse(arr,arr+n);
    // reverse(v.begin(),v.end());
    //  for(int I=0;I<n;I++)
    // {
    //     cout<<arr[I]<<" ";
    // }
    // cout<<endl;
    // for(int I=0;I<v.size();I++)
    // {
    //     cout<<v[I]<<" ";
    // }

    // random_shuffle(arr,arr+n);
    // random_shuffle(v.begin(),v.end());
    // for(int I=0;I<n;I++)
    // {
    //     cout<<arr[I]<<" ";
    // }
    // cout<<endl;
    // for(int I=0;I<v.size();I++)
    // {
    //     cout<<v[I]<<" ";
    // }

    //binary search
    //array,vector sort needed
    // sort(arr,arr+n);
    // if(binary_search(arr,arr+n,2))
    // {
    //     cout<<"Yes\n";
    // }
    // else
    // {
    //      cout<<"No\n";
    // }
    // sort(v.begin(),v.end());
    // if(binary_search(v.begin(),v.end(),4))
    // {
    //     cout<<"Yes\n";
    // }
    // else
    // {
    //     cout<<"No\n";
    // }
    
    //log(n)
    //lower_bound-returns a pointer to the first element of array whose value is atleast x;
    // sort(arr,arr+n);
    // for(int i=0;i<n;i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
    // auto index=lower_bound(arr,arr+n,2)-arr;
    // cout<<index<<" \n";
    // //element index
    // if(arr[index]==2 && index<5)
    // {
    //     cout<<"YES \n";
    // }
    // else
    // {
    //     cout<<"NO \n";
    // }

    //upper_bound=returns a pointer to first element of arrray whose value is larger than x;
    int arr[5]={1,3,4,-2,5};
    sort(arr,arr+n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<"\n";
    int index1=upper_bound(arr,arr+n,5)-arr;
    int index2=upper_bound(arr,arr+n,-10)-arr;
    int index3=upper_bound(arr,arr+n,3)-arr;

    cout<<"index1-->"<<index1<<" \n";
    cout<<"index2-->"<<index2<<" \n";
    cout<<"index3-->"<<index3<<" \n";

    return 0;
}