#include<stdio.h>
#include<math.h>
int main()
{
    float abserror, relerror, percerror, trueval, approxval;
    printf("enter true value");
    scanf("%f",&trueval);
    printf("enter approx value");
    scanf("%f",&approxval);
    abserror=fabs(trueval-approxval);
    relerror=abserror/trueval;
    percerror=relerror*100;
    printf("absolute error = %f",abserror);
    printf("relative error = %f",relerror);
    printf("percentage error = %f",percerror);
}