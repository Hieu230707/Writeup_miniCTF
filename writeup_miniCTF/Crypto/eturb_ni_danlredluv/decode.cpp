#include <stdio.h>
#include <string.h>

int main(){
    char *ct = "jhaoncfmgcbaaocconjhcjjaeggcbabighpbkpaklobbemcebg";
    char *key = "dlnkgpoib";
    int n = (int)strlen(ct), klen = (int)strlen(key);

    char b16[256];
    for (int i = 0; i < n; ++i){
        b16[i] = 'a' + ((ct[i]-'a' - (key[i%klen]-'a') + 16) & 15);
    }
    b16[n] = 0;

    char flag[256]; int j = 0;
    for (int i = 0; i < n; i += 2){
        flag[j++] = (char)(((b16[i]-'a')<<4) | (b16[i+1]-'a'));
    }
    flag[j] = 0;

    printf("%s", flag);
    return 0;
}
