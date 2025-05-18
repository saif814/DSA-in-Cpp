#include <iostream>
using namespace std;
int main(){

    int first[5] = {1,2,3,4,5};
    for(int i = 0; i < sizeof(first)/4; i++){
        int maximum = 0;
        for(int j = i; j < sizeof(first)/4; j++){
            
            int sum = 0;
            for(int k = i; k <= j; k++){
                sum += first[k];
            }
            
            cout<<sum<<" ";
            maximum = max(maximum , sum);     
        }
        cout<<endl;
        cout<<"Your maximum sun at index "<<i<<" is "<<maximum<<endl;
       
    }

    return 0;
}