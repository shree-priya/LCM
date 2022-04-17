#include <stdio.h>
 
int lcm(int, int);
 
int main()
{
    int a, b, result;
 
    printf("Enter two numbers: ");
    scanf("%d%d", &a,&b);
    result = lcm(a, b);
    printf("The LCM of %d and %d is %d\n", a, b, result);
}
 
int lcm(int a, int b)
{ 
    int l;
    l = (a>b) ? a : b;
    int fact=1;
    while(fact){
        if(l % a==0 && l % b==0){
            fact=0;
            return l;
            
        }
        l++;
        
    }

    
   
}
