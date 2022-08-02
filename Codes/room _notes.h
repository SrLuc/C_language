
//prototype
int roomnotes();

//variables
int numberStudents;
int counter;

//types
typedef char varchar[45];
typedef float notes;
typedef struct
{
	varchar name;
	notes math, physical, average;
}	Students;


int roomnotes()
{
	printf("How many students will participate? ");
		scanf("%d",&numberStudents);
				Students students[numberStudents];
					printf("\n");
						fflush(stdin);


	for (counter=0 ; counter<numberStudents ; counter++)
	{
		printf("enter student name [%d]: ", counter+1);
			gets(students[counter].name);
			fflush(stdin);

		printf("math grade : ");
			scanf("%f",&students[counter].math);
			fflush(stdin);

		printf("physics grade : ");
			scanf("%f",&students[counter].physical);
			fflush(stdin); 
			printf("\n");

		students[counter].average = ((students[counter].math)+(students[counter].physical))/2;
	}

		system("clear||cls");

		printf("\t\7- - R E S U L T S - - -\n\n");


	for (counter=0 ; counter<numberStudents ; counter++)
	{
		fflush(stdin);
		printf("Student %s\n",students[counter].name);
		printf("Math note : %.2f\n", students[counter].math);
		printf("physics note %.2f\n", students[counter].physical);
		printf("Average = %.2f\n", students[counter].average);

		if (students[counter].average>=5){
			printf("approved\n");}
		else{
			printf("disapproved\n");
		}
		printf("\n");
			fflush(stdin);
	}


}