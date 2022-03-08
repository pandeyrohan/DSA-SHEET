#include<bits/stdc++.h>
using namespace std;
vector<int> majority_ele(vector<int> &vec){
    unordered_map<int,int> mpp;
    vector<int> v;
    int n = vec.size();
    for(auto it: vec)
    mpp[it]++;
    for(auto it: mpp){
        if(it.second > n/2)
        v.emplace_back(it.first);
    }
    return v;
}
int main(){
    vector<int> vec;
    int n,val;
    cout<<"Enter the total element: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter the value: ";
        cin>>val;
        vec.emplace_back(val);
    }
    vector<int> res = majority_ele(vec);
    for(auto it: res)
    cout<<it<<",";
    return 0;
}