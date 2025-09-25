#include <stdio.h>

int main(){
    int a[] = {
        109, 214, 110, 215, 67, 151, 70, 193, 72, 124,
        112, 192, 121, 216, 66, 115, 114, 198, 104, 199,
        68, 120, 89, 122, 125
    };
    int n = 25;
    char flag[n+1];

    for(int i = 0; i < n; i++){
        if(i % 2 == 0){
            flag[i] = a[i];
        }
        else{
            flag[i] = a[i] - a[i-1];
        }
    }
    flag[n] = '\0';

    printf("%s", flag);
    return 0;
}
