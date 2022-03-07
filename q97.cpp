//value equal to index value
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> vec;
    int n,val;
    cout<<"Enter the total elements: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter the value: ";
        cin>>val;
        vec.emplace_back(val);
    }
    for(int i=0;i<vec.size();i++){
        if(vec[i]==i+1)
        cout<<vec[i]<<",";
    }
    return 0;
}