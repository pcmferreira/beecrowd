#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME (1002)

typedef struct {
    char *name;
    int *medals;
} country;

int country_comp(const void *lhs, const void *rhs) {
    country *a = (country *) lhs;
    country *b = (country *) rhs;

    for (int i = 0; i < 3; ++i) {
        if (a->medals[i] != b->medals[i])
            return ((a->medals[i]) > (b->medals[i]) ? -1 : 1);
    }
    return strcmp(a->name, b->name);
}

int main() {
    country countries[300];
    int countries_size = 0;

    char modality[MAX_NAME];
    while (fgets(modality, MAX_NAME, stdin)) {
        for (int i = 0; i < 3; ++i) {
            char name[MAX_NAME];
            fgets(name, MAX_NAME, stdin);
            char fnd = 0;
            for (int j = 0; j < countries_size; ++j) {
                if (strcmp(countries[j].name, name) == 0) {
                    fnd = 1;
                    ++(countries[j].medals[i]);
                }
            }
            if (!fnd) {
                char *name_ptr = (char *) malloc((strlen(name) + 1) * (sizeof (char)));
                strcpy(name_ptr, name);

                int *medals_ptr = (int *) calloc(3, sizeof (int));
                medals_ptr[i] = 1;

                countries[countries_size].name = name_ptr;
                countries[countries_size].medals = medals_ptr;
                ++countries_size;
            }
        }
    }

    qsort(countries, countries_size, sizeof (country), country_comp);

    printf("Quadro de Medalhas\n");
    for (int i = 0; i < countries_size; ++i) {
        countries[i].name[strlen(countries[i].name) - 1] = '\0';
        printf("%s", countries[i].name);
        for (int j = 0; j < 3; ++j) {
            printf(" %d", countries[i].medals[j]);
        }
        printf("\n");
        free(countries[i].name);
        free(countries[i].medals);
    }

    return 0;
}
