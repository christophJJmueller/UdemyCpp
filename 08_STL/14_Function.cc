#include <cstdint>
#include <functional>
#include <iostream>
#include <vector>

// https://en.cppreference.com/w/cpp/utility/functional/function

//Syntax:                           return type      parameter        Funktion
std::int32_t f(const std::function<std::int32_t(const std::int32_t)> &callback)
{
    return callback(2);
}

std::int32_t h(const std::int32_t v)
{
    return v * 2;
}

int main()
{
    //                                                return 2 * 2 -> siehe callback Zeile 10
    const auto result1 = f([](const std::int32_t v) { return v * 2; });
    std::cout << result1 << '\n';

    //Lambda Funktion als Variable
    auto l = [](const std::int32_t v) { return v * 2; };
    const auto result2 = f(l);
    std::cout << result2 << '\n';

    const auto result3 = f(h);
    std::cout << result3 << '\n';

    const std::int32_t threshold = 2;
    auto fns = std::vector<std::function<bool(const std::int32_t)>>{
        [&threshold](const std::int32_t v) { return v > threshold; },
        [&threshold](const std::int32_t v) { return v < threshold; },
        [&threshold](const std::int32_t v) { return v == threshold; },
        [&threshold](const std::int32_t v) { return v != threshold; },
        [&threshold](const std::int32_t v) { return v >= threshold; },
        [&threshold](const std::int32_t v) { return v <= threshold; },
    };

    for (const auto &fn : fns)
    {
        std::cout << std::boolalpha << fn(1) << '\n';
    }

    return 0;
}
