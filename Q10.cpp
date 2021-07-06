/*
Question - array partition
Given an integer array nums of 2n integers, group these integers into n pairs (a1, b1), (a2, b2), ..., (an, bn) 
such that the sum of min(ai, bi) for all i is maximized. Return the maximized sum.
*/

class Solution {
public:
    int arrayPairSum(vector<int>& n) {
        sort(n.begin(), n.end());
        int sum=0, i=0;
        for(i=1; i<n.size(); i+=2)
        {
            sum+=n[i-1];
        }
        return sum;
    }
};