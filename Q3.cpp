//#include<iostream>
//using namespace std;
//
//// Function to input elements into a matrix of size m x n
//void inputMatrix(int A[][100], int m, int n) {
//    cout << "Enter elements of the matrix:" << endl;
//    for (int i = 0; i < m; ++i) {
//        for (int j = 0; j < n; ++j) {
//            cout << "Enter element A[" << i << "][" << j << "]: ";
//            cin >> A[i][j];
//        }
//    }
//}
//
//// Function to display elements of a matrix of size m x n
//void displayMatrix(int A[][100], int m, int n) {
//    cout << "Matrix elements:" << endl;
//    for (int i = 0; i < m; ++i) {
//        for (int j = 0; j < n; ++j) {
//            cout << A[i][j] << " ";
//        }
//        cout << endl;
//    }
//}
//
//// Function to calculate the sum of all elements of a matrix of size m x n
//int sumMatrix(int A[][100], int m, int n) {
//    int sum = 0;
//    for (int i = 0; i < m; ++i) {
//        for (int j = 0; j < n; ++j) {
//            sum += A[i][j];
//        }
//    }
//    return sum;
//}
//
//// Function to display row-wise sum of a matrix of size m x n
//void rowSum(int A[][100], int m, int n) {
//    cout << "Row-wise sum of the matrix:" << endl;
//    for (int i = 0; i < m; ++i) {
//        int rowSum = 0;
//        for (int j = 0; j < n; ++j) {
//            rowSum += A[i][j];
//        }
//        cout << "Row " << i + 1 << ": " << rowSum << endl;
//    }
//}
//
//// Function to display column-wise sum of a matrix of size m x n
//void columnSum(int A[][100], int m, int n) {
//    cout << "Column-wise sum of the matrix:" << endl;
//    for (int j = 0; j < n; ++j) {
//        int colSum = 0;
//        for (int i = 0; i < m; ++i) {
//            colSum += A[i][j];
//        }
//        cout << "Column " << j + 1 << ": " << colSum << endl;
//    }
//}
//
//// Function to create the transpose of a matrix of size m x n
//void transposeMatrix(int A[][100], int m, int n) {
//    int B[100][100];
//    for (int i = 0; i < n; ++i) {
//        for (int j = 0; j < m; ++j) {
//            B[i][j] = A[j][i];
//        }
//    }
//
//    cout << "Transpose of the matrix:" << endl;
//    displayMatrix(B, n, m);
//}
//
//int main() {
//    int m, n;
//    cout << "Enter the number of rows: ";
//    cin >> m;
//    cout << "Enter the number of columns: ";
//    cin >> n;
//
//    int A[100][100];
//
//    int choice;
//    do {
//        cout << "\nMenu:\n";
//        cout << "1. Input elements into matrix\n";
//        cout << "2. Display elements of matrix\n";
//        cout << "3. Sum of all elements of matrix\n";
//        cout << "4. Display row-wise sum of matrix\n";
//        cout << "5. Display column-wise sum of matrix\n";
//        cout << "6. Create transpose of matrix\n";
//        cout << "0. Exit\n";
//        cout << "Enter your choice: ";
//        cin >> choice;
//
//        switch (choice) {
//        case 1:
//            inputMatrix(A, m, n);
//            break;
//        case 2:
//            displayMatrix(A, m, n);
//            break;
//        case 3:
//            cout << "Sum of all elements: " << sumMatrix(A, m, n) << endl;
//            break;
//        case 4:
//            rowSum(A, m, n);
//            break;
//        case 5:
//            columnSum(A, m, n);
//            break;
//        case 6:
//            transposeMatrix(A, m, n);
//            break;
//        case 0:
//            cout << "Exiting program.\n";
//            break;
//        default:
//            cout << "Invalid choice. Please try again.\n";
//        }
//    } while (choice != 0);
//
//    return 0;
//}
