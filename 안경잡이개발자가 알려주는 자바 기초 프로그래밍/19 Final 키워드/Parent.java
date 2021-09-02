// final을 붙이어떠한 상태에서도 상속을 받지 못하게 함
final class Parent {

	// final을 붙이면 오버라이딩을 막을 수 있음
	public final void show() {
		System.out.println("Hi");
	}
}
