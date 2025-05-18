#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> first = {1,2,3,4,5};
    for(int i : first){
        cout<<i<<endl;
    }

    vector<char> second = {'a','f','t','h','y'};
    for(char i : second){
        cout<<i<<endl;
    }

    return 0;
}