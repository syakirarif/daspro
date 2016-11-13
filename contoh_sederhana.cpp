#include <iostream>
#include <fstream>
#include <conio.h>
#include <string.h>
 
using namespace std; 
 
typedef struct mahasiswa
{
    char nim[10], nama[50];
} mahasiswa;
 
int main()
{
    ifstream fi; // membaca
    ofstream fo; // menulis
    mahasiswa mhs;
    char carinim[10];
    int n;
 
    /**
    * kode dibawah ini adalah untuk write data ke dalam file.
    */
    cout << "Masukkan jumlah mahasiswa: ";
    cin >> n;
    fo.open("mhs.dat", ios::binary | ios::app);
    for(int i=1; i<=n; i++)
    {
        cout << "\nMahasiswa " << i;
        cout << "\nNIM: ";
        cin >> mhs.nim;
        cout << "Nama: ";
        cin >> mhs.nama;
        fo.write((char *) &mhs, sizeof(mhs)); // menulis ke file
    }
    fo.close();
 
    /**
    * kode dibawah ini adalah untuk read data dari file.
    */
    fi.open("mhs.dat", ios::binary);
    int j = 1;
    while(fi.read((char *) &mhs, sizeof(mhs)))
    {
        cout << "\nMahasiswa: " << j++;
        cout << "\nNIM: " << mhs.nim;
        cout << "\nNama: " << mhs.nama;
    }
    fi.close();
 
    /**
    * kode dibawah ini untuk melakukan searching
    */
    cout << "\nMasukkan nim yang mau dicari: ";
    cin >> carinim;
    fi.open("mhs.dat", ios::binary);
    while(fi.read((char *) &mhs, sizeof(mhs)))
    {
        if(strcmp(mhs.nim, carinim) == 0)
        {
            cout << "\nData Ditemukan: ";
            cout << "\nNIM: " << mhs.nim;
            cout << "\nNama: " << mhs.nama;
        }
    }
    fi.close();
    getch();
    return 0;
}
