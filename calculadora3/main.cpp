#include <iostream>
using std::cout;
using std::cin;
using std::endl;
//Define functions and input type data.
float calculator();
float sum(float num1, float num2);
float substraction(float num1, float num2);
float multiplication(float num1, float num2);
float division(float num1, float num2);
void menu();
int module(int num1, int num2);
  //Global variables
char option;
float num1, num2;
int main(){
    
  
        // We defined our variables inside of the main function
        float r;
        int yes;
        //Do while cicle to continue until otherwise is said(From the call of the calculator function)
        do {
            
            r =  calculator();
            cout<<"The result is: "<<r<<endl;
            cout<<"";
            cout<<"Continue: (1) Exit: (2) ---> ";
            cin>>yes;
            
      
           
            
        
        } while (yes==1);
        return 0;
       
    }
    //Calculator function
    float calculator(){
        //Defined variables inside the calculator funcion
        float result = 0.0;
        
        //Enter the global variables before show the menu
        cout<<"Enter the first value: ";cin>>num1;
        cout<<"Enter the second value: "; cin>>num2;
        //menu y opciones para continuar
        menu();
            //Use of switch to choose an option
            //Inside of a do while cicle to repeat itself in case they enter an invalid option
            // Tolower to convert any characther in lowercase
            switch (option){
                case 'a':result = sum(num1,num2);
                    break;
                case 'b': result=substraction(num1, num2);
                    break;
                case'c':result= multiplication(num1, num2);
               
                 
                    break;
                case'd':
                if (num2==0){
                    cout<<"Invalid operation"<<endl;
                    return 0;
                }
                result=division(num1,num2);
                
                    break;
                case'e':result=module(num1, num2);
                    break;
                    
            }
        return result;
    }
    void menu(){
        do {
            cout<<"a) SUM"<<endl;
            cout<<"b) SUBSTRACTION"<<endl;
            cout<<"c) MULTIPLICATION"<<endl;
            cout<<"d) DIVISION"<<endl;
            cout<<"e) MODULE"<<endl;
            cout<<"Select an option: "<<endl;
            cin>>option;
            option=tolower(option);
        }while (option <'a'|| option > 'e');
    }
        float sum(float num1, float num2){
            return num1+num2;
        }
        float substraction(float num1, float num2){
            return num1-num2;
         
        }
        float multiplication(float num1, float num2){
            return num1*num2;
        }
        float division(float num1, float num2){
            return num1/num2;
        }
        int module(int num1, int num2){
            return num1%num2;
        }
    
