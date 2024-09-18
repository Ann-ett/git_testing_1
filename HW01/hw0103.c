#include<stdio.h>
#include<stdint.h>

int main(){
  double ya,yb;
  int32_t xa,xb,xc,yc;
  double aout,bout;
  printf("Please enter the point A (x,y): ");
  scanf("%d,%lf",&xa,&ya);
  printf("Please enter the point B (x,y): ");
  scanf("%d,%lf",&xb,&yb);
  printf("Please enter the point C (x,y): ");
  scanf("%d,%d",&xc,&yc);

  if(xa-xb == 0 && ya-yb == 0){//Invalid check
    printf("Invalid Input.\n");
    return 0;
  }else if(xa-xb == 0){//ABcolumns
    printf("The line: y = %d\n",yc);
    return 0;
  }else if(ya-yb == 0){//ABrows
    printf("The line: %d = x\n",xc);
    return 0;
  }else{//MakeLine
    aout = (xb-xa)/(ya-yb);
    bout = yc - aout * xc;
    if(bout < 0){
      bout = bout*(-1);
      printf("The line: y = %lf * x - %lf\n",aout,bout);
    }else{
      printf("The line: y = %lf * x + %lf\n",aout,bout);
    }
    
  }

  return 0;
}