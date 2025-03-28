#include "quotes.h"


int load_from_file(char **quotes, const char *filename) {
    int k = 0;
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        fprintf(stderr, "Error: Could not open file %s\n", filename);
        exit(1);
    }

    char buffer[256];
    int index = 0;
    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        buffer[strcspn(buffer, "\n")] = 0;
        quotes[index] = strdup(buffer);
        index++;
        k++;
    }

    fclose(file);
    return k;
}

void print_quote(char ** quotes, int index) {
    printf("%s\n", quotes[index]);
}

void print_random_quote(char ** quotes) {
    int index = rand() % MAX_QUOTES;
    print_quote(quotes, index);
}

void display_all(char **quotes) {

}
