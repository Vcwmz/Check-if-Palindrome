#include <stdio.h>
#include <stdlib.h>.

//Check if Palindrome �C Checks if the string entered by the user is a palindrome.
//That is that it reads the same forwards as backwards like ��racecar��.
/****************** below is the first method. using the double pointer.
void point_tail(char **p,char *a)
{
    int i=0;
    *p=a;
    while(*(a+i)!='\0')
        {
            (*p)++;
            i++;
        }
        (*p)--;

}

int Check(char str[])
{
    char *f,*t;
    int l=len(str)/2;
    f=str;
    point_tail(&t,str);//�����ĵ�һ����������Ϊ ��һ��ָ�� �������ָ��1�� ָ��2�����ʴ�ֵ��ʱ��Ӧ�ô�ָ��1�ĵ�ַ��
    while(l!=0)
    {
        if(*f==*t)
        {
            f++;
            t--;
        }
        else
            return 0;
        l--;
    }
    return 1;
}
********************************/
char * point_tail(char *p,char *a)
{
    int i=0;
    p=a;
    while(*(a+i)!='\0')
    {
        p++;
        i++;
    }
    return --p; //ע�ⷵ��ֵ��Ҫ�ȼ�һ��ʱ����--p��
}
int Check(char str[])
{
    char *f,*t;
    int l=len(str)/2;
    f=str;
    t=point_tail(t,str);

    while(l!=0)
    {
        if(*f==*t)
        {
            f++;
            t--;
        }
        else
            return 0;
        l--;
    }
    return 1;
}
int len(char *a)
{
    int i=0;
    while(*(a+i)!='\0')
        i++;
    return i;
}
int main()
{
    char a[100]="abcde";
    printf("Please string you want to check.\n");
    scanf("%s",a);
        if(Check(a))
          printf("This string is palindrome.");
        else
          printf("This string is not palindrome.");
}
