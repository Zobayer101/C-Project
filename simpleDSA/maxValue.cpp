

#include<iostream>
using namespace std;
int main(){
    int arr[] = {55,3,22,90,21,53,33,6,21,9,42,22,53,11,42};
    int i = 0, temp = arr[0], index;
    for (i; size(arr) > i;i++){
        if(temp <arr[i]){
            temp = arr[i];
            index = i;
           
        }
    }
    cout << "Maximum value : "<<temp<<endl<<"index value :"<<index;
    return 0;
}
