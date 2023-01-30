//1.while loop
/*
#include<stdio.h>
int main()
{
	int i;
	printf("enetr a number:");
	scanf("%d",&i);
	while(i<=6){
		printf("%d\n",i);
		i++;
	}
	return 0;
}
*/

//2.for loop
/*
#include<stdio.h>
int main()
{
        int a,b;
	for(a=0;a<=5;a++){
		for(b=0;b<a;b++){
			printf("# ");
		}
		printf("\n");
	}
	return 0;
}
*/

/*
#include<stdio.h>
int main()
{
        int i,j;
        for(i=0;i<=5;i++){
                for(j=0;j<5;j++){
                        printf("* ");
                }
                printf("\n");
        }
        return 0;

} 

*/

//3.do while
/*
#include<stdio.h>
int main()
{
	int i=1;
	do{
		printf("%d\n",i);
		i++;
	}while(i<10);
	return 0;
}
*/

/*
#include<stdio.h>
int main()
{
	int i,num=0;
	printf("enter a number:");
	scanf("%d\n",&num);
	do{
		printf("%d\n",(num*i));
	       	i++;
	}while(i<=10);
	return 0;
}
*/

#include<stdio.h>
int main()
{
	int i=0;
	while(i==1);
	{
		printf("good eveng\n");
	}
	printf("Bye");

}




