#include <iostream>
using namespace std;
int main(){

    int first[] = {34,53,22,65,34,1};
    int minimum = INT8_MAX;
    int maximum = INT8_MIN;
    int minindex = -1;
    int maxindex = -1;

//######################################################################################

    // for(int i = 0; i < sizeof(first)/4; i++){
    //     if(first[i]>minimum){
    //         minimum = first[i];
    //     }
    // }
    // cout<<minimum;

//#######################################################################################    

    // for(int i : first){
    //     if(i>minimum){
    //         minimum = i;
    //     }
    // }
    // cout<<minimum;

//#######################################################################################    

    // for(int i = 0; i < sizeof(first)/sizeof(first[0]); i++){
    //     minimum = min(first[i],minimum);
        
    //     maximum = max(first[i],maximum);
        
    // }


//////////////////////  For finding the index too  //////////////////////////////////////

    for(int i = 0; i < sizeof(first)/sizeof(first[0]); i++){
        if(first[i]<minimum){
            minimum = first[i];
            minindex = i;
        }
        if(first[i]>maximum){
            maximum = first[i];
            maxindex = i;
        }

    }


    

    cout<<"Smallest "<<minimum<<" "<<minindex<<endl;
    cout<<"Largest "<<maximum<<" "<<maxindex<<endl;

    return 0;
}