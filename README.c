#include <stdio.h>
#include<string.h>

int main()
{
    char a[20];
int mark[256];
memset(mark,0,sizeof(mark));
    scanf("%s",a);
    int i,n=strlen(a);
    
    for(i=n-1;i>=0;i--){
        if(mark[a[i]]==0){
           printf("%c",a[i]);
          mark[a[i]]=1;
         
        }
        
    }
  //  printf("%s",a);
    return 0;
}
