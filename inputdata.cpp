int banyak;
    cout<<"Amount of students: ";
    cin>>banyak;

    for(int a=1; a<=banyak; a++)
    {
        system("cls");
        Database nilai;
        nilai.inputNilai();
        fo.open(namaFile, ios::binary | ios::app);

        fo.write((char*) &nilai, sizeof (nilai));
        fo.close();
    }
