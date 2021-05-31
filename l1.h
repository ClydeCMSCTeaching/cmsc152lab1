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

/*
 * inputs:
 *   int num - the base
 *   unsigned int b - the base
 * output:
 *   void - prints to terminal the number in base b
 * */
void base_convert(unsigned int num, unsigned int b);

/*
 * Print
 */
void print_letters(unsigned int a);

/**
 * @param a : number to be printed in hex (base 8)
 */
void print_hex(unsigned int a);

/**
 * @param a : number to be printed in english words. Error if >99
 */
void print_number_in_words(unsigned int a);

/**
 * Use the Taylor series expansion of the birthday paradox to compute it for a
 * Number of people in the room
 * @param num_people in a room
 * @return the probaility from computing the birthday paraddox
 */
double run_birthday_paradox(unsigned int num_people);

/**
 * @param low number [inclusive]
 * @param high number [exclusion)
 * @return uniform random int number from [inclusive, exlsusive)
 */
int iuniform_random_number_generator(int low, int high);

/**
 * @param low number [inclusive]
 * @param high number [exclusion)
 * @return uniform random double number from [inclusive, exlsusive)
 */
double duniform_random_number_generator(double low, double high);

/**
  * @param mu : normal mean
 * @param std : normal standard deviation
 * @return a double number sampled from a normal distribution computed by box-mueller transform
 */
double normal_random_number_generator_bm(double mu, double std);

/**
  * @param mu : normal mean
 * @param std : normal standard deviation
 * @return a double number sampled from a normal distribution from a standard library algorithm
 */
double normal_random_number_generator(double mu, double std);

void print_linear_random_walker(unsigned int line_size, unsigned int runs);

void print_normal_random_walker(unsigned int line_size, unsigned int runs);

void print_histogram(double *data);


// UTILITY

/*
 * Prints the list and arguments for the main prograns.
 */
void print_available_programs();

#endif
