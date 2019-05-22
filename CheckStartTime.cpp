#include <windows.h>
#include <stdio.h>

bool checkUptime(){
    DWORD UpTime = GetTickCount();//操作系统已启动时间(毫秒)小于1个小时
    printf("uptime:%u\n",UpTime);
    if(UpTime < 3600000)
        return false;
    else
        return true;
}

int main(){
    if(checkUptime())
        printf("ok\n");
    else
        printf("error!");
    getchar();

    return 0;
}
