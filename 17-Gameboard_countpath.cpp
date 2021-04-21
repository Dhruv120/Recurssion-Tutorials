#include <bits/stdc++.h>
using namespace std;

int coutnpath(int s,int e)
{
    if(s==e)
    {
        return 1;
    }
    else if(s>e)
    {
        return 0;
    }

    int count =0;

    for(int i=1;i<=6;i++)
    {
        count = count +coutnpath(s+i,e);
    }
return count;


}

int main()
{
    cout<<coutnpath(0,3);
}