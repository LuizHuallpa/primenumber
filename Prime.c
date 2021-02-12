#include <stdio.h>
#include <stdlib.h>
#include <locale.h> 
#include <math.h> 
#include <time.h>

main()
{
    setlocale(LC_ALL, "Portuguese");
    
    int d,i,limite;
    int verifica; 

	int k = NULL, *n = NULL;
	int p=0,np=0,ni=0,primo,j;
	


	printf("Tamanho do vetor: ");
	scanf("%i", &k);
	n = (int *)malloc(k * sizeof(int));
	
	srand(time(NULL));
	for(i = 0; i < k; i++)
	{
		
		n[i] = rand() % 1000;

		printf("Valor  %i : %i" , i,  n[i]);
		printf("\n");
	}	
	int	vetnaoprimop[k],vetnaoprimoi[k], vetprimo[k];

    verifica=1;

    for(i=0; i<k ;i++)
    {
        
            d = 2;
            verifica = 1;
            limite = sqrt(n[i]); 
            while(verifica && d <= limite) 
             {
             
                if (n[i] % d  == 0){ 
                    
                    verifica = 0;
                    if(n[i]%2==0){
        	vetnaoprimop[np++] = n[i];	
			}else{
			vetnaoprimoi[ni++] = n[i];	
			}
                }              
                d++;
             } 
            
            if (verifica){ 
                vetprimo[p++] = n[i];}
        
    }
    
    	printf("\nPrimo\n");
     for (i = 0; i < p; i++)
     {
        printf("%d ",  vetprimo[i]);
     }
     
        printf("\nNao primo par\n");
     for (i = 0; i < np; i++)
     {
         printf("%d ",  vetnaoprimop[i]);
     }
     
        printf("\nNao primo impar\n");
     for (i = 0; i < ni; i++)
     {
         printf("%d ",  vetnaoprimoi[i]);
     }
    return 0;   
}