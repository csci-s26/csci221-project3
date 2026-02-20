#include <iostream>
using namespace std;

//Function to create 2d array
int** createMatrix(int rows, int cols){
  int** matrix = new int*[rows];

  for(int i = 0; i < rows; i++){
    matrix[i] = new int[cols];
  }

  return matrix;
}

//TODO
//Function to fill matrix
void fillMatrix(int** matrix, int rows, int cols){
 
}

//Function to print matrix
void printMatrix(int** matrix, int rows, int cols){
   for(int i = 0; i < rows; i++){
      for(int j = 0; j < cols; j++){
          cout << matrix[i][j] << "\t";
      }
      cout << endl;
   }   
}


void deleteMatrix(int** matrix, int rows){
  for(int i=0; i<rows; i++){
     delete[] matrix[i];
  }
}
  
int main(){
  srand(time(0));
  int rows, cols;
  cout << "Number of rows: ";
  cin >> rows;

  cout << "Number of cols: ";
  cin >> cols;
  
  //Create a matrix rows by cols
  int** matrix = createMatrix(rows, cols);

  //Fill the matrix with random numbers
  fillMatrix(matrix, rows, cols);

  //Print the original matrix
  cout << "Original matrix" << endl;
  cout << "_______________" << endl;
  printMatrix(matrix, rows, cols);

  //TODO:
  //Transpose matrix
  
  //Print the transposed matrix
 
  //Free allocated space

  return 0;
}

