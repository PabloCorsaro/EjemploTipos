#include <iostream>

using namespace std;

int main()
{
    double f;
    unsigned e;
    char d;
    string c;
    bool b;
    int a;

    cout << "cual es tu nombre?" << endl;
    cin >> c;

    cout << "Y tu edad?" << endl;
    cin >> e;

    cout << "Tu sexo? (M  para mujer, H para hombre.)" << endl;
    cin >> d;

    cout << "Lo que respondiste es cierto? (0 para no,  1 para si)" << endl;
    cin >> b;

    if(b == 1)
    {
        cout << "ahora que ya contestaste el primer cuestionario" << endl;
        cout << "dime... que numero dividido 5 da como resultado 4." << endl;
        cin >> a;

        if(a == 20)
        {
            cout << "es correcto." << endl;
        }
        else
        {
            cout << "incorecto..." << endl;
        }
    }

    cout << "Puedes usar un float para guardar variables de coma flotante." << endl;
    f = 100000*100000;
    cout << "Por ejemplo, si multiplicamos 1000000 al cuadrado da como resultado... " << f << endl;

    return 0;
}
