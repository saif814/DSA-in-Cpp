// This is for finding majority element with more optimised way compared to 
// brute force 

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){

    vector<int> first = {3,2,1,2,3,3,3};
    sort(first.begin(),first.end());
    int n = first.size();

    int freq = 1; int ans = first[0];

    for(int nums = 1; nums< n; nums++){
        if(first[nums] == first[nums-1]){
            freq++;
        }else{
            freq = 1;
            ans = first[nums];

        }
        if(freq > n/2){
            cout<<freq<<endl;
            cout<<first[nums];
        }
    }


    return 0;
}