#include <stdio.h>
#include <string.h>

bool checkMAC(){
    char buffer[128];
    char result[1024*50] = "";
    char MAC[] = "08-00-27";//"00-05-69" , "00-0c-29" ,"00-50-56"
    FILE *pipe = _popen("ipconfig /all","r");
    if(!pipe)
        return 0;
    
    while(!feof(pipe)){
        if(fgets(buffer,128,pipe))
            strcat(result,buffer);
    }
    _pclose(pipe);
    //08-00-27
    if(strstr(result,MAC))
        return false;
    else
        return true;
}


int main(){
    if(checkMAC())
        printf("Õý³£ÔËÐÐ\n");
    else
        printf("vboxÐéÄâ»úÔËÐÐ\n");
    getchar();
    
}
