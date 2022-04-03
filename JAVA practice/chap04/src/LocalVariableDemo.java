public class LocalVariableDemo {

    static int m = 0; //메인메소드(static)안에서 사용하려면 static 키워드 필요

    public static void main(String[] args) {
        int a = 0;
        double b;

        //System.out.println(b); 초기화를 하기 전의 변수(지역변수)는 사용 불가능
        System.out.println(m);
        System.out.println(n);//멤버필드는 위치에 상관없이, 초기화 전에도 사용 가능
        //public double d = 0.0; 지역변수에 public 키워드 사용불가, final 사용해야함

        for (int e = 0 ; e < 10; e++){
            //int a = 1; 같은 이름의 지역변수 사용 불가능
        }
    }
    static int n;
}

