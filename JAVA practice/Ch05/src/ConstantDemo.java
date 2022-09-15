public class ConstantDemo {
    public static void main(String[] args) {
        final int MALE = 0;
        final int FEMALE = 1;
        final int SOUTH = 1;
        int gender = FEMALE;
        if(gender == MALE)
            System.out.println(MALE + "은 병역 의무가 있다.");
        else
            System.out.println(FEMALE + "은 병역 의무가 없다.");

        if (gender ==SOUTH)
            System.out.println(SOUTH + "는 누구?");
        gender = 5;
        //무슨 의미인지 파악 불가능, MALE / FEMALE이 아닌 다른 값을 넣어도 컴파일러가 오류를 파악할 수 없음
        //열거 타입의 필요성
    }
}
