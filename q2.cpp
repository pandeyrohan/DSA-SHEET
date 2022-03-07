#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> vec;
    int n,val;
    cout<<"Enter the total number of elements: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter the value: ";
        cin>>val;
        vec.emplace_back(val);

    }
    int mx = *max_element(vec.begin(),vec.end());
    int mn = *min_element(vec.begin(),vec.end());
    cout<<"The max element ="<<mx<<endl;
    cout<<"The min element ="<<mn<<endl;
    return 0;
}