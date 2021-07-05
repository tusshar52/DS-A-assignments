/*
Question - kids with candies.
Given the array candies and the integer extraCandies, where candies[i] represents the number of candies that the ith kid has.
For each kid check if there is a way to distribute extraCandies among the kids such that he or she can have the greatest number of candies among them. 
Notice that multiple kids can have the greatest number of candies.
*/

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candy, int extra_Candy)
	{
        int max = *max_element(candy.begin(), candy.end());
        vector<bool> a;
        for(int i = 0; i < candy.size(); i++)
		{
            if(candy[i]+extra_Candy >= max)
			{
                a.push_back(true);
            }
            else
			{
                a.push_back(false);
            }
        }
        return a;
    }
};