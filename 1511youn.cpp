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
         printf("�ȳ��ϼ���! ���� ���, ��� �����Դϴ�!\n");
         Sleep(2000);
         printf("�������� ���Ͻô� ������ ���� ���� ���� �ֽ��ϴ�!\n");
         Sleep(2000);
         printf("����ؼ� ������ �߰��� �����̴� ������ּ���.^^\n");
         Sleep(2000);
         system("cls");
    while(1)
    {
         printf("1.��õ ���� ���\n\n");
         printf("2.��õ IT���\n\n");
         printf("3.���ȿ�� �˻�\n\n");
         printf("0.����\n\n");
         printf("���� �׸� �� ���ϴ� ����� ��ȣ�� �Է��ϼ���.\n");
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
            printf("�ܾ� : %s\n\n", security[k]);
            printf("�� : %s\n\n", mean[k]);
            printf("������ ���ư����� �ƹ�Ű�� ��������.");
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
            printf("������ ���ư����� �ƹ�Ű�� ��������.");
            k=getch();


            system("cls");
        }
        else if(a==3)
        {
            for(i=1;i<=61;i++) {
                printf("%d : %s\n\n", i, security_tmp[i]);
            }
            printf("\n���Ͻô� �� ã�� �˸��� ���ڸ� �Է����ּ���.");
            scanf("%d", &tmp);
            system("cls");
            printf("�ܾ� : %s\n\n", security[tmp]);
            printf("�� : %s\n\n", mean[tmp]);
            printf("������ ���ư����� �ƹ�Ű�� ��������.");
            k=getch();
            system("cls");
        }
        else if(a==0)
        {
            printf("�̿����ּż� �����մϴ�.");
            break;
        }
        else
        {
          printf("�ٽ� �Է����ּ���.�Ф�\n\n");

        }

    }
}
