#include <stdio.h>
#include <string.h>

// Membuat struktur data bernama Student
typedef struct {
    char name[50]; // Variabel untuk menyimpan nama (maksimal 50 karakter)
    char npm[15]; // Variabel untuk menyimpan NPM
    char school[50]; // Variabel untuk menyimpan asal sekolah
    char phone[20]; // Variabel untuk menyimpan nomor telepon
} Student;

int main () {
    int n, i; // Variabel n (jumlah data) dan i (indeks looping)
    printf("=== STUDENT DATA ===\n"); 
    printf("Enter the number of the students: ");
    scanf("%d", &n); // Menyimpan input jumlah data ke variabel n

    Student list [n]; // Membuat array of struct sebanyak n data

    // Loop untuk mengambil input data dari user
    for (i = 0; i < n; i++) {
        printf("\nData for Student %d\n", i + 1);
        printf("Name              : "); 
        scanf(" %[^\n]", list[i].name);
        printf("NPM               : ");
        scanf(" %[^\n]", list[i].npm);
        printf("Origin High School: ");
        scanf(" %[^\n]", list[i].school);
        printf("Phone Number      : ");
        scanf(" %[^\n]", list[i].phone);
    }

    // Menampilkan header tabel
    printf("\n\n%-3s %-20s %-15s %-20s %-15s\n", "No", "Name", "NPM", "High School", "Phone");
    printf("----------------------------------------------------------------------------\n");

    // Loop untuk menampilkan isi data mahasiswa dari array
    for (i = 0; i < n; i++) {
        printf("%-3d %-20s %-15s %-20s %-15s\n", i + 1, list[i].name, list[i].npm, list[i].school, list[i].phone);
    }

    return 0; // Mengakhiri program
}