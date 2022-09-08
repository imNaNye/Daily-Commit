class Printer{
    private int numOfPapers;
    private boolean duplex;

    public Printer(){
        numOfPapers = 0;
    }

    public Printer(int numOfPapers){
        this.numOfPapers = numOfPapers;
    }

    public Printer(int numOfPapers, boolean duplex){
        this.numOfPapers = numOfPapers;
        this.duplex = duplex;
    }

    public int getNumOfPapers(){
        return numOfPapers;
    }

    public boolean getDuplex(){
        return duplex;
    }

    public Printer setNumOfPapers(int numOfPapers){
        this.numOfPapers = numOfPapers;
        return this;
    }

    public Printer setDuplex(boolean duplex){
        this.duplex = duplex;
        return this;
    }

    public void print(int amount){

        if (this.numOfPapers <= 0)
            System.out.println("용지가 부족합니다");
        else if (amount >= this.numOfPapers){
            System.out.println("용지가 "+(amount - this.numOfPapers)+ "장 만큼 부족합니다.");
            this.numOfPapers = 0;
        }
        else
            this.numOfPapers -= amount;

        System.out.println("용지가 "+this.numOfPapers+"장 남았습니다.");

    }

}

public class Practice1 {
    public static void main(String[] args) {
        Printer p = new Printer(10);
        p.print(2);
        p.print(20);
        p.print(10);
    }
}
