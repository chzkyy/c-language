#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int calcage(int Pdate, int Pmonth, int Pyear, int Bdate, int Bmonth, int Byear){
	int month[] = {31,28,31,30,31,30,31,31,30,31,30,31};
	if(Bdate > Pdate){
		Pdate = Pdate + month[Bdate-1];
		Pmonth = Pmonth-1;
	}
	if(Bmonth > Pmonth){
		Pyear = Pyear - 1;
		Pmonth = Pmonth + 12;
	}
	int finnalDate = Pdate - Bdate;
	int finnalMonth = Pmonth -Bmonth;
	int finnalYear = abs(Pyear - Byear);
	
	return finnalYear;
}

int main(){
	char *line = NULL;
 	size_t len = 0;
	ssize_t read;
	
	int above51, between44_51,between36_43,between28_35,below28;
	int Pdate = 15;
	int Pmonth = 01;
	int Pyear = 20;
	FILE *fp = fopen("example.txt", "r");
	
	read = getc(fp);
	while (read != -1){
		char *array[3];
		int i = 0;
		char *token = strtok(line, "/");
		while (token != NULL){
			array[i++] = token;
			token = strtok(NULL, "/");
		}
		int Bdate = atoi(array[0]);
		int Bmonth = atoi(array[1]);
		int Byear = atoi(array[2]);
		int age = calcage(Pdate,Pmonth,Pyear, Bdate, Bmonth, Byear);
		if(age>=51){
			above51++;
		}
		else if(age >=44 && age <51){
			between44_51++;
		}
 		else if (age >= 36 && age < 43){
			between36_43++;
		}
		else if (age >= 28 && age < 35){
			between28_35++;
		}
		else if (age < 28){
			below28++;
		}
 	}
 	printf("above 51 = %d\n",between44_51);
	printf("between 44 - 51 = %d\n",above51);
	printf("between 36 - 43 = %d\n",between36_43);
	printf("between 28 - 45 = %d\n",between28_35);
	printf("below 28 = %d\n",below28);
 	fclose(fp);
 	return 0;
}

