456. 132 Pattern

class Solution {
public:
    /*
        i < j < k
        numsi < numsk < numsj

        peche se shuru kroo ex : 3,5,0,3,4
        assign to numsj largest value , 
        store value less than numsj in stack for numsk
        jab nums[i] < numsk hojae return true
        because condition numsk < numsj to peeche se maintain krte aa rhe hai 

        https://www.youtube.com/watch?v=RZXxX1EU364
    */
    bool find132pattern(vector<int>& nums) {
        int num3 = INT_MIN;
        stack<int> st;

        int n = nums.size();
        for(int i = n - 1; i >= 0; i--){
            if(nums[i] < num3){
                return true;
            }

            while(!st.empty() && st.top() < nums[i]){
                num3 = st.top();
                st.pop();
            }

            st.push(nums[i]);
        }

        return false;
    }
};

