#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int sayi1;
    cout<<"bir sayi girin:";
    cin>>sayi1;
    
    if(sayi1>0)
    cout<<"sayi pozitif";
    else if (sayi1<0)
    cout<<"sayi negatif";
    else
    cout<<"sayi 0'dir";
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
