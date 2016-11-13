int nimDicari, ketemu=0;
    Database data, nilaiKetemu;

    system("cls");
    cout<<"Cari NIM: ";
    cin>>nimDicari;

    system("cls");
    fi.open(namaFile, ios::binary);
    while(fi.read( (char*)&data, sizeof(data)))
    {
        if(data.getNim()== nimDicari)
        {
            nilaiKetemu = data;
            ketemu = 1;
            break;
        }
    }
    if(ketemu == 0)
        cout<<"Nim: "<<nimDicari<<" WAS NOT FOUND!"<<endl;
    else
    {
        nilaiKetemu.outputData();
        cout<<"Nim: "<<nimDicari<<" WAS INCLUDED TO DATABASE!"<<endl;
    }
    fi.close();
    cout<<endl;
