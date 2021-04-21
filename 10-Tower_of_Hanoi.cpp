#include <bits/stdc++.h>
using namespace std;

void toh(int n ,char src , char dest ,char helper)
{         // toh(2,'A','C','B');
    if(n==0)
    {
        return;      
    }
          
    toh(n-1,src,helper,dest);
    cout<<"Move from "<<src<<" to "<<dest<<endl;
    toh(n-1,helper,dest,src);
}



int main()
{
    //FOR THREE RINGS
    toh(3,'L','R','M');

    cout<<endl;
    //for 4 ringg
   // toh(4,'A','C','B');
}