#include <iostream>
using namespace std;


bool sorted(int arr[],int n)
{
    int i=0;
    if(n==1)
    {
        return true;
    }
    bool previous = sorted(arr+1 ,n-1);

    return (arr[i]<arr[i+1] && previous );
}



int main()
{
    int n;
    cin>>n;
    int arr[n];

    for(int i =0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<sorted(arr,n)<<endl;
}