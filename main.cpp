#include <iostream>

using namespace std;

int wybor, x, y;

void input() {
    cout<<"Podaj pierwsza liczbe:"<<endl;
    cin>>x;
    cout<<"Podaj druga liczbe:"<<endl;
    cin>>y;
}

int main()
{
    cout<<"Wybierz co chcesz zrobic:"<<endl;
    cout<<""<<endl;
    cout<<"1. Mnozenie"<<endl;
    cout<<"2. Dzielenie"<<endl;
    cout<<""<<endl;

    cin>>wybor;

    switch(wybor) {
    case 1:
        input();
        cout<<"Wynik z mnozenia: "<<x * y<<endl;
        break;
    case 2:
        input();
        while(y == 0) {
            cout<<"Nie mozna dzielic przez 0 podaj jeszcze raz liczbe:"<<endl;
            cin>>y;
        }
        cout<<"Wynik z dzielenia: "<<x / y<<endl;
    }
    return 0;
}
