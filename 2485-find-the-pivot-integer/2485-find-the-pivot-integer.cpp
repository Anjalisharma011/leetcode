class Solution {
public:
    int pivotInteger(int n) {
        int sum=(n*(n+1))/2;
        int squareroot=sqrt(sum);
        if(sum==squareroot*squareroot)
        return squareroot;
        return -1;
    }
};