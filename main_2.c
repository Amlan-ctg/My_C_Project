#include <stdio.h>
#include <stdlib.h>

int main()
{int  a;
printf("Please input Age in number:");
scanf("%d",&a);
if(a<18){printf(" kid.\n");
}
else if(a>=18 && a<=30){printf("young.\n");
}
else if(a>=31 && a<=55){printf(" Adult.\n");
}
else{printf(" old.\n");
}
    return 0;
}
