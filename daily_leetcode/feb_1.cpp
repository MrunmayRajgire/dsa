/*
3151. Special Array I
An array is considered special if every pair of its adjacent elements contains two numbers with different parity.
You are given an array of integers nums. Return true if nums is a special array, otherwise, return false.
*/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        for(int i=0;i<nums.size()-1;i++)
        {
            int j = i+1;
            if((nums[i]%2!=0 && nums[j]%2!=0) || (nums[i]%2==0 && nums[j]%2==0))
            {
                return false;
            }
        }
        return true;
    }
};