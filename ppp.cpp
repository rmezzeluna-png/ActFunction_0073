#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Struktur untuk menyimpan data pertanyaan kuis
struct Pertanyaan {
    string soal;
    string pilihan[4];
    char jawabanBenar;
};

void jalankanKuis() {
    // Menyiapkan daftar pertanyaan
    vector<Pertanyaan> daftarPertanyaan = {
        {
            "Bagaimana Susan mendapatkan pekerjaan pertama sebagai pengisi suara?",
            {"A. Melalui teman", "B. Setelah audisi", "C. Secara tidak sengaja", "D. Melamar lowongan"},
            'C'
        },
        {
            "Siapakah 'Tillie the All-Time Teller'?",
            {"A. Suara mesin ATM bank", "B. Lagu anak-anak", "C. Penyanyi", "D. Karakter kartun"},
            'A'
        },
        {
            "Apa alasan utama Google memberikan banyak fasilitas (perks) kepada karyawannya?",
            {"A. Mencari pekerja baru", "B. Agar mereka betah bekerja lebih lama", "C. Menciptakan persahabatan", "D. Mengubah suasana"},
            'B'
        },
        {
            "Menurut Fab Dolan, kapan ide-ide kreatif biasanya muncul?",
            {"A. Saat rapat formal", "B. Saat stres terkontrol", "C. Saat waktu rekreasi/santai", "D. Saat sedang tidur"},
            'C'
        }
    };

    int skor = 0;
    char jawabanUser;

    cout << "=== SELAMAT DATANG DI KUIS PENGETAHUAN (C++) ===\n" << endl;

    // Perulangan untuk menampilkan setiap pertanyaan
    for (int i = 0; i < daftarPertanyaan.size(); i++) {
        cout << "Soal " << (i + 1) << ": " << daftarPertanyaan[i].soal << endl;

        // Menampilkan pilihan jawaban
        for (int j = 0; j < 4; j++) {
            cout << daftarPertanyaan[i].pilihan[j] << endl;
        }

        cout << "Masukkan jawaban Anda (A/B/C/D): ";
        cin >> jawabanUser;

        // Mengubah input menjadi huruf kapital jika pengguna mengetik huruf kecil
        jawabanUser = toupper(jawabanUser);

        // Mengecek jawaban
        if (jawabanUser == daftarPertanyaan[i].jawabanBenar) {
            cout << "Benar! \n" << endl;
            skor++;
        } else {
            cout << "Salah. Jawaban yang benar adalah: " << daftarPertanyaan[i].jawabanBenar << "\n" << endl;
        }
    }

    // Menampilkan hasil akhir
    cout << "--- KUIS SELESAI ---" << endl;
    cout << "Skor akhir Anda: " << skor << "/" << daftarPertanyaan.size() << endl;

    if (skor == daftarPertanyaan.size()) {
        cout << "Luar biasa! Pengetahuan Anda sempurna." << endl;
    } else if (skor >= 2) {
        cout << "Bagus! Anda memahami sebagian besar materi." << endl;
    } else {
        cout << "Tetap semangat! Silakan coba lagi nanti." << endl;
    }
}

int main() {
    jalankanKuis();
    return 0;
}