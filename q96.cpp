//Finding the first and last occurence of the number
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> vec;
    int n,val,x;
    cout<<"Enter the total number fo elements: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter the value: ";
        cin>>val;
        vec.emplace_back(val);
    }
    int n1=vec.size();
    sort(vec.begin(),vec.end());
    // for finding the first occurence we will use the lower_bound function 
    // for the last occurence we will use upper_bound-1
    // they both uses binary search in back end so it in O(logn) complexity
    cout<<"Enter the element to be searched: ";
    cin>>x;
    int it = lower_bound(vec.begin(),vec.end(),x)-vec.begin();
    if(it !=n1 && vec[it]==x){
        cout<<"First occurence at"<<it<<endl;
    }
    int ind = upper_bound(vec.begin(),vec.end(),x)-vec.begin();
    ind = ind-1;
    if(ind>=0 && vec[ind]==x)
    cout<<"Last occurence at"<<ind<<endl;
    else
    cout<<"Not Found\n";
    return 0;

    return 0;
}