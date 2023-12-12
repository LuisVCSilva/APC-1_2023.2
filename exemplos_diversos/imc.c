#include <stdio.h>  
    int main()  
    {  
        float altura, peso, imc;  
      
        printf("Entre com a altura (m)\n");  
        scanf("%f", &altura);  
      
        printf("Entre com o peso (kg)\n");  
        scanf("%f", &peso);  
      
        imc = peso / (altura * altura);  
      
        printf("IMC = %f\n", imc);  
      
        if(imc < 15)  
        {  
            printf("Status: Subnutrição\n");  
        }  
        else if(imc >= 15 && imc < 17.5)  
        {  
            printf("Status: Anorexico\n");  
        }  
        else if(imc >= 17.5 && imc < 18.5)  
        {  
            printf("Status: Abaixo do peso\n");  
        }  
        else if(imc >= 18.6 && imc < 25)  
        {  
            printf("Status: OK\n");  
        }  
        else if(imc >= 25 && imc < 30)  
        {  
            printf("Status: Sobrepeso\n");  
        }  
        else if(imc >= 30 && imc < 40)  
        {  
            printf("Status: Obeso\n");  
        }  
        else if(imc >= 40)  
        {  
            printf("Status: Obesidade Morbida\n");  
        }  
        else  
        {  
            printf("Valores incorretos\n");  
        }  
      
        return 0;  
    }  
luis@lu
