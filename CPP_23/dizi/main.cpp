#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    char a[5];// char tipinde a ad�nda 5 elmanl� bir dizi
    
    cout<<"isim:";//kullan�c�dan bu diziye deger atamas�n� istiyoruz.
    cin>>a;
    
    for (int i=0;i<5; i++)
    {// for ile dizi boyutu kadar sayd�r�yoruz.
          
    cout<<endl;
    cout<<a[i]<<endl;//dizinin elemanlar�n� a[i] ile alt alta karekter �eklinde  yazd�r�yoruz.
    }
    
    cout<<endl;      
          

    
    system("PAUSE");
    return EXIT_SUCCESS;
}
