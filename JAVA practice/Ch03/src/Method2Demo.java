public class Method2Demo {
    public static void main(String[] args) {
        System.out.println("합 (1~10)" + sum(1,10));
        System.out.println(sum(1,100));
        System.out.println(sum(1,1000));
    }

    public static int sum(int i1, int i2){
        int sum = 0;
        for (int i = i1; i<=i2; i++)
            sum+= i;

        return sum;
    }
}
