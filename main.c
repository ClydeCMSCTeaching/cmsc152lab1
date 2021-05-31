//
// Created by Austin Clyde on 5/31/21.
//
#include <stdio.h>
#include <stdlib.h>
#include  <string.h>

#include "l1.h"

void print_arg_error(char *error_msg){
    printf("ERROR: %s\n", error_msg);
    print_available_programs();
    printf("Quitting.\n");
}

// int main(int argv, const char **args) is boilerplate code for the main function of your program.
// over the quarter we will get to understand all the parts, but for now just commit it to memory.
// argv is the number of arguments provided, and argv is the argument values.
// You access them by argv[0] is always the program name, argv[1] is the first argument provided, etc.
int main(int argv, const char **args) {
    if (argv <= 1) {
        print_arg_error("Please pick a program");
        return 0;
    }

    const char *program_name = args[1];
    printf("You chose %s.\n", program_name);

    // You will need one of these for all the programs.
    if (strcmp(program_name, "base_convert") == 0) {
        if (argv != 4) {
            print_arg_error("Wrong arguments.");
            return 0;
        }
        int num = atoi(args[2]); // atoi: https://www.cplusplus.com/reference/cstdlib/atoi/
        int base = atoi(args[3]);
        base_convert(num, base);
    }

    return 1;
}

