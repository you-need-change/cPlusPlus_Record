#include <cstdio>

int main()
{
    double r;

    scanf("%lf", &r);

    //printf("VOLUME = %.2lf", 4 / 3 * 3.14159 * r * r * r); // 计算时从左往右，计算4/3时得到的是int型
    printf("VOLUME = %.2lf", 4 / 3.0 * 3.14159 * r * r * r);

    return 0;
}