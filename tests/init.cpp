#include <catch.hpp>
#include "stack.hpp"

SCENARIO("stack init")
{
	stack<int> st;
	REQUIRE(st.count() == 0);
}

SCENARIO("stack init object")
{
	stack<int> st1;

	st1.push(1);
	st1.push(2);
	st1.push(3);
	stack<int> st2(st1);
	REQUIRE(st1.count() == 3);
	REQUIRE(st1.count() == st2.count());
}

SCENARIO("stack op=")
{
	stack<int> st1;

	st1.push(1);
	st1.push(2);
	st1.push(3);
	stack<int> st2 = st1;
	REQUIRE(st1.count() == 3);
	REQUIRE(st1.count() == st2.count());
}

SCENARIO("stack push pop")
{
	stack<int> st;
	st.push(4);
	st.push(5);
	st.push(6);
	st.push(7);
	auto p =st.try_pop();
	REQUIRE(st.count() == 3);
	REQUIRE(*p==7);
} 
