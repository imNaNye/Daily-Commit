

public class PS06 {
    public static int[] reverse(int[] org){
        int[] neworg = new int[org.length];
        for (int i = 0; i < org.length ; i++){
            neworg[org.length-1-i] = org[i];
        }
        return neworg;
    }

    public static void main(String[] args) {
        int[] arr = {1, 2, 3, 4, 5};
        int[] rra = reverse(arr);

        for (int i = 0; i < arr.length ; i++){
            System.out.print(rra[i] + " ");
        }
    }
}
