#include <iostream>
using namespace std;

double rerata(double a, double b) {
    return (a + b) / 2;
}

string status(double r) {
    if (r >= 60) {
        return "Diterima";
    }
    else {
        return "Ditolak";
    }
}

string status2(double r, double n) {
    if (r >= 60 && n >= 70) {
        return "Diterima";
    }
    else {
        return "Ditolak";
    }
}

string status3(double r, double n) {
    if (r >= 60 || n >= 70) {
        return "Diterima";
    }
    else {
        return "Ditolak";
    }
}


int main() {
    double nilaiMath, nilaiBinggris;


    cout << "Masukkan nilai matematika : ";
    cin >> nilaiMath;
    cout << "Masukkan nilai bahasa inggris : ";
    cin >> nilaiBinggris;

    //rerata = (nilaiMath + nilaiBindo)/2;

    //rata = rerata(nilaiMath + nilaiBinggris);
    //st = status(rerata(nilaiMath, nilaiBinggris));

    // if (rata >= 80){
    //     status = "lulus";
    // }else {
    //       status = "gagal";
    // }

    cout << "nilai rata-rata nya : " << rerata(nilaiMath, nilaiBinggris);
    cout << "\nStatus kelulusannya : " << status(rerata(nilaiMath, nilaiBinggris));
    cout << "\nStatus kelulusannya : " << status2(rerata(nilaiMath, nilaiBinggris), nilaiMath);
    cout << "\nStatus kelulusannya : " << status3(rerata(nilaiMath, nilaiBinggris), nilaiMath);
}