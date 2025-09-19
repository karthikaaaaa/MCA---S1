#include <stdio.h>
#define MAX_SIZE 32   // we can store numbers 0..31

int main() {
    unsigned int setA = 0, setB = 0, unionSet, interSet, diffSet;

    // Insert elements into Set A: {1, 3, 5}
    setA |= (1 << 1);
    setA |= (1 << 3);
    setA |= (1 << 5);

    // Insert elements into Set B: {3, 4, 5}
    setB |= (1 << 3);
    setB |= (1 << 4);
    setB |= (1 << 5);

    // Union
    unionSet = setA | setB;
    // Intersection
    interSet = setA & setB;
    // Difference (A - B)
    diffSet = setA & ~setB;

    // Print sets
    printf("Set A: { ");
    for (int i = 0; i < MAX_SIZE; i++) {
        if (setA & (1 << i))
            printf("%d ", i);
    }
    printf("}\n");

    printf("Set B: { ");
    for (int i = 0; i < MAX_SIZE; i++) {
        if (setB & (1 << i))
            printf("%d ", i);
    }
    printf("}\n");

    printf("Union (A ∪ B): { ");
    for (int i = 0; i < MAX_SIZE; i++) {
        if (unionSet & (1 << i))
            printf("%d ", i);
    }
    printf("}\n");

    printf("Intersection (A ∩ B): { ");
    for (int i = 0; i < MAX_SIZE; i++) {
        if (interSet & (1 << i))
            printf("%d ", i);
    }
    printf("}\n");

    printf("Difference (A - B): { ");
    for (int i = 0; i < MAX_SIZE; i++) {
        if (diffSet & (1 << i))
            printf("%d ", i);
    }
    printf("}\n");

    return 0;
}
