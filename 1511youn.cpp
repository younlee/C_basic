#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
int main()
{
    int a, i, k, tmp=0;
    FILE *fp=fopen("word.txt", "r");
    FILE *ft=fopen("it.txt", "r");

    char security[70][500], security_tmp[70][500], mean[70][5000], itcommonsense[21][500];
    srand((unsigned)time(NULL));
         printf("안녕하세요! 보안 용어, 상식 참고서입니다!\n");
         Sleep(2000);
         printf("여러분이 원하시는 정보가 아직 없을 수도 있습니다!\n");
         Sleep(2000);
         printf("계속해서 정보를 추가할 예정이니 기대해주세요.^^\n");
         Sleep(2000);
         system("cls");
    while(1)
    {
         printf("1.추천 보안 용어\n\n");
         printf("2.추천 IT상식\n\n");
         printf("3.보안용어 검색\n\n");
         printf("0.종료\n\n");
         printf("다음 항목 중 원하는 목록의 번호를 입력하세요.\n");
         scanf("%d",&a);

         system("cls");

            for(i=1;i<=61;i++){
                    fscanf(fp, " %[^\n]s", security_tmp[i]);
                    fscanf(fp, " %[^\n]s", security[i]);
                    fscanf(fp, " %[^\n]s", mean[i]);

            }
            for(i=1;i<=10;i++)
                        {
                            fscanf(ft, " %[^\n]s", itcommonsense[i]);
                        }
        if(a==1)
        {
            while(1)
            {
                k=rand()%61;
                if(k!=0)
                    break;
            }
            printf("단어 : %s\n\n", security[k]);
            printf("뜻 : %s\n\n", mean[k]);
            printf("전으로 돌아가려면 아무키나 누르세요.");
            k=getch();


            system("cls");
        }
        else if(a==2)
        {
            while(1)
            {
                k=rand()%11;
                if(k!=0)
                    break;
            }
            printf("%s\n\n", itcommonsense[k]);
            printf("전으로 돌아가려면 아무키나 누르세요.");
            k=getch();


            system("cls");
        }
        else if(a==3)
        {
            for(i=1;i<=61;i++) {
                printf("%d : %s\n\n", i, security_tmp[i]);
            }
            printf("\n원하시는 용어를 찾아 알맞은 숫자를 입력해주세요.");
            scanf("%d", &tmp);
            system("cls");
            printf("단어 : %s\n\n", security[tmp]);
            printf("뜻 : %s\n\n", mean[tmp]);
            printf("전으로 돌아가려면 아무키나 누르세요.");
            k=getch();
            system("cls");
        }
        else if(a==0)
        {
            printf("이용해주셔서 감사합니다.");
            break;
        }
        else
        {
          printf("다시 입력해주세요.ㅠㅠ\n\n");

        }

    }
}
