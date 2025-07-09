#include <stdio.h>
int main(){
    double num1, num2, result;
    long int ans;
    scanf("%lf %lf", &num1, &num2);
    result = num1 + num2;
    ans = (long int) result;
    if (ans == result)
        printf("%ld", ans);
    else
        printf("%lf", result);
    return 0;
}
// Sample 1
// Input   10 5

// 15
// Input 2
//     10.5 2.5
// Output
//     13
// Input 3
// 10.5 5
// Output
// 15.5


