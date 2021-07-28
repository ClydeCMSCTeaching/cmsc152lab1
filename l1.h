/*
* Put your names here please.
*/
#ifndef L1_H
#define L1_H
// Header files begin compiler directives, indicated by #.
// read: if not defined, L1_H, define L1_H. 

// Comments can be expressed in many different ways (google), but
// this the most typical type of comments you will see.

void print_number(unsigned int a);

/**
 * @param a : number to be printed in hex (base 8)
 */
void print_hex(unsigned int a);

/* print_asterisk_word
 * given a letter, print the corresponding upper-case word in sterisks
 * inputs:
 *   char[] - a character array
 *   unsigned int length - the number of letters in the character array
 * output:
 *   prints out, but does not return, the word in the array
 */
void print_asterisk_word(char word[], unsigned int length);

/* print_asterisk_shape
 * give the height parameter, print a shape with asterisks
 * inputs:
 *   unsigned int h - height
 * output:
 *   prints out, but not return, a shape
 */
void print_asterisk_shape(unsigned int h);


/* insert_into_array
 * given an array that has total_size allocated and currently
 * contains cur_size sorted items (in indeces 0 to cur_size-1),
 * insert value into the sorted array such that it ends up
 * with cur_size+1 sorted items (in indeces 0 to cur_size).
 * inputs:
 *   int array[] - a sorted array
 *   unsigned int cur_size - The number of sorted items in array
 *   unsigned int total_size - The number of slots allocated in array
 *   int value - the item to place into the array
 * output:
 *   no output - change is reflected inside the array
 */
void insert_into_array(int array[], unsigned int cur_size,
                       unsigned int total_size, int value);

/* sort
 * given an array of length n, sort it in place by ascending order.
 * inputs:
 *   int source_array[] - an array that needs to be sorted
 *   int dest_array[] - the location to place the sorted numbers
 *   int size - the length of the array
 * output:
 *   no output - the change is reflected in dest_array
 */
void sort(int source_array[], int dest_array[], unsigned int size);

/**
 * @return uniform random int number from [0,1]
 */
double uniform_random();

/**
 * @param low number [inclusive]
 * @param high number [exclusion)
 * @return uniform random int number from [inclusive, exlsusive)
 */
int uniform_random_int_range(int low, int high);

/**
 * @param low [inclusive]
 * @param high [exclusion)
 * @return uniform random double number from [low, high)
 */
double uniform_random_double_range(double low, double high);



// use the following for the algorithms listed below: https://en.wikipedia.org/wiki/Normal_distribution#Generating_values_from_normal_distribution

/**
 * @return (0,1) normal distributed number transformed from uniform by Box-Mueller transform
 */
double normal_random_number_generator_bm();

/**
 * @return (0,1) normal distrbuted number transformed from uniform by Marsaglia polar method
 */
double normal_random_number_generator_mpm();

/**
 * @return (0,1) normal distrbiuted number transformed by ratio method
 */
double normal_random_number_generator_ratiomethod();

/**
 * @return a (mu, std) normal distributed number transformed from uniform by a method of your choice
 */
double normal_random_number(double mu, double std);

#endif
