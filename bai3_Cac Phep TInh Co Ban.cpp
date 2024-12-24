// bai3_Cac Phep TInh Co Ban.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    cout << "Cac Phep Tinh Co Ban:\n";
    /*
    double so1, so2;

    cout << "Nhap so 1:";
    cin >> so1;
    cout << "Nhap so 2:";
    cin >> so2;

    double Tong = so1 + so2;
    cout << "Tong 2 so tren la:" << Tong;
    */

    double so1, so2;

    cout << "Nhap so 1:";
    cin >> so1;
    cout << "Nhap so 2:";
    cin >> so2;

    double tong = so1 + so2, hieu = so1 - so2, tich = so1 * so2, thuong = so1 / so2;
    cout << "\ntong 2 so tren la:" << tong;
    cout << "\nhieu 2 so tren la:" << hieu;
    cout << "\ntich 2 so tren la:" << tich;
    cout << "\nthuong 2 so tren la:" << thuong << endl;
    cout << so1 << "+" << so2 << "=" << tong << endl;
    cout << so1 << "-" << so2 << "=" << hieu << endl;
    cout << so1 << "*" << so2 << "=" << tich << endl;
    cout << so1 << "/" << so2 << "=" << thuong;

}

