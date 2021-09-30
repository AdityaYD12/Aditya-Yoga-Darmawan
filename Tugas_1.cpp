#include <iostream>
using namespace std;
int main()
{
    float jari_jari,tinggi,luas_tabung,luas_selimut,volume,phi,mode;
    phi = 3.14;

    cout<<"Aplikasi ini dapat menghitung Volume Tabung, Luas Tabung, dan Luas Selimut Tabung"<<endl;
    cout<<" "<<endl;
    cout<<"Ketik 1 jika ingin menghitung Volume Tabung."<<endl;
    cout<<"Ketik 2 jika ingin menghitung Luas Tabung."<<endl;
    cout<<"Ketik 3 jika ingin menghitung Luas Selimut Tabung."<<endl;
    cout<<" "<<endl;

    cin>>mode;
    if (mode==1)
    {
        cout<<"Masukkan Jari-jari Tabung "<<endl;
        cin>>jari_jari;

        cout<<"Masukkan Tinggi Tabung "<<endl;
        cin>>tinggi;

        volume = phi*jari_jari*jari_jari*tinggi;

        cout<<"Volume Tabung tersebut adalah "<<volume<<endl;
    }
    else if (mode==2)
    {
        cout<<"Masukkan Jari-jari Tabung "<<endl;
        cin>>jari_jari;

        cout<<"Masukkan Tinggi Tabung "<<endl;
        cin>>tinggi;

        luas_tabung = 2*(2*phi*jari_jari*jari_jari)+(2*phi*jari_jari*tinggi);

        cout<<"Luas Tabung tersebut adalah "<<luas_tabung<<endl;
    }
    else if (mode==3)
    {
        cout<<"Masukkan Jari-jari Tabung "<<endl;
        cin>>jari_jari;

        cout<<"Masukkan Tinggi Tabung "<<endl;
        cin>>tinggi;

        luas_selimut = 2*phi*jari_jari*tinggi;

        cout<<"Luas Selimut Tabung tersebut adalah "<<luas_selimut<<endl;
    }

}
