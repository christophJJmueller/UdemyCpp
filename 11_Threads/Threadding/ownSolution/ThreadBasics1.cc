#include <iostream>
#include <thread>

void function()
{
    const auto thread_id = std::this_thread::get_id();
    std::cout << "Thread ID: " << thread_id << std::endl;
    std::cout << "Working" << std::endl;
}

int main()
{
    const auto main_id = std::this_thread::get_id();
    std::cout << "Main Thread ID: " << main_id << std::endl;

    auto t1 = std::thread(function);

    //wait until every thread is finished
    if (t1.joinable())
    {
        t1.join();
    }

    return 0;
}
