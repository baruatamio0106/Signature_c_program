#include<stdio.h>
#include<stdlib.h>
//patterns
void main_pattern(void);
void get_input(void);
void pattern_new(char player[][3]);
int check_result(char player[][3]);
int main(void)
{

    main_pattern();
    get_input();
    return 0;
}

void get_input(void)
{
    char player[][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
    int num,check;
    for(int i=1;i<=4;i++)
    {
        printf("\nPlayer 1: ");
        scanf("%d",&num);

        switch(num)
        {
        case 1:
            player[0][0]='O';
            system("cls");
            pattern_new(player);
            break;
        case 2:
            player[0][1]='O';
            system("cls");
            pattern_new(player);
            break;
        case 3:
            player[0][2]='O';
            system("cls");
            pattern_new(player);
            break;
        case 4:
            player[1][0]='O';
            system("cls");
            pattern_new(player);
            break;
        case 5:
            player[1][1]='O';
            system("cls");
            pattern_new(player);
            break;
        case 6:
            player[1][2]='O';
            system("cls");
            pattern_new(player);
            break;
        case 7:
            player[2][0]='O';
            system("cls");
            pattern_new(player);
            break;
        case 8:
            player[2][1]='O';
            system("cls");
            pattern_new(player);
            break;
        case 9:
            player[2][2]='O';
            system("cls");
            pattern_new(player);
            break;
        default:
            printf("invaild input!");
            system("exit");
            break;
        }

        check=check_result(player);
        if(check==1)
            break;
        printf("\nPlayer 2: ");
        scanf("%d",&num);

        switch(num)
        {
        case 1:
            player[0][0]='X';
            system("cls");
            pattern_new(player);
            break;
        case 2:
            player[0][1]='X';
            system("cls");
            pattern_new(player);
            break;
        case 3:
            player[0][2]='X';
            system("cls");
            pattern_new(player);
            break;
        case 4:
            player[1][0]='X';
            system("cls");
            pattern_new(player);
            break;
        case 5:
            player[1][1]='X';
            system("cls");
            pattern_new(player);
            break;
        case 6:
            player[1][2]='X';
            system("cls");
            pattern_new(player);
            break;
        case 7:
            player[2][0]='X';
            system("cls");
            pattern_new(player);
            break;
        case 8:
            player[2][1]='X';
            system("cls");
            pattern_new(player);
            break;
        case 9:
            player[2][2]='X';
            system("cls");
            pattern_new(player);
            break;
        default:
            printf("invaild input!");
            system("exit");
            break;
        }
        check=check_result(player);
        if(check==1)
            break;
        if(i==4)
        {
            printf("\nPlayer 1: ");
            scanf("%d",&num);

            switch(num)
            {
            case 1:
                player[0][0]='O';
                system("cls");
                pattern_new(player);
                break;
            case 2:
                player[0][1]='O';
                system("cls");
                pattern_new(player);
                break;
            case 3:
                player[0][2]='O';
                system("cls");
                pattern_new(player);
                break;
            case 4:
                player[1][0]='O';
                system("cls");
                pattern_new(player);
                break;
            case 5:
                player[1][1]='O';
                system("cls");
                pattern_new(player);
                break;
            case 6:
                player[1][2]='O';
                system("cls");
                pattern_new(player);
                break;
            case 7:
                player[2][0]='O';
                system("cls");
                pattern_new(player);
                break;
            case 8:
                player[2][1]='O';
                system("cls");
                pattern_new(player);
                break;
            case 9:
                player[2][2]='O';
                system("cls");
                pattern_new(player);
                break;
            default:
                printf("invaild input!");
                system("exit");
                break;
            }
            check=check_result(player);
            if(check==1)
            break;
        }
    }
    if(check==-1)
        printf("\n\nMatch draw!!");
}
void pattern_new(char player[][3])
{
    printf("           Tic Tae Toe            \n");
    printf("==================================\n");
    printf("\n\n\n");
    printf("           |   |        \n");
    printf("         %c | %c | %c      \n",player[0][0],player[0][1],player[0][2]);
    printf("           |   |        \n");
    printf("       =============    \n");
    printf("           |   |        \n");
    printf("         %c | %c | %c      \n",player[1][0],player[1][1],player[1][2]);
    printf("           |   |        \n");
    printf("       =============    \n");
    printf("           |   |        \n");
    printf("         %c | %c | %c      \n",player[2][0],player[2][1],player[2][2]);
    printf("           |   |        \n");
    printf("\n\n\n");
    printf("==================================\n");

    return 0;
}

void main_pattern(void)
{
    char player[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};

    printf("           Tic Tae Toe            \n");
    printf("==================================\n");
    printf("\n\n\n");
    printf("           |   |        \n");
    printf("         %c | %c | %c      \n",player[0][0],player[0][1],player[0][2]);
    printf("           |   |        \n");
    printf("       =============    \n");
    printf("           |   |        \n");
    printf("         %c | %c | %c      \n",player[1][0],player[1][1],player[1][2]);
    printf("           |   |        \n");
    printf("       =============    \n");
    printf("           |   |        \n");
    printf("         %c | %c | %c      \n",player[2][0],player[2][1],player[2][2]);
    printf("           |   |        \n");
    printf("\n\n\n");
    printf("==================================\n");

    return 0;
}

int check_result(char player[][3])
{
    if(player[0][0]=='O'&&player[1][0]=='O'&&player[2][0]=='O')
        {printf("\n\n Player 1 win!!");return 1;}
    else if(player[0][0]=='O'&&player[0][1]=='O'&&player[0][2]=='O')
        {printf("\n\n Player 1 win!!");return 1;}
    else if(player[0][1]=='O'&&player[1][1]=='O'&&player[2][1]=='O')
        {printf("\n\n Player 1 win!!");return 1;}
    else if(player[0][2]=='O'&&player[1][2]=='O'&&player[2][2]=='O')
        {printf("\n\n Player 1 win!!");return 1;}
    else if(player[1][0]=='O'&&player[1][1]=='O'&&player[1][2]=='O')
        {printf("\n\n Player 1 win!!");return 1;}
    else if(player[2][0]=='O'&&player[2][1]=='O'&&player[2][2]=='O')
        {printf("\n\n Player 1 win!!");return 1;}
    else if(player[0][0]=='O'&&player[1][1]=='O'&&player[2][2]=='O')
        {printf("\n\n Player 1 win!!");return 1;}
    else if(player[2][0]=='O'&&player[1][1]=='O'&&player[0][2]=='O')
        {printf("\n\n Player 1 win!!");return 1;}
    else if(player[0][0]=='X'&&player[1][0]=='X'&&player[2][0]=='X')
        {printf("\n\n Player 2 win!!");return 1;}
    else if(player[0][0]=='X'&&player[0][1]=='X'&&player[0][2]=='X')
        {printf("\n\n Player 2 win!!");return 1;}
    else if(player[0][1]=='X'&&player[1][1]=='X'&&player[2][1]=='X')
        {printf("\n\n Player 2 win!!");return 1;}
    else if(player[0][2]=='X'&&player[1][2]=='X'&&player[2][2]=='X')
        {printf("\n\n Player 2 win!!");return 1;}
    else if(player[1][0]=='X'&&player[1][1]=='X'&&player[1][2]=='X')
        {printf("\n\n Player 2 win!!");return 1;}
    else if(player[2][0]=='X'&&player[2][1]=='X'&&player[2][2]=='X')
        {printf("\n\n Player 2 win!!");return 1;}
    else if(player[0][0]=='X'&&player[1][1]=='X'&&player[2][2]=='X')
        {printf("\n\n Player 2 win!!");return 1;}
    else if(player[2][0]=='X'&&player[1][1]=='X'&&player[0][2]=='X')
        {printf("\n\n Player 2 win!!");return 1;}
    else
        return -1;
}
