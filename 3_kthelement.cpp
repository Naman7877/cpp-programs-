#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    
    int n;
    cout<<"enter the size of array "<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"enter the i element of array "<<endl;
        cin>>arr[i];
    }
    int k;
    cout<<"enter a spefic location"<<endl;
    cin>>k;
    sort(arr,arr+k-1);
    cout<<arr[0]<<endl;
    cout<<arr[k-1];
    return 0;
}