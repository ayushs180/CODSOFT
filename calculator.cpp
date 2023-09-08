#include <iostream>
using namespace std;

int main(){

    cout<<endl;
    //cout<<"WELCOME USER "<<endl;
    cout<<"********* Simple Calculaor *********"<<endl;
    cout<<endl;
    
 char input;   
 do{
    int n1,n2;
    

    cout<<"Enter first no : ";
    cin>>n1;
    cout<<endl;

    cout<<"Enter second no : ";
    cin>>n2;
    cout<<endl;

    cout<<"<-------------- MENU --------------->"<<endl;
    cout<<endl;

    cout<<"Press  + for addition "<<endl;
    cout<<"Press  - for Subraction "<<endl;
    cout<<"Press  * for Multiplication "<<endl;
    cout<<"Press  / for Division "<<endl;
    cout<<"Press  & for Bitwise AND "<<endl;
    cout<<"Press  | for Bitwise OR "<<endl;
    char op;
    cout<<endl;
    cout<<"Enter your choice : ";
    cin>>op;
    cout<<endl;


    switch (op)
    {
    case '+':
    {
        cout<<"Sum of "<<n1<<" and "<<n2<<" = "<<n1+n2;
        break;

    }
    case '-':
    {
        cout<<"Difference of "<<n1<<" and "<<n2<<" = "<<n1-n2<<endl;
        break;

    }case '*':
    {
        cout<<"Product of "<<n1<<" and "<<n2<<" = "<<n1*n2<<endl;
        break;

    }case '/':
    {
        cout<<"Division of "<<n1<<" and "<<n2<<" = "<<n1/n2<<endl;
        break;

    }case '&':
    {
        cout<<" Bitwise AND of "<<n1<<" and "<<n2<<" = "<<(n1&n2)<<endl;
        break;

    }case '|':
    {
        cout<<"Bitwise OR of "<<n1<<" and "<<n2<<" = "<<(n1|n2)<<endl;
        break;

    }
        

    default:
        break;
    }
    cout<<endl;
    cout<<"Do you want to continue(Y/N) ? ";
    cin>>input;  
 }while(input!='N'); 
 cout<<endl;
 cout<<"<-------------- THE END  -------------->"<<endl;   

}