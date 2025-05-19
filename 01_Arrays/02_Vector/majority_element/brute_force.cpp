#include<iostream>
#include <vector>
using namespace std;
int main(){

    vector<int> first = {1,2,2,2,1,2,1};
    int n = first.size(); 
    for(int i : first){
        int freq = 0;
        for(int j : first){
            if( i == j){
                freq++;
            } 
        }
        if(freq > n/2){
            cout<<i<<endl;
            cout<<freq;
            break;
        }
    }
    

    return 0;
}