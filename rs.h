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

struct jadwal
{
    string tanggal, jamPraktek, idDokter, namaDokter, spesialisasi;
    int kuotaPasien;
};

typedef struct jadwal infotypeJ;
typedef struct ElementJadwal *adrJ;

struct ElementJadwal
{
    infotypeJ info;
    adrJ next;
    //adrP child;
};

struct ListJadwal
{
    adrJ first;
};

void createListPasien(ListPasien &LP);
Pasien CreateInfoPasien(string record_id, string nama,
                        bool statusBPJS,
                        string hasil_pemeriksaan,
                        int biaya_dokter, int biaya_obat);
ElementPasien CreateElementPasien(Pasien ip);
void InsertPasien(/*parameter menyusul*/);
void ShowAllPasien(ListPasien LP);
void DeletePasien(/*parameter menyusul*/);




void CreateListJadwal(ListJadwal &LJ);
void CreateInfoJadwal(infotypeJ &x);
adrJ CreateElemenJadwal(infotypeJ x);
void InsertJadwal(ListJadwal &LJ, adrJ p);
void DeleteJadwal(ListJadwal &LJ, adrJ &p);
void ShowAllJadwal(ListJadwal LJ);
adrJ SearchJadwal(ListJadwal LJ);
int CountConnectedPasien(ListJadwal LJ);
void menu();





#endif // RS_H_INCLUDED
