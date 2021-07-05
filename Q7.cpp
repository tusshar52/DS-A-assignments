/*
Question - richest customer.
You are given an m x n integer grid accounts where accounts[i][j] is the amount of money the i​​​​​​​​​​​th​​​​ customer has in the j​​​​​​​​​​​th​​​​ bank. 
Return the wealth that the richest customer has.
*/

class Solution {
public:
    int maximumWealth(vector<vector<int>>& account)
	{
        int n = 0, res;
        for(auto i :account)
		{
            res = 0;
            for(int j : i)
			{
                res +=j;
			}
            n = max(res,n);
        } 
        return n;
    }
};