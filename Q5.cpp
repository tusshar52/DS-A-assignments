/*
Question - intersection.
Given two integer arrays nums1 and nums2, return an array of their intersection.
*/

class Solution {
public:
    vector<int> intersection(vector<int>& n1, vector<int>& n2)
	{
        vector<int> a;
        for(int i : n1)
		{
                if(find(n2.begin(),n2.end(),i)!=n2.end()&&find(a.begin(),a.end(),i)==a.end())
				{
                    a.push_back(i);
				}
        }
		return a;
    }
};