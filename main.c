
#include <stdio.h>

struct Post{
    int comments;
    int likes;
};


int main(){
    struct Post insta[5];
    
    insta[0].comments=10;
     insta[0].likes=20;
      insta[1].comments=28;
       insta[1].likes=7;
        insta[2].comments=1;
         insta[2].likes=10;
          insta[3].comments=10;
           insta[3].likes=15;
            insta[4].comments=18;
             insta[4].likes=40;
          
    for(int i=0;i<5;i++){
        printf("sua foto teve %d comentários.\n", insta[i].comments);
         printf("sua foto teve %d curtidas.\n",insta[i].likes);
         printf("===========================================\n");
}
return 0;
}