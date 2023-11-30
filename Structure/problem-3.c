#include <stdio.h>
#include <string.h>
struct Book{
    char title[100];
    char author[100];
    int price;
    int publication;
};
int main()
{
    int n; scanf("%d", &n);
    struct Book bk[n];
    for(int i=0; i<n; i++){
        printf("Enter details for Books %d:\n", i+1);

        printf("Title: \n");
        char title[100]; getchar();
        gets(title);
        strcpy(bk[i].title, title);
        
        printf("Author: \n");
        char author[100];
        gets(author);
        strcpy(bk[i].author, author);

        printf("Price: \n");
        scanf("%d", &bk[i].price);

        printf("Publication: \n");
        scanf("%d", &bk[i].publication);
    }
    printf("\nDETAILS\n");
    for (int i = 0; i < n; ++i) {
        printf("Details of Book %d:\n", i+1);

        printf("Title: %s\n", bk[i].title);
        printf("Author: %s\n", bk[i].author);
        printf("Price: %d\n", bk[i].price);
        printf("Publication: %d\n", bk[i].publication);
    }

    return 0;
}