#include <stdio.h>
#include <string.h>


struct point {
    int x;
    int y;
};

struct rect {
    struct point pt1;
    struct point pt2;
};

int main()
{
    struct point p1, p2;
    p1.x = 10;
    p1.y = 15;
    p2.x = 20;
    p2.y = 10;
    struct rect r1;
    r1.pt1 = p1;
    r1.pt2 = p2;
    //struct rect r1 = {p1, p2};
    int x1 = r1.pt1.x;
    int y1 = r1.pt1.y;
    int x2 = r1.pt2.x;
    int y2 = r1.pt2.y;
    printf("(%d %d), (%d %d)\n", x1, y1, x2, y2);
    return 0;
}