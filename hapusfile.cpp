int nimDicari;
    cout<<"Cari NIM: ";
    cin>>nimDicari;

    fi.open(namaFile, ios::binary);
    fo.open("cadangan.dat", ios::out | ios::binary);

    int ketemu=0;
    while (fi.read((char*)&data, sizeof(data)))
    {
        if (data.getNim() != nimDicari)
            fo.write((char*)&data, sizeof(data));
        else
            ketemu=1;
    }
    fi.close();
    fo.close();

    remove(namaFile);
    rename("cadangan.dat", namaFile);

    if(ketemu==1)
        cout<<"Mahasiswa dengan NIM "<<nimDicari<<" TELAH DIHAPUS!"<<endl;
    else
        cout<<"Mahasiswa dengan NIM "<<nimDicari<<" TIDAK DITEMUKAN!"<<endl;
    system("pause");
    lihat();
