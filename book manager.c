#include <stdio.h>  
#include <stdlib.h>  
#include <string.h>  

						void detail_liv(char**tab,char** tab2 , int* ref,int taille){
							char ch[20];
							char**t2=tab2;
							char**t1=tab;
							
							char**p;
							char**p1;
							
							for(p=t1,p1=t2;p<t1+taille;p++,p1++){
							printf("\n********Livre a ajoutee  **********\n");

							printf("\n Entrez la REFERENCE du livre  :");
							scanf("%d",&ref[p-t1]);

							printf(" Entrez le nom du livre : ");
							scanf("%s",ch);
							*p=(char*)malloc(strlen(ch)+1);
							strcpy(*p,ch);
							
							printf(" Entrez le nom de auteur  :");
							scanf("%s",ch);
							*p1=(char*)malloc(strlen(ch)+1);
							strcpy(*p1,ch);
					
              }	}
							
int main()  
{    char **oth,**lv;
    int *ref;
    int i, j, n,count;  
    j = 0;  
    count = 0;  
  

							

    while(j!=6)  
    {  
        printf(" \n 1. Ajouter des details sur les livres \n ");  
        printf(" 2. Afficher la liste des livres et ses details\n ");  
        printf(" 3. Afficher le nombre total de livres a la bibliotheque\n ");  
        printf(" 4. Exit\n\n");  
        printf(" \n ********************************************* \n");  
        printf("  votre choix  :  ");  


        scanf(" %d", &j);  
        printf(" \n************************************************\n");  
  
  

        if  (j == 1 ) 
             {  
             
              
              	do{
								printf("donner les nombre de livre a ajouter : ");
								scanf("%d",&n); 
								}while (n<1 ||n>5);
                
									oth=(char**)malloc(n*sizeof(char*));
                                    lv=(char**)malloc(n*sizeof(char*));
                                    ref=(int*)malloc(n*sizeof(int));
									detail_liv(oth,lv,ref,n);
                	                count = count + n;  
                
            }
                else if  (j==2 )
            {
                if (count==0)  
                {  
                     printf(" \n ------------------------------------------- \n");  
                    printf(" \nIl ny a pas de livres stockes!!\n\n ");  
                       printf(" \n ------------------------------------------- \n");  
                }  
                else  
                {  
                    printf(" \n Vous pouvez consulter la liste des livres ");  
                    printf(" \n La liste des livres est: "); 

                } for(i=0; i < count; i++)  
                    {   
                        printf(" \n ------------------------------------------- \n");  
                        printf(" \n le livre REFERENCE : %d ", ref[i]);  
                        printf(" \n nom du livre : %s ", oth[i] );  
                        printf(" \n le nom de auteur est :  %s ", lv[i] );  
                       printf(" \n ------------------------------------------- \n");  
                    }  
                }
  
            else if  (j==3 )
            {
                   printf(" \n ------------------------------------------- \n");  
                printf(" \n Le nombre total de livres dans la bibliotheque est de **: %d***\n\n ", count);
                   printf(" \n ------------------------------------------- \n");    
               } 
              
            else{
                
                exit(0);  
                  
            
                 printf(" \n ------------------------------------------- \n");  
                printf(" \n Numéro saisi invalide \n\n ");  
                   printf(" \n ------------------------------------------- \n");  
        }  
  
    }  
  
} 