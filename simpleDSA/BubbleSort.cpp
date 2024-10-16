
//Bubble short

#include <iostream>
using namespace std;

int main(){
    //arr
    int arr[] = {23,1,53,2,7,8,3,9,6};

    //logic
    int N = size(arr);
    for (int i = 0; N > i;i++){
        for (int j = 0; N > j;j++){
if(arr[i]<arr[j]){
    int temp;
    temp = arr[j];
    arr[j] = arr[i];
    arr[i] = temp;
}

        }
    }
    //output
    for (int k = 0; size(arr) > k;k++){

        cout << arr[k]<<endl;
    }
    return 0;
}
