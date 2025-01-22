using namespace std;
#include <bits/stdc++.h>

// Required headers for ordered_set
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

// Typedef for the ordered_set
typedef __gnu_pbds::tree<int, __gnu_pbds::null_type, std::less<int>, 
                         __gnu_pbds::rb_tree_tag, 
                         __gnu_pbds::tree_order_statistics_node_update> ordered_set;

int inversionCount(vector<int> &arr)
{
    // Inversion Count of an array is the count of all the pairs (i, j) such that a[i] > a[j] and i < j
    // Example: For array {2, 4, 1, 3, 5}, the inversion count is 3 (pairs: (2,1), (4,1), (4,3)).

    // this algorithm uses ordered_set data structure from gnu pbds library
    ordered_set os;
    int inversions = 0;

    for (int i = 0; i < arr.size(); ++i)
    {
        inversions += os.size() - os.order_of_key(arr[i]);
        os.insert(arr[i]);
    }

    return inversions;
}

int countSubArraysWithSumK(vector<int> &arr, int k)
{
    // Count the number of subarrays with sum equal to k
    // Example: For array {1, 2, 3, 4, 5} and k = 5, the answer is 2 (subarrays: {2, 3}, {5})

    int n = arr.size();
    int ans = 0;
    int prefixSum = 0;
    unordered_map<int, int> prefixSumCount;
    prefixSumCount[0] = 1;

    for (int i = 0; i < n; ++i)
    {
        prefixSum += arr[i];
        ans += prefixSumCount[prefixSum - k];
        prefixSumCount[prefixSum]++;
    }

    return ans;
}