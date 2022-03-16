#include <stdio.h>

int main()
{
    char line[50];
    int node = 1, edge = 0;
    FILE* in = fopen("in.txt", "r");
    fgets(line, 50, in);
    for (int i = 0; line[i]; ++i) {
        if ((line[i] != ' ') && (line[i] != '\n')) {
            ++edge;
        }
    }
    while (fgets(line, 50, in)) {
        ++node;
    }
    if (edge > ((node - 1) * (node - 2) / 2)) {
        printf("Это связанный граф");
    }
    else {
        printf("Это несвязанный граф");
    }
    fclose(in);
    return 0;
}
