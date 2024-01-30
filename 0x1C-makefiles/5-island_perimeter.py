#!/usr/bin/python3
"""Technical interview preparation module."""


def island_perimeter(grid):
    """Get perimeter of land."""
    dx = [0, 0, 1, -1]
    dy = [1, -1, 0, 0]
    y = len(grid)
    x = len(grid[0])
    cnt = 0
    for i in range(0, y):
        for j in range(0, x):
            if not grid[i][j]:
                continue
            for k in range(0, 4):
                ni, nj = i + dy[k], j + dx[k]
                if not 0 <= ni < y or not 0 <= nj < x or not grid[ni][nj]:
                    cnt += 1
    return cnt
