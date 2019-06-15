#include<stdio.h>
/*test own memory */
int main(int argc,char* argv[]){
    int distance=100;
    int travel_time=3;
    printf("You are %d mile away,it will take %d hour to reach there\n",distance,travel_time);
    printf("\tArgc is equal to %d, %s\n",argc, argv[1]);//%s print string
    return 0;
}