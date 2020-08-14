// more about pointers in c

#include <stdio.h>

int main () 
{

    int  var = 20; 
    int  *ip;  
    ip = &var;  
    printf("Address of var variable: %p\n", &var  );
    printf("Address of ip pointer : %p\n", ip);
    printf("Address of ip pointer : %p\n", ip+1);
    
    printf("Value of *ip variable: %d\n", *ip );
    
    var = 30;
    printf("Value of *ip variable: %d\n", *ip );

    *ip = 40;

    printf("Value of *ip variable: %d\n", *ip );

    return 0;
}
