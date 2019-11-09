#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
  int not1,not2;
  int ortalama;
  
  
  cout<<"1. notunuzu girin:";
  cin>>not1;
  
  cout<<"2.notunuzu girin:";
  cin>>not2;
  
  ortalama=(not1+not2)/2;
  
  if(ortalama>50) {
                 cout<<ortalama<<"_notunda gectiniz"<<endl;
                 }
  else if(ortalama<50){
                cout<<ortalama<<"_notunda kaldiniz"<<endl;
                }
  else{
       cout<<"tam 50'de gectiniz !"<<endl;
       }      
 
    system("PAUSE");
    return EXIT_SUCCESS;
}
