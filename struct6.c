#include <stdio.h>
#include <string.h>

struct point {
    int x;
    int y;
    char name[80];
};

void printPoints(struct point p[], int length) {
    int i = 0;
    for ( i = 0; i < length; i++) {
        printf("%d %d %s\n", p[i].x,  p[i].y, p[i].name);
    } 
}

int main()
{
    int N = 5;
    int i = 0;
    struct point p[N];
    printf("Enter %d points (x, y, name):\n", N);
    for ( i = 0; i < N; i++) { 
        scanf("%d%d%s", &p[i].x, &p[i].y, p[i].name);
    }
    printf("Your Points:\n");
    printPoints(p, N);
    return 0;
}