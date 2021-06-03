#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"enter the size of array "<<endl;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++)
    {
        cout<<"enter "<<i+1<<" number of array ";
        cin>>arr[i];
    }


    cout<<"here print reverse array "<<endl;
    for (int i = n-1; i >=0; i--)
    {
        cout<<"the value of "<<i+1<<" place is -> "<<arr[i]<<endl;
    }
    
    
    return 0;
}