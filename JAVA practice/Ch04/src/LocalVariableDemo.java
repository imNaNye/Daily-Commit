public class LocalVariableDemo {
    public static void main(String[] args) {
        int a = 0;
        double b;

        //System.out.println(b); -> b가 초기화되지 않아 사용 불가능
        //System.out.println(a+c); ->c가 선언/초기화되지 않아 사용 불가

        int c = 0;

        //public double d = 0.0; ->지역변수는 public으로 초기화할 수 없음

        for (int e = 0; e < 10; e++){
            //int a += 1; -> 같은 이름으로 선언 불가능
            System.out.println(e);
        }
    }
}
