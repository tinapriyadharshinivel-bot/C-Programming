#include <stdio.h>
#include <stdlib.h>

int main(int argc,char*argv[]){
    int i;
    printf("total arguments:%d\n",argc);
    for(i=0;i<argc;i++){
        printf("argument %d:%s\n",i,argv[i]);
    }
    return 0;
}
