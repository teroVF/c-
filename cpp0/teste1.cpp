#include <iostream>
#include <vector>
#include <algorithm>


int main()
{
    auto print = [](const int& n) { std::cout << n << ' '; };
    int	const			d[] = { 5, 765, 564, 2, 87, 23, 9, 20 };
    int const           g[] = { 42, 23, 65, 87, 23, 9, 20 };
	size_t const		d_size( sizeof(d) / sizeof(int) );
    size_t const        g_size( sizeof(g) / sizeof(int) );
    std::vector<int>    dezao(d, d + d_size);
    std::vector<int>    dezao2(g, g + g_size);
    std::vector<int>::iterator d_begin = dezao.begin();
    std::vector<int>::iterator d_end = dezao.end();
    std::vector<int>::iterator g_begin = dezao2.begin();
    std::vector<int>::iterator g_end = dezao2.end();

    std::for_each(d_begin, d_end, print);
    std::pair<std::vector<int>::iterator, std::vector<int>::iterator>              hoow(d_begin, g_begin);

    print(*hoow.first);
    print(*hoow.second);
    ++hoow.first;
    hoow.first++;
    print(*hoow.first);
    return 0;

}