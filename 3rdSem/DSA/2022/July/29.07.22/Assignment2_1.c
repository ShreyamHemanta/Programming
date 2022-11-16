 #include <stdio.h>

struct detail
{
    char name[20];
    int age;
    char city[20];
};

int main()
{
    int i;
    struct detail d[i];
    for(i=0;i<5;i++)
    {
        printf("Enter the Name of person %d : ",i+1);
        scanf("%s",&d[i].name);
        printf("Enter the Age : ");
        scanf("%d",&d[i].age);
        printf("Enter the City : ");
        scanf("%s",&d[i].city);      
        printf("\n");  
    }
    int max;
    struct detail eldest;
    for(i=0;i<5;i++)
    {
        if(d[i].age>max)
        {
            max=d[i].age;
            eldest=d[i];
        }
    }
    printf("The Eldest one is %s , living in %s , is %d years old ",eldest.name,eldest.city,eldest.age);

    return 0;
}