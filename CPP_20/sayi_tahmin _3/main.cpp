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
      int sayac=10;
      int karar2;
      cout<<"sayi tahmim oyunu 2.00"<<endl<<endl;
      
      dsayi =sayiturev(100);
      
      sor:
          do{
      cout<<"sayinizi 1-100 aras�nda girin ";   
     
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
         
    cout<<"sayi buyuk lutfen daha ku�uk bir sayi girin"<<endl;
     sayac--;
      goto sor;
    }
}


else if(sayac==0){
     
    cout<< "uzgunuz hakkiniz kalmadi...!"<<endl;
     
     karar2=tekrar();
     
     }
     }
     
     while(karar2==1);
     
    system("PAUSE");
    return EXIT_SUCCESS;
}
