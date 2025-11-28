#include<stdio.h>
int main(){
    FILE *fp1,*fp2;
    fp1 = fopen("try.txt","r");
    char c;
    fp2 = fopen("Copytry.txt","a");
    while(fscanf(fp1,"%c",&c) == 1){
        fprintf(fp2,"%c",c);
    }
    fclose(fp1);
    fclose(fp2);
}