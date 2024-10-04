#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
struct lost {
char name[50];
char colour[50];
char ide[100];
}person[100];

struct found {
char name1[50];
char colour1[50];
char ide1[100];
}person1[100];
main()
{
FILE *file, *file1, *det, *temp, *temp1;



char a,read,read1,read2,name2[50],line[500], line1[500],line2[500],line3[500],line4[500],fname[50],fcolour[50],fspec[50],fperson[50],fide[50],fnum[50],fdate[50];
int rc,r,found1=0, found2=0;
system("CLS");
first:
printf("\t\t\t******LOST AND FOUND******");
printf("\n\n\n\n\n*PRESS 'A' TO STORE LOST ITEMS.\n*PRESS 'B' TO STORE FOUND ITEMS.\n*PRESS 'C' TO DISPLAY ALL THE LOST ITEMS.\n*PRESS 'D' TO DISPLAY ALL THE FOUND ITEMS.\n*PRESS 'E' TO SEARCH LOST ITEMS.\n*PRESS 'F' TO SEARCH FOUND ITEMS.\n*PRESS 'G' TO STORE THE PERSON DETAILS FOR THE FOUND ITEMS.\n*PRESS 'H' TO DISPLAY PERSON RECORDS FOR THE FOUND ITEMS.\n*PRESS 'I' TO DELETE IN LOST ITEMS.\n*PRESS 'J' TO DELETE IN FOUND ITEMS.\n*PRESS 'K' TO EXIT.\n");
a=getche();
switch(a)
{
case 'A':
{
system("CLS");
printf("\t\t\tENTER ITEMS THAT HAS BEEN LOST\n");
printf("\n'ENTER DATA IN BLOCK LETTERS'\n");
printf("\nHOW MANY RECORDS DO YOU WANT TO ENTER?: ");
fflush(stdin);
scanf("%d",&rc);
for(r=0; r<rc; r++)
{
printf("\nENTER NAME OF THE LOST ITEM: ");
fflush(stdin);
gets(person[r].name);
printf("\nENTER THE COLOUR OF THE LOST ITEM: ");
fflush(stdin);
gets(person[r].colour);
printf("\nENTER ANY SPECIFIC IDENTITY: ");
fflush(stdin);
gets(person[r].ide);
printf("\n");
}
for ( r = 0; r < rc; r++)
{
file = fopen("lost.txt", "a+");
fprintf(file,"NAME: %s\t", person[r].name);
fprintf(file, "COLOUR: %s\t", person[r].colour);
fprintf(file, "SPECIFIC IDENTITY: %s\n", person[r].ide);
fprintf(file, "\n");
fclose(file);
}
second:
printf("\nPRESS 'A' TO GO BACK TO MENU:");
a=getche();
if(a=='A')
{
system("CLS");
goto first;
}
else
{
system("CLS");
printf("\nINVALID INPUT");
goto second;
}
}

case 'B':
{
system("CLS");
printf("\t\t\tENTER ITEMS THAT HAS BEEN FOUND\n");
printf("\n'ENTER DATA IN BLOCK LETTERS'\n");
printf("\nHOW MANY RECORDS DO YO WANT TO ENTER?:");
fflush(stdin);
scanf("%d",&rc);
for( r=0; r<rc; r++)
{
printf("\nENTER NAME OF THE FOUND ITEM: ");
fflush(stdin);
gets(person1[r].name1);
printf("\nENTER THE COLOUR OF THE FOUND ITEM: ");
fflush(stdin);
gets(person1[r].colour1);
printf("\nENTER ANY SPECIFIC IDENTITY: ");
fflush(stdin);
gets(person1[r].ide1);
printf("\n");
}
for (r= 0; r < rc; r++)
{
file1 = fopen("found.txt", "a+");
fprintf(file1, "NAME: %s\t", person1[r].name1);
fprintf(file1, "COLOUR: %s\t", person1[r].colour1);
fprintf(file1, "SPECIFIC IDENTITY: %s\n", person1[r].ide1);
fprintf(file1, "\n");
fclose(file1);
}
third:
printf("\nPRESS 'A' TO BACK TO MENU:");
a=getche();
if(a=='A')
{
system("CLS");
goto first;
}
else
{
system("CLS");
printf("\nINVALID");
goto third;
}
}

case 'C':
{
system("CLS");
file=fopen("lost.txt","r");
printf("\t\t\tITEMS THAT HAS BEEN LOST\n\n\n");
read=fgetc(file);
while(read!=EOF)
{
printf("%c",read);
read=fgetc(file);
}
fclose(file);
fourth:
printf("\n\nPRESS 'A' TO GO BACK TO MENU: ");
a=getche();
if(a=='A')
{
system("CLS");
goto first;
}
else
{
system("CLS");
printf("\nINVALID INPUT");
goto fourth;
}
}

case 'D':
{
system("CLS");
file1=fopen("found.txt","r");
printf("\t\t\tITEMS THAT HAS BEEN FOUND\n\n\n");
read1=fgetc(file1);
while(read1!=EOF)
{
printf("%c",read1);
read1=fgetc(file1);
}
fclose(file1);
five:
printf("\n\nPRESS 'A' TO GO BACK TO MENU: ");
a=getche();
if(a=='A')
{
system("CLS");
goto first;
}
else
{
system("CLS");
printf("\nINVALID INPUT");
goto five;
}
}

case 'E':
{
system("CLS");
printf("\t\t\tSEARCH LOST ITEMS\n\n");
printf("\nENTER NAME OF THE LOST ITEM(BLOCK LETTERS): ");
fflush(stdin);
gets(name2);
file = fopen("lost.txt", "r");
while (fgets(line, sizeof(line), file))
{
if (strstr(line,name2))
{
printf("\n%s\n",line);
found1=1;
}
}
if(found1==0)
{
printf("\nNAME NOT FOUND IN FILE.");
}
fclose(file);
six:
printf("\n\nPRESS 'A' TO GO BACK TO MENU: ");
a=getche();
if(a=='A')
{
system("CLS");
goto first;
}
else
{
system("CLS");
printf("\nINVALID INPUT");
goto six;
}
}

case 'F':
{
system("CLS");
printf("\t\t\tSEARCH FOUND ITEMS\n\n");
printf("\nENTER NAME OF THE FOUND ITEM(BLOCK LETTERS): ");
fflush(stdin);
gets(name2);
file1 = fopen("found.txt", "r");
while (fgets(line1, sizeof(line1), file1))
{
if (strstr(line1,name2))
{
printf("\n%s\n", line1);
found2=1;
}
}
if(found2==0)
{
printf("\nNAME NOT FOUND IN FILE.");
}
fclose(file1);
seven:
printf("\n\nPRESS 'A' TO GO BACK TO MENU: ");
a=getche();
if(a=='A')
{
system("CLS");
goto first;
}
else
{
system("CLS");
printf("\nINVALID INPUT");
goto seven;
}
}

case 'G':
{
system("CLS");
printf("\tENTER THE DETAILS OF THE PERSON TO WHICH THE FOUND ITEM BELONG\n\n");
printf("\n'ENTER DATA IN BLOCK LETTERS'\n");
printf("\nENTER DATE: ");
fflush(stdin);
gets(fdate);
printf("\nENTER NAME OF THE ITEM: ");
fflush(stdin);
gets(fname);
printf("\nENTER COLOUR OF THE ITEM: ");
fflush(stdin);
gets(fcolour);
printf("\nENTER SPECIFIC IDENTITY OF THE ITEM: ");
fflush(stdin);
gets(fspec);
printf("\nENTER THE NAME OF THE PERSON TO WHICH THE FOUND ITEM BELONG: ");
fflush(stdin);
gets(fperson);
printf("\nENTER PERSON ID: ");
fflush(stdin);
gets(fide);
printf("\nENTER PERSON CONTACT NUMBER: ");
fflush(stdin);
gets(fnum);
printf("\n");
det=fopen("record details.txt","a+");
fprintf(det, "*DATE: %s\n", fdate);
fprintf(det, "ITEM NAME: %s\n", fname);
fprintf(det, "ITEM COLOUR: %s\n", fcolour);
fprintf(det, "ITEM SPECIFIC IDENTITY: %s\n", fspec);
fprintf(det, "PERSON NAME: %s\n", fperson);
fprintf(det, "PERSON ID: %s\n", fide);
fprintf(det, "PERSON CONTACT NUMBER: %s\n", fnum);
fprintf(det, "\n");
fclose(det);
ten:
printf("\nPRESS 'A' TO BACK TO MENU: ");
a=getche();
if(a=='A')
{
system("CLS");
goto first;
}
else
{
system("CLS");
printf("\nINVALID");
goto ten;
}
}
case 'H':
{
system("CLS");
det=fopen("record details.txt","r");
printf("\tRECORD DETAILS OF PERSONS TO WHICH THE FOUND ITEM BELONGS \n\n\n");
read2=fgetc(det);
while(read2!=EOF)
{
printf("%c",read2);
read2=fgetc(det);
}
fclose(det);
eleven:
printf("\n\nPRESS 'A' TO GO BACK TO MENU: ");
a=getche();
if(a=='A')
{
system("CLS");
goto first;
}
else
{
system("CLS");
printf("\nINVALID INPUT");
goto eleven;
}
}


case 'I':
{
int match=0;
system("CLS");
printf("\n\nENTER THE NAME OF THE LOST ITEM TO DELETE THAT RECORD(BLOCK LETTERS): ");
scanf("%s", name2);
file = fopen("lost.txt", "r");
temp = fopen("temp.txt", "w+");
while(fgets(line3, sizeof(line3), file))
{
if(strstr(line3, name2))
{
match = 1;
}
else
{
fprintf(temp, "%s", line3);
}
}
fclose(file);
fclose(temp);
if(match)
{
remove("lost.txt");
rename("temp.txt", "lost.txt");
printf("%s RECORD HAS BEEN DELETED!.\n", name2);
}
else
{
remove("temp.txt");
printf("NO RECORD FOR %s.\n", name2);
}
eight:
printf("\n\nPRESS 'A' TO GO BACK TO MENU: ");
a=getche();
if(a=='A')
{
system("CLS");
goto first;
}
else
{
system("CLS");
printf("\nINVALID INPUT");
goto eight;
}
}
case 'J':
{
int match1=0;
system("CLS");
printf("\n\nENTER THE NAME OF THE FOUND ITEM TO DELETE THAT RECORD(BLOCK LETTERS): ");
scanf("%s", name2);
file1 = fopen("found.txt", "r");
temp1 = fopen("temp1.txt", "w+");
while(fgets(line4, sizeof(line4), file1))
{
if(strstr(line4, name2))
{
match1 = 1;
}
else
{
fprintf(temp1, "%s", line4);
}
}
fclose(file1);
fclose(temp1);
if(match1)
{
remove("found.txt");
rename("temp1.txt", "found.txt");
printf("%s RECORD HAS BEEN DELETED!.\n", name2);
}
else
{
remove("temp1.txt");
printf("NO RECORD FOR %s.\n", name2);
}
nine:
printf("\n\nPRESS 'A' TO GO BACK TO MENU: ");
a=getche();
if(a=='A')
{
system("CLS");
goto first;
}
else
{
system("CLS");
printf("\nINVALID INPUT");
goto nine;
}
}
case 'K':
{
exit(0);
}
default:
{
system("CLS");
printf("\nINVALID INPUT\n");
goto first;
}
}
getch();
}



