#  כתבו פונקציה המקבלת מספר שלם הפונקציה תדפיס כמה ספרות המספר
void f1(int num)
{
    int i=0,j=0;
    while (num>0)
    {
       num=num/10;
       i=i+1;
    }
    printf("%d",i);
}

