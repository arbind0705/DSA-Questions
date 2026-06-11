#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    
    int arr[10] = {1,-1,3,2,4, -4,2,-1,7,1};

    int sum =arr[0];
    int maxsum = arr[0];

    for(int i = 1 ; i <10 ;i++){
        sum = max(arr[i], sum+arr[i]);
        maxsum = max(maxsum, sum);
    }
    cout<<"max sum of subarrays are: "<<maxsum<<endl;
}