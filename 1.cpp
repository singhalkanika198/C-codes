    #include<bits/stdc++.h>
    using namespace std;
    main()
    {
        int t;cin>>t;while(t--){
    	int n,m;
    	int a[100][100];
    	cin>>n>>m;
    	int i,j;
    	for(i=0;i<n;i++)
    	for(j=0;j<m;j++)cin>>a[i][j];
     
    	int numb;cin>>numb;
    	i=0,j=0;
        bool flag=0;
        if(m==1)
        {
            for(i=0;i<n;i++)
                for(j=0;j<m;j++)if(a[i][j]==numb){flag=1;break;}
            cout<<flag<<endl;
        }
        else{
    	while(1)
    	{
           if(j==m-1&&a[i][j]!=numb){break;}
           else if(j==m-1&&a[i][j]==numb){flag=1;break;}
           if(a[i][j]==numb){flag=1;break;}
           else if(i!=n-1&&numb>=a[i+1][j]){i=i+1;}
           else {j=j+1;}
    	}

        cout<<flag<<endl;}
    }
     
    	
    }