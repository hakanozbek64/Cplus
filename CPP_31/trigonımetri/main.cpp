#include <cstdlib>
#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char *argv[])
{
    
    double radyan;
    double derece;
    double pi=3.1415;
    
    cout<<"aciyi girin:";
    cin>>derece;
    
    radyan=(derece*pi)/180;
    
    cout<<"acinin radyan cinsinden degeri:"<<radyan<<endl;
    
    cout<<"Sin("<<derece<<")="<<sin(radyan)<<endl;
      
      cout<<"Cos("<<derece<<")="<<cos(radyan)<<endl;
        
        cout<<"Tan("<<derece<<")="<<tan(radyan)<<endl;
         
           cout<<"Cot("<<derece<<")="<<cos(radyan)/sin(radyan)<<endl;  
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
