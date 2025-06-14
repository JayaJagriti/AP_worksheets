#include<iostream>
using namespace std;

// ASSIGN COOKIES (LEETCODE 455)
// USING GREEDY - TC=O(N*LOGN), SC=O(1)

int findContentChildren(vector<int> &g, vector<int> &s)
{
    sort(g.begin(), g.end());
    sort(s.begin(), s.end());
    int i = 0, j = 0, count = 0;
    while (i < g.size() && j < s.size())
    {
        if (g[i] <= s[j])
        {
            count++;
            i++;
            j++;
        }
        else if (g[i] > s[j])
        {
            j++;
        }
    }
    return count;
}