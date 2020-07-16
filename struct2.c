#include <stdio.h>
#include <string.h>

struct point {
    int x;
    int y;
    char name[80];
} p1, p2;

void printPoint(struct point p) {
    printf("%d %d %s\n", p.x,  p.y, p.name);
}

int main()
{
    printf("Enter first point (x, y, name): ");
    scanf("%d%d%s", &p1.x, &p1.y, p1.name);
    printf("Enter second point (x, y, name): ");
    scanf("%d%d%s", &p2.x, &p2.y, p2.name);
    printPoint(p1);
    printPoint(p2);
    return 0;
}