/*  Nama  : Muhammad Irsyad Rafi Saputra
    NRP   : 5024211034
    Kelas : Pemrograman Lanjut A          */

#include <iostream>
#include "include/PersegiPanjang.hpp"

using namespace std;

//ClearScreen Function: clears the terminal using both "system("cls")" (for cmd) or "system("clear")" (for powershell & unix based terminal)
void ClearScreen(){
    system("cls||clear");
}

int main(){
    ClearScreen();
    int menu, menu_static, menu_op5;
    float xTengah, yTengah, panjang, lebar;
    PersegiPanjang Hasil, Temp;

    cout << "TUGAS PROLAN 3 - OVERLOADING PERSEGI PANJANG" << endl; 
    cout << "--------------------------------------------" << endl;
    cout << "Nama  : Muhammad Irsyad Rafi Saputra" << endl; 
    cout << "NRP   : 5024211034" << endl;
    cout << "Kelas : Pemrograman Lanjut A" << endl << endl;
    cout << "Tekan ENTER Untuk Masuk Ke Menu Program";
    cin.ignore();

    ClearScreen();
    cout << "Input Persegi Panjang" << endl;
    cout << "---------------------" << endl;
    cout << "Persegi Panjang 1:" << endl << endl;
    cout << "Titik Tengah X: ";
    cin >> xTengah;
    cout << "Titik Tengah Y: ";
    cin >> yTengah;
    cout << "Panjang: ";
    cin >> panjang;
    cout << "Lebar: ";
    cin >> lebar;
    PersegiPanjang P1(xTengah, yTengah, panjang, lebar);

    ClearScreen();
    cout << "Input Persegi Panjang" << endl;
    cout << "---------------------" << endl;
    cout << "Persegi Panjang 2:" << endl << endl;
    cout << "Titik Tengah X: ";
    cin >> xTengah;
    cout << "Titik Tengah Y: ";
    cin >> yTengah;
    cout << "Panjang: ";
    cin >> panjang;
    cout << "Lebar: ";
    cin >> lebar;
    PersegiPanjang P2(xTengah, yTengah, panjang, lebar);

    ClearScreen();
    cout << "Properti Persegi Panjang" << endl;
    cout << "------------------------" << endl;
    cout << "Persegi Panjang 1:" << endl;
    P1.print();
    cin.ignore();cin.ignore();

    ClearScreen();
    cout << "Properti Persegi Panjang" << endl;
    cout << "------------------------" << endl;
    cout << "Persegi Panjang 2:" << endl;
    P2.print();
    cin.ignore();

    // MENU
    while(menu_static==0){
        ClearScreen();
        cout << "TUGAS PROLAN 3 - OVERLOADING PERSEGI PANJANG" << endl;
        cout << "--------------------------------------------" << endl;
        cout << "Operasi Apakah Yang Ingin Anda Lakukan?: " << endl;
        cout << "  1. +" << endl;
        cout << "  2. -" << endl;
        cout << "  3. ++" << endl;
        cout << "  4. --" << endl;
        cout << "  5. []" << endl;
        cout << "  6. ==" << endl;
        cout << "  0. Keluar Program" << endl << endl;
        cout << "-> Silahkan memilih salah satu: ";
        cin >> menu;
        cout << endl;
        switch (menu){
            case 1:{
                if(P1==P2){
                    ClearScreen();
                    Hasil=P1+P2;
                    cout << "Hasil Penambahan Persegi Panjang 1 Dengan Persegi Panjang 2:" << endl;
                    cout << "------------------------------------------------------------" << endl;
                    Hasil.print();
                    cin.ignore(); cin.ignore();
                    break;}
                else{
                    cout << "Persegi Panjang Tidak Beririsan" << endl << endl << "Tekan ENTER Untuk Menutup Program"; 
                    cin.ignore(); cin.ignore(); 
                    return 0;
                    }
            }
            case 2:{
                if(P1==P2){
                    ClearScreen();
                    Hasil=P1-P2;
                    cout << "Hasil Pengurangan Persegi Panjang 1 Dengan Persegi Panjang 2:" << endl;
                    cout << "------------------------------------------------------------" << endl;
                    Hasil.print();
                    cin.ignore(); cin.ignore();
                    break;
                    }
                else{
                    cout << "Persegi Panjang Tidak Beririsan" << endl << endl << "Tekan ENTER Untuk Menutup Program"; 
                    cin.ignore(); cin.ignore(); 
                    return 0;
                    }
            }
            case 3:{
                ClearScreen();
                Temp = P1;
                P1++;
                cout << "Persegi Panjang 1 ++" << endl;
                P1.print();
                P1 = Temp;
                cin.ignore(); cin.ignore();

                ClearScreen();
                Temp = P2;
                P2++;
                cout << "Persegi Panjang 2 ++" << endl;
                P2.print();
                P2 = Temp;
                cin.ignore();
                break;
            }
            case 4:{
                ClearScreen();
                Temp = P1;
                P1--;
                cout << "Persegi Panjang 1 --" << endl;
                P1.print();
                P1 = Temp;
                cin.ignore(); cin.ignore();

                ClearScreen();
                Temp = P2;
                P2--;
                cout << "Persegi Panjang 2 --" << endl;
                P2.print();
                P2 = Temp;
                cin.ignore();
                break;
            }
            case 5:{
                ClearScreen();
                cout << "Nilai Apakah Yang Ingin Dilihat?: " << endl;
                cout << "  1. xMin" << endl;
                cout << "  2. yMin" << endl;
                cout << "  3. xMax" << endl;
                cout << "  4. yMax" << endl << endl;
                cout << "-> Silahkan memilih salah satu: ";
                cin >> menu_op5;
                switch (menu_op5){
                    case 1:{
                        ClearScreen();
                        cout << "Nilai xMin" << endl;
                        cout << "----------" << endl;
                        cout << "Persegi Panjang 1: " << P1[1] << endl; 
                        cout << "Persegi Panjang 2: " << P2[1] << endl << endl;
                        cout << "Tekan ENTER Untuk Kembali Ke Menu Utama";
                        cin.ignore(); cin.ignore();
                        break;  
                    }
                    case 2:{
                        ClearScreen();
                        cout << "Nilai yMin" << endl;
                        cout << "----------" << endl; 
                        cout << "Persegi Panjang 1: " << P1[2] << endl; 
                        cout << "Persegi Panjang 2: " << P2[2] << endl << endl;
                        cout << "Tekan ENTER Untuk Kembali Ke Menu Utama";
                        cin.ignore(); cin.ignore();
                        break;  
                    }
                    case 3:{
                        ClearScreen();
                        cout << "Nilai xMax" << endl; 
                        cout << "----------" << endl; 
                        cout << "Persegi Panjang 1: " << P1[3] << endl; 
                        cout << "Persegi Panjang 2: " << P2[3] << endl << endl;
                        cout << "Tekan ENTER Untuk Kembali Ke Menu Utama";
                        cin.ignore(); cin.ignore();
                        break;  
                    }
                    case 4:{
                        ClearScreen();
                        cout << "Nilai yMax" << endl; 
                        cout << "----------" << endl; 
                        cout << "Persegi Panjang 1: " << P1[4] << endl; 
                        cout << "Persegi Panjang 2: " << P2[4] << endl << endl;
                        cout << "Tekan ENTER Untuk Kembali Ke Menu Utama";
                        cin.ignore(); cin.ignore();
                        break;  
                    }
                    default:{
                        ClearScreen();
                        cout << "Pilihan Tidak Ditemukan..." << endl;
                        cout << "Tekan ENTER Untuk Kembali Ke Menu Utama";
                        cin.ignore(); cin.ignore();
                        break;
                    }   
                }
                break;
            }
            case 6:{
                if(P1==P2) {
                    ClearScreen();
                    cout << "Persegi Panjang Beririsan" << endl << endl << "Tekan ENTER Untuk Kembali Ke Menu"; 
                    cin.ignore(); cin.ignore();
                    break;
                }
                else {
                    ClearScreen();
                    cout << "Persegi Panjang Tidak Beririsan" << endl << endl << "Tekan ENTER Untuk Menutup Program"; 
                    cin.ignore(); cin.ignore(); 
                    return 0;
                }
            }
            case 0:{
                ClearScreen();
                return 0;
                }
            default:{
                ClearScreen();
                cout << "Pilihan Tidak Ditemukan..." << endl;
                cout << "Tekan ENTER Untuk Kembali Ke Menu Utama";
                cin.ignore(); cin.ignore();
                break;
            }
        }
    }
}

