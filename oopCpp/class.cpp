
#include<iostream>
using namespace std;
class Car{
    public:
        string name;
        string brand;
        string color;
        int age;
        //constactor...
        Car(string x,string y,string z,int a){
            name = x;
            brand = y;
            color = z;
            age = a;
        }
};
int main(){
    Car object1("F1","Ferarir","blue",25);
    Car object2("XM","BMW","NaveBlue",5);
    Car object3("v19","mastang","red",10);
    cout << object1.name<<'\t'<<object1.brand<<'\t'<<object1.color<<'\t'<<object1.age<<endl<<endl;
    cout << object2.name<<'\t'<<object2.brand<<'\t'<<object2.color<<'\t'<<object2.age;
    cout << object3.name<<'\t'<<object3.brand<<'\t'<<object3.color<<'\t'<<object3.age;

    return 0;
}
