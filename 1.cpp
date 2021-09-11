#include <studio.h>
int main()
{
    int H,B,L,W,R;
    float area_of_circle,area_of_triangle,area_of _reactangle,pi=3.14;
    // Triangle
    printf("enter the height of triangle H:\n");
    scanf("%d",&H);
    printf("enter the height of triangle B:\n");
    scanf("%d",&B);
    area_of_triangle = (H*B)/2;
    printf("area of triangle is : %f\n",area_of_triangle);
    // Rectangle
    printf("enter the length of rectangle L:\n");
    scanf("%d",&L);
    printf("enter the width of rectangle W:\n");
    scanf("%d",&W);
    area_of_rectangle = (L*W);
    printf("area of rectangle is : %f\n",area_of_rectangle);
    // Circle
    printf("enter the radius of circle R:\n");
    scanf("%d",&R);
    area_of_circle = pi*R*R;
    printf("area of circle is : %f\n",area_of_circle);
    return 0;
}    