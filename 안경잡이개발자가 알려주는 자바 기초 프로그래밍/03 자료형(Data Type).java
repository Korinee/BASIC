
public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		//
		double a = 10.3;
		double b = 9.6;
		double c = 10.1;
		System.out.println((a + b + c) / 3);
		
		//
		for(char i = 'a'; i <= 'z'; i++) {
			System.out.print(i + " ");
		}
		System.out.println(" ");
		
		//
		int d = 200;
		System.out.println("10진수 : " + d);
		System.out.format("8진수 : %o\n", d);
		System.out.format("16진수 : %x\n", d);
		
		//
		String name = "Korinee";
		System.out.println(name);
		System.out.println(name.substring(0, 1));
		System.out.println(name.substring(3, 6));
	}

}
