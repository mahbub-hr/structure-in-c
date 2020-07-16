#include <stdio.h>
#include <string.h>

struct point {
    int x;
    int y;
};

void printPoint(struct point p) {
    printf("(%d, %d)\n", p.x,  p.y); 
}

struct point makePoint(int x, int y) {
    struct point tmp;
    tmp.x = x;
    tmp.y = y;
    return tmp;
}

struct point addPoint(struct point p1, struct point p2) {
    struct point tmp;
    tmp.x = p1.x + p2.x;
    tmp.y = p1.y + p2.y;
    return tmp;
}

int main()
{
    struct point p1, p2;
    p1 = makePoint(5, 10);
    p2 = p1;
    printPoint(p1);
    printPoint(p2);
    struct point p3 = addPoint(p1, p2);
    printPoint(p3);
    return 0;
}