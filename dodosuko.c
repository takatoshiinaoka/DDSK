#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char *ddsk[2] = {"ドド","スコ"};
    char *history[12] = {""};

    while(1){
        for (int i=11; i>0; i--)
            history[i] = history[i-1];
        history[0] = ddsk[rand() % 2];
        
        if(history[0]==ddsk[1] && history[1]==ddsk[1] && history[2]==ddsk[1] && history[3]==ddsk[0])
            if(history[4]==ddsk[1] && history[5]==ddsk[1] && history[6]==ddsk[1] && history[7]==ddsk[0])
                if(history[8]==ddsk[1] && history[9]==ddsk[1] && history[10]==ddsk[1] && history[11]==ddsk[0])
                    break;

        printf("%s\n",history[11]);
    }

    printf("\n");

    for(int i=11; i>=0; i--)
        printf("%s\n",history[i]);

    printf("ラブ注入❤︎");

    return 0;
}