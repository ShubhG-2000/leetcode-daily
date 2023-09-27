880. Decoded String at Index

//idea not clear enuf 
class Solution {
public:
    string decodeAtIndex(string s, int k) {
        //calculate the size of string 
        long long size = 0;
        for(char ch : s){
            if(ch >= '0' && ch <= '9'){
                size = size * (ch - '0');
            }else{
                size++;
            }
        } 

        int n = s.length();
        for(int i = n-1; i >= 0; i--){
            k = k % size;

            if(k == 0 && isChar(s[i])){
                return string(1, s[i]);
            }else if(isChar(s[i])){
                size--;

            }else{ //s[i] is a number 
                size = size/(s[i] - '0');
            }
        }

        return "";

    }

    bool isChar(char ch){
        if(ch >= '0' && ch <= '9'){
            return false;
        }else{
            return true;
        }
    }
};