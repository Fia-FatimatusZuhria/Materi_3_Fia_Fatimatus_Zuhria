#include <iostream>
using namespace std;

int main()
{
    float smt1,smt2,smt3,smt4,smt5,smt6,smt7,smt8,nilai;

    cout<<"Masukkan nilai IP semester 1 : ";
    cin>>smt1;

    cout<<"Masukkan nilai IP semester 2 : ";
    cin>>smt2;

    cout<<"Masukkan nilai IP semester 3 : ";
    cin>>smt3;

    cout<<"Masukkan nilai IP semester 4 : ";
    cin>>smt4;

    cout<<"Masukkan nilai IP semester 5 : ";
    cin>>smt5;

    cout<<"Masukkan nilai IP semester 6 : ";
    cin>>smt6;

    cout<<"Masukkan nilai IP semester 7 : ";
    cin>>smt7;

    cout<<"Masukkan nilai IP semester 8 : ";
    cin>>smt8;

    nilai = (smt1+smt2+smt3+smt4+smt5+smt6+smt7+smt8)/8;

    if(nilai >= 3.8)
        cout<<"IPK anda ="<<nilai<<"Selamat, anda berhak mendapat peluang Beasiswa Great. "<<endl;

    else
        cout<<"IPK anda ="<<nilai<<"Mohon maaf, IPK anda belum memenuhi persyaratan. Tetap semangat, pantang menyerah."<<endl;

return 0;
}


