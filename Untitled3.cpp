#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    int temp,store,counter=0;
    bool check;
    cin>>a>>b;
    for(int i=a;i<=b;i++)
    {
        temp=i;
        while(temp!=0)
        {
            store=temp%10;
            if(store==4||store==7)
            {
                check=true;
            }
            else
            {
              check=false;
              break;
            }
           temp=temp/10;
        }
        if(check==true)
        {
            counter++;
            cout<<i<<" ";
        }
    }
    if(counter==0)
    {
        cout<<"-1";
    }
}
