#include <iostream>
#include <vector>
using namespace std;

int kadanes(vector<int>& vec){
    int maximum = INT16_MIN;
    int currentsum = 0;
    for(int num : vec){
        currentsum += num;
        maximum = max(currentsum , maximum);
        if(currentsum<0){
            currentsum = 0;
        }
    }
    return maximum;
}

int main(){

//###################################################################################
//  vector<int> vec;
//  vec.push_back(3);
//  vec.push_back(-4);
//  vec.push_back(5);
//  vec.push_back(-1);
//  vec.push_back(7);
//  vec.push_back(-8);

// int n = vec.size();
// int maximum = INT16_MIN;
//  for(int i = 0; i < n; i++){
//     int maximum = INT16_MIN;
//     int sum = 0;
//     for(int j = i; j < n; j++){
//         sum += vec[j];
//         maximum = max(sum , maximum);
//     }
//     cout<<maximum<<endl;
//  }
//#####################################################################################


vector<int> vec = {3,-4,5,4,-1,7,-8};

cout<<kadanes(vec);

return 0;

}