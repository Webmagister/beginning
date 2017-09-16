#include <cstdio>
#include <stdio.h>
#include <math.h>

int main()
{
    std::puts("please enter a and b anc c for 'ax^2 + bx + c = 0':");

    float a = 0;
    float b = 0;
    float c = 0;
    float d = 0;
    std::scanf("%f %f %f", &a, &b, &c);

    if ((b * b - 4 * a * c) >= 0)
    {
        d = sqrt(b * b - 4 * a * c);
        std::printf("solution: %.2f %.2f\n", ((-b + d) / 2 * a), ((-b + d) / 2 * a));
    }
    else
    {
        std::printf("Discriminant less than 0.");
    }
}