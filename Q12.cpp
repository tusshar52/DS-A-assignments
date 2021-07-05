/*
Question - smaller than current.
Given the array nums, for each n[i] find out how many numbers in the array are smaller than it.
Return the answer in an array.
*/

class Solution {
public:
    int binary(vector<int> v,int n, int key )
    {
        int mid=0, pos=-1;
        int low=0, high=n-1;
        while(low<=high)
        {
            mid=low+((high-low)/2);
            if(v[mid]==key)
            {
                pos=mid;
                break;
            }
            else if(v[mid]>key)
			{
                high=mid-1;
			}
            else
			{
                low=mid+1;
			}
        }
        while(pos>0)
        {
            if(v[pos-1]==v[pos])
			{
                pos--;
			}
            else
                break;
        }
        return pos;
    }
    vector<int> smallerNumbersThanCurrent(vector<int>& n)
	{
        vector<int> v(n);
        vector<int> r;
        sort(v.begin(),v.end());
        for(int x :n)
		{
            r.push_back(binary(v, v.size(), x));            
        }
        return r;
    }
};