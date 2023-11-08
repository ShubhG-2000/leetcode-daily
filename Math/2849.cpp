2849. Determine if a Cell Is Reachable at a Given Time


/*
pehle recursion socha 
but constraints 10^9 so nhi 

math socha , think greedy pehle diagnals cover kroo 

max diagnol distance you can cover = min(xdiff , ydiff)
remaining distance = abs(xdiff - ydiff)

also check for src == dest and t == 1 :: false hona chahie 

*/

class Solution {
public:
    bool isReachableAtTime(int x1, int y1, int x2, int y2, int t) {
        if(x1 == x2 && y1 == y2 && t == 1)return false;

        int xdiff = abs(x1-x2);
        int ydiff = abs(y1-y2);

        return (min(xdiff,ydiff) + abs(xdiff - ydiff)) <= t;
    }
};