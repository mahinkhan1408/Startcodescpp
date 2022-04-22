#include<iostream>
using namespace std;
int main()
{
    int m,n,x,y;
    int pass=0;
    int a;
    int i=0;
    cin>>a;
    while(i<a)
    {
    cin>>m>>n;
    if(n==1 && m==1)
    {
        pass=0;
    }
    else if((n==1 && (m-n)>1) || (m==1 && (n-m)>1))
    {
        pass= -1;
    }
    else if(n>m)
    {
        y=n-m;
        x=y%2;
        if(x==0)
        {
            pass=(((m-1)*2)+y*2);
        }
        else
        {
            
                 pass=(((m-1)*2)+((y*2)-1));
        }
    }

    else if(m>n)
    {
        y=m-n;
        x=y%2;
        if(x==0)
        {
            pass=(((n-1)*2)+y*2);
        }
        else
        {
            
                 pass=(((n-1)*2)+((y*2)-1));
        }
    }
    else if(m==n)
    {
        pass=(m-1)*2;
    }

cout<<pass<<endl;
i++;
    }
}
