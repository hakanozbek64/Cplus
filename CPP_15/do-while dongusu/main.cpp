#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
  system("color 2b");
  
  
  int x;
  
  do{
      
  cout<<"bir sayi girin(cikmak icin 0)";
  cin>>x;
  cout<<"girdiginiz sayi "<<x<<endl;
  
}

while(x!=0);
     
    system("PAUSE");
    return EXIT_SUCCESS;
}
