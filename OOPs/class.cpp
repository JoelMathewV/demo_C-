#include<iostream>
using namespace std;
class employee{
    public:
    string name;
    int age;
    string company;

    void Introduce(){
        cout<<"name = "<<name<< endl;
        cout<<"age = "<<age<< endl;
        cout<<"company = "<< company << endl;
    }

};
int main(){
    employee joel;
    joel.name = "joel";
    joel.age = 19;
    joel.company = "google";
    joel.Introduce();

    return 0;
}