#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include "l1.h"


int main() {
    int par_sorted_array[] = {3, 7, 9, 0, 0, 0};
    int s_array[] = {3, 5, 2, 4, 1};
    int d_array[5];
    char word_rut[] = {'R', 'U', 'T'};

    srand(time(NULL)); // randomize random seed for random number generators

    // I am only putting one line in for each to make sure it compiles
    // you need to write your own test code

    //exercise 1: print numbers
    print_number(21);

    //exercise 2: convert decimal to hexadecimal
    print_hex(31);

    //exercise 3: print_asterisk_word
    print_asterisk_word(word_rut, 3);

    //exercise 4: print_asterisk_word
    print_asterisk_shape(5);

    //exercise 5a: insert_into_array
    insert_into_array(par_sorted_array, 3, 6, 4);

    //exercise 5b: sort
    sort(s_array, d_array, 5);

    //exercise 6a: uniform random
    uniform_random();

    //exercise 6b: uniform random ints in a range
    uniform_random_int_range(0, 100);

    //exercise 6c: uniform random doubles in a range
    uniform_random_double_range(0, 50.0);

    //exercise 7a: normal random from box-mueller transform
    normal_random_number_generator_bm();

    //exercise 7b: normal random from Marsaglia polar method
    normal_random_number_generator_mpm();

    //exercise 7c: normal random from ratio method
    normal_random_number_generator_ratiomethod();

    //exercise 7d: normal random in (mu, std) range by method of your choice
    normal_random_number(10, 5);
}
