#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int sayi;
    int toplam;
    int i;
    
    
    cout<<"faktoriyeli alinacak sayiyi girin:";
    cin>>sayi;
    
    i=1;
    toplam=1;
    
    while(i<sayi){
                  
    i=i+1;
    toplam=toplam*i;
    
}

cout<<sayi<<"!="<<toplam<<endl;
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
