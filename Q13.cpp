/*
Question - truncate sentence.
A sentence is a list of words that are separated by a single space with no leading or trailing spaces. 
Each of the words consists of only uppercase and lowercase English letters (no punctuation).
You are given a sentence s​​​​​​ and an integer k​​​​​​. You want to truncate s​​​​​​ such that it contains only the first k​​​​​​ words.
Return s​​​​​​ after truncating it.
*/

class Solution {
public:
    string truncateSentence(string s, int k)
	{
        string r = "";
        for(int i = 0;i < s.length();i++)
		{
            if(s[i]== ' ')
			{
                k--;
            }
            if(k==0)
                break;
            r = r + s[i];
        }
        return r;
    }
};