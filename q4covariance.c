// find covariance correlation of covariance coefficient of two database

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
        int X[] = {1,2,3,4,5};
        int Y[] = {6,7,8,9,10};
        float xd = 0,yd =0,xd2 = 0,yd2 = 0,xm=0,ym=0,xdyd=0,r=0;
        int i=0;
        for(i=0;i<5;i++)
        {
                xm+=X[i];
                ym+=Y[i];
        }
        xm = xm/5;
        ym = ym/5;
        for(i=0;i<5;i++)
        {
                xd = (X[i]- xm);
                yd = (Y[i]- ym);
                xdyd += (xd*yd);
        }              
        for(i=0;i<5;i++)
        {
                xd2 += pow((X[i]- xm),2);
                yd2 += pow((Y[i]- ym),2);
        }
        r = (xdyd) / sqrt(xd2*yd2);
       
        printf("CORRELATION COEFFICIENT: %.2f",r);
 
        return 0;
}