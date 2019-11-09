#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    
    int  *a,b=25;
a=&b;

cout<<a<<endl;
cout<<b<<endl;
*a=30;

cout<<*a<<endl;
cout<<a<<endl;
cout<<b<<endl;
    
    
    
    
    
    
    
    
    
    
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
