import java.util.Scanner;

public class PS10 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.print("양의 정수를 입력하세요 : ");
        int num = in.nextInt();
        if (isPrime(num))
            System.out.println(num +" 은 소수입니다. ");
        else
            System.out.println(num + " 은 소수가 아닙니다. ");

    }
    static boolean isPrime(int n){
        for(int i = 2; i < n ; i++){
            if (n % i == 0)
                return false;
        }
        return true;
    }
}
