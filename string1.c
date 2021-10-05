#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char s1[] = "India";
    char s2[10] = "Country";
    int l1 = strlen(s1);
    int l2 = strlen(s2);
    printf("Length of %s is : %d\n", s1, l1);
    printf("Length of %s is : %d\n", s2, l2);
    strcat(s1, s2);
    printf("%s\n", s2);
    printf("%s\n", s1);


    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
