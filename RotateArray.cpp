#include <iostream>
#include <vector>
using namespace std;
void reverse(vector<int> &arr, int i, int j){
    while(i<j){
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}
int main(){
    int n,k;
    cout<<"Array size"<<endl;
    cin>>n;
    vector<int> arr(n);
    cout<<"enter the elements : " << endl;
    for(int i = 0; i< n; i++){
        cin>>arr[i];
    }
    cout<<"enter K as rotation "<<endl;
    cin>>k;
    /* the rotation will be in origional state each time it rotate per array size only the extra rotation will matter that will give the final rotation */
    k = k % n; // Handle cases where k is greater than n
    reverse(arr, 0, n - 1);
    reverse(arr, 0, k - 1);
    reverse(arr, k, n - 1);
    cout << "Rotated array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}