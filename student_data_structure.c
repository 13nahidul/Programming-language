#include<stdio.h>

struct student {

    char name[60];
    int roll;
    int level;
    int term;
    float cgpa;
};

int main()
{
    int i;
    printf("Total number of student: ");
    scanf("%d",&i);
    struct student s[i];

    for (int j=0; j<i; j++){
        printf("Enter details of student %d : \n", j+1);

        printf("Enter name\t: ");
        scanf("%s",s[j].name);
        printf("Enter roll\t: ");
        scanf("%d",&s[j].roll);
        printf("Enter Level\t: ");
        scanf("%d",&s[j].level);
        printf("Enter Term\t: ");
        scanf("%d",&s[j].term);
        printf("Enter CGPA\t: ");
        scanf("%f",&s[j].cgpa);

    }
    // display information

    for (int j=0; j<i; j++){
        printf("\nDetails of student %d : \n", j+1);
        printf("Name\t: %s \n",s[j].name);
        printf("Roll\t: %d\n",s[j].roll);
        printf("Level\t: %d\n",s[j].level);
        printf("Term\t: %d\n",s[j].term);
        printf("CGPA\t: %f\n",s[j].cgpa);
    }

    printf("\n--Thanks for using--");
    return 0;
}
