#include <stdio.h>
#include <math.h>

int main() {
    double minx, miny, maxx, maxy;
    scanf("%lf %lf", &minx, &miny);
    scanf("%lf %lf", &maxx, &maxy);

    double dist = sqrt(pow((maxx - minx), 2) + pow((maxy - miny),2));

    printf("%.4lf\n", dist);
    return 0;
}
