#include <stdio.h>
void sayHello(){
printf("hello,student! you just called me back!\n");
}
void studentWork(void(*callbackFunc)()){
printf("student is doing homework...\n");
callbackFunc();
}
int main(void){
studentWork(sayHello);
return 0;
}

