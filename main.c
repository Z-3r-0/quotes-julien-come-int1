#include "quotes.h"
#include <time.h>

int main() {
    char ** quotes = malloc(MAX_QUOTES * sizeof(char *));
    load_from_file(quotes, "../quotes.txt");

    srand(time(NULL));
    print_random_quote(quotes);

    free(quotes);
    return 0;
}