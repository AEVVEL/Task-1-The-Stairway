#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int step;
    int stairs;
    int steps_on_stairway;

    if (argc != 3)
        return 0;
    stairs = atoi(argv[1]);
    step = atoi(argv[2]);
    steps_on_stairway = stairs / (step + 1);
    if (stairs % (step + 1) == 0)
        printf("%d\n", steps_on_stairway);
    else
        printf("%d\n", steps_on_stairway + 1);
}
