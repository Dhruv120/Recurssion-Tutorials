#include <bits/stdc++.h>
using namespace std;


void subseq(string s, string ans)
{
    if(s.length()==0)
    {
        cout<<ans<<endl;
        return ;
    }

    char ch =s[0];//A
    string ros =s.substr(1);//BC
    subseq(ros,ans);// BC,""
    subseq(ros,ans+ch);//
}

int main()
{
    subseq("ABC","");
    cout<<endl;
}