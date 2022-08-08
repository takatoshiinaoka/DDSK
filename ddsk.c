#include <stdio.h>
#include <stdlib.h>

int main(){
    char *DDSK[2] = {"ドド","スコ"};
    int result = 0;
    while(0x777 != (result&0x777)){
        int LSD = rand()%2;
        result <<= 1;
        result = LSD|(result&~1);
        printf("%s\n", DDSK[LSD]);
    }
    printf("ラブ注入❤︎");
    return 0;
}

int main1(){
    char *ddsk[2] = {"ドド","スコ"};
    char *history[12] = {""};
    int count = 1;

    while(1){
        for (int i=11; i>0; i--)
            history[i] = history[i-1];
        
        history[0] = ddsk[rand() % 2];
        
        if(history[0]==ddsk[1] && history[1]==ddsk[1] && history[2]==ddsk[1] && history[3]==ddsk[0]
        && history[4]==ddsk[1] && history[5]==ddsk[1] && history[6]==ddsk[1] && history[7]==ddsk[0]
        && history[8]==ddsk[1] && history[9]==ddsk[1] && history[10]==ddsk[1] && history[11]==ddsk[0])
            break;
        
        printf("%s\n",history[11]);
        count += 1;
    }

    for(int i=11; i>=0; i--)
        i % 4 == 0 ? printf("%s ", history[i]) : printf("%s", history[i]);
    
    printf("ラブ注入❤︎\ncount : %d", count);

    return 0;
}