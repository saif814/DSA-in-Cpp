// THe best approch to find the majority element

#include<iostream>
#include<vector>
using namespace std;
int main(){

    vector<int> first = {1,2,2,2,2,2,2,1,1,1,1};
    int freq = 0; int ans = 0;
    for(int i = 0; i < first.size(); i++){
        if(freq == 0){
            ans = first[i];
        }if(ans == first[i]){
            freq++;
        }else{
            freq--;
        }
           
    }
    cout<<ans<<endl;
   
    return 0;
}