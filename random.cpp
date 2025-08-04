#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){

    cout << "=========[ Gacha Games ]=========" << endl;
    cout << "Tips Main :" << endl;
    cout << "1. Jika dapat Bulan Maka dapat 2 poin" << endl;
    cout << "2. Jika dapat Bumi Maka dapat 4 poin" << endl;
    cout << "3. Jika dapat Matahari Maka dapat 6 poin" << endl;
    int container = 0;
    srand(time(0));
    for (int i = 0; i < 5; i++)
    {  
        char contain;
        cout << "Mau main (y/n) : ";
        cin >> contain;
        if (contain == 'y'){
        {
            int target = 1 + (rand () % 3); // 1-3 untuk Bulan, Bumi, Matahari
            cout << "Kamu mendapatkan : ";
            if (target == 1) {
                cout << "Bulan" << endl;
                int poin = 2;
                container += poin;
            } else if(target == 2) {
                cout << "Bumi" << endl;
                int poin = 4;
                container += poin;
            } else if(target == 3) {
                cout << "Matahari" << endl;
                int poin = 6;
                container += poin;
            }
            }
        }else if (contain == 'n'){
            cout << "Kamu tidak mendapatkannya :)" << endl;
            break;
        }else{
            cout << "Kamu Salah Mengetiknya coba lagi" << endl;
        }
        
    }
    cout << "Total poin yang didapat : " << container << endl;
    cout << "Terima kasih telah bermain!" << endl;
    cin.get();   
    return 0;
}