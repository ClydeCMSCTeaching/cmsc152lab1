/*
* Put your names here please.
*/ 
#ifndef L1_H
#define L1_H
// Header files begin compiler directives, indicated by #.
// read: if not defined, L1_H, define L1_H. 

// Comments can be expressed in many different ways (google), but
// this the most typical type of comments you will see.

#include <stdio.h>
#include <stdlib.h>
// These are stanard libs and used often. 

// Inside this big if statement, we write out what we are going to code in the .c file.
// The .h file might not include all the functions in the .c file, but it should include
// the main functions your client or audience would be curious to see. 

/* ss 
 * exponentiation by successive squaring 
 * inputs:
 *   int num - the base
 *   unsigned int b - the base
 * output:
 *   void - prints to terminal the number in base b
 * */
void base_convert(int num, unsigned int b);

void print_letters(unsigned int a);

void print_hex(unsigned int a);

void print_number_in_words(unsigned int a);

void run_birthday_paradox(unsigned int num_people);

int iuniform_random_number_generator(int low, int high);

double duniform_random_number_generator(double low, double high);

double normal_random_number_generator_bm(double mu, double std);

double normal_random_number_generator(double mu, double std);

void print_linear_random_walker(unsigned int line_size, unsigned int runs);

void print_normal_random_walker(unsigned int line_size, unsigned int runs);

void print_histogram(double *data);

#endif
