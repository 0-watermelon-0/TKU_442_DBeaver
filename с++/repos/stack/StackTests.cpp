#include "pch.h"
#include "CppUnitTest.h"
#include "../Stack/Stack.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace StackTests {
	TEST_CLASS(NodeTests) {
public:
	TEST_METHOD(CtorParam_NoException) {
		Node<int> node{ 3 };

		Assert::IsNotNull(&node);
	}
	};

	TEST_CLASS(StackTests) {
public:
	TEST_METHOD(Ctor_NoException) {
		Stack<int> s{};

		Assert::IsNotNull(&s);
	}
	TEST_METHOD(CtorCopy_NoException) {
		Stack<int> s{};
		s.Push(3);

		Stack<int> copied{ s };

		Assert::IsNotNull(&copied);
		Assert::AreEqual(copied.GetSize(), s.GetSize());
		Assert::AreEqual(copied.Top(), s.Top());
	}
	TEST_METHOD(CtorMove_NoException) {
		Stack<int> s{};
		s.Push(3);
		size_t expectedSize = s.GetSize();
		int expectedTop = s.Top();

		Stack<int> copied{ move(s) };

		Assert::IsNotNull(&copied);
		Assert::AreEqual(copied.GetSize(), expectedSize);
		Assert::AreEqual(copied.Top(), expectedTop);
	}
	TEST_METHOD(OperatorCopy_NoException) {
		Stack<int> s{};
		s.Push(3);

		Stack<int> copied = s;

		Assert::AreEqual(copied.GetSize(), s.GetSize());
		Assert::AreEqual(copied.Top(), s.Top());
	}
	TEST_METHOD(OperatorMove_NoException) {
		Stack<int> s{};
		s.Push(3);
		size_t expectedSize = s.GetSize();
		int expectedTop = s.Top();

		Stack<int> copied = move(s);

		Assert::AreEqual(copied.GetSize(), expectedSize);
		Assert::AreEqual(copied.Top(), expectedTop);
	}
	TEST_METHOD(Int_Push_NoException) {
		Stack<int> s{};
		size_t size = 1;
		int value = 3;

		s.Push(value);

		Assert::AreEqual(size, s.GetSize());
		Assert::AreEqual(value, s.Top());
	}
	TEST_METHOD(String_Push_NoException) {
		Stack<string> s{};
		size_t size = 1;
		string value = "3";

		s.Push(value);

		Assert::AreEqual(size, s.GetSize());
		Assert::AreEqual(value, s.Top());
	}
	TEST_METHOD(Show_Empty) {
		Stack<int> s{};
		string expectedString = "Пустой стек\n";

		Assert::AreEqual(s.Show(), expectedString);
	}
	TEST_METHOD(Show_NotEmpty) {
		Stack<int> s{};
		s.Push(3);
		s.Push(3);
		s.Push(9);
		string expectedString = "{ 9 3 3 }";

		Assert::AreEqual(s.Show(), expectedString);
	}
	TEST_METHOD(IsEmpty_Empty) {
		Stack<int> s{};

		Assert::IsTrue(s.IsEmpty());
	}
	TEST_METHOD(IsEmpty_NotEmpty) {
		Stack<int> s{};
		s.Push(3);

		Assert::IsFalse(s.IsEmpty());
	}
	TEST_METHOD(Pop_Exception) {
		Assert::ExpectException<std::logic_error>([]() {
			Stack<int> s{};
			s.Pop();
			});
	}
	TEST_METHOD(Pop_NoException) {
		Stack<int> s{};
		s.Push(3);

		s.Pop();

		Assert::IsTrue(s.IsEmpty());
	}
	TEST_METHOD(Top_Exception) {
		Assert::ExpectException<std::logic_error>([]() {
			Stack<int> s{};
			s.Top();
			});
	}
	TEST_METHOD(Top_NoException) {
		Stack<int> s{};
		s.Push(3);
		int expectedTop = 3;

		Assert::AreEqual(s.Top(), expectedTop);
	}
	TEST_METHOD(GetSize_Empty) {
		Stack<int> s{};
		size_t expectedSize = 0;

		Assert::AreEqual(s.GetSize(), expectedSize);
	}
	TEST_METHOD(GetSize_NotEmpty) {
		Stack<int> s{};
		s.Push(3);
		size_t expectedSize = 1;

		Assert::AreEqual(s.GetSize(), expectedSize);
	}
	};
}
