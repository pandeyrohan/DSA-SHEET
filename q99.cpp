// nth root of the integer 
// this can be done by using binary search in O(logn) complexity
#include<bits/stdc++.h>
using namespace std;
int b_search(int n){
    int l=1,h=n,ans=0;
    while(l<=h){
        int mid=(l+h)/2;
        if(mid<=n/mid){
            ans=mid;
            l=mid+1;
        }
        else
        h=mid-1;
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int ans = b_search(n);
    cout<<"The square root of "<<n<<"= "<<ans<<endl;
    return 0;
}