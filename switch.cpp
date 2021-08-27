#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter the first no";
    cin>>a;
    int b;
    cout<<"enter the 2nd no";
    cin>>b;
    char c;
    cout<<"enter the operator";
    cin>>c;

    switch (c) {
        case '+':
            cout<< a + b <<endl;
            break;

        case '-':
            cout<<a-b<<endl;
            break;

        case '*':
            cout<<a*b<<endl;
            break;

        case '/':
            cout<<a/b<<endl;
            break;

        default:
            cout<<"invalid operator"<<endl;
            break;
    }
    return 0;
}