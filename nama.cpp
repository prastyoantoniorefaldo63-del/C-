
#include <iostream>
using namespace std;
int main() {
     string nama;
    string sekolah, ulang;
    do{
    cout<<"masukkan nama: "<<endl;
    cin>>nama;
    cout<<"masukkan nama sekoklah mu ";
    cin>>sekolah;
    cout<<"nama mu adalah ";
    cout<<nama <<endl;
    cout<<"Sekolah mu di ";
    cout<<sekolah<<endl;
    cout<<"apakah anda mau mengulang, tekan y atau Y ";
    cin>>ulang;
    }
    while(ulang=="y"|| ulang=="Y");
    system("pause");
    return 0;
        
}
