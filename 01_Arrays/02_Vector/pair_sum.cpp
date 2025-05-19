#include <iostream>
#include <vector>
using namespace std;

vector<int> sum(vector<int>& vec , int target){
    vector<int> ans;
    int n = vec.size();
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(vec[i] + vec[j] == target){
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }

}
int main(){

    vector<int> vec = {1,2,3,4,5,6,7,8};
    int target = 9;
    vector<int> ans = sum(vec , target);
    cout<<ans[0]<<" "<<ans[1]<<endl;

    return 0;
}