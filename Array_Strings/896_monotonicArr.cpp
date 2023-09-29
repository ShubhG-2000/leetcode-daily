896. Monotonic Array

class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool incSeq = false;
        bool decSeq =false;

        //a monotonic array is either inc or dec , so only one should be true
        for(int i = 1; i < nums.size(); i++){
            if(nums[i-1] < nums[i]){
                incSeq = true;

            }else if(nums[i-1] > nums[i]){
                decSeq = true;
            }
        }

        if(incSeq && decSeq){
            //for monotonic array cannot be increasing or decreasing at same time
            return false; 
        }else{
            return true;
        }

    }
};