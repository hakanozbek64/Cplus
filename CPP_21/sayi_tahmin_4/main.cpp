#include <cstdlib>
#include <iostream>
#include <windows.h>
using namespace std;
int sayiturev(int aralik)
{
   srand(GetTickCount()); 
    int sayi= rand()%aralik;//sayi aral�g�
   return sayi;// sayi degeri d�ns�n
}
int tekrar(){
    int karar;
    cout<<"tekrar oynar misiniz  ?(E-1/H-0)"<<endl;
    cin>>karar;
    
    return karar;
    
}



int main(int argc, char *argv[])
{
      int gsayi;
      int dsayi;
      int sayac=9;//10 hak verdim
      int karar2;
      system("color 5d");
      
      
      cout<<"sayi tahmim oyunu 2.00"<<endl<<endl;
      
      dsayi =sayiturev(100);
      
      sor:
          do{
      sayac=2;
                            
      cout<<"sayinizi 1-100 aras�nda girin (c�kmak i�in -1) ";   
     
      cin>>gsayi;
      if(gsayi !=-1){
      if(sayac !=0){
               
     if(gsayi==dsayi){
                      
      cout<<"tebrikler sayi dogru"<<10-sayac<<". hakk�n�zda"<<endl;                
           sayac=10;
            karar2=tekrar();
            dsayi=sayiturev(100);          
     }
    
    else if (gsayi<dsayi){
         
      cout<<"sayi kucuk lutfen daha buyuk bir sayi girin !!"<<endl;   
       sayac--;
       goto sor;  
    }
    else if(gsayi>dsayi){
         
    cout<<"sayi buyuk lutfen daha ku�uk bir sayi girin"<<endl;
     sayac--;
      goto sor;
    }
}


else if(sayac==0){
     
    cout<< "uzgunuz hakkiniz kalmadi...!"<<endl;
     cout<<"sayimiz:"<<dsayi<<endl;
     sayac=10;
     dsayi=sayiturev(100);
     karar2=tekrar();
     
     }
     }
     else if(gsayi== -1){exit;}
     }while(karar2==1);
     
    system("PAUSE");
    return EXIT_SUCCESS;
}
