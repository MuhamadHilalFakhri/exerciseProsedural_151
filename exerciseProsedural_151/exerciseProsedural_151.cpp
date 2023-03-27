#include <iostream>
using namespace std;

double rerata(double a, double b)
{
    return (a + b) / 2;
}
string status(double d)
{
    if (d >= 70)
        return "Diterina";
    else
        return "Ditolak";
}
string status2(double r, double n)
{
    if (r >= 70 && n >= 80)
        return "Diterima";
    else
        return "Ditolak";

}
int main()
{
    double nilM, nilB;
    string nama;

    cout << "masukkan nama : ";
    cin >> nama;
    cout << "masukkan nilai matematika : ";
    cin >> nilM;
    cout << "masukkan nilai bahasa inggris : ";
    cin >> nilB;
    cout << "status kelulusannya " << status2(rerata(nilM, nilB), nilM);

}