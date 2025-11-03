#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
bool binarySearch(vector<int> arr,int left ,int right,int key)
{
    bool flag = true;
    if(left >= right)
    {
        return false;
    }
    int mid = (right + left)/2;
    if(key > arr[mid])
        flag = binarySearch(arr,mid+1,right,key);
    else if(key < arr[mid])    
        flag = binarySearch(arr,left,mid,key);
    return flag;
}
int main()
{
    vector<int> arr  ={5,5,4,98,6,645,66,6,1,3515,51,356,351,35131351,151,16};
    sort(arr.begin(),arr.end());
    for(int val : arr)
        cout<<val<<",";
    cout<<endl;
    cout<<binarySearch(arr,0,arr.size()-1,66);
}