#include<stdio.h>

int readData(double *n){
    int i;
    for (i = 0; i < 10; i++){
        printf("Introduce el %d elemento: ", i + 1);
        scanf("%lf", &n[i]);
    }
    return 0;
}

int computeStatistics(const double *x, double *min, double *mas, double *ave){
    int i;
    double suma = 0;
    *min = x[0];
    *mas = x[0];
    for (i = 0; i < 10; i++){
        if (x[i] < *min)
            *min = x[i];
        if (x[i] > *mas)
            *mas = x[i];
        suma += x[i];
    }
    *ave = (double) suma/10;
}

int main(){
    double n[10], min, mas, ave;
    
    readData(n);
    computeStatistics(n, &min, &mas, &ave);
    
    printf("Mínimo: %.2lf\nMáximo: %.2lf\nMedia: %.2lf", min, mas, ave);
    
    return 0;
}



