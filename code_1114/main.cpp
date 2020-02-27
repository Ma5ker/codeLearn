#include <iostream>
#include <algorithm>
#include <boost/function.hpp>
#include <boost/thread/mutex.hpp>
#include <boost/thread/thread.hpp>
using namespace std;
class Foo {
public:
	Foo() {

	}
	///����ֱ�Ӹ��ƵĴ� �һ�ûѧ����������ز���
	void first(function<void()> printFirst) {
		// �ȴ�ֱ�� main() ��������
		std::unique_lock<std::mutex> lk(g_mutex);
		// printFirst() outputs "first". Do not change or remove this line.
		printFirst();
		// ֪ͨǰ����ֶ��������Ա���ȴ��̲߳ű����Ѿ�������ϸ�ڼ� notify_one ��
		counter++;
		cv1.notify_one();
	}

	void second(function<void()> printSecond) {
		std::unique_lock<std::mutex> lk(g_mutex);
		cv1.wait(lk, [this]() {return counter == 2; }); // ������ǰ�̣߳�ֱ���������������� 
		// printSecond() outputs "second". Do not change or remove this line.
		printSecond();
		counter++;
		cv2.notify_one();
	}

	void third(function<void()> printThird) {

		std::unique_lock<std::mutex> lk(g_mutex);
		cv2.wait(lk, [this]() {return counter == 3; });
		// printThird() outputs "third". Do not change or remove this line.
		printThird();
	}

private:
	int counter = 1;
	std::condition_variable cv1;
	std::condition_variable cv2;
	// ʹ��lock��unlock�ֶ�����
	std::mutex g_mutex;
};

int main() {
	return 0;
}