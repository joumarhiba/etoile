#include<stdio.h>
 int main() {
 	int ht,i,d;
 	printf("Veuillez saisir la hauteur du triangle souhaitee : ");
 	scanf("%d",&ht);
 	
 	for(i=1;i<=ht;i++){
 		for(d=1;d<=ht-i;d++){
 			printf(" ");
		 }
 		for(d=1;d<=(2*i-1);d++){
 				printf("*");
 			}
 			printf("\n");
 	
	 }
	
	 

}
