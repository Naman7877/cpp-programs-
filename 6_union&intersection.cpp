#include<iostream>

using namespace std;

int main()
{
    int n;
    cout<<"enter the size of array";
    cin>>n;
    int arr[n];
    int arr1[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        cin>>arr1[i];
    }
    
    return 0;
}