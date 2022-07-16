//grading system Hacker Rank
#include <stdio.h>

int main(){
int n;
scanf("%d",&n);
for(int i = 0; i < n; i++){
int grade;
scanf("%d",&grade);
// your code goes here
int x = ((grade/5)+1)*5;//or x = ((grade+4)/5)*5
if(x>=40 && x-grade<3)grade=x;
printf("%d\n",grade);
}
return 0;
}