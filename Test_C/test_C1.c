#include <stdio.h>

int main(){
    int R,C;
    scanf("%d %d",&R,&C);

    char grid[100][101];
    for(int i=0;i<R;i++){
        scanf("%s",&grid[i]);
    }

    for(int i=0;i<R;i++){
        for(int col=0;col<C;col++){
            printf("%c",grid[i][col]);
        }
        printf("\n");
    }

    int CSX,CSY,CSX1,CSY1,ITX,ITY,ITX1,ITY1,GISX,GISY,GISX1,GISY1;
    scanf("%d %d %d %d",&CSX,&CSY,&CSX1,&CSY1);
    scanf("%d %d %d %d",&ITX,&ITY,&ITX1,&ITY1);
    scanf("%d %d %d %d",&GISX,&GISY,&GISX1,&GISY1);

    int student;
    int student_x[11],student_y[11];
    scanf("%d",&student);
    for(int i=0;i<student;i++){
        scanf("%d %d",&student_x[i],&student_y[i]);
    }





    return 0;
}
