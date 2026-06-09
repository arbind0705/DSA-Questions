#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,i,j;
    cout<<"array size"<<endl;
    cin>>n;
    vector<int> arr(n);
    cout<<"enter the elements of array"<<endl;
    for(i = 0;i <n;i++){
        cin>>arr[i];
    }
    for(i = 0;i <n;i++){
        int count = 0;
        for(j = 0; j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count>n/2){
            cout<<"Major Element: "<<arr[i]<<endl;
            return 0;
            
        }
        
    }

     cout<<"No Major Element"<<endl;
            return 0;
    

};