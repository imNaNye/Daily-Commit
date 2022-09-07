public class OneToTenDemo {
    static int sumOneToTen;

    static{
        int sum = 0;
        for (int i = 1; i <= 10 ; i++){
            sum += i;
        }
        sumOneToTen = sum;
    } //정적 블록으로 정적 변수를 초기화함

    public static void main(String[] args) {
        System.out.println(sumOneToTen);
    }
}
