#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int sayi1;
    cout<<"bir sayi girin:";
    cin>>sayi1;
    
    if(sayi1>0)
    cout<<"sayi pozitif"<<endl;
    else if (sayi1<0)
    cout<<"sayi negatif"<<endl;
    else
    cout<<"sayi 0'dir"<<endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
