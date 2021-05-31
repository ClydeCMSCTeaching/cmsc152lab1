/**
 * Collection of useful bits I'd transfer lab to lab for debugging,
 * or hacking some minor solutions (or just using because they are useful!)
 **/


/**
 * Print cmd args to terminal for debugging.
 **/

#include <stdio.h>

void print_arguments(int argc, const char **argv){
    for (int i = 1; i < argc; i++){
        printf("Argument %d: [%s]\n", i, argv[i]); 
    }
}