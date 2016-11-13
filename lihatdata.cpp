system("cls");

    fi.open(namaFile, ios::binary);
    while (fi.read((char*) &data, sizeof(data)))
    {
        data.outputData();
    }
    fi.close();
