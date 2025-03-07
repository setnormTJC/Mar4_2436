// Mar4_2436.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include"MyQueue.h"

/*Using a copy so that original is not modified*/
void printQueue(MySpace::CircularStaticQueue notAsNaiveQueue)
{
	std::cout << "Queue contents (left is front, right is back)\n";
	while (!notAsNaiveQueue.isEmpty())
	{
		std::cout << notAsNaiveQueue.front() << " ";
		notAsNaiveQueue.dequeue();
	}
}

int main()
{
	MySpace::CircularStaticQueue q; 

	try
	{
		//std::cout << "asdfasd" << "asdfasdfasdf"
		//std::cout.operator<<("adsfasdf")
		q.enqueueWithChaining("Alice").enqueueWithChaining("Bob Loblaw");
		//q.enqueue("Bob Loblaw");
		q.enqueue("Carol");
		q.enqueue("Darth");
		q.enqueue("Eve");
		
		q.dequeue(); 
		q.enqueue("Frank"); //throws!

	
		q.dequeue(); 
		q.enqueue("Gus"); //there is a conspiracy at the grocery 
	}

	catch (const std::exception& e)
	{
		std::cout << e.what() << "\n";

	}

}

