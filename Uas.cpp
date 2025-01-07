#include<iostream>
#include<iomaniq>
using namespace std;

int main(){
    cout<<'## program applikasi kasir ##'<<endl;
    cout<<"====================================="<<endl;<<endl
    const int MAX_BARANG = 10
    sting namaBarang [MAX_BARANG];
    long hargaBarang [MAX_BARANG];
    long jumlahBarang [MAX_BARANG];
    int jumlahTotalBarang;
    long totalHarga = 0;
    long jumlahBayar = 0;
    cout<<'## Selamat Datang di mini market ILKOOM ##' <<endl;<<endl;

    cout<<"masukan jumlah barang yang ingin dibeli:";
    cin>>jumlahTotalBarang;cout<<endl;

    if (jumlahTotalBarang <==0 || jumlahTotalBarang> MAX_BARANG)
    {
        cout<<"jumlah barang tidak valid"<<endl;
        return 0;
    }
    for (int i = 0; i < jumlahBayar; i++)
    {
        cout<<"Barang ke:"<<i+1<<endl;
        cout<<"nama barang:";
        getline(cin>>ws,namaBarang[i]);
        cout<<"harga satuan:";
        cin>>hargaBarang;
        cout<<"jumlah:"<<namaBarang[i]<<"yang di beli:";
        cin>>jumlahBarang[i];
        cout<<endl;

        
    }cout<<endl;

    cout<<"--------------------------------------"<<endl;
    cout<<"#####------ Struck Mini Market ILKOOM ------####"<<endl;
    cout<<"---------------------------------------"<<endl;
    cout<<" No Barang Jumlah Harga Satuan Sub Total"<<endl;
    for (int i = 0; i<jumlahTotalBarang; i++){
        cout<<setw<<(1)<<1+1<<" ";

        cout<<left<<setw(12)<<namaBarang[i];

        cout<<right<<setw(15)<<jumlahBarang[i];
        cout<<setw(18)<<hargabarang[i];
        cout<<setw(15)<<jumlahHarga[i]*hargaBarang[i];
        cout<<endl;
        totalHarga=totalHarga+ (jumlahBarang[i]*hargaBarang[i]);
    }
    cout<<"---------------------------------------"<<endl;
    cout<<"Total Harga : Rp."<<totalHarga<<endl<<endl;
    cout<<"Jumlah Bayar :Rp.";
    cin>>jumlahBayar:cout<<endl

    while(jumlahBayar-totalHarga<0){
        cout<<"Maaf, Uang Anda Kurang. Mohon lakukan ulang pembayaran"<<endl;
        cout<<"Jumlah Bayar :Rp. ";
        cin>>jumlahBayar; cout<<endl;
    }
    cout<<"Kembalian :Rp. "<<jumlahBayar-totalHarga<<endl<<endl;
    cout<<"----------------------------------------------------------";
    cout<<"###-----  Terimakasih sudah berbelanja. Datang Kembali ----###";
    cout<<"-------------------------------------------------------"<<endl;

    return 0;   
}