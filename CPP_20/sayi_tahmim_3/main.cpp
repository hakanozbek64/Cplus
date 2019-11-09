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
      int sayac=6;
      int karar2;
      system("color 5d");
      
      
      cout<<"sayi tahmim oyunu 2.00"<<endl<<endl;
      
      dsayi =sayiturev(100);
      
      sor:
          do{
      sayac=2;
                            
      cout<<"sayinizi 1-100 arasında girin ";   
     
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
     
    cout<< "uzgunuz hakkiniz kalmadi...!"<<endl;
     
     karar2=tekrar();
     
     }
     }
     
     while(karar2==1);
     
    system("PAUSE");
    return EXIT_SUCCESS;
}
