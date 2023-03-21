class Solution {
public:
    int smallestEvenMultiple(int n) {
        int x=n;
        while(n%2!=0 || n%x!=0){
            n++;
        }
        return n;
        
    }
};