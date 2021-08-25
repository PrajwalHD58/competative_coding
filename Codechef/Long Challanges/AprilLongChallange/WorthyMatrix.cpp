// C++ programm to count total number
// of k x k sub matrix whose sum is
// greater than the given number S

#include <iostream>

using namespace std;
typedef long long ll;
#define dim 3

// Function to create Prefix sum
// matrix from the given matrix
void createTable(ll**mtrx,
	ll n, ll m, ll**dp)
{
	// Store first value in table
	dp[0][0] = mtrx[0][0];
	
	// Initialize first row of matrix
	for (ll j = 1; j < m; j++) {
		dp[0][j] = mtrx[0][j] +
				dp[0][j - 1];
	}
	
	// Initialize first coloumn of matrix
	for (ll i = 1; i < n; i++) {
		dp[i][0] = mtrx[i][0] +
				dp[i - 1][0];
	}
	
	// Initialize rest table with sum
	for (ll i = 1; i < n; i++) {
		for (ll j = 1; j < m; j++) {
			dp[i][j] = mtrx[i][j] +
			dp[i - 1][j] + dp[i][j - 1] -
						dp[i - 1][j - 1];
		}
	}
}

// Utility Function to count the submatrix
// whose sum is greater than the S
ll countSubMatrixUtil(ll**dp,
						ll k, ll p,ll n,ll m)
{
	ll count = 0;
	ll subMatSum = 0;
	 
	// Loop to iterate over all the
	// possible positions of the
	// given matrix mat[][]
	for (ll i = k - 1; i <n; i++) {
		for (ll j = k - 1; j < m;
								j++) {
			if (i == (k - 1) || j == (k - 1)) {
				
				// Condition to check, if K x K
				// is first sub matrix
				if (i == (k - 1) && j == (k - 1)) {
					subMatSum = dp[i][j];
				}
				// Condition to check sub-matrix
				// has no margin at top
				else if (i == (k - 1)) {
					subMatSum = dp[i][j] - dp[i][j - k];
				}
				// Condition when sub matrix
				// has no margin at left
				else {
					subMatSum = dp[i][j] - dp[i - k][j];
				}
			}
			// Condtion when submatrix has
			// margin at top and left
			else {
				subMatSum = dp[i][j] - dp[i - k][j] -
					dp[i][j - k] + dp[i - k][j - k];
			}
			
			// Increament count, If sub matrix
			// sum is greater than S
			if (subMatSum >= p) {
				count++;
			}
		}
	}
	return count;
}

// Driver Code
int  main()
{
	ll t;
    cin>>t;
    while(t--)
    {
        ll sum=0;
        ll n,m,c;
        cin>>n>>m>>c;
        ll** arr=new ll*[n];
        for(ll i=0;i<n;i++)
        {
            arr[i]=new ll[m];
        }
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<m;j++)
            {
                cin>>arr[i][j];
            }
        }
        
        ll** dp=new ll*[n];
        for(ll i=0;i<n;i++)
        {
            dp[i]=new ll[m];
        }
        
        // For loop to initialize prefix sum
        // matrix with zero, initially
        for (ll i = 0; i < n; i++) {
            for (ll j = 0; j < m; j++) {
                dp[i][j] = 0;
            }
        }
        
        // Function to create the
        // prefix sum matrix
        createTable(arr, n, m, dp);

        for(ll i=1;i<=min(n,m);i++)
        {
            ll k = i;
            ll p = c*i*i;

            // Prlltotal number of sub matrix
            sum+=countSubMatrixUtil(dp, k, p,n,m);
        }
        cout<<sum<<" "<<endl;
    }
	return 0;
}
