Find the determinant of a matrix


#String

-collection of characters
-every string in c is ended with null character.
-string is represented with a character array.


Declaration of string

char a[5]="ABCD";  

char a[5]={'a','b','c'};

char a[]="ABC";
//Written inside a double quote will automatically add null character at last

char a[]={'A','B','C'};  //NO NULL CHARACTER SO NOT PROPER String

printf("ABC")

char a[]={65,67,69,0}; // A B C \0


#Display string

char a[5]="ABC";

for ( i = 0; i < 3; i++)
{
    printf("%s",a+i); //ABC
}

#Input String

char a[20];
scanf("%d",a);

-while giving input if space is givennscanf terminates

scanf("%[^\n]s",a); --doesn't terminate until enter

Assignment

-Create a character array and receive a string and display the string
-Take a string and reverse the string
- A B C P D
    B C P D
      C P D
        P D
          D

- D
  P D
  C P D
  B C P D
  A B C P D





