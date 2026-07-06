#include <iostream>
using namespace std;


//.....................................................''SQUARE FUNCTION''...........................................................................
	void square(char symbol,int size){
    for(int i=1;i<=size;i++){
        for(int j=1;j<=size;j++){  //GENERATE SYMBOLS WITH SPACE 
            cout<<symbol<< " "; 
        }
        cout<<endl;  //MOVE TO NEXT ROW 
    }
}
//.....................................................''INVERTED PYRAMID''...........................................................................
    void invertedPyramid(char symbol,int size){
    for(int i=size;i>=1;i--){  //OUTER LOOP FOR GENERATING ROWS
        for(int j=1;j<=size-i;j++){ //INNER LOOP HANDLES SPACING SO THAT PATTERN SHOULD BE READABLE
         cout<<" "; 
        }
    for(int j=1;j<=2*i-1;j++){  //PRINT SYMBOL IN ODD SEQUENCE 
            cout<<symbol;
        }
        cout<<endl;  
    }
}
//.....................................................''DIAMOND''.................................................................................
void diamond(char symbol,int size){
	//FIRST HALF
    for(int i=1;i<=size;i++){
        for(int j=1;j<=size-i;j++){
            cout<<" ";  //Print spaces before the symbols
        }
        for(int j=1;j<=2*i-1;j++){
            cout<<symbol;  //Print the symbol
        }
        cout<<endl; //Move to the next row
    }
    //SECOND HALF
    for(int i=size-1;i>=1;i--){
        for(int j=1;j<=size-i;j++){
            cout<<" "; 
        }
        for(int j=1;j<=2*i-1;j++){
            cout<<symbol;  
        }
        cout<<endl;  
    }
}
//........................................................''HOLLOW BUTTERFLY''....................................................................
void hollowButterfly(char symbol, int size){
    for(int i=1;i<=size;i++){	//upper part of the butterfly
        for (int j=1;j<=i;j++){		//left wing of the butterfly
            if(j==1||j==i)	//print the symbols at the end of the wing
                cout<<symbol;
            else
                cout<<" ";
        }//print spaces between the wings
        for(int j=1;j<=2*(size-i);j++)cout << " "; 	//print spaces to separate the left and the right wing
        for(int j=1;j<=i;j++){	//right wing of the butterfly
            if(j==1||j==i)	//print symbol at the edges of the wing
                cout<<symbol;
            else
                cout<<" ";	//print space in between
        }
        cout<<endl;
    }
    for(int i=size;i>=1;i--){ //Lower part of the butterfly
        for(int j=1;j<=i;j++){
            if(j==1||j==i)
                cout<<symbol;
            else
                cout<<" ";
        }
        for(int j=1;j<=2*(size-i);j++)
			cout<<" "; //Print spaces to separate the left and right wings
        for(int j=1;j<=i;j++){
            if(j==1||j==i)
                cout<<symbol;
            else
                cout<<" ";//Print spaces to separate the left and right wings
        }
        cout<<endl;
    }
}
//.............................................................'' CROSS ''......................................................................
void cross(char symbol,int size){
    for(int i=1;i<=size;i++){
        for(int j=1;j<=size;j++){
            if(i==j||i+j==size+1){  //USE THIS CONDITION TO CHECK WE ARE ON DIAGNOL AND ANTIDIAGNOL 
                cout<<symbol<<" ";
            }else{
			
                cout<<"  ";
           } 
	   }
        cout<<endl;
    }
}


//.............................................................'' SPIRAL PATTERN '' ...........................................................


void spiralPattern(int size){
    int arr[size][size]; //Declare a 2D array to hold the spiral values
    int value=1,top=0,bottom=size-1,left=0,right=size-1;

    while(value<=size*size){
        for(int i=left; i<=right;i++) 
		arr[top][i]=value++; //Fill the top row from left to right
        top++; //Move the top boundary down
        for(int i=top;i<=bottom;i++) 
		arr[i][right]=value++; //Fill the right column from top to bottom
        right--; //Fill the right column from top to bottom
        for(int i=right;i>=left;i--) 
		arr[bottom][i]=value++;  //Fill the bottom row from right to left
        bottom--; //Move the bottom boundary up

        for(int i=bottom;i>=top;i--)
		 arr[i][left]=value++;  //Fill the left column from bottom to top
        left++;  //Move the left boundary right
    }

    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++)
		 cout<<arr[i][j]<<"\t";
        cout<<endl;
    }
}


void pyramid(char symbol, int size){
    for(int i=1; i<=size; i++) {
        for (int j=1; j<=size-i; j++)
			cout<<" "; //Print spaces before the symbols
        for(int j=1; j<=2*i-1; j++) 
			cout<<symbol;  //Print spaces before the symbols
        cout << endl; //Move to the next row
    }
}
//...................................................'' HOURGLASS''...............................................................................
void hourglass(char symbol,int size){
    invertedPyramid(symbol,size); //FIRST HALF
    pyramid(symbol,size - 1); //SECOND HALF
}
//...............................................'' DIAGNOL ''...................................................................................
	void diagonal(char symbol,int size){
    for(int i = 1;i<=size;i++){
        for(int j=1;j<=size;j++){
            if(i==j){        //TO CHECK WE ARE ON DIAGNOL OR NOT
                cout<<symbol<<" ";
            }else{
				 cout<<"  ";
			}
			
        }
        cout<<endl;
    }
}
