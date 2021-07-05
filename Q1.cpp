/*
Question - remove duplicates.
Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once.
*/

class Solution {
public:
    int removeDuplicates(vector<int>& n) {
        int s = n.size() ;
        for(int i = 0; i < s-1; i++){
            if(n[i] == n[i+1]){
                int t = find(n.begin(),n.end(),n[i]);
                n.erase(t);
                i--;
                s--;
            }
        }
        return s;
    }
};