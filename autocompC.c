#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <winuser.h>
#include <conio.h>

short run=0;
void main(){
    system("color 2");
    FILE *commande;
    commande=fopen("commande.cmd","w+");

    char path[255];
    char filec[215];
    char fileexe[215];

    fputs("cd ",commande);
    printf("path:\n");
    fgets(path,255,stdin);
    fputs(path,commande);

    fputs("\ngcc ",commande);
    printf("file .c:\n");
    scanf("%s",filec);
    fputs(filec,commande);
    fputs(" -o ",commande);
    printf("file .exe:\n");
    scanf("%s",fileexe);
    fputs(fileexe,commande);
    fputs("\nIF NOT ERRORLEVEL  1 EXIT ",commande);
    fclose(commande);

    while(run==0)
    {
        if(GetAsyncKeyState(VK_F7)!=FALSE){
          system("start commande.cmd");
          Sleep(1000);
      }



    }

}
