int banyak;
    cout<<"Amount of students: ";
    cin>>banyak;

    for(int a=1; a<=banyak; a++)
    {
        system("cls");
        data.inputData();
        fo.open(namaFile, ios::binary | ios::app);

        fo.write((char*) &data, sizeof (data));
        fo.close();
    }
