class Solution {
public:
    int numTrees(int n) {
    int T[n+1];
    T[0]=1;
    T[1]=1;
    for(int i=2;i<=n;i++){
          int sum=0;
        for(int j=0;j<i;j++){
           sum+=T[j]*T[i-j-1];
           T[i]=sum;
    }
        
    }
    return T[n];
        
    }
};