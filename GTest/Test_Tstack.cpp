#include"C:\Users\Матвей\Documents\Visual Studio 2015\Projects\TQueue\TQueue\TQueue.h"
#include"gtest.h"

TEST(TQueue, can_create_queue) 
{
	ASSERT_NO_FATAL_FAILURE(TQueue<int> a);
}
TEST(TQueue,can_check_empty_queue ) {
	TQueue<int> a;
	EXPECT_TRUE(a.IsEmpty());
}

TEST(TQueue, cannot_pop_from_empty_queue) {
	TQueue<int> a;
	EXPECT_ANY_THROW(a.Pop());
}

TEST(TQueue,can_push_and_pop_element ) 
{
	TQueue<int> a(3);
	a.Push(1);
	a.Push(2);
	a.Push(3);
	EXPECT_EQ(1, a.Pop());
}

TEST(TQueue,can_check_full_queue ) {

	TQueue<int> a(2);
	a.Push(1);
	a.Push(2);
	EXPECT_TRUE(a.IsFull());
}

TEST(TQueue,cannot_push_to_full_queue ) {

	TQueue<int> a(2);
	a.Push(1);
	a.Push(2);
	EXPECT_ANY_THROW(a.Push(2));
}
