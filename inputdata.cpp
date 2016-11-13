int banyak;
    cout<<"Amount of students: ";
    cin>>banyak;

    for(int a=1; a<=byk; a++)
    {
        system("cls");
        data.inputData();
        fo.open(namaFile, ios::binary | ios::app);

        fo.write((char*) &data, sizeof (data));
        fo.close();
    }
