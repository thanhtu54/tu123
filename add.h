void tinhDTB(SV& sv) {
    sv.dtb = (sv.dH + sv.dL + sv.dT) / 3;
}

void nhap(SV& sv) {
    printf("\nNhap ten: "); fflush(stdin); gets(sv.ten);
    printf("\nNhap gioi tinh: "); gets(sv.gt);
    printf("\nNhap tuoi: "); scanf("%d", &sv.age);
    printf("\nNhap diem 3 mon: "); scanf("%f%f%f", &sv.dT, &sv.dL, &sv.dH);
    tinhDTB(sv);
}

void nhapN(SV a[], int n) {
    printf("\n____________________________________\n");
    for (int i = 0; i < n; ++i) {
        printf("\nNhap SV thu %d:", i + 1);
        nhap(a[i]);
    }
    printf("\n____________________________________\n");
}

void xuat(SV sv) {
    printf("\nHo ten SV: %s", sv.ten);
    printf("\nGioi tinh: %s", sv.gt);
    printf("\nTuoi SV  : %d", sv.age);
    printf("\nDiem Toan - Ly - Hoa: %.2f - %.2f - %.2f", sv.dT, sv.dL, sv.dH);
    printf("\nDiem TB: %.2f", sv.dtb);
}

void xuatN(SV a[], int n) {
    printf("\n____________________________________\n");
    for (int i = 0; i < n; ++i) {
        printf("\nThong tin SV thu %d:", i + 1);
        xuat(a[i]);
    }
    printf("\n____________________________________\n");
}

void sapxep(SV a[], int n) {
    //Sap xep theo DTB tang dan
    SV tmp;
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (a[i].dtb > a[j].dtb) {
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
}

void xeploai(SV sv) {
    if (sv.dtb >= 8) printf("Gioi");
    else if (sv.dtb >= 6.5) printf("Kha");
    else if (sv.dtb >= 4) printf("Trung binh");
    else printf("Yeu");
}

void xeploaiN(SV a[], int n) {
    printf("\n____________________________________\n");
    for (int i = 0; i < n; ++i) {
        printf("\nXep loai cua SV thu %d la: ", i + 1);
        xeploai(a[i]);
    }
    printf("\n____________________________________\n");
}

void xuatFile(SV a[], int n, char fileName[]) {
    FILE* fp;
    fp = fopen(fileName, "w");
    fprintf(fp, "%20s%5s%5s%10s%10s%10s%10s\n", "Ho Ten", "GT", "Tuoi", "DT", "DL", "DH", "DTB");
    for (int i = 0; i < n; i++) {
        fprintf(fp, "%20s%5s%5d%10f%10f%10f%10f\n", a[i].ten, a[i].gt, a[i].age, a[i].dT, a[i].dL, a[i].dH, a[i].dtb);
    }
    fclose(fp);
}