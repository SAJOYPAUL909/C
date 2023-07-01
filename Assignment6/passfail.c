//Write a program to take marks of 5 subjects from the user. Assume marks are given out of 100 and passing marks is 33.
 //Now display whether the candidate passed the examination or failed
 #include <stdio.h>
 #include <conio.h>
 void main()
 {
    int a1,a2,a3,a4,a5;
    float a ;
    printf("Enter marks of 5 subjects :");
    scanf("%d%d%d%d%d",&a1,&a2,&a3,&a4,&a5);
    a = (a1+a2+a3+a4+a5)/5.0;
    if (a > 33)
    printf("the candidate passed the examination");
    else
    printf("the candidate failed the examination");

 }