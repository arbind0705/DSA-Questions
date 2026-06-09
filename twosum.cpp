# include <iostream>
# include <vector>
using namespace std;

int main(){
int n, i, j;
int target;
int output[2];
cout<<"array size"<<endl;
cin>>n;
vector<int> arr(n);
cout <<"enter array elements"<<endl;
for(i=0; i<n; i++)
{
    cin >> arr[i];
}
cout <<"enter target"<<endl;
cin >> target;

for(i=0; i<n; i++)
{
    for(j=i+1; j<n; j++)
    {
        if(arr[i]+arr[j]==target)
        {
            output[0]=i;
            output[1]=j;
            cout << "output: " << output[0] << " " << output[1] << endl;

            return 0;
        }
    }
}
return 0;
}