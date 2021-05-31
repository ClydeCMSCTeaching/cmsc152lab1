#include <stdio.h>

#include "l1.h"

#define NPROGS 4

void base_convert(unsigned int num, unsigned int b){
    //Algorithm to Convert From Decimal To Another Base
    //
    //Let n be the decimal number.
    //Let m be the number, initially empty, that we are converting to. We'll be composing it right to left.
    //Let b be the base of the number we are converting to.
    //Repeat until n becomes 0
    //Divide n by b, letting the result be d and the remainder be r.
    //Write the remainder, r, as the leftmost digit of b.
    //Let d be the new value of n.

    // if something {
    //  think of what the base case means for m
    // }
    //
    // do something else which results eventually in the prior something
    //
}

double normal_random_number_generator_bm(double mu, double std) {
    // do not use any random number function from C directly in this code block.

    return 0.0;
}

double normal_random_number_generator(double mu, double std) {
    // try to use a standard library function to do this.
    // if you can't find one, try to compute a random normal distribution transform from a unifrom random sample
    return 0.0;
}



void print_available_programs() {
    char *program_list[NPROGS] = {"base_convert num base",
                             "print_letters a",
                             "print_hex a",
                             "finish this listing..."};

    for (int i = 0; i < NPROGS; i++) {
        printf("Program %i -- %s\n", i, program_list[i]);
    }
}