#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    char a[5];// char tipinde a adında 5 elmanlı bir dizi
    
    cout<<"isim:";//kullanıcıdan bu diziye deger atamasını istiyoruz.
    cin>>a;
    
    for (int i=0;i<5; i++)
    {// for ile dizi boyutu kadar saydırıyoruz.
          
    cout<<endl;
    cout<<a[i]<<endl;//dizinin elemanlarını a[i] ile alt alta karekter şeklinde  yazdırıyoruz.
    }
    
    cout<<endl;      
          

    
    system("PAUSE");
    return EXIT_SUCCESS;
}
