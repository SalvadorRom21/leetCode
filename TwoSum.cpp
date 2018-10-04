/*
Given an array of integers, return indices of the two numbers such that they add up to a specific target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int lastPt=nums.size()-1;
        int firstPt=0;
        int sum=0;
        vector<int> index;
        
        for(int i=0;i<nums.size();i++){
            for(int k=i+1;k<nums.size();k++){
                sum=nums[i]+nums[k];
                if(sum==target)
                {
                    index.push_back(i);
                    index.push_back(k);
                    return index;
                }
            }
        }
        }

    };
/*
To solve this problem we have two scanners. 
The first one will start at the first element. 
The second one will start at the last element.
We have two for loops and that adds each element
with all others. After that we check each sum and
if it matches with our target then we will push both indexes
to the index stack and we will return the index at that moment.
*/