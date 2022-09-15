public class ForEachDemo {
    public static void main(String[] args) {
        int[] one2five = {1,2,3,4,5};
        int sum = 0;

        for (int x = 0; x < one2five.length ; x++) //final int x로 변경 시 x++에서 오류가 발생
            one2five[x]++; //for 문은 특정 원소에 접근할 수 있으나 for ~ each문은 할 수 없다

        for (int x :  one2five) //final이 없어도 변수 x는 final int 타입.
            sum += x;

        System.out.println("평균 = " + sum / 5.0);
    }
}
