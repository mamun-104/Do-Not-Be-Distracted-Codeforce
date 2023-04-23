#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       string s;

       int i,n,j,flag=0;
       cin>>n;
       char a[n]={0};
       cin>>s;
       a[0]=s[0];
       for(i=1;i<n;i++)
       {
           //cout<<a[i]<<" ";
           if(s[i]!=s[i-1])
           {
               for(j=0;j<i;j++)
               {
                   if(s[i]==a[j]){flag=1; break;}
               }
           }
           if(flag==1){break;}
           a[i]=s[i];

       }
       if(flag==1) {cout<<"NO\n";}
       else {cout<<"YES\n";}




   }





    return 0;
}

