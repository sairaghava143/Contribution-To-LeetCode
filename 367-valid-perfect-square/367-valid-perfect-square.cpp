class Solution {
public:
    bool isPerfectSquare(int num) {
      double y=sqrt(num);
        return y==int(y);
    }
};