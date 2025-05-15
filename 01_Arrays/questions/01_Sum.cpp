#include <iostream> 
using namespace std;
int main(){

    int first[] = {1,2,3,4,5};
    int sum = 0;
    for(int i = 0; i < sizeof(first)/sizeof(first[0]); i++){
        sum += first[i];
    }

    cout<<"Your total sum "<<sum<<endl;
    
    return 0;
}