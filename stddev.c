//Clarke Littlejohn
//standard deviation calculator
#include<stdio.h>
#include<math.h>

int main(){

	FILE* p=fopen("test.txt","r");
	int terms=0;
	int tracker=0;
	float j=0;
	float xbar=0;
	float sum=0;
	float mean=0;
	while(tracker<5){
		fscanf(p,"%f",&j);
		xbar+=j;
		terms++;
		tracker++;
	}
	xbar/=terms;	
	tracker=0;
	fclose(p);
	p=fopen("test.txt","r");
	while(tracker<5){
		fscanf(p,"%f",&j);
		j=j-xbar;
		j=pow(j,2);
		sum+=j;
		tracker++;
		
	}
	terms--;
	sum/=terms;
	sum = sqrt(sum);
	printf("%f\n",sum);
	fclose(p);	
	return 0;
}
