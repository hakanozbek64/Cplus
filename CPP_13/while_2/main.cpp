#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
   int ilk_sayi,son_sayi; 
   
   git:
       cout<<"ilk sayi girin:";
       cin>>ilk_sayi;
       
       cout<<"son sayiyi girin:";
       cin>>son_sayi;
       
       if(ilk_sayi< son_sayi){
       
       while(ilk_sayi<son_sayi){
       
       ilk_sayi=ilk_sayi+1;
       
       cout<<ilk_sayi<<endl;
       
       }
}
    
    else if(ilk_sayi>son_sayi){
        
        while(ilk_sayi>son_sayi){
        ilk_sayi=ilk_sayi-1;                              ;
        cout<<ilk_sayi<<endl;

  }
}   
    
  else {
       
       cout<<"lutfen 2 sayiyi da ayni degerde girmeyiniz...!!"<<endl;
       goto git;
       
       
       }  
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
