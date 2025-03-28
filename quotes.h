#ifndef QUOTES_H
#define QUOTES_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_QUOTES 40

int load_from_file(char ** quotes, const char * filename);
void print_quote(char ** quotes, int index);
void print_random_quote(char ** quotes);
void display_all(char ** quotes);

#endif