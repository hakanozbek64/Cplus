#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int i=5;
    int *i_pointer;
    float f=2.5;
    float *f_pointer;
    
    i_pointer=&i;
    f_pointer=&f;
    
    cout<<"i_pointer iþatercisinin gösterdigi adres :"<<i_pointer<<endl;
    cout<<"i_pointer iþatercisinin gösterdigi adresteki veri:"<<*i_pointer<<endl;
    
    cout<<"f_pointer iþatercisinin gösterdigi adres:"<<f_pointer<<endl;
    cout<<"f_pointer iþatercisinin gösterdigi adresteki veri:"<<*f_pointer<<endl;
    
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
