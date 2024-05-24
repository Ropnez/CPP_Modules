#include <iostream>

int main(int ac, char *av[]) {
    if (ac > 1)
    {
        for(int j = 1; j < ac; j++)
            for (int i = 0; i < av[j][i]; i++)
                std::cout << (char)toupper(av[j][i]);
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    return 0;
}