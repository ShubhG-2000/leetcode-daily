316. Remove Duplicate Letters
1081. Smallest Subsequence of Distinct Characters [SAME]

/*
    add chararcter until u reach a point where ASCII of ith char is smaller than last char in ans 
	if last char in result occurs later we can delete that and then add our current character 
    if already visited skip that char 

	if last char of result does not occur later after i , then we cannot delete last char of result 
*/

class Solution {
public:
    string removeDuplicateLetters(string s) {
        int n = s.length();
        int lastIdx[26];
        bool vis[26] = {0};


        for(int i = 0; i < n; i++){
            char ch = s[i];
            lastIdx[ch - 'a'] = i;
        }

        string result = "";
        for(int i = 0; i < s.length(); i++){
            char ch = s[i];
            int idx = ch - 'a';

            if(vis[idx]){
                continue;
            }

            while(result.length() > 0 && result.back() > ch && lastIdx[result.back() - 'a'] > i){
                vis[result.back() - 'a'] = false;
                result.pop_back();
            }

            result.push_back(ch);
            vis[idx] = true;
        }

        return result;
    }
};
