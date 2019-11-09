#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int x;
    int y;
    
    for(x=1;x<=10;x++)
    {
      for(y=1;y<=10;y++)                
         {  
           cout<<x<<"*"<<y<<"="<<x*y<<endl;                                        
         }            
                      
}
      
    system("PAUSE");
    return EXIT_SUCCESS;
}
