#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
int linearSearch(vector<int> arr,int k,int num)
{
    int find;
    if(k >= arr.size())
    {
        return -1;
    }
    if(arr[k] != num )
        find = linearSearch(arr,++k,num);
    else return arr[k];
    return find;



    

}
int main()
{
   // int t;
  //  cin>>t;
    vector<int> arr;
    int num;
    arr = {2,5,8,6,9,8,7,1,4,580,80,14,52,6,34,8,56,456,46,464,64,64};
    sort(arr.begin(),arr.end());
    cout<<linearSearch(arr,0,80);

}