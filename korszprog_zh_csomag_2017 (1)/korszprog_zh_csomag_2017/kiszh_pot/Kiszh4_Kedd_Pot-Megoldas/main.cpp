#include <iostream>
#include <thread>
#include <mutex>
#include <chrono>
#include<list>
#include<string>

using namespace std;

int test(list<int> numbers)
{
    int count = 0;
    for(auto num : numbers){
        if(num % 10 == 0 || num % 5 == 0) count++;
        this_thread::sleep_for(chrono::milliseconds(50));
    }
    return count;
}

void progress_check(mutex* m){
    while(1){
        if(m->try_lock()){
           cout << "Finished!" << endl;
           m->unlock();
           break;
        }
        this_thread::sleep_for(chrono::milliseconds(250));
        cout << "Testing numbers... " << endl;
    }
}

int main()
{
    list<int> numbers;
    for(int i = 1; i < 100; ++i) numbers.push_back(i);

    mutex m;

    int count = 0;
    auto test_numbers = [&count, &m](list<int> numbers) -> void {
        m.lock();
        count = test(numbers);
        m.unlock();
    };
    thread t(test_numbers, numbers);
    thread ch(progress_check, &m);
    /*
    Testing numbers...
    Testing numbers...
    Testing numbers...
    Testing numbers...
    Testing numbers...
    Testing numbers...
    Testing numbers...
    Testing numbers...
    Testing numbers...
    Testing numbers...
    Testing numbers...
    Testing numbers...
    Testing numbers...
    Testing numbers...
    Testing numbers...
    Testing numbers...
    Testing numbers...
    Testing numbers...
    Testing numbers...
    Testing numbers...
    Finished!
    */
    t.join();
    ch.join();
    cout << "Result: " << count << endl; // Result: 19
    return 0;
}
