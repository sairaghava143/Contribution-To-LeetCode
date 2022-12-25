class Solution {
public:
    int maxScore(vector<int>& A, int B) {
           int sum=0,maxsum=0;
    for(int i=0;i<B;i++){
        sum+=A[i];
    }
    maxsum=sum;
    int inc=A.size()-1,exc=B-1;
    while(inc>=0 && exc>=0){
        sum+=A[inc--];
        sum-=A[exc--];
        maxsum=max(sum,maxsum);
    }
    return maxsum;
    }
};