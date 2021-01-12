#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double A;
    double B;
    double media;

    cin >> fixed >> setprecision(1);
    cin >> A >> B;
    cout << fixed << setprecision(5);

    media = (A * 3.5 + B * 7.5) / 11;
    cout << "MEDIA = " << media << setprecision(5) << endl;

    return 0;
}
