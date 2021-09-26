#include<iostream>
using namespace std;
class employee{

    string name;
    int age;
    string company;

    public:
    void setName(string Name){              //encapsulation
        name = Name;
    }
    string getName(){
        return name;
    }
    void Introduce(){
        cout<<"name = "<<name<< endl;
        cout<<"age = "<<age<< endl;
        cout<<"company = "<< company << endl;
    }

    employee(string Name, string Company, int Age){         //constructor
        name = Name;
        company = Company;
        age = Age;
    }

};
int main(){
    employee joel = employee("joel", "amazon", 19);
    joel.Introduce();
    joel.setName("noel");
    cout<<joel.getName()<<endl;
    return 0;
}