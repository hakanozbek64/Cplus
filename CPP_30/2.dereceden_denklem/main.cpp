#include <cstdlib>
#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char *argv[])
{
    double a,b,c,x1,x2,dis;
    cout<<"a(x^2)+bx+c=0"<<endl;
    cout<<"a'yi girin:";
    cin>>a;
    cout<<"b'yi girin:";
    cin>>b;
    cout<<"c'yi girin:";
    cin>>c;
    
    
    cout<<"denklemimiz :"<<a<<"(x^2)"<<"+"<<b<<"x"<<"+"<<c<<"=0"<<endl<<endl;
    
    
    dis=(b*b)-(4*a*c);
    
    x1=(-b-sqrt(dis))/(2*a);
    x2=(-b+sqrt(dis))/(2*a);
    
    cout<<"denkelemin kökleri:C={"<<x1<<","<<x2<<"}"<<endl<<endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
