system("cls");
    int nimDicari;

    cout<<endl;

    cout<<"Cari NIM: ";
    cin>>nimDicari;

    fa.open(namaFile, ios::in | ios::out);
    while (fa.read((char*) &data, sizeof (data)))
    {
        if(data.getNim() == nimDicari)
        {
            data.outputData();
            cout<<"Silahkan Masukkan Perubahan Data:"<<endl;
            data.inputData();

            int pos=-1*sizeof(data);
            fa.seekp(pos, ios::cur);
            fa.write((char*) &data, sizeof (data));
            break;
        }
    }
    fa.close();
