#include <bits/stdc++.h>
using namespace std;
 
// Function to calculate Bitwise OR of
// sums of all subsequences
void findOR(int nums[], int N)
{
    // Stores the prefix sum of nums[]
    int prefix_sum = 0;
 
    // Stores the bitwise OR of
    // sum of each subsequence
    int result = 0;
 
    // Iterate through array nums[]
    for (int i = 0; i < N; i++) {
 
        // Bits set in nums[i] are
        // also set in result
        result |= nums[i];
        //cout<<result<<""<<endl;
        // Calculate prefix_sum
        prefix_sum &= nums[i];
        //cout<<prefix_sum<<"  ";
        // Bits set in prefix_sum
        // are also set in result
        result |= prefix_sum;
        //cout<<result<<""<<endl;
    }
     cout<<result<<""<<endl;
    // Return the result
   
}
 
// Driver Code
int main()
{
    // Given array arr[]
    int arr[] = { 1,0,3,4 };
 
    int N = sizeof(arr) / sizeof(arr[0]);
 
    // Function Call
    findOR(arr, N);
 
    return 0;
}