#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n,j,i;
    cout<<"array size"<<endl;
    cin>>n;
    vector<int> arr(n);
    cout<<"enter the elements: "<<endl;
    for(i =0;i<n; i++){
        cin>>arr[i];
    }

    vector<int> missing;
        
    sort(arr.begin(), arr.end());
    n = arr.size();
    int expected = 1;
    for(int x : arr){
        while(expected<x){
            missing.push_back(expected);
            expected++;
        }
        if(expected ==x){
            expected++;
        }
        
    }
    while(expected<=n){
            missing.push_back(expected);
            expected++;
        }
    for(auto x: missing){
        cout<<x<<" ";

    }

}
