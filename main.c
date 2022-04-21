#include <stdio.h>
#include <stdlib.h>

void insert_spaces(int N) {
    int k;
    for(k=1;k<=N;k++)
        printf(" ");
}


void display_star_top(int n) {
    int i;
    for(i=1;i<=n;i++) {
        insert_spaces(n*2);
        insert_spaces(n-i+1);
        printf("*");
        insert_spaces(i*2-3);
        if(i>1)
            printf("*");
        printf("\n");
    }
}

void display_star_bottom(int n) {
    int i;
    for(i=1;i<=n;i++) {
        insert_spaces(n*2);
        insert_spaces(i);
        printf("*");
        insert_spaces(2*(n-i-1)+1);
        if(i<n)
            printf("*");
        printf("\n");
    }
}

void display_horizontal_stars(int n) {
    int k;
    for(k=1;k<=n*2+1;k++)
        printf("*");
    //insert_spaces(n*2);
    insert_spaces(n*2-1);
    for(k=1;k<=n*2+1;k++)
        printf("*");
    printf("\n");
}

void display_star_left_right(int n) {
    int i,j,k;
    for(i=1;i<=n;i++) {
        /*Star_left_top_side*/
        insert_spaces(i);
        printf("*");
        /*Star_right_top_side*/
        insert_spaces(n*6-i*2-1);
        printf("*");
        printf("\n");
    }
    for(i=1;i<=n-1;i++) {
        /*Star_left_bottom_side*/
        insert_spaces(n-i);
        printf("*");
        /*Star_right_bottom_side*/
        insert_spaces(n*4+i*2-1);
        printf("*");
        printf("\n");
    }
}


int main()
{
    int size;
    printf("entrer la taille de l'etoile :" );
    scanf("%d",&size);
    if(size>0 && size<=16) {
        display_star_top(size);
        display_horizontal_stars(size);
        display_star_left_right(size);
        display_horizontal_stars(size);
        display_star_bottom(size);
    }
    /* code */
    return 0;
}
