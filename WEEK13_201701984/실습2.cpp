#include <iostream>
#include <string>

template <typename T>
auto sum(T x) {
	return x;
}

template<typename T, typename...Args>
auto sum(T x, Args... args) {
	return x + sum(args...);
}
int main() {
	auto x = sum(42.5, 10, 11.1f);
	std::cout << x;
	getchar();
}

/* ���� �߻� ���� : auto sum(T x, Args... args)�� ���ڰ� �ּ� 2�� �ʿ��� �Լ��Դϴ�.
* ó������ ���ڰ� 3������ �ϴ� 42.5�� 10 �ΰ��� �޾Ƽ� ó���� �� �־��µ�,
* 11.1f�� ���� �� ���ڰ� �ϳ��ۿ� ���� �ʾƼ� �Լ��� ���������� ����� �� �����ϴ�.
* ���� auto sum(T x)�� �߰����־� ���ڰ� �ϳ� ������ �� ó���� ���־����ϴ�.
*/