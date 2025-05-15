// Find the minimum value in an array

#include <iostream>
using namespace std;
int main(){

    int first[] = {23,5,13,-323,345};

    int maximum = INT8_MIN;
    int smallest = 0;

    // for(int i = 0; i <sizeof(first)/4; i++){
    //     // if(first[i]<maximum){
    //     //     smallest = first[i];
    //     // }
        
    // }

    for(int i : first){
        smallest = min(first[i],maximum);
    }

    cout<<"Your smallest element is "<<smallest<<endl;

    return 0;
}