#include <iostream>

int M[0][0];
int rellenar(int M);
int ImprimeCabezas();

int main(){
    int a;
    
    std::cout <<"Escriba un numero del 3 al 11" << std::endl;
    std::cin >> a;
    
    if(a >= 3 && a <= 11){
        float M[a+2][a];
    }else{
        std::cout <<"El numero ingresado no esta en el rango solicitado" << std::endl;
    }
    a = a; rellenar(a);

    
    return 0;
}

int rellenar(a){
    for(int i=0;i<a+1;i++){
        for(int j=0;j<a+3;j++){
            M[j][i] = j+i;
        }
    }
    return 0;
}

int ImprimeCabezas(*M){
    
    std::cout << "Primera Fila" << M << std::endl;
}