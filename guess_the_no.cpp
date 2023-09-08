#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    srand((unsigned int) time(NULL));

    int no=rand()%100;
    int guess;
    //char input;
    cout<<" <------------- Welcome User ------------- > "<<endl;
    cout<<endl;
    
    

    do{
     
        cout<<"Enter your guess : ";
        cin>>guess;
        cout<<endl;
        if(guess<no){
            
            cout<<"Choose a larger no..."<<endl;
            cout<<endl;
            

        }else if(guess>no){
            
            cout<<"Choose a smaller no ...."<<endl;
            cout<<endl;
            
        }else{
            cout<<"Congratulations ! You guessed the correct no..."<<endl;
            break;
        }
        
     
       
      

    }while(guess!=no);
    cout<<endl;
    cout<<"***** Game ends *****";


  return 0;
}