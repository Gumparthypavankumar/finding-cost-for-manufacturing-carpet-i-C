/*The programm to calculate the total cost for manufacturing a carpet with some inputs.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int l,w;
    //where t in define preprocessor is the tax rate
    // where l and w are the length and width of the carpet
    float d;
    //where d is the discount per each customer
    float c;
    //where c is the carpet price per square foot
    //labour cost for carpet is 0.35 per square foot
    int labourcost;
    float carpetprice;
    int area;
    int installedprice;
    float subtotal1,subtotal;
    float total;
    int x,y;
    float h;
    float t;
    printf("\n enter the length of the carpet:\n ");
    scanf("%d",&l);
    printf("\n enter width of the carpet:\n ");
    scanf("%d",&w);
    printf("\n enter the carpet price per square feet :\n ");
    scanf("%f",&c);
    printf("enter the tax percentage t\n");
    scanf("%f",&t);
    printf("enter the discount percentage you wish to give for each customer :\n ");
    scanf("%f",&d);
    area=(int)l*w;
    labourcost=0.35*(area);
    carpetprice=c*(area);
    printf("%f\n",carpetprice);
    installedprice=carpetprice+labourcost;

    x=d;
    subtotal1=(installedprice *x)/100;

    subtotal=installedprice-subtotal1;

    y=t;
    total=subtotal+((subtotal*y)/100);
    //where t is the value given in define preprocessor that is tax rate
    printf("\t\t\t\tcharges\n");

    printf("\ndescription\t\t\tcost/sq.foot\t\t\tcharge\n");

    printf("\ncarpet\t\t\t\t%d/%.2f\t\t\t%.5f\n",area,c,carpetprice);

    printf("\nlabour\t\t\t\t0.35\t\t\t\t%d\n",labourcost);

    printf("\ninstalledprice\t\t\t%d\n",installedprice);

    printf("\ndiscount\t\t\t%f\t\t\t%.5f\n",d,subtotal1);

    printf("\nsubtotal\t\t\t%.5f\n",subtotal);

    printf("\ntax\t\t\t\t0.85\n");

    printf("\ntotal\t\t\t \t%.3f\n",total);

    printf("\nYou have given The Following Dimensions:\n");

    printf("\n   length=%d   width=%d   discount=%f   carpetprice=%f\n",l,w,d,carpetprice);

    return 0;
    }
