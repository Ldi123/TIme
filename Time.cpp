#include<stdio.h>
#include<time.h>
#include<stdlib.h>
main(){
time_t rawtime;
struct tm * timeinfo;
time ( &rawtime );
timeinfo = localtime ( &rawtime );
printf ( "now is: %s", asctime (timeinfo) );	
system("color 30");
system("pause");
}
