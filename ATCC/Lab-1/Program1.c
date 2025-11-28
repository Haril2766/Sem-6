#include<stdio.h>

int main(){
    FILE *fp;
    char c;
    int sc=0,tc=0,cc=0,nlc=1;
    fp = fopen("try.txt","r");

    while(fscanf(fp, "%c", &c) == 1){
        if(c == '\t'){
            tc++;
        }
        else if(c == ' '){
            sc++;
        }
        else if(c == '\n'){
            nlc++;
        }
        else{
            cc++;
        }
    }
    printf("Total Charater is %d \n",cc);
    printf("Total Space is %d \n",sc);
    printf("Total tab is %d \n",tc);
    printf("Total new Line is %d \n",nlc);
}