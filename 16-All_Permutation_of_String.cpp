#include <bits/stdc++.h>
using namespace std;

void permuattion(string s, string ans)
{
    if(s.length()==0)
    {
        cout<<ans<<endl;
        return ;
    }

    for(int i=0;i<s.length();i++)
    {                                 // s =ABC
        char ch =s[i]; // A
        string ros = s.substr(0,i) +s.substr(i+1); //""+BC
        permuattion (ros,ans+ch);//BC , A
    }
}


int main()
{
        string s ="ABC";
        permuattion(s,"");
}