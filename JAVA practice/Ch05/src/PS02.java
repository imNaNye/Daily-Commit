public class PS02 {
    public static void main(String[] args) {
        System.out.println(sumExceptFirst(1,2,3,4));
        int arr[] = {2,3};
        System.out.println(sumExceptFirst(1, arr));
        System.out.println(sumExceptFirst(1,2,3,4,5));
    }

    public static int sumExceptFirst(int ... a){
        int sum = 0;
        for (int i : a)
            sum += i;
        sum -= a[0];
        return sum;
    }
}
