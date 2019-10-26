#include <stdio.h>

#define HMAX 20

int tt, H, W, MAP[HMAX][HMAX];
char buf[HMAX+2];

const int coverType[4][3][2] = {
    { {0, 0}, {1, 0}, {0, 1} },
    { {0, 0}, {0, 1}, {1, 1} },
    { {0, 0}, {1, 0}, {1, 1} },
    { {0, 0}, {1, 0}, {1, -1} },
};

bool set(int y, int x, int type, int delta)
{
    bool ret = true;
    for (int i = 0; i < 3; ++i) {
        const int ny = y + coverType[type][i][0];
        const int nx = x + coverType[type][i][1];
        if (ny >= H || nx >= W || nx < 0)
            ret = false;
        else if ((MAP[ny][nx] += delta) > 1)
            ret = false;
    }
    return ret;
}

int dfs(int y, int x)
{
    if (y == H-1 && x == W-1 && MAP[y][x]) return 1;
    int ny = y, nx = x;
    if (++nx >= W) ++ny, nx = 0;

    int ret = 0;
    if (MAP[y][x]) ret += dfs(ny, nx);
    else {
        for (int type = 0; type < 4; ++type) {
            if (set(y, x, type, 1)) ret += dfs(ny, nx);
            set(y, x, type, -1);
        }
    }
    return ret;
}

int main(void)
{
    scanf("%d", &tt);
    while (tt--) {
        scanf("%d %d", &H, &W);
        for (int i = 0; i < H; i++) {
            scanf("%s", buf);
        for (int j = 0; buf[j] != '\0'; j++)
            MAP[i][j] = buf[j] == '#' ? 1 : 0;
        }
        printf("%d\n", dfs(0, 0));
    }

    return 0;
}
