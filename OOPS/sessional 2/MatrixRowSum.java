/*
Write a complete multi-threaded program in Java to meet following requirements:
•⁠  ⁠Read matrix [A] m x n
•⁠  ⁠Create m number of threads
•⁠  ⁠Each thread computes summation of elements of one row, i.e. i th row of the
matrix is processed by i th thread. 
•⁠  ⁠Print the results.
 */
import java.util.Scanner;

class RowSumThread extends Thread {
    private int[] row;
    private int rowIndex;
    private int rowSum;

    public RowSumThread(int[] row, int rowIndex) {
        this.row = row;
        this.rowIndex = rowIndex;
    }

    public void run() {
        rowSum = 0;
        for (int value : row) {
            rowSum += value;
        }
        System.out.println("Sum of row " + rowIndex + ": " + rowSum);
    }
}

public class MatrixRowSum {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        System.out.print("Enter number of rows (m): ");
        int m = scanner.nextInt();
        
        System.out.print("Enter number of columns (n): ");
        int n = scanner.nextInt();
        
        int[][] matrix = new int[m][n];
        System.out.println("Enter the matrix elements:");
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                matrix[i][j] = scanner.nextInt();
            }
        }
        
        // Create and start threads for each row
        RowSumThread[] threads = new RowSumThread[m];
        for (int i = 0; i < m; i++) {
            threads[i] = new RowSumThread(matrix[i], i);
            threads[i].start();
        }
        
        // Wait for all threads to complete
        for (int i = 0; i < m; i++) {
            try {
                threads[i].join();
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }

        scanner.close();
    }
}

// 1 2 3 4
// 5 6 7 8
// 9 10 11 12
// 13 14 15 16