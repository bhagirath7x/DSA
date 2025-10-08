class Solution {
public:
    int findClosest(int x, int y, int z) {
        int xTime = abs(z-x);
        int yTime = abs(z-y);
        if(xTime == yTime){
            return 0;
        }

        if(xTime < yTime) return 1;
        else return 2;
    }
};