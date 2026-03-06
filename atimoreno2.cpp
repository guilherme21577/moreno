#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	
	int x=10,y=20,z=100,n=24;
    char tc	= 'c';	

int *ptr1;
int *ptr2;
int *ptr3;
int *ptrn;
char *ptrtc;

ptr1 = &x;
ptr2 = &y;
ptr3 = &z;
ptrn = &n;
ptrtc = &tc;

printf("valor x  = %d\n",x);
printf("valor y  = %d\n",y);
printf("valor z  = %d\n",z);
printf("valor n  = %d\n",n);
printf("valor tc  = %c",tc);

printf("\n---------------------------------------\n");

printf("end. mem. x  = %p\n",&x);
printf("end. mem.  y  = %p\n",&y);
printf("end. mem.  z  = %p\n",&z);
printf("end. mem.  n  = %p\n",&n);
printf("end. mem.  tc  = %p",&tc);

printf("\n---------------------------------------\n");

printf("end. mem ptr1 = %p\n",&ptr1);
printf("end. mem ptr2  = %p\n",&ptr2);
printf("end. mem ptr3  = %p\n",&ptr3);
printf("end. mem ptrn  = %p\n",&ptrn);
printf("end. mem ptrtc  = %p",&ptrtc);

printf("\n---------------------------------------\n");

printf("valor ptr1  = %p\n",&*ptr1);
printf("valor ptr2  = %p\n",&*ptr2);
printf("valor ptr3  = %p\n",&*ptr3);
printf("valor ptrn  = %p\n",&*ptrn);
printf("valor ptrtc  = %p",&*ptrtc);

printf("\n---------------------------------------\n");

printf("valor onde ptr1 aponta = %p\n",&*ptr1);
printf("valor onde  ptr2 aponta = %p\n",&*ptr2);
printf("valor onde ptr3 aponta = %p\n",&*ptr3);
printf("valor onde ptrn aponta = %p\n",&*ptrn);
printf("valor onde ptrtc aponta = %p",&*ptrtc);


}




