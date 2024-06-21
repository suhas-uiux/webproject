#include<stdio.h>
#include<string.h>
struct student
{
     char name[20];
    int r_no;
    int ia1[4];
    int ia2[4];
    int ia3[4];
    int cta[4];
    int total[5];
};
void read(struct student record[],int);
void display(struct student record[],int);
void com_cie(struct student record[],int);

int main()
{
    struct student record[20];
    int n;
    printf("enter the number of students\n");
    scanf("%d",&n);
    read(record,n);
    display(record,n);
    com_cie(record,n);
}
void read(struct student record[20],int n)
{
     int i,j;
    for(i=0;i<n;i++)
    {
        printf("enter name,r_no of student %d\n",i+1);
        scanf("%s%d",record[i].name,&record[i].r_no);
        printf("enter ia-1,ia-2,ia-3,cta marks of student %d\n",i+1);
        scanf("%d%d%d%d",&record[i].ia1[i],&record[i].ia2[i],&record[i].ia3[i],&record[i].cta[i]);
    }

}
void display(struct student record[20],int n)
{

    int i,j;
    for(i=0;i<n;i++)
    {

        printf("details of student %d\n",i+1);
        printf("NAME=%s\nR_NO=%d\n",record[i].name,record[i].r_no);
        printf("IA marks of student %d\n",i+1);
        printf("IA-1=%d\nIA-2=%d\nIA-3=%d\nCTA=%d\n",record[i].ia1[i],record[i].ia2[i],record[i].ia3[i],record[i].cta[i]);
        printf("\n");
    }
}

void com_cie(struct student record[20],int n)

{
    int i;
    for(i=0;i<n;i++)
    {

        if((record[i].ia1[i]>record[i].ia2[i])&&(record[i].ia3[i]>record[i].ia2[i]))
          record[i].total[i]=record[i].ia1[i]+record[i].ia3[i]+record[i].cta[i];

       else if((record[i].ia1[i]>record[i].ia3[i])&&(record[i].ia2[i]>record[i].ia3[i]))
        record[i].total[i]=record[i].ia1[i]+record[i].ia2[i]+record[i].cta[i];

       else if((record[i].ia2[i]>record[i].ia1[i])&&(record[i].ia3[i]>record[i].ia1[i]))
            record[i].total[i]=record[i].ia2[i]+record[i].ia3[i]+record[i].cta[i];
    }

    
    printf("CIE marks of student %d is %d\n",i+1,record[i].total[i]);

}