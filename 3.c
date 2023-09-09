#include <stdio.h>

int main()
{
    // Deklarasi Variabel
    int a = 10, x1, x2, x3, x4;

    // Loop pertama untuk nilai x1
    for (x1 = 1; x1 <= 100; x1++)
    {
        // Loop pertama untuk nilai x2
        for (x2 = 1; x2 <= 100; x2++)
        {
            // Loop pertama untuk nilai x3
            for (x3 = 1; x3 <= 100; x3++)
            {
                // Loop pertama untuk nilai x4
                for (x4 = 1; x4 <= 100; x4++)
                {
                    a -= 4;  // Kurangkan a dengan 4
                    a += x1; // Tambahkan a dengan x1
                    a *= x2; // Kalikan a dengan x2
                    a /= x3; // Bagikan a dengan x3
                    a %= x4; // Sisa Pembagian a dengan x4

                    // Jika Nilai a sama dengan 10
                    if (a == 10)
                    {
                        printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
                        printf("Program Mencari Nilai X1 - X4 Bila A = 10\n");
                        printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
                        printf("\nNilai a kembali menjadi %d apabila nilai :\n", a);
                        printf("\n[x1 = %d, x2 = %d, x3 = %d, x4 = %d]", x1, x2, x3, x4);

                        return 0;
                    }
                    a = 10;
                }
            }
        }
    }
    // Jika Nilai a tidak sama dengan 10
    printf("Tidak ditemukan nilai dari x1 - x4 yang membuat nilai a kembali 10");

    return 0;
}