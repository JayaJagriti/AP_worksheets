#include<bits/stdc++.h>
using namespace std;

int missingNumber(vector<int> &nums)
{
    int n = nums.size();
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans ^= nums[i];
    }
    for (int i = 0; i <= n; i++)
    {
        ans ^= i;
    }
    return ans;
}