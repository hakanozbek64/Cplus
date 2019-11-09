#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int sayi1;
    cout<<"bir sayi girin :";
    cin>>sayi1;
    cout<<(sayi1%2 ==1 ? " sayi tek" : "sayi cift");
    
    system("PAUSE");
    return EXIT_SUCCESS;
    
}
