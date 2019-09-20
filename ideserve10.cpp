#include<bits/stdc++.h>

using namespace std;
int main(){
    long long m,n;
    cin>>m>>n;
    long long a[m][n],res[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
              cin>>a[i][j];
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
              res[i][j]=0;
    }
    
        res[0][0]=a[0][0];
         for(int i=1;i<m;i++)
          res[0][i]=res[0][i-1]+a[0][i];

          for(int i=1;i<n;i++)
          res[i][0]=res[i-1][0]+a[i][0];

          for(int i=1;i<=m;i++){
              for(int j=1;j<=n;j++)
              {
                  long long z=min(res[i-1][j-1],res[i][j-1]);
                  res[i][j]=a[i][j]+min(res[i-1][j],z);

              }
               
          }
          cout<<res[m-1][n-1]<<endl;
        for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
              cout<<res[i][j]<<"       ";
              cout<<endl;
    }
          return 0;
           
    }