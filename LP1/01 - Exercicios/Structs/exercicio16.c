struct tri
{
    int x;
    int y;
    int z;
};
union Ponto
{
    struct tri dim;
    int vec[3];
};
int main(void)
{
    union Ponto pt;
    pt.dim.x = 1;
    pt.dim.y = 2;
    pt.dim.z = 3;
    printf("(%d,%d,%d)\n", pt.vec[0],pt.vec[1],pt.vec[2]);
    pt.vec[0] = 3;
    pt.vec[1] = 2;
    pt.vec[2] = 1;
    printf("(%d,%d,%d)\n", pt.dim.x, pt.dim.y, pt.dim.z);
}
