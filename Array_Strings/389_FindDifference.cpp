//used map O(N) SPACE 
class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char, int> mp;

        for(char &ch : s){
            mp[ch]++;
        }

        char ans;
        for(char &ch  : t){
            if(mp.find(ch) == mp.end() || mp[ch] == 0){
                ans = ch;
                break;
            }else{
                mp[ch]--;
            }
        }

        return ans;
    }
};



//calculate difference in ASCII SUM of characters 
//a+b+c+d+e - a+b+c+d = e

class Solution {
public:
    char findTheDifference(string s, string t) {
       
        int sum = 0;
        for(char &ch : t){
            sum += ch;
        }

        for(char & ch : s){
            sum -= ch;
        }

        return sum;
    }
};



// When using the XOR approach, remember that the XOR operation for the same numbers is always 0. So, XORing all characters of both strings will eventually leave us with the ASCII value of the added character.
class Solution {
public:
    char findTheDifference(string s, string t) {
        int XOR = 0;
        for(char &ch : t){
            XOR ^= ch;
        }

        for(char & ch : s){
           XOR ^= ch;
        }

        return (char)XOR;
    }
};

