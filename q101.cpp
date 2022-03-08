/* Given 2 numbers one is repeating and the other one is missing 
    between the range of them . print the both number
    missing number --> Gausian sum algo
    repeating number --> using unordered map
*/
#include<bits/stdc++.h>
using namespace std;
int repeating(vector<int> &vec){
    unordered_map<int,int> mpp;
    for(auto it: vec)
    mpp[it]++;
    for(auto it: mpp){
        if(it.second>1)
        return it.first;
    }
}
    int missing(vector<int> &vec){
        vector<int> v;
        unordered_map<int,int> mpp;
        for(auto it: vec)
        mpp[it]++;
        for(auto it: mpp)
        v.emplace_back(it.first);
        int s=0;
        int n = v.size();
        int gsum= n*(n+1)/2;
        for(auto it: v)
        s+=it;
        return gsum-s;
    }

int main(){
    vector<int> vec={0,1,3,3}; // sample test case
    int r= repeating(vec);
    int m= missing(vec);
    cout<<"The repeating number = "<<r<<endl;
    cout<<"The missing number = "<<m<<endl;
    return 0;

}