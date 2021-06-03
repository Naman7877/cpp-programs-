#include<iostream>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cout << "enter a size of a array" << endl;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "enter " << i + 1 << " number of array ";
        cin >> arr[i];
    }
    sort(arr,arr+n);
    cout<<"the smaller number is "<<arr[0]<<endl;
    cout<<"the greater number is "<<arr[n-1];
    return 0;
}