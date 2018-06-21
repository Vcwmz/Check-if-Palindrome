#include <stdio.h>
#include <stdlib.h>.

//Check if Palindrome – Checks if the string entered by the user is a palindrome.
//That is that it reads the same forwards as backwards like “racecar”.
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
    point_tail(&t,str);//函数的第一个参数定义为 “一个指向 存放数组指针1的 指针2”，故传值的时候应该传指针1的地址。
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
    return --p; //注意返回值需要先减一的时候用--p。
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
