#include<iostream>
using namespace std;
int main(){    
    string DEFAULT_PIN = "0000" , pin;  
      float DEFAULT_BALANCED = 1000;  
      int balance = DEFAULT_BALANCED;   
     int attempt = 0, menuSelection;   
     float  amount;    string number;
      string oldpin;  
     string newpin;
      bool isAuthenticated = false;      
     
            
     // ask user for pin code  
         
     while (! isAuthenticated && attempt <3)
         {   
     cout <<"please enter your mm pin:"<<endl;  
        cin >> pin;   
          if (pin == DEFAULT_PIN ) 
        {   
        isAuthenticated = true ;  
           }      
          else {    
        attempt ++;   
         cout <<"wrong pin, please try again." << endl;  
          }
        }      
       
            
             //menu is displayed only if user is authenticated   
     if (isAuthenticated ){    
           do {      
        
    cout << endl    
         << "1. Check balance" << endl    
         << "2. Send money" << endl   
         << "3. Change/reset PIN" << endl  
         << "4. Exit" << endl;  
    cout << "Thank you for you using our mobile money sevice, select an option:"<<endl;  
     cin >> menuSelection;          
            
            
            switch (menuSelection){    
          
      
    
    case 1 : // checking balance     
     
    
    
      cout << "Enter your mm pin to check your balance:" << endl;
       cin >> pin;
    
       if (pin == DEFAULT_PIN){
        cout << "Your current balance is: " << balance <<endl;     
             return 0;
           }
     else{ 
    cout << "wrong pin:" << endl;
   
       return 0;
      }      
    break;
        
             // sending money  
    case 2 : 
 



       cout << "Enter  recipient number: " <<endl;  
      cin >> number;
   
     cout<<"enter amount:\n ";
    cin>>amount;
    
    cout << "Enter your mm pin to send: " << endl;
     cin >> pin;
    
    
     
     if(pin == DEFAULT_PIN){
   balance = balance - amount;
    cout << amount << "  Amount sent to " << number << endl;
    
    cout << "current balance is " << balance << endl;
    
        
        }
     else if (amount > balance){
   
     cout <<"insufficient amount."<< endl;      
   
  }  
    
    else if (pin!= DEFAULT_PIN ){
     cout << "wrong pin:" <<endl;
        }   
   break;

  
    
   
            
            
            // changing/ resetting PIN  
    case 3 :   
           cout << "Enter old PIN:" << endl;  
           cin >> oldpin;     
        
           cout << "Enter new PIN" << endl;
        cin >> newpin;
              pin = newpin;   
           cout << "Your PIN has been successfully  reset." << endl;    
      
      break;
             
             // Exiting the program 
       case 4 :  
            cout << "Existing program ..." << endl;   
        break ;      
           
             //invalid Selection    
             default :  
            cout << "invalid selection." << endl; 
              break ;
         }   
     }  while(menuSelection!=4); 
          
         
         
    
   


            
    
   
            
       }
    
   return 0;
}
    
