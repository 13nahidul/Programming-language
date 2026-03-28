/*
this code collects city name and temperatures of some days
calculate their average, find hot cities (above 30 degree avg),
sort names of hot cities alphabetically, then gives them as a output
in a file name "city_temp.txt"
*/

#include<stdio.h>
#include<string.h>

#define cities 5
#define days 5

int main()
{
    char city[cities][30]={
       "dhaka","ctg","syl","dnj","bar"
    };
    float temp[cities][days]={
      {20,35,34,67,24},
      {34,56,32,43,12},
      {26,29,38,31,36},
      {42,17,23,29,30},
      {29,30,35,15,13}
    };
    //finding average
    float avgtemp[cities];
    for (int i=0; i<cities; i++){
        int sum=0;
        for (int j=0; j<days; j++){
            sum+=temp[i][j];
        }
        avgtemp[i]=sum/days;
    }
    //finding cities with avg temp above 30
    char hotcities[cities][30];
    float hotavg[cities];
    int count=0;
    for (int i=0; i<cities; i++){
        if (avgtemp[i]>30){
            strcpy(hotcities[count], city[i]);
            hotavg[i]=avgtemp[i];
            count++;
        }
    }
    //sorting hot cities
    for (int i=0; i<count; i++){
        for (int j=0; j<count-i-1; j++){
            if (strcmp(hotcities[j],hotcities[j+1])>0){
                char tempcity[30];
                strcpy(tempcity,hotcities[j]);
                strcpy(hotcities[j],hotcities[j+1]);
                strcpy(hotcities[j+1],tempcity);

                float tempTem;
                tempTem= hotavg[j];
                hotavg[j]=hotavg[j+1];
                hotavg[j+1]=tempTem;
            }
        }
    }

    // writing into a file

    FILE *fptr= fopen("city_temp.txt","w");

    for (int i=0; i<count; i++){
        fprintf(fptr,"%s %f \n", hotcities[i], hotavg[i]);
    }
    fclose(fptr);
    printf("\nCompleted all tasks and file is ready to view.\n");
    return 0;

}
