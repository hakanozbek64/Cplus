#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[])
{
    string cevap="";
    sor:
    
    cout<<"dersler nasil(ÝYÝ-KOTU):"<<endl;
    cin>>cevap;
    
    
    if(cevap=="ÝYÝ")
    cout<<" güzel basarýlý býr ogrencisin..!!!"<<endl;
    else if(cevap=="KOTU")
    cout<<"o zaman calýþmaya devam..!"<<endl;
    else 
    goto sor;
    
    
    
  
    system("PAUSE");
    return EXIT_SUCCESS;
}
