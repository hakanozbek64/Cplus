#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
  int sayi1;
  
  soru:
  
  cout<<"1-7 arasinda bir sayi girin:";
  cin>>sayi1;
  
  while((sayi1<1)||(sayi1>7))
  {
   cout<<"lutfen 1-7 arasýnda bir sayi girin..."<<endl;
   goto soru;
}

cout<<"girdiginiz sayi 1-7 arasindadir..."<<endl;

    
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
