
#include <iostream>
using namespace ::std;
int main(){
    char operate;
    double a, b,result;
    cout << "\t -------CONSOLE CALCULATOR------------- \n \n ";
    cout << "\t --Select your operator--\n \t --Addition \"+\" \n ";
    cout << "\t ---substaction \" - \"\n \t ---multipication \" * \"\n";
    cout << "\t ---divition \" / \" \n";
    cin >> operate;
    cout << "\t--Enter your tow number-- \n \t--First number --\n ";
    cin >> a;
    cout << "\t--Socund number--\n";
    cin >> b;
    if(operate=='+'){
        result = a + b;
    }else if(operate=='-'){
        result = a - b;
    }else if(operate=='*'){
        result = a * b;
    }else if(operate=='/'){
       result = a / b;
    }else{
        cout << "\n \t wrong operator! ";
        return 0;
    }
    cout << "\t Your result is: " << result;
    
    return 0;
}
