
public class Main {

	public static void main(String[] args) {		
		
		Archer archer1 = new Archer("궁수1", "상");
		Archer archer2 = new Archer("궁수1", "상");
		
		System.out.println(archer1 == archer2);	// archer1과 archer2의 이름이 다름으로 false
		System.out.println(archer1.equals(archer2));

	}

}
