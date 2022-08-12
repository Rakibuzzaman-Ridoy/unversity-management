#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>
#include<bits/stdc++.h>
void signupform();
void loginform();
void about();
void university();
void studentinfo();
void teacher_information();
void library();
void log_out();
void add();
void attendance();
void viewAttendance();
void giveAttendance();
void displayList();
void search();
void del();
void modify();
void Teacher_add();
void teacher_attendance();
void teacher_giveAttendance();
void teacher_viewAttendance();
void Teacher_displayList();
void Teacher_search();
void book_modify();
void Teacher_del();
void Teacher_modify();
void add_book();
void book_display();
void book_search();
struct student_information
{
  char name[50];
  char ID[50];
  char department[50];
  float grade;
  float quiz1,quiz2,quiz3,assignment,mid_tetm,fainal,presentation,sum,total;
};
struct teacher_information
{
     char name[40];
     char ID[40];
     char department[40];
};
struct library
{
    char name[20];
    char ID[20];
    char author[20];
    int id;
};
int main()
 {
system("COLOR 5F");
system("cls");
printf("\n\t\t\t\t\tUNIVERSTY MANGEMENT SYSTEM\n");
printf("\n\t\t\t\t\t=====================================\n");
printf("\n\t\t\t\t\tDate :%s\n", __DATE__ );
printf("\n\t\t\t\t\tTime :%s\n", __TIME__ );
printf("\n\t\t\t\t\tDeveloped By\n\t\t\t\t\tMd:Masud Rana\n\t\t\t\t\tID:172-35-2189\n\t\t\t\t\tDept:SWE \n\t\t\t\t\tDevelop Date: 11-04-2018\n");
printf("\n\t\t\t\t\t======================================\n");
printf("\t\t\t\t\tPlease Continue..... ");
getch();
system("cls");
printf("\n\t\t\t\t\t=====================================\n");
printf("\n\t\t\t\t\tMAIN MENU\n");
printf("\n\t\t\t\t\t=====================================\n");
printf("\n\t\t\t\t\t1.Signup\n");
printf("\n\t\t\t\t\t2.Login\n");
printf("\n\t\t\t\t\t3.About\n");
printf("\n\t\t\t\t\tEnter your option :");
int si=0;
scanf("%d",&si);
switch(si){
case 1:
     signupform();
     break;
 case 2:
     loginform();
     break;
 case 3:
    about();
    break;
 default:
    printf("\t\t\t\t\tYour choice is wrong");
    break;
}

return 1;
}

void signupform(){
  system("cls");
  printf("\t\t\t\t\tThis is signup form\n");

  FILE *signup;
  signup=fopen("signup.txt","w");
  if(signup == NULL)
  {
      exit(1);
  }
  char ch;
  char user_name[30];
  char password[30];
  printf("\t\t\t\t\tENTER THE USER NAME:");
  scanf("%s",&user_name);
  printf("\t\t\t\t\tENTER THE PASSWORD (By 6 Characters):");
  scanf("%s",&password);
  fprintf(signup,"Username %s Password %s",user_name,password);
  fclose(signup);
  printf("\t\t\t\t\tpress 0 to return main menu 1. Save");

int si=0;
scanf("%d",&si);
switch(si){
 case 0:
     main();
     break;
 case 1:
     printf("\t\t\t\t\t\tsave successful\n");
     main();
     break;
 default:
    printf("\t\t\t\t\tYour choice is wrong");
    break;
}
}

void loginform(){
system("cls");
printf("\t\t\t\t\tThis is login form\n");
char user_name[30];
char password[30];
FILE*fptr;
fptr=fopen("signup.txt","r");
printf("\n\t\t\t\t\tUsername:");
scanf("%s",user_name);
printf("\n\t\t\t\t\tPASSWORD (By 6 Characters): ");
scanf("%s",password);
char n[20];
char p[20];
int i=0;
      while(fscanf(fptr,"%s %s %s %s",n,n,p,p)!=EOF)
      {
          int na=strcmp(user_name,n);
          int pa=strcmp(password,p);
          if(na==0 && pa==0)
          {
          i=1;
          break;
          }
}
    if(i==0)
      printf("\t\t\t\t\tlogin unsuccessful");
       else
        university();





}
void about()
{   system("cls");
    printf("\n\t\t\t\t\t=====================================\n");
    printf("\n\t\t\t\t\tUNIVERSITY MANAGEMENT SYSTEM\n\n");
    printf("\n\t\t\t\t\t=====================================\n");
    printf("\n\t\t\t\t\tThis Software is developed by Masud Rana\n\t\t\t\t\tVersion 1.0\n\t\t\t\t\tIf you face any bug, please send bug reports\n\t\t\t\t\tto Masud35-2189@diu.edu.bd\n");
    printf("\n\t\t\t\t\t=====================================\n");
    printf("\n\t\t\t\t\tPress Enter For Back To Main Menu....");
    getch();
    main();
}

void university()
{

    int option;
    system("COLOR 9F");
    system("cls");
    printf("\n\t\t\t\t\t=====================================\n");
    printf("\n\t\t\t\t\tUNIVERSITY MANAGEMENT SYSTEM\n\n");
    printf("\n\t\t\t\t\t=====================================\n");
    printf("\n\t\t\t\t\t1.STUDENT INFORMATION\n\n");
    printf("\n\t\t\t\t\t2.TEACHER INFORMATION\n\n");
    printf("\n\t\t\t\t\t3.LIBRARY INFORMATION\n\n");
    printf("\n\t\t\t\t\t4.Log Out\n");
     printf("\n\t\t\t\t\tEnter your option :");
    scanf("%d",&option);
    switch(option)
    {

        case 1:
             studentinfo();
             break;
        case 2:
             teacher_information();
            break;
        case 3:
            library();
            break;
        case 4:
            log_out();
            break;
     default:
            printf("\t\t\t\t\tyou option worng");
            exit(0);
            getch();


}

}



void studentinfo()
{
    struct student_information s;
     int option;
    system("COLOR 3F");
    system("cls");
    printf("\n\t\t\t\t\t=====================================\n");
    printf("\n\t\t\t\t\t STUDENT INFORMATION\n");
    printf("\n\t\t\t\t\t=====================================\n");
    printf("\n\n\t\t\t\t\t1.ADD STUDENT INFO\n");
    printf("\t\t\t\t\t2.STUDENT ATTENDANCE\n");
    printf("\t\t\t\t\t3.DISPLAYLIST STUDENT INFO\n");
    printf("\t\t\t\t\t4.SEARCH RECORD STUDENT INFO\n");
    printf("\t\t\t\t\t5.DELETE STUDENT INFO\n");
    printf("\t\t\t\t\t6.MODIFY STUDENT INFO\n");
    printf("\t\t\t\t\t7.UNIVERSITY MANAGEMENT SYSTEM\n");
    printf("\t\t\t\t\t0.EXIT\n");
    printf("\t\t\t\t\tENTER YOUR OPTION:");
    scanf("%d",&option);
    switch(option)
    {
        case 1:
            add();
             break;
        case 2:
            attendance();
            break;
        case 3:
             displayList();
            break;
        case 4:
            search();
            break;
        case 5:
            del();
            break;
        case 6:
            modify();
            break;
        case 7:
            university();
            break;
        default:
            printf("\t\t\t\t\tyour option is wrong");
            exit(0);
            getch();

    }

}
void add()
{
    char option;
   struct student_information s;
   FILE*fp;
   fp=fopen("studensdspd.txt","ab");
   while(1)
{
  system("cls");
  printf("\n\t\t\t\t\tENTER THE FULL NAME:");
  fflush(stdin);
  scanf("%[^\n]",&s.name);
  printf("\n\t\t\t\t\tENTER THE ID:");
  scanf("%s",&s.ID);
  printf("\n\t\t\t\t\tENTER THE DEPARTMENT:");
  scanf("%s",&s.department);
  printf("\t\t\t\t\t1.QUIZ MARK:");
  scanf("%f",&s.quiz1);
  printf("\t\t\t\t\t2.QUIZ MARK:");
  scanf("%f",&s.quiz2);
  printf("\t\t\t\t\t3.QUIZ MARK:");
  scanf("%f",&s.quiz3);
  s.sum=(s.quiz1+s.quiz2+s.quiz3)/3;
  printf("\t\t\t\t\tPRESENTATION MARK:");
  scanf("%f",&s.presentation);
  printf("\t\t\t\t\tASSIGNMENT:");
  scanf("%f",&s.assignment);
  printf("\t\t\t\t\tMIDTERM MARK:");
  scanf("%f",&s.mid_tetm);
  printf("\t\t\t\t\tFINAL MARK:");
  scanf("%f",&s.fainal);
  s.total=s.sum+s.presentation+s.assignment+s.mid_tetm+s.fainal;
  fwrite(&s,sizeof(s),1,fp);
  fflush(stdin);
  printf("\t\t\t\t\tWANT TO ENTER ANOTHER STUDENT INFO(Y/N):");
  option=getchar();
  if(option=='n'||option=='N')
  break;

}
fclose(fp);
studentinfo();
getch();
}
void attendance()
{

    system("cls");
    printf("\n\t\t\t\t\t=====================================\n");
    printf("\n\n\t\t\t\t\tAttendance\n");
    printf("\n\t\t\t\t\t=====================================\n");
    printf("\n\t\t\t\t\t1: Give Attendance \n\t\t\t\t\t2: View Attendance \n\t\t\t\t\t3: Main Menu\n\n\n");
    printf("\t\t\t\t\tPlease Enter Your Choice: ");
    int si=0;
    scanf("%d",&si);
    switch(si)
    {
    case 1:
        giveAttendance();
        break;
    case 2:
        viewAttendance();
        break;
    case 3:
        studentinfo();
        break;
    default:
        system("cls");
        printf("\n\n\t\t\tWrong Input\n\n\n\n\n\n\n\t\t\tPress Enter Try Again");
        getch();
        attendance();

    }
}
void giveAttendance()
{
   char option;
   struct student_information s;
   FILE*fp;
   fp=fopen("attendancet.txt","ab+");
   while(1)
{
  system("cls");
  printf("\n\t\t\t\t\tENTER THE ID:");
  scanf("%s",&s.ID);
  fwrite(&s,sizeof(s),1,fp);
  fflush(stdin);
  printf("\n\t\t\t\t\tWANT TO ENTER ANOTHER STUDENT ATTENDANCE(Y/N):");
  option=getchar();
  if(option=='n'||option=='N')
  break;

}
fclose(fp);
attendance();
getch();
}


void viewAttendance()
{
   struct student_information s;
    FILE*fp;
    fp=fopen("attendancet.txt","rb+");
    system("cls");
    while(fread(&s,sizeof(s),1,fp)==1)
    {
        printf("ID: %s\t Time: %s\t Date: %s\n",s.ID,__TIME__,__DATE__);
    }

    fclose(fp);
    getch();
    attendance();
}

void displayList()
{
    struct student_information s;
    FILE*fp;
   fp=fopen("studensdspd.txt","rb+");
    system("cls");
    printf("\n\t\t\t\t\t=======================================\n");
    printf("\n\t\t\t\t\tVIEW STUDENT INFORMATION\n ");
    printf("\n\t\t\t\t\t=======================================\n");
    printf("\nNAME:\tId:\tDEPARTMENT:\t1.Q M:\t2.Q M:\t3.Q M:\tAVE M:\tPRE M:\tASSI M:\tMID:\tFI:\tT0TAL:\tGPA:");
    while(fread(&s,sizeof(s),1,fp)==1)
   {
       printf("\n%-7s\t%-7s\t%-5s\t%-5.2f\t%-5.2f\t%-5.2f\t%-5.2f\t%-5.2f\t%-5.2f\t%-5.2f\t%-5.2f\t%.2f",s.name,s.ID,s.department,s.quiz1,s.quiz2,s.quiz3,s.sum,s.presentation,s.assignment,s.mid_tetm,s.fainal,s.total);
    {
       if(s.total>=80.00)
    {
    printf("\t4.00\n\t");
    }
       else if(s.total<80.00&&s.total>=75.00)
    {
    printf("\t3.75\n\t");
    }
       else if(s.total<75.00&&s.total>=70.00)
    {
    printf("\t3.50\n\t");
    }
       else if(s.total<70.00&&s.total>=65.00)
    {
    printf("\t3.25\n\t");
    }
      else if(s.total<65.00&&s.total>=60.00)
    {
    printf("\t3.00\n\t");
    }
     else if(s.total< 60.00&&s.total>=55.00)
    {
    printf("\t2.75\n\t");
    }
    else if(s.total<55.00&&s.total>=50.00)
    {
    printf("\t2.50\n\t");
    }
    else if(s.total<50.00&&s.total>=45.00)
    {
    printf("\t2.25\n\t");

    }
    else if(s.total<45.00&&s.total>=40.00)
    {
    printf("\t2.00\n\t");
    }
    else if(s.total<40.00)
    {
    printf("\t0.00\t");
    }

   }
   }
   printf("\n\t\t\t\t\tPress Enter to Go to main menu\n");
    fclose(fp);
    getch();
    studentinfo();

}
void search()
{   struct student_information s;
    FILE*fp;
    char ID1[20];
    int flag=1;
    fp=fopen("studensdspd.txt","rb+");
    fflush(stdin);
    system("cls");
    printf("\t\t\t\t\tENTER YOUR ID:");
    scanf("%s",ID1);
    while(fread(&s,sizeof(s),1,fp)==1)

    {
        if(strcmp(s.ID,ID1)==0)


    {
      system("cls");
      printf("\n\t\t\t\t\tRECORD FOUND");
      printf("\n\t\t\t\t\t=====================================\n");
      printf("\t\t\t\t\tSEARCH STUDENT INFORMATION\n ");
      printf("\n\t\t\t\t\t=====================================\n");
      printf("\nNAME:\tId:\tDEPARTMENT:\t1.Q M:\t2.Q M:\t3.Q M:\tAVE M:\tPRE M:\tASSI M:\tMID:\tFI:\tT0TAL:\tGPA:");
      printf("\n%-7s\t%-4s\t%-5s\t%-5.2f\t%-5.2f\t%-5.2f\t%-5.2f\t%-5.2f\t%-5.2f\t%-5.2f\t%-5.2f\t%.2f",s.name,s.ID,s.department,s.quiz1,s.quiz2,s.quiz3,s.sum,s.presentation,s.assignment,s.mid_tetm,s.fainal,s.total);
    {
       if(s.total>=80.00)
    {
    printf("\t4.00\n\t");
    }
      else if(s.total<80.00&&s.total>=75.00)
    {
    printf("\t3.75\n\t");
    }
    else if(s.total<75.00&&s.total>=70.00)
    {
    printf("\t3.50\n\t");
    }
    else if(s.total<70.00&&s.total>=65.00)
    {
    printf("\t3.25\n\t");
    }
    else if(s.total<65.00&&s.total>=60.00)
    {
        printf("\t3.00\n\t");
    }
    else if(s.total< 60.00&&s.total>=55.00)
    {
        printf("\t2.75\n\t");
    }
    else if(s.total<55.00&&s.total>=50.00)
    {
        printf("\t2.50\n\t");
    }
    else if(s.total<50.00&&s.total>=45.00)
    {
        printf("\t2.25\n\t");

    }
    else if(s.total<45.00&&s.total>=40.00)
    {
        printf("\t2.00\n\t");
    }
    else if(s.total<40.00)
    {
        printf("\t0.00\t");
    }

    flag=0;

    break;
       }
    }
    else if(flag=1)

    {
        system("cls");
        printf("\t\t\t\t\tRECORD IS NOT FOUND");
    }
}
printf("\n\t\t\t\t\tPress Enter to Go to main menu\n");
getch();
studentinfo();
fclose(fp);

}
void del()
{
    struct student_information s;
    int n=1;
    FILE*fp,*tp;
    char ID1[20];
    fp=fopen("studensdspd.txt","rb+");
    tp=fopen("block.txt","wb+");
    fflush(stdin);
    system("cls");
    printf("\t\t\t\t\tENTER YOU ID:");
    scanf("%s",&ID1);
    fflush(stdin);
    while(fread(&s,sizeof(s),1,fp)==1)

    {
        if(strcmp(ID1,s.ID)==0)



    {

        printf("\t\t\t\t\tRECORD FOUND\n");
        printf("\nNAME:\tId:\tDEPARTMENT:\t1.Q M:\t2.Q M:\t3.Q M:\tAVE M:\tPRE M:\tASSI M:\tMID:\tFI:\tT0TAL:\tGPA:");
        printf("\n%-7s\t%-5s\t%-5s\t%-5.2f\t%-5.2f\t%-5.2f\t%-5.2f\t%-5.2f\t%-5.2f\t%-5.2f\t%-5.2f\t%.2f",s.name,s.ID,s.department,s.quiz1,s.quiz2,s.quiz3,s.sum,s.presentation,s.assignment,s.mid_tetm,s.fainal,s.total);
        {
       if(s.total>=80.00)
    {
    printf("\t4.00\n\t");
    }
       else if(s.total<80.00&&s.total>=75.00)
    {
    printf("\t3.75\n\t");
    }
       else if(s.total<75.00&&s.total>=70.00)
    {
    printf("\t3.50\n\t");
    }
       else if(s.total<70.00&&s.total>=65.00)
    {
    printf("\t3.25\n\t");
    }
      else if(s.total<65.00&&s.total>=60.00)
    {
    printf("\t3.00\n\t");
    }
     else if(s.total< 60.00&&s.total>=55.00)
    {
    printf("\t2.75\n\t");
    }
    else if(s.total<55.00&&s.total>=50.00)
    {
    printf("\t2.50\n\t");
    }
    else if(s.total<50.00&&s.total>=45.00)
    {
    printf("\t2.25\n\t");

    }
    else if(s.total<45.00&&s.total>=40.00)
    {
    printf("\t2.00\n\t");
    }
    else if(s.total<40.00)
    {
    printf("\t0.00\t");
    }

   }
       continue;
    }
    fwrite(&s,sizeof(s),1,tp);
}

fclose(fp);
fclose(tp);
fflush(stdin);
remove("studensdspd.txt");
rename("block.txt","studensdspd.txt");
printf("\n\t\t\t\t\t DELETE YOUR STUDENT INFO");
getch();
printf("\n\t\t\t\t\tPress Enter to Go to main menu");
studentinfo();
    }

void modify()

{
    struct student_information s;
    char option;
    FILE*fp;
    char id[20];
    int flag=1;
    if((fp=fopen("studensdspd.txt","rb+"))==NULL)
        exit(0);
    system("cls");
    printf("\t\t\t\t\tENTER YOUR Id:");
    fflush(stdin);
    scanf("%s",id);
    while(fread(&s,sizeof(s),1,fp)==1)

    {
        if(strcmp(s.ID,id)==0)

    {
        system("cls");

    printf("\n\t\t\t\t\tRECORD IS FOUND");
    int option;
    system("COLOR 0F");
    system("cls");
    printf("\n\t\t\t\t\t1.ENTER THE FULL NAME\n");
    printf("\n\t\t\t\t\t2.ENTER THE ID\n");
    printf("\n\t\t\t\t\t3.ENTER THE DEPARTMENT\n");
    printf("\n\t\t\t\t\t4.1.QUIZ MARK\n");
    printf("\n\t\t\t\t\t5.2.QUIZ MARK\n");
    printf("\n\t\t\t\t\t6.3.QUIZ MARK\n");
    printf("\n\t\t\t\t\t7.PRESENTATION MARK\n");
    printf("\n\t\t\t\t\t8.ASSIGNMENT\n");
    printf("\n\t\t\t\t\t9.MIDTERM MARK\n");
    printf("\n\t\t\t\t\t10.FAINAL MARK\n\n");
    printf("\t\t\t\t\tENTER YOUR OPTION:");
    scanf("%d",&option);
    switch(option)
    {
        case 1:
             printf("\n\t\t\t\t\tENTER THE FULL NAME:");
             fflush(stdin);
            scanf("%[^\n]",&s.name);
             break;
        case 2:
             printf("\n\t\t\t\t\tENTER THE ID:");
             scanf("%s",s.ID);
            break;
        case 3:
            printf("\n\t\t\t\t\tENTER THE DEPARTMENT:");
            scanf("%s",s.department);
            break;
        case 4:
            printf("\t\t\t\t\t1.QUIZ MARK:");
            scanf("%f",&s.quiz1);
            break;
        case 5:
             printf("\t\t\t\t\t2.QUIZ MARK:");
            scanf("%f",&s.quiz2);
            break;
        case 6:
             printf("\t\t\t\t\t3.QUIZ MARK:");
             scanf("%f",&s.quiz2);
             break;
        case 7:
            printf("\t\t\t\t\tPRESENTATION MARK:");
            scanf("%f",&s.presentation);
            break;
        case 8:
            printf("\t\t\t\t\tASSIGNMENT:");
            scanf("%f",&s.assignment);
            break;
        case 9:
            printf("\t\t\t\t\tMIDTERM MARK:");
            scanf("%f",&s.mid_tetm);
            break;
        case 10:
          printf("\t\t\t\t\tFINAL MARK:");
          scanf("%f",&s.fainal);
          break;
        default:
            printf("\t\t\t\t\tyour option worng");
            exit(0);
            getch();


    }
   s.sum=(s.quiz1+s.quiz2+s.quiz3)/3;
   s.total=s.sum+s.presentation+s.assignment+s.mid_tetm+s.fainal;
   fseek(fp,-sizeof(s),SEEK_CUR);
   fwrite(&s,sizeof(s),1,fp);

    flag=0;

    break;
    }

    else if(flag=1)

    {
        system("cls");
        printf("\t\t\t\t\tRECORD IS NOT FOUND");
    }
    }
    fclose(fp);
    getch();
    printf("\nPress Enter to Go to main menu");
    studentinfo();

}
void teacher_information()
{
    struct teacher_information t;
     int option;
    system("COLOR 2F");
    system("cls");
    printf("\n\t\t\t\t\t=====================================\n");
    printf("\n\t\t\t\t\tTEACHER INFORMATION\n\n");
    printf("\n\t\t\t\t\t=====================================\n");
    printf("\n\t\t\t\t\t1.ADD TEACHER INFO\n");
    printf("\n\t\t\t\t\t2.ATTENDANCE\n");
    printf("\t\t\t\t\t3.DISPLAY THE TEACHER INFO\n");
    printf("\t\t\t\t\t4.SEARCH RECORD TEACHER INFO\n");
    printf("\t\t\t\t\t5.DELETE STUDENT INFO\n");
    printf("\t\t\t\t\t6.MODIFY TEACHER INFO\n");
    printf("\t\t\t\t\t7.UNIVERSITY MANAGEMENT SYSTEM\n");
    printf("\t\t\t\t\t0.EXIT\n\n");
    printf("\t\t\t\t\tENTER YOUR OPTION:");
    scanf("%d",&option);
    switch(option)
    {
        case 1:
             Teacher_add();
             break;
        case 2:
            teacher_attendance();
            break;
        case 3:
             Teacher_displayList();
            break;
        case 4:
            Teacher_search();
            break;
        case 5:
            Teacher_del();
            break;
        case 6:
            Teacher_modify();
            break;
        case 7:
            university();
            break;

        default:
            printf("\t\t\t\t\tyour option is wrong");
            exit(0);
            getch();
    }

}

void Teacher_add()
{
char option;
   struct teacher_information  t;
   FILE*fp;
   fp=fopen("teacherd.txt","ab+");
   while(1)
{
  system("cls");
  printf("\n\t\t\t\t\tENTER THE FULL NAME:");
  fflush(stdin);
  scanf("%[^\n]",&t.name);
  printf("\n\t\t\t\t\tENTER THE ID:");
  scanf("%s",&t.ID);
  printf("\n\t\t\t\t\tENTER THE DEPARTMENT:");
  scanf("%s",&t.department);
  fwrite(&t,sizeof(t),1,fp);
  fflush(stdin);
  printf("\n\t\t\t\t\tWANT TO ENTER ANOTHER TEACHAR INFO(Y/N):");
  option=getchar();
  if(option=='n'||option=='N')
  break;

}
fclose(fp);
teacher_information();
getch();
}
void teacher_attendance()
{

    system("cls");
    printf("\n\n\t\t\t\tAttendance\n\n");
    printf("\n\t\t\t1: Give Attendance \n\t\t\t2: View Attendance \n\t\t\t3: Main Menu\n\n\n");
    printf("\t\t\tPlease Enter Your Choice: ");
    int si=0;
    scanf("%d",&si);
    switch(si)
    {
    case 1:
        teacher_giveAttendance();
        break;
    case 2:
        teacher_viewAttendance();
        break;
    case 3:
        teacher_information();
        break;
    default:
        system("cls");
        printf("\n\n\t\t\tWrong Input\n\n\n\n\n\n\n\t\t\tPress Enter For Try Again");
        getch();
        attendance();

    }
}
void teacher_giveAttendance()
{
   char option;
   struct teacher_information  t;
    FILE*fp;
    fp=fopen("teacherd.txt","ab+");
   while(1)
{
  system("cls");
  printf("\n\t\t\t\t\tENTER THE ID:");
  scanf("%s",&t.ID);
  fwrite(&t,sizeof(t),1,fp);
  fflush(stdin);
  printf("\n\t\t\t\t\tWANT TO ENTER ANOTHER TEACHER ATTENDANCE(Y/N):");
  option=getchar();
  if(option=='n'||option=='N')
  break;

}
fclose(fp);
teacher_attendance();
getch();
}


void teacher_viewAttendance()
{
    struct teacher_information  t;;
    FILE*fp;
    fp=fopen("teacherd.txt","rb+");
    system("cls");
    while(fread(&t,sizeof(t),1,fp)==0)
    {
        printf("ID: %s\t Time: %s\t Date: %s\n",t.ID,__TIME__,__DATE__);
    }

    fclose(fp);
    getch();
    teacher_attendance();

}
void Teacher_displayList()
{
    struct teacher_information  t;
    FILE*fp;
   fp=fopen("teacherd.txt","rb+");
    system("cls");
    printf("\n\t\t\t\t\t=====================================\n");
    printf("\t\t\t\t\tVIEW TEACHER INFORMATION\n ");
    printf("\n\t\t\t\t\t=====================================\n");
    printf("\n\t\t\t\tNAME:\t\tTEACHER ID:\t\tDEPARTMENT:");

    while(fread(&t,sizeof(t),1,fp)==1)


    {
       printf("\n\t\t\t\t%-10s\t%-20s\t%s ",t.name,t.ID,t.department);


    }

    fclose(fp);
    getch();
    printf("\nPress Enter to Go to main menu");
    teacher_information();

}
void Teacher_search()
{
    struct teacher_information  t;
    FILE*fp;
    fp=fopen("teacherd.txt","rb+");
    char ID1[20];
    int flag=1;
    fflush(stdin);
    system("cls");
    printf("\t\t\t\t\tENTER YOUR ID:");
    scanf("%s",&ID1);
    while(fread(&t,sizeof(t),1,fp)==1)

    {
     if(strcmp(t.ID,ID1)==0)
    {
    system("cls");
    printf("\n\t\t\t\t\tRECORD FOUND");
    printf("\n\t\t\t\t\t=====================================\n");
    printf("\t\t\t\t\tVIEW TEACHER INFORMATION\n ");
    printf("\n\t\t\t\t\t=====================================\n");
    printf("\n\t\t\t\tNAME\t\tTEACHER ID\t\tDEPARTMENT");
    printf("\n\t\t\t\t%-10s\t%-20s\t%s ",t.name,t.ID,t.department);
    flag=0;

    break;
    }
    else if(flag=1)

    {
        system("cls");
        printf("RECORD IS NOT FOUND");
    }
    }
getch();
printf("\nPress Enter to Go to main menu");
teacher_information();
fclose(fp);


}
void Teacher_del()
{
   struct teacher_information  t;
    FILE*fp,*tp;
    tp=fopen("teach.txt","wb+");
    fp=fopen("teacherd.txt","rb+");
    char ID1[20];
    int flag=1;
    fflush(stdin);
    system("cls");
    printf("\t\t\t\t\tENTER YOUR ID:");
    scanf("%s",&ID1);
    while(fread(&t,sizeof(t),1,fp)==1)

    {
     if(strcmp(t.ID,ID1)==0)



    {

        printf("\t\t\t\t\tRECORD FOUND\n");
        printf("\n\t\t\t\tNAME\tTEACHER ID\tDEPARTMENT");
        printf("\n\t\t\t\t%-6s\t%-10s\t%s\n",t.name,t.ID,t.department);

       continue;
    }
    fwrite(&t,sizeof(t),1,tp);
}

fclose(fp);
fclose(tp);
fflush(stdin);
remove("teacherd.txt");
rename("teach.txt","teacherd.txt");
printf("\n\t\t\t\t\tDELETE YOUR TEACHER INFO");
getch();
printf("\n\t\t\t\t\tPress Enter to Go to main menu");
teacher_information();
    }
void   Teacher_modify()
{

struct teacher_information  t;
    FILE*fp;
    int option;
    fp=fopen("teacherd.txt","rb+");
    char ID1[20];
    int flag=1;
    fflush(stdin);
    system("cls");
    printf("\t\t\t\t\tENTER FOR MODIFY\n");
    printf("\n\t\t\t\t\tENTER YOUR ID:");
    scanf("%s",&ID1);
    while(fread(&t,sizeof(t),1,fp)==1)

    {
 if(strcmp(t.ID,ID1)==0)
    {
    printf("\n\t\t\t\t\tRECORD IS FOUND");
    int option;
    system("COLOR 0F");
    system("cls");
    printf("\n\t\t\t\t\t1.ENTER THE FULL NAME\n");
    printf("\n\t\t\t\t\t2.ENTER THE ID\n");
    printf("\n\t\t\t\t\t3.ENTER THE DEPARTMENT\n\n");
    printf("\t\t\t\t\tENTER YOUR OPTION:");
    scanf("%d",&option);
    switch(option)
    {
        case 1:
             printf("\n\t\t\t\t\tENTER THE FULL NAME:");
             fflush(stdin);
           scanf("%[^\n]",&t.name);
             break;
        case 2:
             printf("\n\t\t\t\t\tENTER THE ID:");
             scanf("%s",t.ID);
            break;
        case 3:
            printf("\n\t\t\t\t\tENTER THE DEPARTMENT:");
            scanf("%s",t.department);
            break;
        default:
            printf("\t\t\t\t\tyour option is wrong");
            exit(0);
            getch();


    }


  fseek(fp,-sizeof(t),SEEK_CUR);
  fwrite(&t,sizeof(t),1,fp);

    flag=0;

    break;
    }

    else if(flag=1)

    {
        system("cls");
        printf("RECORD IS NOT FOUND");
    }

    }
    fclose(fp);
    getch();
    printf("\nPress Enter to Go to main menu");
    teacher_information();
}
void library()
{
    struct library l;
     int option;
    system("COLOR 6F");
    system("cls");
    printf("\n\t\t\t\t\t=====================================\n");
    printf("\n\t\t\t\t\tLIBRARY INFORMATION\n\n");
    printf("\n\t\t\t\t\t=====================================\n");
    printf("\n\n\t\t\t\t\t1.ADD LIBRARY INFO\n");
    printf("\t\t\t\t\t2.DISPLAYLISHT LIBRARY INFO\n");
    printf("\t\t\t\t\t3.SEARCH RECORD LIBRARY INFO\n");
    printf("\t\t\t\t\t4.MODIFY RECORD LIBRARY INFO\n");
    printf("\t\t\t\t\t5.UNIVERSITY MANGEMENT SYSTEM\n");
    printf("\t\t\t\t\t0.EXIT\n");
    printf("\t\t\t\t\tENTER YOUR OPTION:");
    scanf("%d",&option);
    switch(option)
    {

        case 1:
             add_book();
             break;
        case 2:
             book_display();
        case 3:
            book_search();
            break;
        case 4:
             book_modify();
             break;
        case 5:
            university();
            break;
        default:
            printf("\t\t\t\t\tyour option wrong");
            exit(0);
            getch();

    }

}
void add_book()
{
    char option;
   struct library l;
   FILE*fp;
   fp=fopen("librarydn.txt","ab");
   while(1)
{
  system("cls");
  printf("\n\t\t\t\t\tENTER BOOK NAME:");
  fflush(stdin);
  scanf("%[^\n]",&l.name);
  printf("\n\t\t\t\t\tENTER BOOK ID:");
  scanf("%s",&l.ID);
  printf("\n\t\t\t\t\tENTER AUTHOR NAME:");
  scanf("%s",&l.author);
  fwrite(&l,sizeof(l),1,fp);
  fflush(stdin);
  printf("\n\t\t\t\t\tWANT TO ENTER ANOTHER LABRARY INFO(Y/N):");
  option=getchar();
  if(option=='n'||option=='N')
  break;

}
fclose(fp);
library();
getch();
}
void book_display()
{
  struct library l;
    FILE*fp;
    char id[20];
    int i=1;
    fp=fopen("librarydn.txt","rb+");
    system("cls");
    printf("BOOK NAME:\t\tSTUDENT Id:\t\tAUTHOR NAME:");
    while(fread(&l,sizeof(l),1,fp)==1)


    {
       printf("\n%-20s\t%-23s\t%s ",l.name,l.ID,l.author);

    }

    fclose(fp);
    getch();
    printf("\nPress Enter to Go to main menu");
    library();

}
void book_search()

{

  struct library l;
    FILE*fp;
    fp=fopen("librarydn.txt","rb+");
    char id[20];
    int flag=1;
    fflush(stdin);
    system("cls");
    printf("\t\t\t\t\tENTER YOUR ID:");
    scanf("%s",&id);
    while(fread(&l,sizeof(l),1,fp)==1)

    {
     if(strcmp(l.ID,id)==0)
    {
    system("cls");
    printf("RECORD FOUND");
    printf("\nBOOK NAME:\t\tId:\t\tAUTHOR NAME:");
    printf("\n%-20s\t%-23s\t%s ",l.name,l.ID,l.author);
    flag=0;

    break;
    }
    else if(flag=1)

    {
        system("cls");
        printf("RECORD IS NOT FOUND");
    }
    }
getch();
printf("\nPress Enter to Go to main menu");
library();
fclose(fp);
}
void book_modify()
{

    struct library l;;
    FILE*fp;
    fp=fopen("librarydn.txt","rb+");
    char id[20];
    int flag=1;
    fflush(stdin);
    system("cls");
    printf("\t\t\t\t\tENTER YOUR ID:");
    scanf("%s",&id);
    while(fread(&l,sizeof(l),1,fp)==1)

    {
     if(strcmp(l.ID,id)==0)
    {
    system("cls");
    printf("\t\t\t\t\tRECORD FOUND");
    int option;
    system("COLOR 2F");
    system("cls");
    printf("\n\t\t\t\t\tENTER BOOK NAME");
    printf("\n\t\t\t\t\tENTER BOOK ID");
    printf("\n\t\t\t\t\tENTER AUTHOR NAME");
    printf("\n\t\t\t\t\tENTER YOUR OPTION:");
    scanf("%d",&option);
    switch(option)
    {
        case 1:
             printf("\n\t\t\t\t\tENTER BOOK NAME:");
             fflush(stdin);
             scanf("%[^\n]",&l.name);
             break;
        case 2:
          printf("\n\t\t\t\t\tENTER BOOK ID:");
          scanf("%s",&l.ID);
            break;
        case 3:
            printf("\n\t\t\t\t\tENTER AUTHOR NAME:");
           scanf("%s",&l.author);
            break;
        default:
            printf("\t\t\t\t\tyou option is wrong");
            exit(0);
            getch();


    }


  fseek(fp,-sizeof(l),SEEK_CUR);
  fwrite(&l,sizeof(l),1,fp);

    flag=0;

    break;
    }

    else if(flag=1)

    {
        system("cls");
        printf("RECORD IS NOT FOUND");
    }

    }
    fclose(fp);
    getch();
    printf("\nPress Enter to Go to main menu");
    library();

}
void log_out()
{
system("cls");
system("COLOR 5F");
printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t******THANK YOU******");
getch();

}
