// Libraries
#include <iostream>
#include <vector>

#include "screen.hpp"

using namespace std;

void updateScreen(G &screen)
{
    screen.update();
    SDL_Delay(100);
    screen.input();
    screen.clearpixels();
}

int main()
{
    G screen;
    int h = 640,
        w = 480;
    vector<vector<int>> display(h, vector<int>(w, 0));

    for (vector<int> &r : display)
        generate(r.begin(), r.end(), []() -> int
                 { return rand() % 10 % 2; });

    while (true)
    {
        for (int r = 0; r < h; r++)
            for (int c = 0; c < w; c++)
            {
                int ln = 0;
                for (int i = r - 1; i <= r + 1; i++)
                    for (int j = c - 1; j <= c + 1; j++)
                    {
                        if (i < 0 || i >= h || j < 0 || j >= w || (i == r && j == c))
                            continue;
                        if (display[i][j] == 1 || display[i][j] == 3)
                            ln++;
                    }
                if (display[r][c] == 0 && ln == 3)
                    display[r][c] = 2;
                if (display[r][c] == 1)
                {
                    if (ln < 2 || ln > 3)
                        display[r][c] = 3;
                    screen.drawpixel(r, c);
                }
            }
        updateScreen(screen);
        for (int r = 0; r < h; r++)
            for (int c = 0; c < w; c++)
            {
                if (display[r][c] == 2)
                {
                    display[r][c] = 1;
                    screen.drawpixel(r, c);
                }
                if (display[r][c] == 3)
                    display[r][c] = 0;
            }
        updateScreen(screen);
    }
}