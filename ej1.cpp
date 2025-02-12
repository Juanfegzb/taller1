#include <iostream>
using namespace std;
int main(){
    int a;
    int b;
    
    cout << "dame el numero a";
    cin >> a;
    cout << "dame el numero b";
    cin >> b;
    int suma = a + b;
    int resta = a - b;
    int multi = a * b;
    float division = a / b;
    float modulo = a % b;

    cout<< suma << endl;
    cout<< resta << endl;
    cout<< multi<< endl;
    cout<< division<< endl;
    cout<< modulo<< endl;

return 0;
}
