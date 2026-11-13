/*Task

For each integer  in the interval  (given as input) :

If , then print the English representation of it in lowercase. That is "one" for , "two" for , and so on.
Else if  and it is an even number, then print "even".
Else if  and it is an odd number, then print "odd".
Input Format

The first line contains an integer, a.
The seond line contains an integer, b. 
max till 9*/

#include  <stdio.h>

int main(void){
    int a,b;
    const char *word[] = {"zero","one","two","three","four","five","six","seven","eight","nine"};

    for (int i = a; i <= 9; i++ ){
        printf("%s", word[i]);
        if ( i % 2 == 0)
        {
            printf(" = even");
        }else{
            printf(" = odd");
        }
        
    }
    return 0;
}