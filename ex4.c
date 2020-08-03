#include<stdio.h>
#include<stdlib.h>

int main() {
    int win=0, lose=0, num;
    //user name part
    char name[10];

    printf("Who are you?\n");
    scanf("%s", name);
    printf("Hello, %s!\n", name);

    printf("Tossing a coin...\n");
    for(int i=0; i<3; i++){
        num = rand();
        if(num%2 == 0) {
            printf("Round %d: Heads\n", i+1);
            win++;
        } 
        else {
            printf("Round %d: Tails\n", i+1);
            lose++;
        }
    }
    printf("Heads: %d, Tails: %d\n", win, lose);
    //merged part
    if(win > lose) printf("%s won\n", name);
    else printf("%s lost\n", name);

    return 0;
}
