#include <stdio.h>
#include <stdlib.h>

int main()
{int  a;
printf("Please input Age in number:");
scanf("%d",&a);
if(a<18){printf("you are a kid.\n");
}
else if(a>18){printf("you are a young.\n");
}
else if(a<30){printf("you are a young.\n");
}
else if(a>31){printf("you are a Adult.\n");
}
else if(a<55){printf("you are a Adult.\n");
}
else{printf("you are a old.\n");
}
    return 0;
}
