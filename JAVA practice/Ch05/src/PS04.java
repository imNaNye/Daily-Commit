import java.util.Scanner;

public class PS04 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        do{
            System.out.print("URL을 입력하세요 : ");
            String url = in.nextLine();

            if (url.equals("bye"))
                break;

            if (url.endsWith("com"))
                System.out.println(url + "은 'com'으로 끝납니다. ");
            else
                System.out.println(url + "은 'com'으로 끝나지 않습니다. ");

            if (url.contains("java"))
                System.out.println(url + "은 'java'를 포함합니다. ");
            else
                System.out.println(url + "은 'java'를 포함하지 않습니다. ");
        }while(true);
    }
}