#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    
  int sayi,b;
   begin:
    
    printf("baslangic sayisini girin: ");
    scanf("%d",&sayi);
    
    printf("bitis sayisini girin: ");
    scanf("%d",&b);
    
     if(sayi>b){
       printf("lütfen degeri a>b olacak sekilde girin:\n\a ");
     
     goto begin;
     }
     
              while (sayi<b) printf ("aralarindaki sayilar : %d\n",sayi++);
  
  system("PAUSE");	
  return 0;
}
