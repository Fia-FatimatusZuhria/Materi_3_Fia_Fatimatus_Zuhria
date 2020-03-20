#include <iostream>
using namespace std;

int main ()
{
    int paket;

    cout<<"Masukkan Paket Hemat McDonald's ke -: ";
    cin>>paket;

    switch(paket) {
    case 1:
        cout<<"Paket Hemat Double Cheeseburge (Double Cheeseburger + Medium French Fries + Medium Drink)"<<endl;
        break;
    case 2:
        cout<<"Paket Hemat McChicken (McChicken + Medium French Fries + Medium Drink)"<<endl;
        break;
    case 3:
        cout<<"Paket Hemat McSpicy (McSpicy + Medium French Fries + Medium Drink)"<<endl;
        break;
    case 4:
        cout<<"Paket Hemat Fish Fillet Burget (Fish Fillet Burget + Medium French Fries + Medium Drink)"<<endl;
        break;
    case 5:
        cout<<"Paket Hemat McNuggets (McNuggets + Medium French Fries + Medium Drink)"<<endl;
        break;
    default :
        cout<<"Paket yang anda pilih tidak ada."<<endl;
        break;

    }
return 0;
}
