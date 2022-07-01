
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int vowels(char *str, int count) {
    if (!*str)
        return count;

    char ch = tolower(*str);
    int match = ch=='e' || ch=='a' || ch=='i' || ch=='o' || ch=='u';
    int ret= vowels(++str, count + match);
    return ret;
}


int main (void) {
    int i, tc, total_v;
    char str[1000001];

    gets(str);
    //  for(i=0;i<tc;i++){
    //  scanf("%31s",str);

    total_v=vowels(str, 0);
    printf("%d\n", total_v);
    // }

    return 0;
}


//             Author: Sorowar Mahabub,
//            studies B.Sc in CSE, IIUC
