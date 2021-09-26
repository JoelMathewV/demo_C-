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

    employee(string Name, string Company, int Age){
        name = Name;
        company = Company;
        age = Age;
    }

};
int main(){
    employee joel = employee("joel", "amazon", 19);
    //joel.name = "joel";
    //joel.age = 19;
    //joel.company = "google";
    joel.Introduce();

    return 0;
}