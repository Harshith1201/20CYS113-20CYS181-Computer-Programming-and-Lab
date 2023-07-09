#include <stdio.h>
enum Type {
    Circle =1,
    Rectangle
};

#define PI  3.14
int main() {
    float area;
    struct shape{
    union dimesions{
        struct rectangle{
        float length;
        float radius;}r;
        struct circle{
            float radius;
        }c;
    }d1;
    enum Type type;
}s1;
    scanf("%d",&s1.type);
    switch(s1.type){
        case Circle :
        scanf("%f",&s1.d1.c.radius);
        area = PI*s1.d1.c.radius*s1.d1.c.radius;
        printf("Area of the circle: %.4f units",area);
        break;
        case Rectangle :
        scanf("%f %f",&s1.d1.r.length,&s1.d1.r.radius);
        area =s1.d1.r.length*s1.d1.r.radius;
        printf("Area of the rectangle: %.4f units",area);
        break;
        default:
        printf("Invalid choice!");
    }

    return 0;
}
