#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    int x,y,i,j;
    cin>>s;
    int temp;
    int z=s.size();
    for(i=0;i<z;i=i+2)
    {
        for(j=0;j<z-1;j=j+2)
        {
            if(s[j]>s[j+2])
            {
                temp= s[j];
                s[j]=s[j+2];
                s[j+2]=temp;

            }
        }

    }

    cout<<s;
}
