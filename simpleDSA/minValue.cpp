
#include<iostream>
using namespace std;
int main(){
    int arr[] = {60,82,9,22,99,4,21,56,24,11,9,8,43,7};
    int temp = arr[0];
    int i = 0,index;
    for (i; size(arr) > i;i++){
        if(temp >arr[i]){
            temp = arr[i];
            index = i;
        }
    }
        cout <<"mimimum value is : "<< temp<<endl;
        cout <<"index position : "<< index;
        return 0;
}
