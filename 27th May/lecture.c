-Scope of the variable 

    Block scope 
       - a block refers to any set of statements inside braces { and }.
       - a variable declared inside a block is only accessible inside that block.
       - if there is variable present in both inside and outside the curly bracket then the variable inside the block is given preference.

    Function scope
         - a function refers to any set of statements inside braces { and } of the function.

    Program Scope 
        - a variable declared outside of a function and is accessible everywhere in the program.
        - a variable can be declared outside the function but operations can't be performed on it outside the function.
        - when the variable gets assigned after that any operation on the variable will be stored on the same memory location.
        - these variables are referred as global variables.

    File Scope
        - a global variable declared with the static specifier can't be accessed outside the file.
        - but a global variable without the static can be accessed outside the file.



gcc -c a.c => a.o
gcc -c b.c => b.o
gcc -o p a.o,b.o => p(combined file)

#include<stdio.h>
int c=9;
void f1(int p){
    int t=p+6;
    p++;
    c++;
    printf("%d %d\n",p,c);
}
int main(){
    int a=5;
    a++;
        {
            int b=4,a=2;
            b++;
            f1(b);
            printf("%d %d %d\n",a,b,c);
        }
    int b=9;
    a=7;
    c++;
    f1(c);
    printf("%d %d %d\n",a,b,c);
}

output 
6 10
2 5 10
12 12
7 9 12`



Storage Class 
    - It gives scope(visibility) of the variable.
    - It gives life time of the variable.
    - It determines which part of the storage space will be allocated for that variable or function 
    - It gives whether the variable will be automatically initialized or not.(Global variables are automatically initialized to zero but local variables are not)


Types 
    -Auto Specifier
        -accessible within the function ot block in whoch it is declared.
        -by default the variable with the block scope is auto type.
        e.g.
            auto int x=1;
    
    -Static Specifier
        -only one memory will be allocated for the static.

        -Local static
            -accessible within the function ot block in whoch it is declared.
            -retains value between function calls or block entries.
            -automatically initialized.

        -Global static
            -accessible anywhere in the program.
            -static global can't be used outside of a file but global variable can be used outside of a file.
    
    -Register Specifier
            -stores variables in the registers(not guaranteed) may help to speed up your program.
            -accessed only within the function or blocal in which it is declared.
            -exists when the function or block in which it is declared is entered. Ceases to exist when the control returns from the function or block in which it was declared.
            -it's illegal to take the address of a register variable.
    
    -Extern Specifier
            -extern specifier provides a reference to a global variable/function defined elsewhere.
            -The extern specifier declares outside or inside the function.


