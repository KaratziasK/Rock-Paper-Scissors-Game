#include<stdio.h>
#include<time.h>
#include<stdlib.h>

#define WIN 10

int main() {
    int score[2][100]={0},i=0,n=0,m=0,r;
    char name1[256],name2[256],insert,in[2][100]={0};
    srand(time(NULL));


    printf("Welcome to the Rock-Scissors-Paper Game!\n");
    printf("Name 1: ");
    scanf("%s",name1);
    printf("Name 2: ");
    scanf("%s",name2);

    while((m<WIN) && (n<WIN))
    {
        printf("---\nChoose 'R' or 'P' or 'S'.\n");
        printf("%s:",name1);
        scanf(" %c",&insert);
        while((insert != 'R') && (insert != 'P') && (insert != 'S')){
            while(getchar()!='\n');
            printf("Wrong input! Try again:");
            scanf(" %c",&insert);
        }
        while(getchar()!='\n');
        r=rand()%3+1;   //1=Rock       2=Paper       3=Scissors
        in[0][i]=insert;
        
        if(r==1){
            in[1][i]='R';}
        if(r==2){
            in[1][i]='P';}
        if(r==3){
            in[1][i]='S';}

            switch (insert){

                case 'R':
                    if(r==2){
                        n++;
                        score[1][i]=n;
                        score[0][i]=m;
                        printf("%s:P\n",name2);
                        printf("%s Win!\n",name2);}

                    if(r==3){
                        m++;
                        score[0][i]=m;
                        score[1][i]=n;
                        printf("%s:S\n",name2);
                        printf("%s Win!\n",name1);}

                    if(r==1){
                        score[0][i]=m;
                        score[1][i]=n;
                        printf("%s:R\n",name2);
                        printf("Draw!\n");}

                    break;

                case 'P':
                    if(r==1){
                        m++;
                        score[0][i]=m;
                        score[1][i]=n;
                        printf("%s:R\n",name2);
                        printf("%s Win!\n",name1);}

                    if(r==3){
                        n++;
                        score[1][i]=n;
                        score[0][i]=m;
                        printf("%s:S\n",name2);
                        printf("%s Win!\n",name2);}
                    if(r==2){
                        score[0][i]=m;
                        score[1][i]=n;
                        printf("%s:P\n",name2);
                        printf("Draw!\n");}

                    break;

                case 'S':
                    if(r==1){
                        n++;
                        score[1][i]=n;
                        score[0][i]=m;
                        printf("%s:R\n",name2);
                        printf("%s Win!\n",name2);}

                    if(r==2){
                        m++;
                        score[0][i]=m;
                        score[1][i]=n;
                        printf("%s:P\n",name2);
                        printf("%s Win!\n",name1);}

                    if(r==3){
                        score[0][i]=m;
                        score[1][i]=n;
                        printf("%s:S\n",name2);
                        printf("Draw!\n");}

                    break;

            }
    i++;
    printf("Round: %d  |%s %d - %d %s|\n",i,name1,m,n,name2);

}


if(m>n)
    printf("\n\nWinner is: %s\n",name1);
if(n>m)
    printf("\n\nWinner is: %s\n",name2);
    
    for(int j=0;j<i;j++){
        if(j<9){
        printf("Round %d: ",j+1);
        }
        else{
        printf("Round %d:",j+1);
        }
        printf(" %s %d - %d %s  (%c - %c)\n",name1,score[0][j],score[1][j],name2,in[0][j],in[1][j]);
        }

return 0;
}
