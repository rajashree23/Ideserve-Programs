#include<bits/stdc++.h>

using namespace std;
int main(){
    long long n;
    cin>>n;
    long long a[n];
    for(int i=0;i<n;i++)
      cin>>a[i];
    long long s;
    cin>>s;
    long long res[s+1];
    res[0]=0;
     for (int amt = 1; amt <= s; amt++) {
            res[amt] = INT_MAX;
           
            for (int j = 0; j < n; j++) {
                if (a[j] <= amt) { 
                    
                    res[amt] = min(res[amt - a[j]] + 1,res[amt]) ;
                }
            }
        }
        cout<<res[s];
        return 0;
}
