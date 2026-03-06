//  כתבו פונקציה המקבלת מספר שלם הפונקציה תדפיס כמה ספרות המספר
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
// כתבו פונקציה המקבלת מספר שלם וחיובי הפונקציה תדפיס את המספר המתקבל בסדר ספרות הפוך. אם המספר מתחיל מ-0 היא תשמיט אותו
void f2(int num)
{
    int reverse=0;
    while (num!=0)
    {
        reverse=reverse*10+num%10;
        num=num/10;
    }
    printf("%d",reverse);
}

