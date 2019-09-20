#include<bits/stdc++.h>

using namespace std;
int main(){
    string s;
    
    cin>>s;
    int l=s.length();
    int result[l][l];
    for(int i=0;i<l;i++)
    {
        for(int j=0;j<l;j++)
              result[i][j]=0;
    }
    
    for(int i=0;i<l;i++)
      result[i][i]=1;

   for(int curr=2;curr<=l;curr++){
        for(int i=0;i<l-curr+1;i++) {
            int j=i+curr-1;
            if(s[i]==s[j])
               result[i][j]=result[i+1][j-1]+2;
               else
               result[i][j]=max(result[i+1][j],result[i][j-1]);
                   
               
               
        }
   }
   for(int i=0;i<l;i++)
    {
        for(int j=0;j<l;j++)
              cout<<result[i][j]<<" ";
              cout<<endl;
    }
   cout<<result[0][l-1];
   return 0;
}