#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n,j,i;
    cout<<"array size"<<endl;
    cin>>n;
    vector<int> arr(n);
    cout<<"enter the elements of array"<<endl;
    for(i =0;i<n; i++){
        cin>>arr[i];
    }

    int temp = arr[0];
    int count = 1;
    for(j =1; j < n; j++){
        if(arr[j] != temp){
            temp = arr[j];
            arr[count] = arr[j];
            count++;
        }
    }
    cout<<"array after removing duplicates : "<<endl;
    for(i = 0; i < count; i++){
        cout<<arr[i]<<" ";
    }
    cout <<"\n unique elements cout: "<< count << endl;
    return 0;
}

