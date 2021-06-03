#include<iostream>
#include <set>
#include<vector>
#include<list>

using namespace std;

int main(){
    set<int> s1,s2;
    int n;
    cout<<"enter the size of set"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        s1.insert(x);
        s2.insert(x);
    }
    set<int>:: iterator iter=s1.begin();
    while(iter!=s1.end())
    {
        cout<<*iter<<endl;
        iter++;
    }

    return 0;
}