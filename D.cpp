#include <iostream>
using namespace std;

int main(){
    int n = 5;
    int arr[5] = {2,0,0,4,5};
    
    int j = 0; // index ki postion h ---> arr 0 , 2 nhi kyuki 2 zero position ki value h

    for(int i=0; i < n; i++){
        if(arr[i] != 0){ // we are looking at non zero elements 
            swap(arr[i], arr[j]);
            j++;
        }
    }

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}
