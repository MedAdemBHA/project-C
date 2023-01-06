#include<stdio.h>
#include<stdlib.h>

main() {
          int **A , **B;
          int  N,M,P,Z,i,j,s;
          int **p;
          int *q;
          
          
          printf("entrer le nombre de ligne de la matrice A :");
          scanf("%d",&N);
          printf("entrer le nombre de colonne de la matrice A : ");
          scanf("%d",&M);
       
          printf("entrer le nombre de colonne de la matrice B :");
          scanf("%d",&P);  
          printf("entrer le nombre de colonne de la matrice B : ");
          scanf("%d",&Z);
          A=(int**)malloc(N*sizeof(int*));
          for(i=0;i<N;i++) 
                  A[i]=(int*)malloc(M*sizeof(int));
          B=(int**)malloc(Z*sizeof(int*));
          for(i=0;i<Z;i++)
                   B[i]=(int*)malloc(P*sizeof(int));
        
          //remplissage de la matrice A
          printf("remplissage de la matrice A.\n");
          printf("\n");
          for(p=A;p<A+N;p++){ 
                          for(q=*p;q<*p+M;q++){
                                          printf("entrer la valeur d'indice %d,%d :",p-A,q-(*p));
                                          scanf("%d",q);
                                          }
                          printf("\n");
                          }
         //Affichage de la matrice A
          printf("\nla matrice A est:\n");
          for(p=A;p<A+N;p++){
                          for(q=*p;q<*p+M;q++)
                                          printf("%d \t",*q);
                          printf("\n");
                          }
          //remplissage de la matrice B
          printf("remplissage de la matrice B.\n");
          for(p=B;p<B+Z;p++){ 
                          for(q=*p;q<*p+P;q++){
                                          printf("entrer la valeur d'indice %d,%d :",p-B,q-(*p));
                                          scanf("%d",q);
                                          }
                          printf("\n");
                          }
          //Affichage de la matrice B
          printf("\nla matrice B est:\n");
          for(p=B;p<B+Z;p++){ 
                          for(q=*p;q<*p+P;q++)
                                          printf("%d \t",*q);
                          printf("\n");
                          }
    
    
    
    
    
    
    
    
    
    
    
}