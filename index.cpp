#include <iostream>

int index(char sy, int x, int y){
    if(sy == '+'){
        std::cout<<x+y;
    }else if(sy == '-'){
        std::cout<<x-y;
    }else if(sy == '*'){
        if(x == y){
            for (int i = 1; i <= x; i++){
                for (int z = 1; z <= 9; z++){
                    std::cout << i << "*" << z << "= " << i*z <<" ";
                }
                std::cout<<"\n"; //change line
            }
        }else{
            std::cout<<x*y;
        }
    }else if(sy == '/'){
        if (y == 0){
            std::cout<<"error";
        }else{
            std::cout<<x/y;
        }
    }
    return 0;
}

int main(){
    int a,b;
    char symbol;
    std::cout<<"Enter the two numbers, the first number: ";
    std::cin>>a;
    std::cout<<"Enter the second number: ";
    std::cin>>b;
    std::cout<<"Enter the symbol for arithmetic(+ - * /): ";
    std::cin>>symbol;
    return index(symbol,a,b); //return the arithmetic and the num1 and num2.
}