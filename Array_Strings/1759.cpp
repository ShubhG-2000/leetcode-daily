1759. Count Number of Homogenous Substrings


/*
 idea : 
 aaaaa
 kitne homogheneous substrings ? 
 1 length ki 5
 2 length ki 4
 3 ki 3
 4 ki 2 
 5 ki 1 

 foloowing N(N+1)/2

 N length ki substring me N(N+1)/2 substring hi to hoti 

 2 pointer lagao , hr homo string me find krlo 

*/

#define ll long long int
// #define MOD 1000000007

class Solution {
public:
    int countHomogenous(string s) {
        int i = 0;
        int N = s.length();
        int MOD = 1e9 + 7;

        ll  ans = 0;
        while(i < N){
            int j = i;

            ll len = 0;
            while(j < N && s[i] == s[j]){
                len++;
                j++;
            }

            // int l = (j-i)%MOD;
            // long long sum = ((l*(l+1))/2) % MOD;

            ans += ((len * (len + 1))/2) % MOD;

            i = j;
        }

        return ans % MOD;
    }
};