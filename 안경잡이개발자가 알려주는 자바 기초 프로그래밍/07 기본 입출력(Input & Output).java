import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		// ex1
		int count = 0;
		
		for(;;) {
			System.out.println("출력");
			count++;
			if(count == 10) {
				break;
			}
		}
		
		// ex2
		Scanner sc = new Scanner(System.in);
		System.out.print("정수를 입력하세요 : ");
		int i = sc.nextInt();
		System.out.println("입력된 정수는 " + i + "입니다.");
		sc.close();
		
		// ex3
		File file = new File("input.txt");
		try {
			Scanner sc2 = new Scanner(file);
			while(sc2.hasNextInt()) {
				System.out.println(sc.nextInt() * 100);
			}
			sc.close();
		} catch (FileNotFoundException e) {
			System.out.println("파일을 읽어오는 도중에 오류가 발생했습니다.");
		}
		
	}

}
