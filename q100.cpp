// Given 3 integers a,b,c find the number with value in the middle (with min comparisons)
#include<bits/stdc++.h>
using namespace std;
int cmp(int a,int b,int c){
  if ((a < b && b < c) || (c < b && b < a))
       return b;
 
    // Checking for a
    else if ((b < a && a < c) || (c < a && a < b))
       return a;
 
    else
       return c;
}
int main(){
    int a,b,c;
    cout<<"Enter the values of a,b,c: ";
    cin>>a>>b>>c;
    int ans =  cmp(a,b,c);
    cout<<ans<<endl;
    return 0;
}