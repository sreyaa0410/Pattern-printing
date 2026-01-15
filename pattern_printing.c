#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int random_color(int min , int max){
    int random = min + rand() % (max-min);
    return random;
}

void color_print(int rand){
    printf("\033[%dm*\033[0m",rand);
}

void triangle(int rows){
    int random,min,max;
    for(int i = 1 ; i <= rows ; i++){
        for(int j = rows ; j >= i ; j--){
            printf(" ");
        }
        
        for(int k = 1 ; k <= (i*2)-1 ; k++){
            if(k%2==0){
                min = 30, max = 37;
                random = random_color(min,max);
                color_print(random);
            }
            else{
                min = 90, max = 97;
                random = random_color(min,max);
                color_print(random);
            }
        }
        printf("\n");
    }
    
}

void square(int rows){
    int min,max,random;
    for(int i = 0 ; i < rows ;i++){
        for(int j =  0 ; j < rows ; j++){
            if(j % 2 == 0){
                min = 30 ,max = 37;
                random = random_color(min,max);
                color_print(random);
                printf(" ");
            }
            else{
                min = 90 ,max = 97;
                random = random_color(min,max);
                color_print(random);
                printf(" ");
            }
        }
        printf("\n");
    }
}

void trapezoid(int rows){
    int min,max,random;
    for(int i = 0 ; i < rows ;i++){
        for(int k = 1 ; k <= i ; k++){
            printf(" ");
        }
        for(int j =  0 ; j < rows ; j++){
            if(j % 2 == 0){
                min = 30 ,max = 37;
                random = random_color(min,max);
                color_print(random);
                printf(" ");
            }
            else{
                min = 90 ,max = 97;
                random = random_color(min,max);
                color_print(random);
                printf(" ");
            }
        }
        printf("\n");
    }
}

void hourglass(int rows){
    int min,max,random;
    for(int i = rows ; i >= 1 ; i--){
        for(int j = rows - i + 1 ; j > 0 ; j--){
            printf(" ");
        }
        for(int k = 1 ; k <= 2*i-1 ; k++){
            if(k%2 == 0){
                min = 30,max = 37;
                random = min + rand() % (max - min);
                color_print(random);
            }
            else{
                min = 90,max = 97;
                random = min + rand() % (max - min);
                color_print(random);
            }
        }
        printf("\n");
    }
     for(int i = 2 ; i <= rows ; i++){
        for(int j = rows ; j >= i ; j--){
            printf(" ");
        }
        
        for(int k = 1 ; k <= (i*2)-1 ; k++){
            if(k%2==0){
                min = 30, max = 37;
                random = random_color(min,max);
                color_print(random);
            }
            else{
                min = 90, max = 97;
                random = random_color(min,max);
                color_print(random);
            }
        }
        printf("\n");
    }
}

void butterfly(int rows){
    int min,max,random;
     for(int i = 1 ; i <= rows ; i++){
        for(int j = 1 ; j <= i ; j++){
            if(j%2==0){
                min = 30, max = 37;
                random = random_color(min,max);
                color_print(random);
            }
            else{
                min = 90, max = 97;
                random = random_color(min,max);
                color_print(random);
            }
        }

        for(int g = 1 ; g <= 2*(rows-i) ; g++){
            printf(" ");
        }
        for(int k = 1 ; k <= i ; k++){
            if(k%2==0){
                min = 30, max = 37;
                random = random_color(min,max);
                color_print(random);
            }
            else{
                min = 90, max = 97;
                random = random_color(min,max);
                color_print(random);
            }
        }
        printf("\n");
    }
    for(int i = rows -1 ; i >= 1 ; i--){
        for(int j = i ; j >= 1 ; j--){
            if(j%2==0){
                min = 30, max = 37;
                random = random_color(min,max);
                color_print(random);
            }
            else{
                min = 90, max = 97;
                random = random_color(min,max);
                color_print(random);
            }
        }

        for(int g = 2*(rows-i) ; g >= 1 ;g--){
            printf(" ");
        }
        for(int k = 1 ; k <= i ; k++){
            if(k%2==0){
                min = 30, max = 37;
                random = random_color(min,max);
                color_print(random);
            }
            else{
                min = 90, max = 97;
                random = random_color(min,max);
                color_print(random);
            }
        }
        printf("\n");
    }
}
void main(){
    srand(time(NULL));
    int choice;
    char resume;
    int rows;

    while(1){
        printf("enter your shape u want to print\n1.triangle\n2.square\n3.trapezoid\n4.hourglass\n5.butterfly\n");
        printf("enter shape:");
        scanf("%d",&choice);
    switch(choice){
        case 1 : printf("enter total rows:");
                 scanf("%d",&rows);
                 triangle(rows);
                 break;

        case 2 : printf("enter total rows:");
                 scanf("%d",&rows);
                 square(rows);
                 break;

        case 3 : printf("enter total rows:");
                 scanf("%d",&rows);
                 trapezoid(rows);
                 break;

        case 4 : printf("enter total rows:");
                 scanf("%d",&rows);
                 hourglass(rows);
                 break;

        case 5 : printf("enter total rows:");
                 scanf("%d",&rows);
                 butterfly(rows);
                 break;

        default: printf("invalid shape\n");
                 break;
    }
    printf("do you want to continue?(Y/N):");
    getchar();
    scanf("%c",&resume);
    if(resume == 'Y'){
        continue;
    }
    else if (resume == 'N'){
        printf("program exited!");
        break;
    }
    else{
        printf("invalid choice:exiting....");
        exit(1);
    }
}
}