#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    
    char karekter;
    
    cout<<"bir karekter girin:";
    cin>>karekter;
    

    switch(karekter)
{
   case 'e':

         cout<<"girdiginiz karekter e "<<endl; break;

         case 'a':

              cout<<"girdiginiz karekter a <<endl"; break;

               case 'c':
       
                    cout<<"girdiginiz karekter c "<<endl;break;
    
        }
    
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
