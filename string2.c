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
    printf("Source String: %s\nTarget String: %s\n", s2, s1);
    char s3[] = "India";
    strncat(s3, s2, 4);
    printf("Source String: %s\nTarget String: %s\n", s2, s3);
    char s4[] = "India";
    char temp[10];
    strcpy(temp, s4);
    printf("Copied string: %s\n",temp);
    char temp2[10];
    strncpy(temp2, temp, 3);
    printf("Copied string: %s\n",temp2);
    int i = strcmp("INDIA", "India");
    printf("%d\n", i);
    i = strncmp("India", "Indiana", 4);
    printf("%d", i);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
