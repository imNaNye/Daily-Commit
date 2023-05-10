class GolfClub{
    private String clubName;

    GolfClub(int clubNumber){
        this.clubName = clubNumber + "번 아이언";
    }
    GolfClub(String clubName){
        this.clubName = clubName;
    }

    GolfClub(){
        this.clubName = "7번 아이언";
    }

    public void print(){
        System.out.println(clubName + "입니다.");
    }

}

public class PS07 {
    public static void main(String[] args) {
        GolfClub g1 = new GolfClub();
        g1.print();

        GolfClub g2 = new GolfClub(8);
        g2.print();

        GolfClub g3 = new GolfClub("퍼터");
        g3.print();
    }
}
