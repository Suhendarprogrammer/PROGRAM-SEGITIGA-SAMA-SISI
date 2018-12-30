#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cout<<"***********PROGRAM SEGITIGA SAMA SISI**********\n";
    cout<<"================================================\n";
    cout<<"\nMasukkan Nilai Sisi A  : ";
    cin>>a;
    cout<<"\nMasukkan Nilai Sisi B  : ";
    cin>>b;
    cout<<"\nMasukkan Nilai Sisi C  : ";
    cin>>c;
    cout<<"\n======================================\n";
    if (a==b && a==c)
        cout<<"Segitiga Tersebut Adalah Sama Sisi : ";
    else
        cout<<"Segitiga Tersebut Bukan Sama Sisi    : ";
    return 0;
}
