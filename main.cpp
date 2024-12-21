#include <iostream>
#include <string>
#include <memory>
#include <vector>
#include <stdlib.h>
#include <Eigen>

class Example
{
public:
    int a = 1;
    std::string b = "Debugging\n";
};

void print(const Example *example)
{
    std::cout << example->b;
}

int main(int argc, char **argv)
{
    //Arguments and environment
    for (int i = 0; i < argc; i++) std::cout << "Argument " << i << ": " << argv[i] << std::endl;
    const char *env = getenv("DEBUG_SANDBOX_TEST");
    if (env != nullptr) std::cout << "Environment DEBUG_SANDBOX_TEST=" << env << std::endl;

    //Objects and STL
    Example stack;
    Example *heap = new Example;
    delete heap;
    std::vector<Example> heap_vector(10);
    std::unique_ptr<Example> unique = std::unique_ptr<Example>(new Example);
    print(unique.get());

    //Eigen
    Eigen::Matrix3d matrix = Eigen::Matrix3d::Identity();

    return 0;
}