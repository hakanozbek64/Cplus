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
      cout<<"sayi tahmim oyunu 2.00"<<endl<<endl;
      
      dsayi =sayiturev(100);
      
      sor:
      cout<<"sayinizi girin:";
      cin>>gsayi;
     if(gsayi==dsayi){
                      
      cout<<"tebrikler sayi dogru"<<endl;                
                      
     }
    
    else if (gsayi<dsayi){
         
      cout<<"sayi kucuk lutfen daha buyuk bir sayi girin !!"<<endl;   
       goto sor;  
    }
    else if(gsayi>dsayi){
         
    cout<<"sayi buyuk lutfen daha kuçuk bir sayi girin"<<endl;
      goto sor;
    }
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
