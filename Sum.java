import java.util.Scanner;

public class Sum {
public static void main(String[] args) {
  Scanner input= new Scanner (System.in);
  System.out.println("Welcom to our calculator");
  System.out.print("Please enter the first number: ");
  int firstnum=input.nextInt();
  System.out.print("Now, please enter the second number: ");
  int secondnum=input.nextInt();
  int sum=firstnum+ secondnum;
  System.out.println("Sum of your number is: " +sum);

}
    
}