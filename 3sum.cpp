#include<iostream>
#include<vector>
#include<algorithm>
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

    vector<vector<int>> results;
        
    sort(arr.begin(), arr.end());
    n = arr.size();
    for(int i = 0;i<n-2;i++){
        if(i> 0 && arr[i] == arr[i-1]){
            continue;
        }
        int left = i+1;
        int right = n-1;
        while(left<right){
            int sum = arr[i]+arr[left]+arr[right];

            if(sum == 0){
                results.push_back({arr[i],arr[left],arr[right]});

                while(left < right&& arr[left]== arr[left+1]){
                    left++;
                }
                while(left < right && arr[right] == arr[right-1]){
                    right--;
                }
                left++;
                right--;
            }
            else if(sum < 0){
                left++;
            }
            else{
                right--;
            }
        }

    }
    for(auto triplets: results){
        cout<<triplets[0]<<" "<<triplets[1]<<" "<<triplets[2];

    }

}

