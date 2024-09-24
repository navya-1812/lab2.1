#include <stdio.h>
#include <stdlib.h>

/*Navya Ahuja, ahujan6, Date for today
Description
*/

/*Name of function
list of non-obvious parameters and short description
description of this function (if-non-obvious)
description of return value, output, etc 
for main, dont have to list argc, and argv, 
and dont have to state everything from the file header comment for main
BUT if using multiple functions for program, specify what maind does 
If you're declaring variable and its not obvious from  name what its used for,
add // tag comment and brief explaination */


int main(int argc, char *argv[]) { //argc parameter is type int. argv parameter is array of type char * aka an array of strings
    puts(argv[0]);
    if (argc > 1) {
        puts(argv[1]);
    }
    if (argc > 2) {
        puts(argv[2]);
    }
    return EXIT_SUCCESS;

}