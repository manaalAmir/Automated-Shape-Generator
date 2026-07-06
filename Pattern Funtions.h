#include <iostream>
#include<cstdlib>
using namespace std;


// Function to clear the console screen
void clearScreen(){
#ifdef _WIN32
    system("CLS"); // For Windows
#else
    system("clear"); // For Linux and macOS
#endif
}


void hollowDiamond(char symbol, int size){    // function for hollow diamond pattern
	// Upper half of the diamond
    for(int i=1; i<=size; i++){
        for(int j=1; j<=size-i; j++) 
			cout<<" ";  
        for(int j=1; j<=2*i-1; j++){
            if(j==1||j==2*i-1){
                cout<<symbol;  
            }else{
                cout<<" ";
        	}
        }
        cout<<endl;
    }
    // lower half of the diamond
    for(int i=size-1; i>=1; i--){
        for (int j=1; j<=size-i; j++) 
			cout<<" ";
        for(int j=1; j<=2*i-1; j++){
            if(j==1 || j==2*i-1){
                cout<<symbol;
            }else{
                cout<<" ";
       		}
	    } 
        cout << endl;
    }
}

void butterfly(char symbol, int size) {   // function for butterfly pattern
    // first half of the butterfly
    for(int i=1; i<=size; i++){
        for(int j=1; j<=i; j++)  // Print left wing
            cout<<symbol;
        
        for(int j=1; j<=2*(size-i); j++) // Print spaces in the middle
            cout<<" ";    
        
        for(int j=1; j<=i; j++) // Print right wing
            cout<<symbol; 
        
        cout<<endl; // Move to the next line after each row
    } 
    // second half of the butterfly
    for(int i=size; i>=1; i--){
        for(int j=1; j<=i; j++) // Print left wing
            cout<<symbol;
        
        for(int j=1; j<=2*(size-i); j++) // Print spaces in the middle
            cout<<" ";
    
        for(int j=1; j<=i; j++)  // Print right wing
            cout<<symbol;
        
        cout<<endl; // Move to the next line after each row
    }
}


void zigzag(char symbol, int size){   // function for zigzag pattern
    for(int i=0; i<2; i++){    // there are 2 rows
        for(int j=0; j<size; j++){
            if(i==0 && j%4== 0){ // Place symbol at every 4th position in first row
                cout<<symbol; 
            }else if(i==1 && j%4==2) {  // Print the symbol in the second row in the middle of the spaces between the first row symbols
                cout<<symbol; 
            }else{
                cout<<" "; 
            }
        }
        cout<<endl;
    }
}

void numberPyramid(int size){ // function for a number pyramid pattern
    for(int i=1; i<=size; i++){
        for(int j=1; j<=size-i; j++)  // print spaces
            cout<<" ";

        for(int j=1; j<=i; j++) 
            cout<<j<<" "; // Print numbers on the same line

        cout<<endl; // Move to the next line after each row
    }
}


void waitForUser(){
    cout<<"\n Press Enter to clear the screen...";
    cin.ignore(); 
    cin.get();    // Wait for user to press Enter
}
