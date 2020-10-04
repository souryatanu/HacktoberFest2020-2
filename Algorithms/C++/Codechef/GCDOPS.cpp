/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;

    int n;
    while(t-- >0)
    {
        cin>>n;
        int b[n];

        for(int i = 0; i < n; i++)
        {
            cin>>b[i];
        }
        
        
        int j = 1;
        bool flag = true;
        
        for(int i = 0; i <n; i++)
        {
            if(j%b[i] != 0)
            {
                flag = false;
                break;
            }
            
            j++;
        }
        
        if(flag)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    
    return 0;
}
