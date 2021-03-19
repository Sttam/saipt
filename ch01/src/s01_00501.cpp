/*


   Date           : 2020/05/27
   Author         : Matts


   Purpose        : Providing an opportunity to the compiler to carry out an optimization

   Instructions   : 

   Quiz yourself  :
                      1.  What can the compiler do with it?
                          It can optimize and pass the pointer or reference to the reading.
                      2.  Listen to the song https://www.youtube.com/watch?v=Wo6L9P1xvlM
                      3.  Vaylar in 1970 National award winning

*/

#include <iostream>
#include <string.h>

const int buf_max_len{200};

void ReadSong( const char s[] );
void WriteSong( char s[] );

using namespace std;

int main(){
  
    char mysong[buf_max_len]; 
   
    WriteSong( mysong );
    ReadSong( mysong );

    cout << mysong << endl;
    
    

    return EXIT_SUCCESS;
}
void WriteSong( char s[] ){
    strncpy( s, "Almost heaven, West Virginia \n"
                "Blue Ridge Mountains, Shenandoah River\n"
                "Life is old there, older than the trees\n"
                "Younger than the mountains, growin' like a breeze\n", buf_max_len );    
}   

void ReadSong( const char s[] ){

    for( auto i{0}; i++ < buf_max_len; )
         s[i];
}   
