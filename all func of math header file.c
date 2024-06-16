/// absolute value [abs()]
/*#include<stdio.h>
#include<math.h>
int main()
{
    int x= abs(-25);
    printf("%d",x);

}*/

/// square root [sqrt()]

/*#include<stdio.h>
#include<math.h>
int main()
{
    int x;
    printf("Enter a value: ");
    scanf("%d",&x);
    double result = sqrt(x);   /// root 25 = 5 ,,,root 49 = 7
    printf("%0.1lf",result);
}*/


/// power [pow()]
/*#include<stdio.h>
#include<math.h>

int main()
{
    int x;
    scanf("%d",&x);
    double y;
    scanf("%lf", &y);
    double result= pow(x,y);
    printf("%lf", result);
}*/

/// log ()

/*#include<stdio.h>
#include<math.h>
int main()
{
    double x;
    scanf("%lf",&x);
    double result= log(x);
    printf("%lf",result);
}*/


/// sin()
/*
#include<stdio.h>
#include<math.h>
int main()
{
    int x;
    scanf("%d",&x);
    double result= sin(x);
    printf("%lf",result);
}
*/

/// round()
/*
#include<stdio.h>
#include<math.h>
int main()
{
    double x;
    scanf("%lf",&x);
    double result= round(x);
    printf("%lf",result);
}*/

/// trunc()

/*#include<stdio.h>
#include<math.h>
int main()
{
    double x;
    scanf("%lf",&x);
    double result= trunc(x);
    printf("%lf",result);
}
*/

///ceil()
/*#include<stdio.h>
#include<math.h>
int main()
{
    double x;
    scanf("%lf",&x);
    double result= ceil(x);
    printf("%lf",result);
}*/

///floor()
#include<stdio.h>
#include<math.h>
int main()
{
    double x;
    scanf("%lf",&x);
    double result= floor(x);
    printf("%lf",result);
}
