#ifndef QUOTES_H
#define QUOTES_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_QUOTES 20

void load_from_file(char ** quotes, const char * filename);

void print_quote(char ** quotes, int index);
void print_random_quote(char ** quotes);

#endif