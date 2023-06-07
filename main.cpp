#include <iostream>

using namespace std;
int x, y;
int wybor;

int main() {
    cout<<"Podaj liczbe 'x':"<<endl;
    cin>>x;
    cout<<"Podaj liczbe 'y':"<<endl;
    cin>>y;
    cout<<"Wybory:"<<endl;
    cout<<""<<endl;
    cout<<"1. Dodowanie, 2. Odejmowanie, 3. Mnozenie, 4. Dzielenie"<<endl;
    cout<<""<<endl;
    
    cin>>wybor;
    
    switch(wybor) {
        case 1:
        cout<<"Wynik z dodawania: "<<x + y<<endl;
        break;
        
        case 2:
        cout<<"Wynik z odejmowania: "<<x - y<<endl;
        break;
        
        case 3:
        cout<<"Wynik z mnozenia: "<<x * y<<endl;
        break;
        
        case 4:
        if(y == 0) {
            cout<<"Nie mozna dzielic przez 0!"<<endl;
            cout<<"Podaj jeszcze raz liczbe 'y':"<<endl;
            cin>>y;
        }
        cout<<"Wynik z dzielenia: "<<x / y<<endl;
        break;
        
        default: cout<<"Nie ma takiego wyboru jak: "<<wybor<<"!!!"<<endl;
    }
   

    return 0;
}
