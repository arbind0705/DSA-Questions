#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int arr[5] = {1,-1,3,2,4};

    int sum =arr[0];
    int maxsum = arr[0];

    for(int i = 1 ; i <5 ;i++){
        sum = max(arr[i], sum+arr[i]);
        maxsum = max(maxsum, sum);
    }
    cout<<"max sum of subarrays are: "<<maxsum<<endl;
}