#include <stdio.h>

int main (int argc, char * argv[]){
    int x[3] = {42,1337,0};
    int i;
    for(int i=0; i<=2; i++){
      printf("%d ",*(x+i));
    }
}
