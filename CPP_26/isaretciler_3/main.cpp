#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
      
int x[10]={1,2,3,4,5,6,7,8,9,10};

int *ix;

ix=&x[4];

cout<<*ix+1<<endl;
    
    

    system("PAUSE");
    return EXIT_SUCCESS;
}
