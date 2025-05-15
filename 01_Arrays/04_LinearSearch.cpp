#include <iostream>
using namespace std;

int function(int first[],int size,int target){
    for(int i = 0; i < size; i++){
        if(first[i] == target){
            return i;
        }
    }
    return -1;
}
int main(){

    int first[] = {12,45,23,46,75,34,24};
    int size = 7;
    int target = 7;
    
    cout<<function(first,size,target);
    
    return 0;
}