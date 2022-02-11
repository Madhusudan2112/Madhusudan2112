#include<stdio.h>
int main ()
{char name [20];

printf("Madhusudan Mishra");
gets(name);


char branch [20];
printf("Electrical Engineering\n");
gets(branch);

char hobbies[20];
printf("Reading Newspaper\n");
gets(hobbies);



int num;
printf("2102050003\n");
scanf("%d,&num");

printf("Madhusudan Mishra:",name);
puts(name);
printf("Electrical Engineering:",branch);
puts(branch);
printf("Reading Newspaper:",hobbies);
puts(hobbies);
printf("2102050003.:%d\n",num);




return 0;
}