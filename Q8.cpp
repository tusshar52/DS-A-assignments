/*
Question - consisted string.
You are given a string allowed consisting of distinct characters and an array of strings words. 
A string is consistent if all characters in the string appear in the string allowed.
Return the number of consistent strings in the array words.
*/

class Solution {
public:
    int countConsistentStrings(string a, vector<string>& w)
	{
        int count = 0;
        bool flag = true;
        for (auto x : w)
		{
            flag = true;
            for(auto ch : x)
			{
                if(a.find(ch) == -1)
				{
                    flag = false;
				}
			}
            if(flag)
			{
                count++;
			}
        }
        return count;
    }
};