
#include<iostream>
using namespace std;
struct stdunt {
   std::string name;
    float gpa;
    bool enroll;
};
int main(){
    stdunt Stdunt1;
    Stdunt1.name = "Habib";
    Stdunt1.gpa = 3.99;
    Stdunt1.enroll = true;

    cout << Stdunt1.name<< endl<< Stdunt1.gpa<<endl<< Stdunt1.enroll ;

    return 0;
}
