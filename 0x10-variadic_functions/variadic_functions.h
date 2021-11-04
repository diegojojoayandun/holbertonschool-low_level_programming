#ifndef FUNC_VARIADIC
#define FUNC_VARIADIC
#include <stdlib.h>

#define FORMAT(f) ("%"#f)
/**
 * struct print_form - Define a struct to figure out how to print
 * @c: Character to check for
 * @f: Pointer to function to call
 */
typedef struct print_form
{
	char *c;
	void (*f)();
} print_form_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
