// #include <iostream>
// #include <bits/stdc++.h> 
// #define lli long long int 

// using namespace std;

// int main() {
// 	lli t,n,m,q;
// 	cin>>t;
	
// 	while(t--)
// 	{
// 	    cin>>n>>m>>q;
//         lli cnt=0;
//         lli mat[n][m]={};

//         lli row,col;
//         for(lli i=0;i<q;i++)
//         {
//             cin>>row>>col;
//             for(lli i=0;i<n;i++)
//                 mat[i][col-1]++;
//             for(lli j=0;j<m;j++)
//                 mat[row-1][j]++;
//         }
        
//         for(lli i=0;i<n;i++)
//             for(lli j=0;j<m;j++)
//                 if(mat[i][j]%2!=0)
//                     cnt++;
//         cout<<cnt<<endl;
//     }
//     return 0;
// }

#include <iostream>
#include <bits/stdc++.h> 
#define lli long long int 

using namespace std;

int main() 
{
	lli t,n,m,q;
	cin>>t;
	
	while(t--)
	{
	    cin>>n>>m>>q;
        lli cnt=0;
        lli row[n]={};
        lli col[m]={};
        lli r,c;
        for(lli i=0;i<q;i++)
        {
            cin>>r>>c;
            row[r-1]++;
            col[c-1]++;
        }
        // for(lli i=0;i<n;i++)
        //     cout<<row[i]<<" ";
        // for(lli i=0;i<m;i++)
        //     cout<<col[i]<<" ";

        for(lli i=0;i<n;i++)
            for(lli j=0;j<m;j++)
                if((row[i]+col[j])%2!=0)
                    cnt++;
        cout<<cnt<<endl;
    }
    return 0;
}