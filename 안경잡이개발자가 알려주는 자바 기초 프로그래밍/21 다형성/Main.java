import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		
		Scanner scanner = new Scanner(System.in);
		System.out.print("바나나 : 1, 복숭아 : 2 -> ");
		int input = scanner.nextInt();
		Fruit fruit;
		
		if(input == 1) {
			fruit = new Banana();
			fruit.show();
		}
		
		else if(input == 2) {
			fruit = new Peach();
			fruit.show();
		}
	}

}
