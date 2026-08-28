class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        int write = 0;
        int read = 1;
        int count = 1;
        int n = nums.size();

        while(read < n){

            if(nums[read] == nums[read-1]){

                read++;
            }
            else{

                nums[write + 1] = nums[read];
                // update the write+1 postion with the unique read number

                write++;
                count++;
                read++; 
            }
        }
        return count;


        
    }
};