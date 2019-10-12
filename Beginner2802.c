#include <stdio.h>

// Check the Maths theory here:
// http://academic.sun.ac.za/mathed/174/CirclesRegionsChords.pdf

int main(){

    long long int n, R;

    scanf("%lli", &n);

    R = 1 + (((n - 1) * n) / 2) + (((n) * (n - 1) * (n - 2) * (n - 3)) / 24);

    printf("%lli\n", R);

    return 0;
}
