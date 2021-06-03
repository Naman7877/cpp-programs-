#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"enter the size of array "<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int arr1[n];
    for(int i=1;i<n;i++)
    {
        arr1[0]=arr[n-1];
        arr1[i]=arr[i-1];
    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" "<<endl;
        cout<<arr[i]<<" "<<endl;
    }
     for(int i=0;i<n;i++)
    {
        cout<<arr1[i]<<" ";
        
    }

    return 0;
}