#include<stdio.h>


int ask()
{
    int n;
    printf("Press 1. To Convert Km to miles\n");
    printf("Press 2. To Convert inches to foot\n");
    printf("Press 3. To Convert cms to inches\n");
    printf("Press 4. To Convert pound to kgs\n");
    printf("Press 5. To Convert inches to meter\n");
    printf("Press 6. to end\n");
    scanf("%d",&n);
    return n;
}
/*
1km = 0.625miles
1inch = 0.084foot
1cm = 0.394inch
1pound=0.455kg
1inch=0.0254m

*/
float kmstomiles()
{
    float k,m;
    printf("Enter kms to convert into miles\n");
    scanf("%f",&k);
    m=k*0.625;
    printf("%2.2f kms is %2.1f miles\n",k,m);
    return 0;
}

float inchtofoot()
{
    float i,f;
    printf("Enter inch to convert into foot\n");
    scanf("%f",&i);
    f=0.084*i;
    printf("%2.2f inch is %2.1f foot\n",i,f);
    return 0;
}

float cmtoinch()
{
    float c,i;
    printf("Enter cms to convert into inch\n");
    scanf("%f",&c);
    i=0.394*c;
    printf("%2.2f cms is %2.1f inch\n",c,i);
    return 0;
}
float poundtokg()
{
    float p,k;
    printf("Enter pound to convert into kg\n");
    scanf("%f",&p);
    k=0.455*p;
    printf("%2.2f pound is %2.1f kgs\n",p,k);
    return 0;
}
float inchtometer()
{
    float i,m;
    printf("Enter inch to convert into meter\n");
    scanf("%f",&i);
    m=0.0254*i;
    printf("%2.2f inch is %2.1f meter\n",i,m);
    return 0;
}


int main()
{
    int n,m;
    label:
       switch (ask())
        {
        case 1:
            kmstomiles();
            break;
        case 2:
            inchtofoot();
            break;
        case 3:
            cmtoinch();
            break;
        case 4:
            poundtokg();
            break;
        case 5:
            inchtometer();
            break;
        case 6:
            goto out;
        }
    goto label;
    out:
        return 0;
}
