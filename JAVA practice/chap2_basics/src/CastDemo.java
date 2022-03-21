package chap02;

public class CastDemo {
    public static void main(String[] args) {
        int i;
        double d;
        byte b;

        i = 7/4;
        System.out.println(i);
        d = 7/4;
        System.out.println(d);
        d = 7 / (double)4; // 7.0 / 4.0 의 값이 나옴
        System.out.println(d);
        //i = 7 / (double)4; -> int형에 double형을 넣을 수 없음

        i = 300;
        if (i < Byte.MIN_VALUE || i > Byte.MAX_VALUE)
            System.out.println("오류");
        else
            b = (byte)i;
    }

}

