import java.util.Scanner;
import java.util.ArrayList;
public class Java_End_of_file{
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        ArrayList<String> sentences = new ArrayList<String>();
        while(scanner.hasNext()){
            String sentence = scanner.nextLine();
            sentences.add(sentence);
        }
        for (int i = 1; i<=sentences.size();i++){
            System.out.println(i+" "+sentences.get(i-1));
        }
        scanner.close();
    }
}