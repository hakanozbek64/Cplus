#include <cstdlib>
#include <iostream>

using namespace std;

double topla (double a,double b)// double tipi topla fonksiyonu
{
double toplam;
toplam=a+b;
return toplam;

}

int main(int argc, char *argv[])
{
    
    
    // BURAYA FONKSÝYON TANIMLANAMAZ
     double sayi1,sayi2;
     double sonuc;
     cout<<"1.sayiyi girin: ";
     cin>>sayi1;
     
     cout<<"2.sayiyi girin:";
     cin>>sayi2;
    
    sonuc=topla (sayi1,sayi2);
    
    cout<<"girdiginiz sayilarin toplamai:"<<sonuc<<endl;
    
    
    
    
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
