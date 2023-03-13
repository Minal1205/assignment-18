#include<stdio.h>
#include<stdio.h>
///function to count words in a given string

void countwords(char a[]){
    int count=1;

    for(int i=0;a[i]!='\0';i++){
        if(a[i]==' '){
            count++;
        }

    }
    printf("Number of words =%d\n",count);

}

int main(){
    
    char c[100];
    printf("Enter String\n");
    gets(c);
    countwords(c);
    return 0;
}