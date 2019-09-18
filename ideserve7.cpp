#include<bits/stdc++.h>

using namespace std;
int main(){
    string s;
    cin>>s;
    int l=s.length();
    int result[l][l];
    for(int i=0;i<l;i++)
      result[i][i]=1;
    for(int j=0;j<l-1;j++){
        if(s[j]==s[j+1])    
          result[j][j+1]=1;
        else
           result[j][j+1]=0;
        
        
    }
    for(int curr=3;curr<=l;curr++){
        for(int i=0;i<l-curr+1;i++) {
            int j=i+curr-1;
            if(s[i]==s[j]&&result[i+1][j-1])
               result[i][j]=1;
            else
               result[i][j]=0;
    
            
    
        }
    }
    long long cuts[l];
    for(int i=0;i<l;i++){
      int temp=INT_MAX;
      if(result[0][i])
       cuts[i]=0;
       else{
          for(int j=0;j<i;j++){
              {
                if((result[j+1][i])&& temp>cuts[j]+1)
                  temp=cuts[j]+1;

              }
              cuts[i]=temp;
          
       }
     }
    }
    cout<<cuts[l-1];
    return 0;

    
}