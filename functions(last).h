#include <iostream>
using namespace std;


//pascal triangle
void pascalTriangle(int size){
    for(int i=0; i<size; i++){ //outer loop to iterate through each row of triangle
        int num=1; //intialize num for each row
        for(int j=0; j<size-i; j++) //print spaces to create left padding 
			cout<<" ";
        for(int j=0; j<=i; j++){ //second inner loop to print numbers in the current row
            cout<<num<<" ";
            num=num*(i - j)/(j + 1); //formula
        }
        cout<<endl; // print a new line after each row
    }
}


void triangle(char symbol,int size){ // Function for triangle pattern
    for(int i=1; i<=size;i++){
        for(int j=1;j<=i;j++)
		{
		cout<<symbol<<" "; // Print the symbol followed by a space
		}
		
        cout<<endl; // Move to the next line after finishing a row
    }
}

void invertedTriangle(char symbol,int size){   // Function for inverted triangle pattern
    for(int i=size;i>=1;i--){
        for(int j=1;j<=i;j++){
		cout<<symbol<<" ";}   // Print the symbol followed by a space
        cout<<endl;   // Move to the next line after finishing a row
    }
}
//sand glass
void sandGlass(char symbol,int size) {
    invertedTriangle(symbol,size);	//inverted triangle for the upper part of the sandglass
    triangle(symbol,size);	//triangle for the lower part of the sandglass
}

//hollow square
void hollowSquare(char symbol,int size){	
    for(int i=1;i<=size;i++){	//outer loop to iterate through each row
        for(int j=1;j<=size;j++){	//inner loop to iterate thruogh each column	
            if(i==1||i==size||j==1||j==size)	//print the symbol followed by a space	
                cout<<symbol<<" ";
            else
                cout<<"  ";	//print two spaces for hollow part
        }
        cout<<endl;
    }
}



