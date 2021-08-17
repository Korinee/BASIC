
public class Main {

	final static int N = 10;
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		// ex1
		int score = 95;
		
		if(score >= 90) {
			System.out.println("A+입니다.");
		} else if(score >= 80) {
			System.out.println("B+입니다.");
		} else if(score >= 70) {
			System.out.println("C+입니다.");
		} else {
			System.out.println("F입니다.");
		}
		
		// ex2
		String a = "Man";
		int b = 0;
		
		// java는 String을 비교할때 equal()을 이용
		// 그 이유는 String은 다르 자료형과 다른 문자열 자료형이기 때문
		if(a.equals("Man")) {
			System.out.println("남자입니다.");
		} else {
			System.out.println("남자가 아닙니다.");
		} if(b == 3) {
			System.out.println("b는 3입니다.");
		} else {
			System.out.println("3이 아닙니다.");
		}
		
		if(a.equalsIgnoreCase("man") && b == 0) {
			System.out.println("참입니다.");
		} else {
			System.out.println("거짓입니다.");
		}
		
		// ex3
		int k = 1, sum = 0;
		while(k <= 1000) {
			sum += k++;
		}
		System.out.println("1부터 1000까지의 합은" + sum + "입니다.");
		
		// ex4
		// for문 : 초기화 부분, 조건 부분, 연산 부분
		for(int i = N; i > 0; i--) {
			for(int j = i; j > 0; j--) {
				System.out.print("*");
			}
			System.out.println();
		}
		
		// ex5
		// x^2 + y^2 = r^2
		for(int i = -N; i <= N; i++) {
			for(int j = -N; j <= N; j++) {
				if(i * i + j * j <= N * N) {
					System.out.print("*");
				} else {
					System.out.print(" ");
				}
			}
			System.out.println();
		}
	
	}

}
