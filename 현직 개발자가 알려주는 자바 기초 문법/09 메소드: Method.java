
public class Main {
		
	public static void main(String[] args) {
		
//		String a = "hello";
//		String b = "pgm";
		
//		System.out.println(a + b);
		
		Main main = new Main();		// 클래스 생성
//		main.StrCombine("Hello", "World");		// 메소드 실행 (String 타입을 2개를 넘겨 줌.)
		
		
//		System.out.println(main.StrHelloWorld("hello", "world"));
		
		String bbb = main.StrHelloWorld("hello", "world");
		
		System.out.println(bbb);
	}
	
	// 메소드 만든것
	/* 메소드를 만드는 이유 
	 1. 유지 보수를 위해서
	 2. 가독성이 좋아지니깐
	 3. 캡슐화 ( 여러 곳에서 중복된 코드를 작성할 필요가 없어짐 )
	*/
	public void StrCombine (String a, String b) { 	// void는 실행형 메소드.
		String result = a + b;
		System.out.println(result);
	}

	public String StrHelloWorld (String hello, String world) { // return 리턴형 메소드
		String result = hello + world;
		return result;
	}
}

