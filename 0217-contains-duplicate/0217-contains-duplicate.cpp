class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        unordered_set<int> table;

        for(int i=0; i< nums.size(); i++){

            int x =nums[i];

            if(table.count(x)){

                return true;
            }

            table.insert(x);

        }
        
        return false;
        
    }
};