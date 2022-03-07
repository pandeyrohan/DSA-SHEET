//search in a rotated sorted array
// advanced binary search is used to solve this problem
#include<bits/stdc++.h>
using namespace std;
int b_search(vector<int> &vec,int key){
    int l=0,h=vec.size()-1;
    while(l<=h){
        int mid=(l+h)/2;
        if(vec[mid]==key)
        return mid;
        if(vec[l]<vec[mid]){ // the array is sorted before rotation so one of the half will be sorted
            if(key>=vec[l] && key<vec[mid]){   // either the right half or the left half
                h=mid-1;
            }     
            else{
                l=mid+1;
            }          
        }
        else{
            if(key>vec[mid]&&key<=vec[h]){
                l=mid+1;
            }
            else
            h=mid-1;
        }
    }
    return -1;
}
int main(){
    vector<int> vec;
    int n,val,key;
    cout<<"Enter the size of vector: ";
    cin>>n;
    // remember the array is sorted before rotating 
    // so the input must be given with respect to it.
    for(int i=0;i<n;i++){
        cout<<"Enter the value: ";
        cin>>val;
        vec.emplace_back(val);
    }
    cout<<"Enter the key: ";
    cin>>key;
    int ind = b_search(vec,key); // it is going to return the index
    if(ind == -1)
    cout<<"NOt found "<<endl;
    else
    cout<<"Found "<<ind+1<<endl;
    return 0;

}
