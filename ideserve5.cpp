    #include<iostream>

    using namespace std;

     

    int subset_sum(int a[],int n, int sum)

    {

    

        int result[n+1][sum+1];

     

     

        int i,j;

     

        for(i=0;i<=n;i++)

            result[i][0]=1;

     

        

        for(j=1;j<=sum;j++)

            result[0][j]=0;

     

        

        for(i=1;i<=n;i++)

        {

            

            for(j=1;j<=sum;j++)

            {
             if(j<a[i])
               result[i][j]=result[i-1][j];
            else
            result[i][j]=result[i-1][j]||result[i-1][j-a[j]];
            }

        }

     

        

        return result[n][sum];

    }

     

    int main()

    {

        int i;

        int n;

        int sum;

     

        cout<<"Enter the value of sum"<<endl;

        cin>>sum;

     

        cout<<"Enter the number of elements in the set"<<endl;

        cin>>n;

        int a[n];

     

        cout<<"Enter the values"<<endl;

        for(i=0;i<n;i++)

            cin>>a[i];

     

        int r=subset_sum(a,n,sum);

     

        if(r==1)

            cout<<"subset with the given sum found";

     

        else

            cout<<"no required subset found";

     

        cout<<endl; 

        return 0;

    }