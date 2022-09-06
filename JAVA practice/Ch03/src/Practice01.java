import java.util.Scanner;

public class Practice01 {
    public static void main(String[] args) {
        int result; // 팩토리얼 결괏값 저장
        int n; //키보드에서 입력받을 정수 저장
        Scanner in = new Scanner(System.in);

        System.out.print("정수를 입력하세요 : ");
        n = in.nextInt();
        result = factorial(n);
        //키보드로 정수를 입력받고 팩토리얼 값을 계산하는 코드
        System.out.println(n+"! = "+result);

        result = factorial(n,3);
        System.out.println(result);
    }

    public static int factorial(int i){
        int j = 1 ;

        while(i > 1){
            j *= i;
            i--;
        }

        return j;
    }
    static int factorial(int x, int y){
        int r = 1;
        while( x >= y){
            r *= x;
            x--;
        }
        return r;
    }
}
