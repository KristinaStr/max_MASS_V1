#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main()

{
    for( std::string string; std::getline( std::cin, string ); ) 
    {
        int numbers[ 10 ];
        std::istringstream stream( string );
        bool failure = false;
        for( int i = 0; i < 10; ++i ) 
        {
            if( !( stream >> numbers[ i ] ) ) 
            {
                failure = true;
                break;
            }
        }
        
        if( !failure ) 
        {
           int max=0;
            for( int i = 1; i < 10; ++i )
            {
                 if (numbers[max]<numbers[i])
                      max=i;
            }
    cout<<numbers[max]<<endl;
        }
        else 
        {
            std::cout << "An error has occured while reading numbers from line" << std::endl;
        }
    }
    cin.get();
    return 1;
}
