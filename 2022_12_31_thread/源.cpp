#include<iostream>
#include<thread>

/*static bool s_Finished = false;
void Dowork()
{
	using namespace std::literals::chrono_literals;
	std::cout << "thread id" << std::this_thread::get_id << std::endl;
	while (!s_Finished)
	{
		std::cout << "working...";
		std::this_thread::sleep_for(0.1s);
	}
}

int main()
{
	std::thread worker(Dowork);

	std::cin.get();
	s_Finished = true;

	worker.join();
	std::cout << "Finished.." << std::endl;
	std::cout << "thread id" << std::this_thread::get_id << std::endl;
	std::cin.get();

}
*/
struct Entity
{
	int x, y;
};
int main() {
	Entity e = { 5,8 };
	int* position = (int*)&e;
	int y = *(int*)((char*)&e+4);
	std::cout << y << std::endl;
}