#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<windows.h>

struct stu//student
{
  char name[50],sec;
  int roll,Class,room,fee;
}student;//for student information

struct teacher//teacher
{
    char name[50],e;
  int psal,isal,total,salary;//previous salary and increment
  long int id;
}tea;

struct date
{
    int dat,month;
}d;
char n[50];
char nm[50];
int ch,a=1,roll;
long int idn;
int found=0,c;
FILE *record,*recd;
void main()
{
    int choice,s,t;
    system("cls");

    system("color 8b");
    printf("\n||                                                                                         ||");
    printf("\n||                                                                                         ||");
    printf("\n||                                                                                         ||");
    printf("\n||                          WELCOME TO CHAMPIONS INTERNATIONAL SCHOOL                      ||");
    printf("\n||                             SCHOOL BILLING PROJECT IN C LANGUAGE                        ||");
    printf("\n||                                 BY STUDENTS OF GROUP 21                                 ||");
    printf("\n||                                                                                         ||");
    printf("\n||                                                                                         ||");
    printf("\n||                                                                                         ||");
    printf("\nEnter any key to continue");
    getch();
    system("cls");
    system("color 2e");
    printf("\n\t\tPLEASE ENTER CURRENT DATE\ndate month\n ");
    scanf("%d %d",&d.dat,&d.month);
    system("cls");
    system("color 4f");
    printf("\n");
    printf("\n\t\t\t1.STUDENT");
    printf("\n\t\t\t2.TEACHERS AND STAFF");
    printf("\n\t\t\t3.EXIT");
    printf("\n\t\t\t  Enter the account type you want to perform:");
    scanf("%d",&choice);
    system("cls");
    if(choice==1)
    {
        system("color 7c");
    printf("\n1:: ADD RECORD");
    printf("\n2::SEARCH RECORD");
    printf("\n3::MODIFY RECORD");
    printf("\n4::Calculate fee");
    printf("\n5::Exit");
    printf("\nEnter the choice which you want to know from the above options:");
    scanf("%d",&s);
    system("cls");

    switch (s)
    {
        case 1:
            {
                system("color 4f");
                printf("\n>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<");
            printf("\n|||||||||       \t\tADDING RECORD\t\t            |||||||||");
            printf("\n>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<");
            printf("\nEnter your Name:");
            fflush(stdin);
            scanf("%[^\n]",student.name);
            printf("\nEnter your class:");
            scanf("%d",&student.Class);
            printf("\nEnter section:");
            scanf("%s",&student.sec);
            printf("\nEnter Roll Number:");
            scanf("%d",&student.roll);
            printf("\nEnter your room number:");
            scanf("%d",&student.room);
            printf("\n\t\t\t***********************************************************************************\t\t\t");
            printf("\n\t\t\t********************************CHAMPIONS**********************************************");
            printf("\nNAME         : %s",student.name);
            printf("\nCLASS        : %d",student.Class);
            printf("\nSECTION      : %c",student.sec);
            printf("\nROLL NUMBER  : %d",student.roll);
            printf("\nROOM NUMBER  : %d",student.room);


            FILE *record;
            record= fopen("add_records.txt","a");
            fprintf(record,"NAME         : %s\nCLASS        : %d\nSECTION      : %c\nROLL NUMBER  : %d\nROOM NUMBER  : %d\n",student.name, student.Class, student.sec,student.roll, student.room );
            fclose(record);

        }
        break;

        case 4:
            {
                system("color 5f");


            printf("\n>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<");
            printf("\n|||||||||       \t\tFEES CALCULATION\t\t            |||||||||");
            printf("\n>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<");
            printf("\n               AMOUNT OF FEES PER CLASS   ");
            printf("\nCLASS\t\t   AMOUNT OF FEES");
            printf("\n 1   \t\t       20000     ");
            printf("\n 2   \t\t       22000     ");
            printf("\n 3   \t\t       24000     ");
            printf("\n 4   \t\t       26000     ");
            printf("\n 5   \t\t       28000     ");
            printf("\n 6   \t\t       30000     ");
            printf("\n 7   \t\t       35000     ");
            printf("\n 8   \t\t       40000     ");
            printf("\n 9   \t\t       45000     ");
            printf("\n 10  \t\t       50000     ");
            printf("\n 11  \t\t       60000     ");
            printf("\n 12  \t\t       70000     ");
            printf("\n**************\t\tCALCULATING FEES\t\t**************************");
            printf("\nEnter your Name:");
            fflush(stdin);
            scanf("%[^\n]",student.name);
            printf("\nEnter your class:");
            scanf("%d",&student.Class);
            printf("\nEnter section:");
            scanf("%s",&student.sec);
            printf("\nEnter Roll Number:");
            scanf("%d",&student.roll);
            printf("\nEnter your room number:");
            scanf("%d",&student.room);
            printf("\nEnter amount of fee paid :");
            scanf("%d",&student.fee);
            printf("\n\t\t\t***********************************************************************************\t\t\t");
            printf("\n\t\t\t********************************CHAMPIONS**********************************************");
            printf("\nNAME         : %s",student.name);
            printf("\nCLASS        : %d",student.Class);
            printf("\nSECTION      : %c",student.sec);
            printf("\nROLL NUMBER  : %d",student.roll);
            printf("\nROOM NUMBER  : %d",student.room);

            switch(student.Class)
            {
                case 1 :
                    printf("\nFee due: %d",20000-student.fee);
                    break;
                    case 2 :
                        printf("\nFee due: %d",22000-student.fee);
                        break;
                        case 3 :
                            printf("\nFee due: %d",24000-student.fee);
                            break;
                            case 4 :
                                printf("\nFee due: %d",26000-student.fee);
                                break;
                                case 5 :
                                    printf("\nFee due: %d",28000-student.fee);
                                    break;
                                    case 6 :
                                        printf("\nFee due: %d",30000-student.fee);
                                        break;
                                        case 7 :
                                            printf("\nFee due: %d",35000-student.fee);
                                            break;
                                            case 8 :
                                                printf("\nFee due: %d",40000-student.fee);
                                                break;
                                                case 9 :
                                                    printf("\nFee due: %d",45000-student.fee);
                                                    break;
                                                    case 10 :
                                                        printf("\nFee due: %d",50000-student.fee);
                                                        break;
                                                        case 11 :
                                                            printf("\nFee due: %d",60000-student.fee);
                                                            break;
                                                            case 12 :
                                                                printf("\nFee due: %d",70000-student.fee);
                                                                break;
                                                                default :
                                                                    printf("\nINVALID Statement");
                                                                    break;


    }
    }break;

                        case 2:
                            {


                            system("color 6f");
                            printf("\n>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<");
            printf("\n|||||||||       \t\tSEARCH RECORD\t\t            |||||||||");
            printf("\n>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<");
            printf("\n>>>>>>>>>>>>>>>>>>>>>>SEARCHING BY ROLL NUMBER<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<");

              FILE *record;
                                record=fopen("add_records.txt","r");
                                if(record==NULL)
                                {
                                    printf("\nFile could not found");
                                    exit(0);
                                }
                                printf("\nEnter your ROLL NO:");
                                scanf("%d",&roll);
                                printf("\n Roll=%d",roll);
                                while(!feof(record))
                                {

                                  fscanf(record,"NAME         : %s\nCLASS        : %d\nSECTION      : %c\nROLL NUMBER  : %d\nROOM NUMBER  : %d\n",&student.name,&student.Class,&student.sec,&student.roll,&student.room );
                                    if(roll==student.roll)
                                {
                                    found=1;
                                    printf("\nROLL NO          %d",roll);
                                    printf("\n********************************RECORD SEARCHED***********************");
                                    printf("\n\t\t\t**************************CHAMPIONS**********************************************");
                                    printf("\nNAME         : %s",student.name);
                                    printf("\nCLASS        : %d",student.Class);
                                    printf("\nSECTION      : %c",student.sec);
                                    printf("\nROLL NUMBER  : %d",student.roll);
                                    printf("\nROOM NUMBER  : %d",student.room);
                                    break;

                                }

                                if(found==0)
                                    printf("\nRECORD NOT FOUND");
                                fclose(record);

                }



    }
       break;



                        case 3:
                            {
                                system("color 9f");
            printf("\n>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<");
            printf("\n|||||||||       \t\tMODIFY RECORD\t\t            |||||||||");
            printf("\n>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<");
            printf("\n\n\t\tPLEASE CHOOSE MODIFY TYPE::");
            printf("\n\n\t\t1::Modify by name::");
            printf("\n\n\t\t2::Modify by name &class::");
            printf("\n\n\t\t3::Modify by name,class & rollno::");
            printf("\n\n\t\t4::Exit");
            printf("\n\n\t\t::Enter your choice:: ");
            fflush(stdin);
            scanf("%d",&ch);
            if (ch==1)
            {
                int a=0;
                printf("\n\nenter name of student to modify: ");
                fflush(stdin);
                scanf("%[^\n]",n);
                FILE *record;
                record=fopen("add_records.txt","rb+");
                while(fread(&student,sizeof(student),1,record)==1)
                {
                    a=1;
                    if ((n==student.name)==0)
                    {
                        a=0;
                        printf("\nenter new name of student: ");
                        fflush(stdin);
                        scanf("%[^\n]",student.name);
                        printf("\nenter new class of student: ");
                        fflush(stdin);
                        scanf("%d",&student.Class);
                        printf("\nenter new section: ");
                        fflush(stdin);
                        scanf("%s",&student.sec);
                        printf("\nenter new roll of student: ");
                        scanf("%d",&student.roll);
                        fflush(stdin);
                         printf("\nEnter new room num of student: ");
                        fflush(stdin);
                        scanf("%d",&student.room);

                        fseek(record,-sizeof(student),SEEK_CUR);

                        fprintf(record,"NAME         : %s\nCLASS        : %d\nSECTION      : %c\nROLL NUMBER  : %d\nROOM NUMBER  : %d\n",student.name, student.Class, student.sec,student.roll, student.room );
                        fclose(record);
                    }
                }
                if (a==1)
                    printf("\n\nRECORDS NOT FOUND");
                else
                    printf("\n\nRECORDS SUCCESSFULLY  MODIFIED");
                printf("\n\n");
                system("pause");
            }
            else if (ch==2)
            {
                int a=0;
                printf("\n\nEnter name of student to modify: ");
                fflush(stdin);
                scanf("%[^\n]",n);
                printf("\n\nEnter class of student to modify: ");
                fflush(stdin);
                scanf("%d",&c);
                FILE *record;
                record=fopen("add_records.txt","rb+");
                while(fread(&student,sizeof(student),1,record)==1)
                {
                    a=1;
                    if ((n==student.name)==0 && (c==student.Class)==0)
                    {
                        a=0;
                        printf("\nEnter new name of student: ");
                        fflush(stdin);
                        scanf("%[^\n]",student.name);
                        printf("\nEnter new class of student: ");
                        fflush(stdin);
                        scanf("%d",&student.Class);
                        printf("\nenter new section: ");
                        fflush(stdin);
                        scanf("%s",&student.sec);
                        printf("\nEnter new roll of student: ");
                        fflush(stdin);
                        scanf("%d",&student.roll);
                        printf("\nEnter new room num of student: ");
                        fflush(stdin);
                        scanf("%d",&student.room);
                        fseek(record,-sizeof(student),SEEK_CUR);
                        fprintf(record,"NAME         : %s\nCLASS        : %d\nSECTION      : %c\nROLL NUMBER  : %d\nROOM NUMBER  : %d\n",student.name, student.Class, student.sec,student.roll, student.room );
                        fclose(record);
                    }
                }
                if (a==1)
                    printf("\n\nRECORDS NOT FOUND");
                else
                    printf("\n\nRECORDS SUCCESSFULLY  MODIFIED");
                printf("\n\n");
                system("pause");
            }
            else if (ch==3)
            {
                int a=0;
                printf("\n\nEnter name of student to modify: ");
                fflush(stdin);
                scanf("%[^\n]",n);
                printf("\n\nEnter class of student to modify: ");
                fflush(stdin);
                scanf("%d",&c);
                printf("\n\nEnter roll of student to modify: ");
                fflush(stdin);
                scanf("%d",&roll);
                 printf("\nEnter new room num of student: ");
                        fflush(stdin);
                        scanf("%d",&student.room);
                FILE *record;
                record=fopen("add_records.txt","rb+");
                while(fread(&student,sizeof(student),1,record)==1)
                {
                    a=1;
                    if ((n==student.name)==0 && (c==student.Class)==0 && (roll==student.roll)==0)
                    {
                        a=0;
                        printf("\nEnter new name of student: ");
                        fflush(stdin);
                        scanf("%[^\n]",student.name);
                        printf("\nEnter new class of student: ");
                        fflush(stdin);
                        scanf("%d",&student.Class);
                        printf("\nenter new section: ");
                        fflush(stdin);
                        scanf("%s",&student.sec);
                        printf("\nEnter new roll of student: ");
                        fflush(stdin);
                        scanf("%d",&student.roll);
                        printf("\nEnter new room num of student: ");
                        fflush(stdin);
                        scanf("%d",&student.room);
                        fseek(record,-sizeof(student),SEEK_CUR);
                        fprintf(record,"NAME         : %s\nCLASS        : %d\nSECTION      : %c\nROLL NUMBER  : %d\nROOM NUMBER  : %d\n",student.name, student.Class, student.sec,student.roll, student.room );
                        fclose(record);
                    }
                }
                if (a==1)
                    printf("\n\nRECORDS NOT FOUND");
                else
                    printf("\n\nRECORDS SUCCESSFULLY  MODIFIED");
                printf("\n\n");
                system("pause");
            }


                            }break;
                        case 5:
                            {

                            printf("\n\n\n\n*********************************************\n\n\n");
                            printf("\t\t\t\tThanks for turning into School billing system\n\n\n");
                            printf("************************************************************");
                            exit(0);
                            }

    }

    }


    else if(choice==2)
    {
        system("color 8b");
    printf("\n1:: ADD RECORD");
    printf("\n2::SEARCH RECORD");
    printf("\n3::MODIFY RECORD");
    printf("\n4::CALCULATE SALARY");
    printf("\n5::Exit");
    printf("\nEnter the choice which you want to know from the above options:");
    scanf("%d",&t);
    system("cls");
     switch (t)
    {
        case 1:
            {
                system("color 4f");
            printf("\n>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<");
            printf("\n|||||||||       \t\tADDING RECORD\t\t            |||||||||");
            printf("\n>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<");
            printf("\nEnter your Name:");
            fflush(stdin);
            scanf("%[^\n]",tea.name);
            printf("\nEnter your respective ID card number:");
            scanf("%ld",&tea.id);
            printf("\nEnter experience(in yrs) : ");
            scanf("%d",&tea.e);
            printf("\nEnter salary of the teacher:");
            scanf("%d",&tea.salary);
            printf("\n\t\t\t***********************************************************************************\t\t\t");
            printf("\n\t\t\t********************************CHAMPIONS**********************************************");
            printf("\nNAME OF THE TEACHER                  : %s",tea.name);
            printf("\nID NUMBER                            : %ld",tea.id);
            printf("\nEXPERIENCE                           : %d",tea.e);
            printf("\nSALARY                               : %d",tea.salary);
            FILE *rec;
            rec= fopen("TEACHERS RECORD.txt","a");
fprintf(rec,"\nNAME OF THE TEACHER                  : %s\nID NUMBER                            : %ld\nEXPERIENCE                           : %d\nSALARY                               : %d\n",tea.name,tea.id,tea.e,tea.salary);
            fclose(rec);
            break;
    }
         case 2:
                            {


                            system("color 5f");
                            printf("\n>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<");
            printf("\n|||||||||       \t\tSEARCH RECORD\t\t            |||||||||");
            printf("\n>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<");
            printf("\n>>>>>>>>>>>>>>>>>>>>>>SEARCHING BY ID NUMBER<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<");

              FILE *rec;
                                rec=fopen("TEACHERS RECORD.txt","r");
                                if(rec==NULL)
                                {
                                    printf("\nFile could not found");
                                    exit(0);
                                }
                                printf("\nEnter your ID NO:");
                                scanf("%ld",&idn);
                                printf("\n ID=%ld",idn);
                                while(!feof(rec))
                                {

                                   fscanf(rec,"\nNAME OF THE TEACHER                  : %s\nID NUMBER                            : %ld\nEXPERIENCE                           : %d\nSALARY                               : %d\n",&tea.name,&tea.id,&tea.e,&tea.salary);
                                    if(idn==tea.id)
                                {
                                    found=1;
                                    printf("\nID          %ld",idn);
                                    printf("\n********************************RECORD SEARCHED***********************");
                                    printf("\n\t\t\t**************************CHAMPIONS**********************************************");
                                    printf("\nNAME OF THE TEACHER                  : %s",tea.name);
                                    printf("\nID NUMBER                            : %ld",tea.id);
                                    printf("\nEXPERIENCE                           : %d",tea.e);
                                    printf("\nSALARY                               : %d",tea.salary);
                                    break;

                                }

                                if(found==0)
                                    printf("\nRECORD NOT FOUND");
                                fclose(rec);

                }



    }
       break;

        case 4:
            {
                system("color 6f");
                printf("\n>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<");
            printf("\n|||||||||       \t\tSALARY CALCULATION\t\t            |||||||||");
            printf("\n>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<");
        printf("\nEnter name of the Teacher: ");
        fflush(stdin);
            scanf("%[^\n]",tea.name);
            printf("\nEnter your respective ID card number:");
            scanf("%ld",&tea.id);
            printf("\nEnter previous month salary of Teacher: ");
            scanf("%d",&tea.psal);
            printf("\nIncrement percentage(%%) of salary of the teacher: ");
            scanf("%d",&tea.isal);
            tea.total=(tea.psal+(tea.isal*tea.psal)/100);
            printf("\n\t\t\t***********************************************************************************\t\t\t");
            printf("\n\t\t\t********************************CHAMPIONS**********************************************");
            printf("\nNAME OF THE TEACHER                  : %s",tea.name);
            printf("\nID NUMBER                            : %ld",tea.id);
        printf("\nPrevious month salary of the Teacher        : %d\n",tea.psal);
        printf("\nIncrement percentage of salary              : %d\n",tea.isal);
        printf("\nTotal salary of the teacher after increment : %d\n",tea.total);
        FILE *recd;
        recd=fopen("TEACHERS SALARY RECORD.txt","a");
        fprintf(recd,"\n\n\n********************CALCULATING SALARY*******************:)");
            fprintf(recd,"\nNAME OF THE TEACHER                  : %s",tea.name);
            fprintf(recd,"\nID NUMBER                            : %ld",tea.id);
            fprintf(recd,"\nPrevious month salary of the Teacher      : %d\n",tea.psal);
        fprintf(recd,"\nIncrement percentage of salary                : %d\n",tea.isal);
        fprintf(recd,"\nTotal salary of the teacher after increment   : %d\n",tea.total);
            fprintf(recd,"\n*******************************************************");
            fclose(recd);

            }break;


        case 3:
            {
                system("color 9f");
            printf("\n>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<");
            printf("\n|||||||||       \t\tMODIFY RECORD\t\t            |||||||||");
            printf("\n>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<");
            printf("\n\n\t\tPLEASE CHOOSE MODIFY TYPE::");
            printf("\n\n\t\t1::Modify by name::");
            printf("\n\n\t\t2::Modify by name & ID::");
            printf("\n\n\t\t3::Exit");
            printf("\n\n\t\t::Enter your choice:: ");
            fflush(stdin);
            scanf("%d",&ch);
            if (ch==1)
            {
                int a=0;
                printf("\n\nenter name of teacher to modify: ");
                fflush(stdin);
                scanf("%[^\n]",n);
                FILE *rec;
                rec=fopen("TEACHERS RECORD.txt","rb+");
                while(fread(&tea,sizeof(tea),1,rec)==1)
                {
                    a=1;
                    if ((n==tea.name)==0)
                    {
                        a=0;
                        printf("\nenter new name of teacher: ");
                        fflush(stdin);
                        scanf("%[^\n]",tea.name);
                        printf("\nenter new id number: ");
                        fflush(stdin);
                        scanf("%ld",&tea.id);
                        printf("\nenter experience (inyrs): ");
                        fflush(stdin);
                        scanf("%d",&tea.e);
                        printf("\nenter updated salary: ");
                        fflush(stdin);
                        scanf("%d",&tea.salary);
                        fseek(rec,-sizeof(tea),SEEK_CUR);
                        fprintf(rec,"\nNAME OF THE TEACHER                  : %s\nID NUMBER                            : %ld\nEXPERIENCE                           : %d\nSALARY                               : %d\n",tea.name,tea.id,tea.e,tea.salary);
                    break;
                    }
                }
                if (a==1)
                    printf("\n\nRECORDS NOT FOUND");
                else
                    printf("\n\nRECORDS SUCCESSFULLY  MODIFIED");
                printf("\n\n");
                system("pause");
            }
            else if (ch==2)
            {
                int a=0;
                printf("\n\nEnter name of teacher to modify: ");
                fflush(stdin);
                scanf("%[^\n]",n);
                printf("\n\nEnter id of teacher to modify: ");
                fflush(stdin);
                scanf("%ld",&idn);
                FILE *rec;
                rec=fopen("TEACHERS RECORD.txt","rb+");
                while(fread(&tea,sizeof(tea),1,rec)==1)
                {
                    a=1;
                    if ((n==tea.name)==0 && (idn==tea.id)==0)
                    {
                        a=0;
                        printf("\nEnter new name of teacher: ");
                        fflush(stdin);
                        scanf("%[^\n]",tea.name);
                        printf("\nEnter new ID of teacher: ");
                        fflush(stdin);
                        scanf("%d",&tea.id);
                       printf("\nenter experience (inyrs): ");
                        fflush(stdin);
                        scanf("%d",&tea.e);
                        printf("\nenter updated salary: ");
                        fflush(stdin);
                        scanf("%d",&tea.salary);
                        fseek(rec,-sizeof(tea),SEEK_CUR);
                        fprintf(rec,"\nNAME OF THE TEACHER                  : %s\nID NUMBER                            : %ld\nEXPERIENCE                           : %d\nSALARY                               : %d\n",tea.name,tea.id,tea.e,tea.salary);
                    break;
                    }
                }
                if (a==1)
                    printf("\n\nRECORDS NOT FOUND");
                else
                    printf("\n\nRECORDS SUCCESSFULLY  MODIFIED");
                printf("\n\n");
                system("pause");
            }

            }break;
        case 5:
            {
                            printf("\n\n\n\n*********************************************\n\n\n");
                            printf("\t\t\t\tThanks for turning into School billing system\n\n\n");
                            printf("************************************************************");
                            exit(0);
                            }
            }

    }
    else if(choice==3)
    {
                        printf("\n\n\n\n*********************************************\n\n\n");
                            printf("\t\t\t\tThanks for turning into School billing system\n\n\n");
                            printf("************************************************************");
                            exit(0);
    }
    return 0;
}





