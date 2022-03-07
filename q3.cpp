#include<bits/stdc++.h>
using namespace std;
void maxele(vector<int> vec,int k){
sort(vec.begin(),vec.end(),greater<int>());
cout<<k<<"th max element ="<<vec[k+1];
}
void minele(vector<int> vec,int k){
sort(vec.begin(),vec.end());
cout<<k<<"th min element ="<<vec[k+1];
}
int main(){
    vector<int> vec;
    int ch,x,n,val,k;
    cout<<"Enter the total number of elements: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter the value: ";
        cin>>val;
        vec.emplace_back(val);
    }
    while(1){
        cout<<"Enter the choice: ";
        cin>>ch;
        switch(ch){
            case 1:
            cout<<"Enter the value of k";
            cin>>k;
            maxele(vec,k);
            break;
            case 2:
            cout<<"Enter the value of k";
            cin>>k;
            minele(vec,k);
            break;

        }
        cout<<"Press 1 to continue and 0 to exit\n";
        cin>>x;
        if(x!=1)
        break;
    }
    return 0;
}