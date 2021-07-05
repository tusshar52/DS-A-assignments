/*
Question - shuffle array.
Given the array nums consisting of 2n elements in the form [x1,x2,...,xn,y1,y2,...,yn].
Return the array in the form [x1,y1,x2,y2,...,xn,yn].
*/

class Solution {
public:
    vector<int> shuffle(vector<int>& num, int s)
	{
        vector<int> a;
        for(int i = 0 ; i <s ;i++)
		{
            a.push_back(num[i]);
            a.push_back(num[i+n]);
        }
        return a;
    }
};