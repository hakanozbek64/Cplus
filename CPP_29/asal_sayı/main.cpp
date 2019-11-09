#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    
    system ("color 5a");
    
    int i,mod,f,kadar;
    cout<<"kaca kadar asal sayi turetelim ? :";
    cin>>kadar;
    cout<<endl;
    
    cout<<"asal sayi:"<<2<<endl;
    for(i=3;i<=kadar;i++)
    {
        for (f=2;f<i;f++)
        {
              
          mod=i%f;
            if(mod==0) goto git;
             
        }                 
       cout<<"asal sayi:"<<f<<endl; 
       git:
      continue;                
    }
    
    cout<<endl;
    

    system("PAUSE");
    return EXIT_SUCCESS;
}
