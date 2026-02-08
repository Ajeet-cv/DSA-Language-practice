import java.util.Scanner;

public class lab1addmatrix {
    public static void main(String[] args) {
        Scanner input=new Scanner(System.in);
        System.out.println("Enter the no of row: ");
        int n=input.nextInt();
        System.out.println("Enter the no of coloum: ");
        int m=input.nextInt();
        System.out.println("Enter the element of matrix 1: ");
        int arr[][]=new int[n][m];
        for(int i=0;i<n;i++){
            System.out.print("|");
          for(int j=0;j<m;j++){
            arr[i][j]= input.nextInt();
          }
          System.out.print("|");

        }
        System.out.println("Enter the element of matrix 2: ");
        int ar[][]=new int[n][m];
        for(int i=0;i<n;i++){
            System.out.print("|");
          for(int j=0;j<m;j++){
            ar[i][j]= input.nextInt();
          }
          //System.out.println();
        }
        int ans[][]=new int[n][m];
        System.out.println("Add of matrix 1 and matrix 2:=> ");
        for(int i=0;i<n;i++){
            System.out.print("|");
          for(int j=0;j<m;j++){
            ans[i][j]= ar[i][j] +arr[i][j];
            System.out.print(ans[i][j]+ " ");
          }
          System.out.print("|");
          System.out.println();
        }
    }
}
