#include <stdio.h>

struct vector {
    double x;
    double y;
};

struct vector get_vector_sum(struct vector *v1, struct vector *v2);

int main(void) 
{
    struct vector v1 = {1.0, 2.0};
    struct vector v2 = {3.0, 4.0};
    struct vector v3;

    v3 = get_vector_sum(&v1, &v2);
    printf("%lf %lf", v3.x, v3.y);
    return 0;
}


struct vector get_vector_sum(struct vector *v1, struct vector *v2) {
    struct vector result;
    result.x = v1 -> x  + v2 -> x;
    result.y = v1 -> y + v2 -> y;
    return result;
}