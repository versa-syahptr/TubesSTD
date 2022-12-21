#ifndef RS_H_INCLUDED
#define RS_H_INCLUDED

#include <iostream>
using namespace std;

struct Pasien {
    string record_id, nama;
    bool statusBPJS;
    string hasil_pemeriksaan;
    int biaya_dokter, biaya_obat;
};
struct ElementPasien {};
struct ListPasien {};
typedef struct ElementPasien *adrPasien;

void createListPasien(ListPasien &LP);
Pasien CreateInfoPasien(string record_id, string nama,
                        bool statusBPJS,
                        string hasil_pemeriksaan,
                        int biaya_dokter, int biaya_obat);
ElementPasien CreateElementPasien(Pasien ip);
void InsertPasien(/*parameter menyusul*/);
void ShowAllPasien(ListPasien LP);
void DeletePasien(/*parameter menyusul*/);





#endif // RS_H_INCLUDED
