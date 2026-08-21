class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        //array of int = nums[]
        //tagret (to be found)
        //to return indices 
        //each input has ONLY one solution 
        // one element must be used once 

        unordered_map<int, int> map;

        for(int i = 0; i < nums.size(); i++){

            int x = target - nums[i];

            if(map.count(x)){

                return {map[x],i};
            }

            map[nums[i]] = i;


        }

        return{};

        
        
    }
};