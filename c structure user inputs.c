#include<stdio.h>
#include<string.h>
      struct book {
              char title[30];
              char author[30];
              int publication_year;
              char ISBN[13];
              float price;
              }book;
 int main(){
        printf("enter the book title");
        scanf("%s",&book.title);
       printf("enter the book author");
       scanf("%s",&book.author);
       printf("enter the publication year");
       scanf("%d",&book.publication_year);
       printf("enter the book ISBN");
       scanf("%s",&book.ISBN);
       printf("enter the book price");
       scanf("%f",&book.price);
       
       printf("title:%s\n",book.title);
       printf("author:%s\n",book.author);
       printf("publication_year:%d\n",book.publication_year);
       printf("ISBN:%s\n",book.ISBN);
       printf("price:%.2f\n",book.price);
       return 0;
       }
 