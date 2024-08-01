#include<stdio.h>
#include<conio.h>
main()
{
       clrscr();
	int sub1,sub2,sub3,total,avg,add,AtoD,F;
	printf("enter your subject marks=");

	scanf("%d %d %d",&sub1,&sub2,&sub3);

	  total=sub1+sub2+sub3;

	printf("total=%d\n",total);

	  avg=total/3;

	printf("avg=%d%\n",avg);

	  if(avg > 35){

	       if(avg > 55){

		     if(avg > 75){

			  if(avg > 95){
			       printf("grade=A\n");
			  }
			  else{
			       printf("grade=B\n");
			  }
		     }
		     else{
			  printf("grade=C\n");
		     }
	       }
	       else{
		     printf("grade=D\n");
	       }
	  }
	  else{
	       printf("grade=F\n");
	  }
	  switch(add){

		case 1:
		   printf("grade A then excellent work\n");
		break;

		case 2:
		   printf("grade B then well done\n");
		break;

		case 3:
		   printf("grade C then good job\n");
		break;

		case 4:
		   printf("grade D then you passed,but you could better\n");
		break;

		case 5:
		   printf("grade F then sorry you are failed\n");
		break;

		default:
		    printf("error\n");
		break;

	  }
	    if(AtoD){
		if(F){
		    printf("please try again next time");
		}
		else{
		    printf("congrajulation! you are eligiable for next level");
		}
	    }
	    else{
		printf("you are not eligibale for next level");
	    }
     getch();
}