#include <cstdint>
#include <iostream>
#include <sstream>
#include <fstream>

static int32_t** get_water_flow(const int32_t* map, const int32_t w, const int32_t h)
{
}

static int32_t* make_map(std::ifstream& infile, const int32_t w, const int32_t h)
{
    int32_t i = 0;
    int32_t* map = (int32_t *)malloc(sizeof(int32_t) * w * h);

    for (int32_t l = 0; l < h; l++)
    {
        std::string line;
        std::getline(infile, line);
        std::istringstream iss(line);

        for (int32_t c = 0; c < w; c++)
        {
            iss >> *(map + i);
            i++;
        }
    }

    return map;
}

int main(void)
{
    std::ifstream infile("thefile.txt");

    std::string line;

    std::getline(infile, line);
    int32_t n = std::stol(line);

    while (n > 0)
    {
        n--;
        std::getline(infile, line);
        std::istringstream iss(line);
        int32_t w, h;
        iss >> w >> h;

        int32_t* map = make_map(infile, w, h);
        int32_t** flowmap = get_water_flow(map, w, h);
        int

            exit(0);

        free(map);

        std::cout << "w:" << w << " h:" << h << "\n";
    }

    return 0;
}
