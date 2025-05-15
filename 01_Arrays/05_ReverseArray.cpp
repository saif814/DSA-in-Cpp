#include <iostream>
using namespace std;

void function(int first[],int size){
    int start = 0; int end = size - 1;
    while(start < end){
        swap(first[start],first[end]);
        start++; 
        end--;
    }
}

int main(){

    int first[] = {24,54,67};
    int size = 3;
    function(first,size);
    for(int i = 0; i< size; i++){
        cout<<first[i];
    }
    return 0;
}