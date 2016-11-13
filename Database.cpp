class Database
{
public:
    char nama[50], daerah[50];
    int n,noabsen,nim,bln,brp;

    void inputData()
    {
        cout<<"No Absen: ";
        cin>>noabsen;
        cout<<"Nim     : ";
        cin>>nim;
        cout<<"Nama    : ";
        cin>>nama;
        cout<<"Daerah  : ";
        cin>>daerah;
    }

    void outputData()
    {
        cout<<"NO  : "<< noabsen<<endl;
        cout<<"NIM : "<< nim<<endl;
        cout<<"Nama: "<<nama<<endl;
        cout<<"---------------------------"<<endl;
    }

    int getNim()
    {
        return nim;
    }
};
