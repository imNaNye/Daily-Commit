public class PrintfDemo {
    public static void main(String[] args) {
        int i = 97;
        String s = "Java"; // 문자열에서 " (double quotation)사용
        double dd = 3.14;

        System.out.printf("i = %d\n", i); //줄바꿈 문자 \n
        System.out.printf("%5s\n", s); // 5칸을 사용하여 출력, 오른쪽 정렬
        System.out.printf("%-5s---\n", s ); //5칸을 사용하여 출력, 왼쪽 정렬
        System.out.printf("%.3f\n", dd); //소숫점 3자리까지 출력
    }
}
