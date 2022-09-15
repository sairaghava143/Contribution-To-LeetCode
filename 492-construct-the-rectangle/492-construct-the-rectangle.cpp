class Solution {
public:
    vector<int> constructRectangle(int area) {
        long long l=INT_MAX,w=INT_MAX;
        for(int i=1;i<=area;i++){
            for(int j=1;j<=i;j++){
        if(i*j>area){
            break;
        }
                if(i*j==area){
                  if(l>i && w>j){
                    l=i,w=j;
        return {int(l),int(w)};

                }   
                }
               
        }
        }
        return {int(l),int(w)};
    }
};