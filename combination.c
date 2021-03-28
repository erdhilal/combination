#include <stdio.h>
#include <stdlib.h>

double factoriel(double x)
{
   double outcome = 1;
   for(int i = 1; i <= x; i++){
   outcome *=i;}
   return outcome;
}

int main()
{
    double n = 0.0,r = 0.0, outcome =0.0;
    printf("Enter n, r for combination C(n,r):");
    scanf("%lf %lf",&n,&r);

    double n_minus_r = n - r;
    double n_factoriel = factoriel(n);
    double r_factoriel = factoriel(r);
    double n_r_factoriel = factoriel(n_minus_r);

    double result = n_factoriel / (r_factoriel * n_r_factoriel);
    printf("\n%.1f is the result for C(%.1f,%.1f)\n", result, n, r);

    return EXIT_SUCCESS;
}
