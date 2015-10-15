/* 
 * File:   main.c
 * Author: angie hoeltje
 *
 * Created on October 14, 2015, 11:23 AM
 */

#include <stdio.h>
#include <stdlib.h>
struct Node {	
    int grade;	
    struct Node	*nxt;	
  };
int main(int argc, char** argv) {
    int length=0;
    int ans=0;
    int i=0;
    int total=0;
    struct Node* root;
    root= malloc(sizeof(struct Node*));
    struct Node* last;
    last= malloc(sizeof(struct Node*));
    root=last;
    struct Node* temp;
    while (ans != -1 ){
        printf("\nPlease enter a grade (-1 to exit) : ");
        scanf("%d", &ans);
        if (ans != -1){
            length++;
            last-> grade=ans;
            last-> nxt=NULL;
             temp = malloc(sizeof(struct Node*));
             last-> nxt=temp;
             last=temp;
        }
    }
//get average
    temp=root;
    int j;
    if (length==0){
        printf("\nAverage Not Applicable");
    }
    else{
        for (i=0;i<length;++i){
            total=total+temp->grade;
            temp=temp->nxt;
            //printf("\ntotal = %d\n", total);
        }
    }
    float avg= (float)total/length;
       printf("\n\nAverage=%.2f",avg);     
    //return 0;
    //freeing everything!
    last=root;
    for(i=length;i>0;i--){
        last=root->nxt;
        free(root);
        root=last;
    }
    return 0;
}