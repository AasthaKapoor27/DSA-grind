class Solution {
public:
    int majorityElement(vector<int>& nums) {

        // this question must be read-like how many times an element appear more than half the size (n/2) of the array named nums[]

        unordered_map<int, int> map;

        for(int i=0; i < nums.size(); i++){

            map[nums[i]]++;

            if(map[nums[i]] > nums.size()/2){

                return nums[i];
            }

        }
        return -1;


    }
};