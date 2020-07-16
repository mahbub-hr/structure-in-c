#include <stdio.h>
#include <string.h>

typedef int Integer;

struct point {
    Integer x;
    Integer y;
};

typedef struct point Point;

void printPoint(Point p) {  // void printPoint(struct point p) will still work
    printf("(%d, %d)\n", p.x,  p.y); 
}

Point makePoint(Integer x, Integer y) {
    Point tmp;
    tmp.x = x;
    tmp.y = y;
    return tmp;
}

Point addPoint(Point p1, Point p2) {
    Point tmp;
    tmp.x = p1.x + p2.x;
    tmp.y = p1.y + p2.y;
    return tmp;
}

int main()
{
    Point p1, p2;
    p1 = makePoint(5, 10);
    p2 = p1;
    printPoint(p1);
    printPoint(p2);
    Point p3 = addPoint(p1, p2);
    printPoint(p3);
    return 0;
}