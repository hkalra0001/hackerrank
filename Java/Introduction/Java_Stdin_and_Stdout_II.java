import java.util.Scanner;
public class Java_Stdin_and_Stdout_II{
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        int number1 = scanner.nextInt();
        double number2 = scanner.nextDouble();
        scanner.nextLine();
        String line = scanner.nextLine();
        System.out.println("String: "+line);
        System.out.println("Double: "+number2);
        System.out.println("Int: "+number1);
        scanner.close();
    }
}