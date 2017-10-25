#include <iostream>
int main()
 {
    using namespace std;
    
    int tab[ 10 ]={20,34,1,3,56,34,76,23,23,4};
    int najwiekszy;
int najmniejszy;


najwiekszy = tab[ 0 ]; 
najmniejszy = tab[ 0 ]; 

for( int i = 1; i < 10; i++ )
{
    if( tab[ i ] > najwiekszy )
         najwiekszy = tab[ i ]; 
    
    if( tab[ i ] < najmniejszy )
         najmniejszy = tab[ i ]; 
    
}
   cout<<najwiekszy<<endl;
   cout<<najmniejszy<<endl;
    
    
    
    
    
    
    
    
    
    
    return 0;
}
