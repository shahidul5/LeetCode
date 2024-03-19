class Solution {
public:
    int pivotInteger(int n) {
        int y = (n*n +n)/2;
        int x = sqrt(y);
        if(x*x == y) return x;
        return -1;
    }
};