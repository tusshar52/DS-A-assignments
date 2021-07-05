/*
Question - decompress.
We are given a list nums of integers representing a list compressed with run-length encoding.
Consider each adjacent pair of elements [freq, val] = [nums[2*i], nums[2*i+1]] (with i >= 0). 
Return the decompressed list.
*/

class Solution {
public:
    vector<int> decompressRLElist(vector<int>& n)
	{
        vector<int> a;
        for(int i = 0 ; i < n.size(); i += 2)
		{
            for(int j = 0 ;j < n[i]; j++)
			{
                a.push_back(n[i+1]);
			}
        }
        return a;
    }
};