#include<stdio.h>
int main(){
  int i,n=6,j,s,c;
  for(i=0;i<n;i++){
    printf("\n");
    for(s=1;s<n-i;s++){
     printf(" ");
    }
    for(j=0;j<=i;j++){
     if(i==0||j==0){
      c=1;
     }
     else{
      c=(c*(i-j+1)/j);
     }
    printf("%d ",c);
   }
  } 
}
  
