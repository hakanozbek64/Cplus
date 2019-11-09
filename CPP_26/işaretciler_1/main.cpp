#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    
    int x[10]={0,1,2,3,4,5,6,7,8,9,};

int *ix=&x[4];

cout<<ix<<endl;
cout<<*ix<<endl;
cout<<&ix<<endl;
    
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
