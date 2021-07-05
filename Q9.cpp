/*
Question - decoding.
There is a hidden integer array arr that consists of n non-negative integers.
It was encoded into another integer array encoded of length n - 1, such that encoded[i] = arr[i] XOR arr[i + 1]. 
For example, if arr = [1,0,2,1], then encoded = [1,2,3].
You are given the encoded array. 
You are also given an integer first, that is the first element of arr, i.e. arr[0].
Return the original array arr.
*/

class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> d;
        d.push_back(first);
        for(int x : encoded){
            first = first^x;
            d.push_back(first);
        }
        return d;
    }
};