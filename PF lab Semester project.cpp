#include <iostream>
#include<cstdlib>
#include "Pattern Funtions.h"
#include "functions.h"
#include "functions(last).h"
using namespace std;

// Function prototypes
void triangle(char symbol, int size);
void invertedTriangle(char symbol, int size);
void square(char symbol, int size);
void hollowSquare(char symbol, int size);
void pyramid(char symbol, int size);
void invertedPyramid(char symbol, int size);
void diamond(char symbol, int size);
void hollowDiamond(char symbol, int size);
void butterfly(char symbol, int size);
void hollowButterfly(char symbol, int size);
void diagonal(char symbol, int size);
void hourglass(char symbol, int size);
void sandGlass(char symbol, int size);
void zigzag(char symbol, int size);
void pascalTriangle(int size);
void numberPyramid(int size);
void spiralPattern(int size);
void cross(char symbol, int size);
void clearScreen();
void waitForUser();

int main() {
    int choice,size;
    char symbol;
    char options[][50]={"Triangle","Inverted Triangle","Square","Hollow Square","Pyramid","Inverted Pyramid","Diamond","Hollow Diamond","Butterfly","Hollow Butterfly","Diagonal",
	"Hourglass","Sand Glass","Zig-Zag","Pascal's Triangle","Number Pyramid","Spiral Pattern","Cross","Exit"};
	do{
// Display menu using a loop
        clearScreen();
        cout<<"==========(WORLD OF PATTERNS)=============="<<endl;
        cout<<"LET US SHOW YOU MENU"<<endl;
        for(int i=0;i<19;i++){
            cout<<i+1<<". "<<options[i]<<endl;
        }
// Get user choice
        cout<<"Enter your choice (1-19): ";
        cin>>choice;
	if(choice==19){
            cout<<"Exiting... Thank you!"<<endl;
            break;
        }
// For Pascal's triangle and Spiral Pattern, symbol input is not required
        if(choice==15||choice==17){
            cout<<"Enter the size of the pattern: ";
            cin>>size;
        }else{
            cout<<"Enter the symbol to use: ";
            cin>>symbol;
            cout<<"Enter the size of the pattern: ";
            cin>>size;
        }
//using clear screen function to clear the screen for better visibility
	
// Call the appropriate function using a switch
        switch(choice){
            case 1: 
				triangle(symbol,size); 
					break;
            case 2:
				invertedTriangle(symbol,size);
					break;
            case 3: 
				square(symbol,size);
					break;
            case 4: 
				hollowSquare(symbol,size);
					break;
            case 5:
				pyramid(symbol,size);
					break;
            case 6:
				invertedPyramid(symbol,size);
					break;
            case 7:
				diamond(symbol,size);
					break;
            case 8:
				hollowDiamond(symbol,size);
					break;
            case 9:
				butterfly(symbol,size);
					break;
            case 10:
				hollowButterfly(symbol,size);
					break;
            case 11:
				diagonal(symbol,size);
					break;
            case 12:
				hourglass(symbol,size);
					break;
            case 13:
				sandGlass(symbol,size);
					break;
            case 14:
				zigzag(symbol,size);
					break;
            case 15:
				pascalTriangle(size);
					break;
            case 16:
				numberPyramid(size);
				break;
            case 17:
				spiralPattern(size);
					break;
            case 18:
				cross(symbol,size);
					break;
            default:
				cout<<"Invalid choice Please try again :("<<endl;
        }
        
         waitForUser();
         clearScreen();
    } while(true);

    return 0;
}
