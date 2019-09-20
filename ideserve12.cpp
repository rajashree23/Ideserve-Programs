#include<bits/stdc++.h>

using namespace std;
int main(){
    string s;
    int begins=0,maxlength=1;
    cin>>s;
    int l=s.length();
    int result[l][l];
    for(int i=0;i<l;i++)
      result[i][i]=1;

    for(int j=0;j<l-1;j++){
        if(s[j]==s[j+1])  {  
          result[j][j+1]=1;
          begins=j;
          maxlength=2;
        }
        else
           result[j][j+1]=0;
        
        
    }
    for(int curr=3;curr<=l;curr++){
        for(int i=0;i<l-curr+1;i++) {
            int j=i+curr-1;
            if(s[i]==s[j]&&result[i+1][j-1]==1)
               {
                   result[i][j]=1;
                   begins=i;
                     maxlength=curr;
               }
            // else
            //    result[i][j]=0;
    
            
    
        }
    }
    cout<<begins<<endl<<maxlength;
    cout<<s.substr(begins,maxlength);
    return 0;
}
 