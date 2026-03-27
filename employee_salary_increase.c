/*
this is a code to increase salary of employees from a file "employee.txt" using
FileIO and structure.
file demo:
Ada 40000
Jack 10000
Micle 50000
*/

#include<stdio.h>
#include<stdlib.h>

struct employee {
    char name[50];
    float salary;
};

int main()
{
    FILE *fptr;
    struct employee emp;

    //opening the file
    fptr=fopen("employee.txt","r");
    if (fptr==NULL){
        printf("file does not exist!");
    }
    //making a temporary file to store new data
    FILE *temp;
    temp=fopen("temp.txt","w");
    //getting data from the previous file
    while(fscanf(fptr,"%s %f", emp.name, &emp.salary)!=EOF){
        emp.salary= emp.salary+ (emp.salary*0.10);
        fprintf(temp,"%s %f \n", emp.name, emp.salary);
    }
    fclose(fptr);
    fclose(temp);

    remove("employee.txt");
    rename("temp.txt","employee.txt");

    printf("Salary updated!");

    return 0;
}
