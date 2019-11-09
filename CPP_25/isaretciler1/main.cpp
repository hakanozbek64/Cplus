#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int a=4;
    int *is;
    
    is=&a;
    cout<<is;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
