#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[])
{
    string cevap="";
    sor:
    
    cout<<"dersler nasil(�Y�-KOTU):"<<endl;
    cin>>cevap;
    
    
    if(cevap=="�Y�")
    cout<<" g�zel basar�l� b�r ogrencisin..!!!"<<endl;
    else if(cevap=="KOTU")
    cout<<"o zaman cal��maya devam..!"<<endl;
    else 
    goto sor;
    
    
    
  
    system("PAUSE");
    return EXIT_SUCCESS;
}
