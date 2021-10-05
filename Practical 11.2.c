#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

char* replaceWord(const char* s, const char* oldW, const char* newW)
{
    char* result;
    int i, cnt = 0;
    int newWlen = strlen(newW);
    int oldWlen = strlen(oldW);

    for (i = 0; s[i] != '\0'; i++) {
        if (strstr(&s[i], oldW) == &s[i]) {
            cnt++;

            i += oldWlen - 1;
        }
    }

    result = (char*)malloc(i + cnt * (newWlen - oldWlen) + 1);

    i = 0;
    while (*s) {
        if (strstr(s, oldW) == s) {
            strcpy(&result[i], newW);
            i += newWlen;
            s += oldWlen;
        }
        else
            result[i++] = *s++;
    }

    result[i] = '\0';
    return result;
}

int main() {
    char *str[] = { "We will teach you how to...",
                    "Move a mountain",
                    "Level a building",
                    "Erase the past",
                    "Make a million",
                    "...all through C!"
                  };
    char *str1=(char*)malloc(250);
    char *str2=(char*)malloc(250);
    printf("Enter the word to find: ");
    scanf("%s",str1);
    printf("Enter the word to replace: ");
    scanf("%s",str2);
    char *p;
    char *x;
    for(int i=0; i<6; i++)
    {
        x=str[i];
        p = strstr(str[i], str1);
        if(p!=NULL)
        {
            x=replaceWord(str[i],str1,str2);
        }
        printf("%s\n",x);
    }

    return 0;
}
