public class MethodOverloadingDemo {
    public static void main(String[] args) {

        System.out.println(max(2,5,7));
        System.out.println(max(2.0, 4));
        System.out.println(max(2,3.0));

    }

    static int max(int x, int y){
      return x > y ? x : y;
    }

    static int max(int x, double y) {
        return x > y ? x : (int) y;
    }

    static int max(double x, int y) {
        return x > y ? (int)x : y;
    }

    static int max(int x, int y, int z) {
        return max(max(x,y),z);
    }
}
