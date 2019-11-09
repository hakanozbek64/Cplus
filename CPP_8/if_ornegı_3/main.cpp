#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
  int not1,not2;
  int ortalama;
  
  ortalama_al:
              
  cout<<"1. notunuzu girin:";
  cin>>not1;
  
  if((not1<0)||(not1>100)) { goto ortalama_al;}
  
  ortalama_al2:
               
   cout<<"2.notunuzu girin:";
   cin>>not2;
  if((not2<0)||(not2>100)) { goto ortalama_al;}
  
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
