/*
Question - remove elements.
Given an integer array nums and an integer val, remove all occurrences of val in nums in-place. 
The relative order of the elements may be changed.
*/

class Solution{
public:
    int removeElement(vector<int>& n, int val) 
	{
        int s = n.size();
        for(int i = 0; i < k;i++)
		{
            if(n[i]== val)
			{
                int t = find(n.begin(),n.end(),val);
                n.erase(t);
                i--;
                s--;
            }
        }
        return s;
        
    }
};