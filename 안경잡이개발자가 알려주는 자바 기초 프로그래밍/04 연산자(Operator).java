
public class Main {

	final static int SECOND = 1000;
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		//
		int minute = SECOND / 60;
		int second = SECOND % 60;
		System.out.println(minute + "분 " + second + "초");
		
		// 
		int a = 10;
		System.out.println("현재의 a는" + a + "입니다.");
		a++;
		System.out.println("현재의 a는" + a + "입니다.");
		System.out.println("현재의 a는" + ++a + "입니다.");
		System.out.println("현재의 a는" + a++ + "입니다.");
		System.out.println("현재의 a는" + a + "입니다.");
		
		//
		System.out.println(1 % 3);
		System.out.println(2 % 3);
		System.out.println(3 % 3);
		System.out.println(4 % 3);
		System.out.println(5 % 3);
		System.out.println(6 % 3);
		
		// 
		int b = 50;
		int c = 50;
		
		System.out.println("b와 c는 같은가요? " + (b == c));
		System.out.println("b와 c는 큰가요? " + (b > c));
		System.out.println("b와 c는 작은가요? " + (b < c));
		System.out.println("b가 c와 같으면서 a가 30보다 큰가요? " + ((b == c) && (b > c)));
		System.out.println("b가 50이 아닌가요? " + !(b == 50));
		
		//
		int x = 50;
		int y = 60;
		System.out.println("최댓값은 " + max(x, y) + "입니다.");
		
		//
		double f = Math.pow(3.0, 20.0);
		System.out.println("3의 20제곱은 " + (int) f + "입니다.");
		
		}
	
		// 반환형, 함수이름, 매개변수
		static int max(int d, int e) {
			int result = (d > e) ? d : e;
			return result;
		}

}
