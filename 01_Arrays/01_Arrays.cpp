#include<iostream>
using namespace std;

int main(){

    int first[10] = {1,2,3,4,5,6};
    cout<<first[8]<<endl; //output 0

    int second[] = {11,22,33,44,55};
    for(int i : second){
        cout<<i<<endl;
    }

    //to get the size of array 
    cout<<sizeof(second)/4;

    for(int i = 0; i < sizeof(first)/4; i++){
        cout<<first[i]<<endl;
    }

    return 0;
}