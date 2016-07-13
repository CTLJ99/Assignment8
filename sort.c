//Clarke Littejohn
//Sort
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int *asc(int[],int,int[]);
int *dsc(int[],int,int[]);


int main(){
	srand(time(0));
	int * array,size,*aAry,*dAry;
	//user input
	printf("Enter the size of the array: ");
	scanf("%d",&size);
	//creates arrays sizes
	array=(int*) malloc(size*sizeof(int));
	aAry = (int *) malloc(size*sizeof(int));
	dAry = (int *) malloc(size*sizeof(int));
	//gets values for the array
	int i=0;
	while(i<size){
		array[i]=((rand()%25+1));
		i++;
	}
	//calls the functions
	aAry=asc(array,size,aAry);
	dAry=dsc(array,size,dAry);
	
	printf("original array: ");
	for(i=0;i<size;i++){
		printf("%d\t",array[i]);
	}
	printf("\nascending array: ");
	for(i=0;i<size;i++){
		printf("%d\t",aAry[i]);
	}
	printf("\ndescending array: ");
	for(i=0;i<size;i++){
		printf("%d\t",dAry[i]);
	}
	printf("\n");
	//clears the memory
	free(aAry);
	free(array);
	free(dAry);
}

int *asc(int oAry[],int size,int sAry[]){
	int i=0;
	//copies the values into the array
	for(;i<size;i++){
		sAry[i]=oAry[i];
	}
	//sorts the array
	for(i=0;i<size;i++){
		int j = i;
		for(;j<size;j++){
				if(sAry[j]<sAry[i])
				{	
					int temp=sAry[j];
					sAry[j]=sAry[i];
					sAry[i]=temp;
				}
		}
	}
	return sAry;
}

int *dsc(int oAry[],int size,int sAry[]){
	int i=0;
	//copies the value into the array
	for(;i<size;i++){
		sAry[i]=oAry[i];
	}
	//sorts the array
	for(i=0;i<size;i++){
		int j = 0;
		for(;j<size;j++){
				if(sAry[j]<sAry[i])
				{	
					int temp=sAry[j];
					sAry[j]=sAry[i];
					sAry[i]=temp;
				}
		}
	}
	return sAry;
}
