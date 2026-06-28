#include <stdio.h>

int main()
{
    int zarfiat, istgah, tedad, maghsad, mosafer = 0, sum = 0;

    scanf("%d", &zarfiat);
    scanf("%d", &istgah);

    int khoroj[105]; 
    for (int i = 0; i < 105; i++)
        khoroj[i] = 0;

    for (int i = 0; i < istgah - 1; i++)
    {
        mosafer -= khoroj[i];
        khoroj[i] = 0;

        scanf("%d", &tedad);
        for (int j = 0; j < tedad; j++)
        {
            scanf("%d", &maghsad);

            if (mosafer < zarfiat)
            {
                mosafer++;
                khoroj[maghsad]++;
            }
            else
            {
                for (int k = i + 1; k < maghsad; k++)
                {
                    if (khoroj[k] > 0)
                    {
                        khoroj[k]--;
                        khoroj[maghsad]++;
                        break;
                    }
                }
            }
        }
        sum += mosafer;
    }

    printf("%d", sum);
    return 0;
}