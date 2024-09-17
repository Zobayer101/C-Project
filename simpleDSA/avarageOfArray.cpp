
#include <iostream>
using namespace std;
float ArrayAvg(int ar[], int lth){
    int i = 0;
    float hold = 0;
    for (i; lth > i;i++){
        hold += ar[i];
    }
        return hold/lth;
}
int main(){
   
    int arr[] = {7,6,7,4,34,223,2};
    
   float value= ArrayAvg(arr,size(arr));
   cout << "The avarage value of array: "<<value;
   return 0;
}
