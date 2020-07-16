#include <stdio.h>
#include <string.h>

struct point {
    int x;
    int y;
    char name[80];
};

int main()
{
    struct point p1;
    p1.x = 10;
    p1.y = 15;
    strcpy(p1.name, "Point1");
    struct point p2 = {5, 5,  "Point2"};
    printf("%d %d %s\n", p1.x,  p1.y, p1.name); 
    printf("%d %d %s\n", p2.x,  p2.y, p2.name); 
    return 0;
}