#include "pch.h"
#include "CppUnitTest.h"
#include "../stack/stack.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace test
{
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
			s.push(3);

			Stack<int> copied{ s };

			Assert::IsNotNull(&copied);
			Assert::AreEqual(copied.get_size(), s.get_size());
			Assert::AreEqual(copied.top(), s.top());
		}
		TEST_METHOD(CtorMove_NoException) {
			Stack<int> s{};
			s.push(3);
			size_t expectedSize = s.get_size();
			int expectedTop = s.top();

			Stack<int> copied{ move(s) };

			Assert::IsNotNull(&copied);
			Assert::AreEqual(copied.get_size(), expectedSize);
			Assert::AreEqual(copied.top(), expectedTop);
		}
		TEST_METHOD(OperatorCopy_NoException) {
			Stack<int> s{};
			s.push(3);

			Stack<int> copied = s;

			Assert::AreEqual(copied.get_size(), s.get_size());
			Assert::AreEqual(copied.top(), s.top());
		}
		TEST_METHOD(OperatorMove_NoException) {
			Stack<int> s{};
			s.push(3);
			size_t expectedSize = s.get_size();
			int expectedTop = s.top();

			Stack<int> copied = move(s);

			Assert::AreEqual(copied.get_size(), expectedSize);
			Assert::AreEqual(copied.top(), expectedTop);
		}
		TEST_METHOD(Int_Push_NoException) {
			Stack<int> s{};
			size_t size = 1;
			int value = 3;

			s.push(value);

			Assert::AreEqual(size, s.get_size());
			Assert::AreEqual(value, s.top());
		}
		TEST_METHOD(String_Push_NoException) {
			Stack<string> s{};
			size_t size = 1;
			string value = "3";

			s.push(value);

			Assert::AreEqual(size, s.get_size());
			Assert::AreEqual(value, s.top());
		}
		TEST_METHOD(Show_Empty) {
			Stack<int> s{};
			string expectedString = "Пустой стек\n";

			Assert::AreEqual(s.show(), expectedString);
		}
		TEST_METHOD(Show_NotEmpty) {
			Stack<int> s{};
			s.push(3);
			s.push(3);
			s.push(9);
			string expectedString = "{ 9 3 3 }";

			Assert::AreEqual(s.show(), expectedString);
		}
		TEST_METHOD(IsEmpty_Empty) {
			Stack<int> s{};

			Assert::IsTrue(s.is_empty());
		}
		TEST_METHOD(IsEmpty_NotEmpty) {
			Stack<int> s{};
			s.push(3);

			Assert::IsFalse(s.is_empty());
		}
		TEST_METHOD(Pop_Exception) {
			Assert::ExpectException<std::logic_error>([]() {
				Stack<int> s{};
				s.pop();
				});
		}
		TEST_METHOD(Pop_NoException) {
			Stack<int> s{};
			s.push(3);

			s.pop();

			Assert::IsTrue(s.is_empty());
		}
		TEST_METHOD(Top_Exception) {
			Assert::ExpectException<std::logic_error>([]() {
				Stack<int> s{};
				s.top();
				});
		}
		TEST_METHOD(Top_NoException) {
			Stack<int> s{};
			s.push(3);
			int expectedTop = 3;

			Assert::AreEqual(s.top(), expectedTop);
		}
		TEST_METHOD(GetSize_Empty) {
			Stack<int> s{};
			size_t expectedSize = 0;

			Assert::AreEqual(s.get_size(), expectedSize);
		}
		TEST_METHOD(GetSize_NotEmpty) {
			Stack<int> s{};
			s.push(3);
			size_t expectedSize = 1;

			Assert::AreEqual(s.get_size(), expectedSize);
		}
	};
}

