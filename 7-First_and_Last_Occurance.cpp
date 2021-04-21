#include <iostream>
using namespace std;

int firstocc(int arr[],int n,int i,int key)
{
    if(i==n)
    {
        return -1;
    }
    if(arr[i]==key)
    {
        return i;
    }

    return firstocc(arr,n,i+1,key);
}

int lastocc(int arr[],int n,int i,int key)
{
     if(i==n)
    {
        return -1;
    }
   int rest =lastocc(arr,n,i+1,key);
   if(rest!=-1)
   {
       return rest;
   }

   

   if(arr[i]==key)
    {
        return i;
    }
    return -1;

   
}

int main()
{
    int arr[]={2,5,4,6,8,4,5,6,4};
    cout<<firstocc(arr,9,0,4)<<endl;
    cout<<lastocc(arr,9,0,4)<<endl;
}