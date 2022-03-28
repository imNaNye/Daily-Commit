public class MethodDemo {
    public static void main(String[] args) { //각각의 매개변수마다 type명을 명시해주어야 함
        System.out.println(sum(1,10));
        System.out.println(sum(10,100));
    }

    static int sum(int x, int y)  {
        int total = 0;
        for (int i = x; i <=y ; i++)
            total += i;
        return total;

    }
}
