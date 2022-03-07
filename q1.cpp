#include<bits/stdc++.h>
using namespace std;
void disp(vector<int> &vec){
    for(auto it: vec)
    cout<<it<<",";
}
int main(){
    vector<int> vec;
    int n,val;
    cout<<"Enter the total number of eleemnts: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter the value: ";
        cin>>val;
        vec.emplace_back(val);
    }
    cout<<"By using the reverse function\n";
    cout<<"By using the iterative loop \n";
    for(auto it=vec.rbegin();it!=vec.rend();it++)
    cout<<*it<<",";
    cout<<endl;
    reverse(vec.begin(),vec.end());
    disp(vec);
    return 0;
}