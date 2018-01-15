#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int t;

    scanf("%d", &t);

    while(t--)
    {
        int total_run, cr, bl;
        double crr, rrr;

        scanf("%d %d %d", &total_run, &cr, &bl);

        crr = ((cr*1.0)/(300 - bl)*6);
        rrr = (((((total_run+1)*1.0) - cr)/bl)*6);

        printf("%0.2lf %0.2lf\n", crr, rrr);
    }

    return 0;
}
