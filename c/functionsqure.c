#include<stdio.h>
#include<math.h>

float squrearea( float side);
float circlearea( float rad);
float rectanglearea (float a,  float b);

int main() {
    float a = 5.0;
    float b = 10.0;
    printf("ractangle area is : %f", a * b );

    return 0;

}

 float squrearea( float side) {
    return side * side;
 }
 float circlearea( float rad) {
   return 3.14 * rad * rad;
 }
 float rectanglearea (float a, float b) {
    return a * b;
 }
