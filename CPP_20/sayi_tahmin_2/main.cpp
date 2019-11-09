#include <cstdlib>
#include <iostream>
#include <windows.h>
using namespace std;
int sayiturev(int aralik)
{
   srand(GetTickCount()); 
    int sayi= rand()%aralik;//sayi aralıgı
   return sayi;// sayi degeri dönsün
}


int main(int argc, char *argv[])
{
      int gsayi;
      int dsayi;
      int sayac=10;
      cout<<"sayi tahmim oyunu 2.00"<<endl<<endl;
      
      dsayi =sayiturev(100);
      
      sor:
      cout<<"sayinizi 1-100 arasında girin";   
     
      cin>>gsayi;
      
      if(sayac !=0){
     if(gsayi==dsayi){
                      
      cout<<"tebrikler sayi dogru"<<endl;                
                      
     }
    
    else if (gsayi<dsayi){
         
      cout<<"sayi kucuk lutfen daha buyuk bir sayi girin !!"<<endl;   
       sayac--;
       goto sor;  
    }
    else if(gsayi>dsayi){
         
    cout<<"sayi buyuk lutfen daha kuçuk bir sayi girin"<<endl;
     sayac--;
      goto sor;
    }
}


else if(sayac==0){
     
    cout<< "üzgünüz hakkınız kalmadi...!"<<endl;
     }
    system("PAUSE");
    return EXIT_SUCCESS;
}
