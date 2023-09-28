//approach similar to sort 01
// class Solution {
// public:
//     vector<int> sortArrayByParity(vector<int>& nums) {
//         int idx = 0;

//         for(int i = 0; i < nums.size(); i++){
//             if(nums[i] % 2 == 0){
//                 swap(nums[idx], nums[i]);
//                 idx++;
//             }
//         }
//         return nums;
//     }
// };


//custom comparator
class Solution {
public:

    static bool comp(int &a, int &b){
        // int v1 = a % 2;
        // int v2 = b % 2;
        // if(v1 != 0 && v2 == 0){
        //     return false;
        // }else{
        //     return true;
        // }

        //above gives runtime error dont know why
        return (a % 2) < (b % 2);
    }

    vector<int> sortArrayByParity(vector<int>& nums) {
        sort(nums.begin(), nums.end(), comp);

        return nums;
    }

    
};

// // 1 2
// // 2 1
// // 1 3
// // 2 4