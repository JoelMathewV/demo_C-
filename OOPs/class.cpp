#include<iostream>
using namespace std;
class abstractEmp{                          //abstraction
    virtual void AskForPromotion()=0;
};
class employee:abstractEmp{

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
    void setAge(int Age){              //encapsulation
        age = Age;
    }
    int getAge(){
        return age;
    }
    void setCompany(string Company){              //encapsulation
        company = Company;
    }
    string getCompany(){
        return company;
    }
    void Introduce(){
        cout<<"name = "<<name<< endl;
        cout<<"age = "<<age<< endl;
        cout<<"company = "<< company << endl;
    }
    void AskForPromotion(){                     //abstraction
        if(age>20){
            cout<<"u r promoted"<<endl;
        }
        else{
            cout<<"sorry u r not promoted"<<endl;
        }
    }

    employee(string Name, string Company, int Age){         //constructor
        name = Name;
        company = Company;
        age = Age;
    }

};

class developer: public employee{                   //inheritance
    public:
    string lang;
    developer(string name, string company, int age, string Lang)
        :employee(name, company, age)
    {
        lang = Lang;
    }
};
int main(){
    developer a = developer("joel", "YT", 19, "C++");
    a.AskForPromotion();
    return 0;
}