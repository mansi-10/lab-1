# include <stdio.h>
# include <string.h>
 
int main( )
{
    FILE *fp ;
    char data[50];
    // opening an existing file
    printf( "Opening file test.c" ) ;
    fp = fopen("test.c", "w") ;
    if ( fp == NULL )
    {
        printf( "Could not open file test.c" ) ;
        return 1;
    }
    printf( "Enter some text into file test.c" ) ;
    // getting input 
    while ( strlen ( gets( data ) ) > 0 )
    {
        // writing into file
        fputs(data, fp) ;   
        fputs("\n", fp) ;
    }
    // closing the file
    printf("Closing the file test.c") ;
    fclose(fp) ;
    return 0;        
}