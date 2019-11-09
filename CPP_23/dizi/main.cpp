#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    char a[5];// char tipinde a adýnda 5 elmanlý bir dizi
    
    cout<<"isim:";//kullanýcýdan bu diziye deger atamasýný istiyoruz.
    cin>>a;
    
    for (int i=0;i<5; i++)
    {// for ile dizi boyutu kadar saydýrýyoruz.
          
    cout<<endl;
    cout<<a[i]<<endl;//dizinin elemanlarýný a[i] ile alt alta karekter þeklinde  yazdýrýyoruz.
    }
    
    cout<<endl;      
          

    
    system("PAUSE");
    return EXIT_SUCCESS;
}
