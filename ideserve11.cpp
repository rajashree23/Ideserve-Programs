#include<bits/stdc++.h>

using namespace std;
int main(){
    long long m,n;
    cin>>m>>n;
    long long a[m][n],res[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
              {
                  cin>>a[i][j];res[i][j]=0;
              }
    }
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        if(i==0 ||j==0)
           res[i][j]=a[i][j];
        else if(a[i][j]==0)
           res[i][j]=0;
           else{
                long long z=min(res[i-1][j-1],res[i][j-1]);
                  res[i][j]=1+min(res[i-1][j],z);
           }
        
             
           
    }
}

for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
            cout<<res[i][j]<<"  ";
            cout<<endl;
    }
    long long maxElement=0;
     for (int i = 0; i < m; i++) { 
        for (int j = 0; j < n; j++) { 
            if (res[i][j] > maxElement) { 
                maxElement = res[i][j]; 
            } 
        } 
    }
    cout<<maxElement; 
    return 0;
}