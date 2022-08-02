// We have given an array with some negative values we have to find the maximum sum of the array by filpping the sign of the subarray 



#include <bits/stdc++.h>
using namespace std;
// Function to find the maximum sum
// after flipping a subarray
int maxSumFlip(int a[], int n)
{
 
    // Stores the total sum of array
    int total_sum = 0;
    for (int i = 0; i < n; i++)
        total_sum += a[i];
 
      // Kadane's algorithm to find the minimum subarray sum
    int b=0,temp=2e9;
    for (int i = 0; i < n; i++)
    {
          b+=a[i];
          if(temp>b)
          temp=b;
          if(b>0)
          b=0;
    }
 
    // Return the max_sum
    return max(total_sum,total_sum-2*temp);
}
 
// Driver Code
int main()
{
    int arr[] = { -2, 3, -1, -4, -2 };
    int N = sizeof(arr) / sizeof(int);
 
    cout << maxSumFlip(arr, N);
}