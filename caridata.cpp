int cari ()
{
    int nimDicari, ketemu=0;
    Database nilai, nilaiKetemu;
    
    cout<<"Cari NIM: ";
    cin>>nimDicari;

    fi.open(namaFile, ios::binary);
    while(fi.read( (char*)&nilai, sizeof(nilai)))
    {
        if(nilai.getNim()== nimDicari)
        {
            nilaiKetemu = nilai;
            ketemu = 1;
            break;
        }
    }
    if(ketemu == 0)
        cout<<"Nim: "<<nimDicari<<" WAS NOT FOUND!"<<endl;
    else
    {
        nilaiKetemu.outputNilai();
        cout<<"Nim: "<<nimDicari<<" WAS INCLUDED TO DATABASE!"<<endl;
    }
    fi.close();

}
