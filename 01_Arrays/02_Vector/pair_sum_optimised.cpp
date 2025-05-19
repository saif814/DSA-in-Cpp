#include <iostream>
#include <vector>
using namespace std;

vector<int> sum(vector<int>& vec , int target){
    vector<int> ans;
    int n = vec.size();
    int i = 0; int j = n-1;
    while(vec[i] < vec[j]){
        int pairsum = vec[i] + vec[j];
        if(pairsum > target){
            j--;
        }else if(pairsum < target){
            i++;
        }else{
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }   

}
int main(){

    vector<int> vec = {1,2,3,4,5,6,7,8};
    int target = 15;
    vector<int> ans = sum(vec , target);
    cout<<vec[ans[0]]<<" "<<vec[ans[1]]<<endl;
    

    return 0;
}