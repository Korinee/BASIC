
public class study03 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		String pgm = "잘생겼다";
		int a = 1;
		
		if(pgm == "못생겼다") 
		{ 
			// 만약에 ()라면 중괄호 내부를 실행.
			System.out.println("정답입니다.");
		} 
		else if(pgm == "잘생겼다") 
		{
			System.out.println("잘생겼어요.");
		}
		else if(pgm == "잔생겼다") 
		{
			System.out.println("정답입니다.");
		}
		else if(pgm == "질생겼다") 
		{
			System.out.println("정답입니다.");
		}
		
		
		
		if(a == 0)
		{
			System.out.println("a는 0입니다.");
		}
		else if(a == 1)
		{
			System.out.println("a는 1입니다.");
		}
		
		
		// and 연산자, or 연산자
		if(a == 0 && a == 1)
		{
			// and 연산자 사용
			System.out.println("TEST");
		}
		
		if(a == 0 || a == 1)
		{
			// or 연산자 사용
			System.out.println("TEST2");
		}
	}

}
