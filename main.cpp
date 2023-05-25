#include <iostream>

using namespace std;

float x, y;
int wybor;

int main()
{
    cout<<"Podaj pierwsza liczbe: "<<endl;
    cin>>x;
    cout<<"Podaj druga liczbe: "<<endl;
    cin>>y;
    cout<<"---------------------"<<endl;
    cout<<""<<endl;
    cout<<"Wybory: "<<endl;
    cout<<""<<endl;
    cout<<"Mnozenie - 1"<<endl;
    cout<<"Dzielnie - 2"<<endl;
    cout<<""<<endl;
    cout<<"---------------------"<<endl;


    cout<<"Wybierz opcje: 1 lub 2"<<endl;
    cin>>wybor;

    if(wybor) {
        if(wybor == 1) {
            cout<<x * y<<endl;
        }
        if(wybor == 2) {
            cout<<x / y<<endl;
        }
    } else {
        cout<<"Nie ma takiego wyboru"<<endl;
    }


    return 0;
}
