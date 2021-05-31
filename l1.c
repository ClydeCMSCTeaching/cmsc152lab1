#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include  <string.h>

#include "utils.h"
#include "l1.h"

// example function in main .c file
void base_convert(int num, unsigned int b) {
    // todo, this is just printing
    printf("%i\n", num);
}

void print_available_programs() {
   char program_list[3][3-] = {"base_convert num base", 
                "print_letters a",
                "print_hex a"};
}


// int main(int argv, const char **args) is boilerplate code for the main function of your program.
// over the quarter we will get to understand all the parts, but for now just commit it to memory. 
// argv is the number of arguments provided, and argv is the argument values.
// You access them by argv[0] is always the program name, argv[1] is the first argument provided, etc. 
int main(int argv, const char **args){
    if (argv <= 1) {
        printf("You did not pick a program from:\n");
        print_available_programs();
        printf("Quitting.\n");
        return 0;
    }

    const char *program_name = args[1];
    printf("You chose the program ");
    printf("%s", program_name);
    printf(".\n");

    if (strcmp(program_name, "base_convert") == 0) {
        if (argv != 4) {
            printf("base_convert needs two arguments.\n the number, num, and the base desired, b.\n");            
            printf("Exiting.");
            return 0;
        }   
        int num = atoi(args[2]); // atoi: https://www.cplusplus.com/reference/cstdlib/atoi/
        int base = atoi(args[3]); 
        base_convert(num, base);
    } 

    return 1;
}