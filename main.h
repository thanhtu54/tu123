int main() {
    int key;
    char fileName[] = "DSSV.txt";
    int n;
    bool daNhap = false;
    do {
        printf("\nNhap so luong SV: "); scanf("%d", &n);
    } while (n <= 0);
    SV a[n];
    while (true) {
        system("cls");
        printf("******************************************\n");
        printf("**    CHUONG TRINH QUAN LY SINH VIEN    **\n");
        printf("**      1. Nhap du lieu                 **\n");
        printf("**      2. In danh sach sinh vien       **\n");
        printf("**      3. Sap xep sinh vien theo DTB   **\n");
        printf("**      4. Xep loai sinh vien           **\n");
        printf("**      5. Xuat DS sinh vien            **\n");
        printf("**      0. Thoat                        **\n");
        printf("******************************************\n");
        printf("**       Nhap lua chon cua ban          **\n");
        scanf("%d", &key);
        switch (key) {
        case 1:
            printf("\nBan da chon nhap DS sinh vien!");
            nhapN(a, n);
            printf("\nBan da nhap thanh cong!");
            daNhap = true;
            printf("\nBam phim bat ky de tiep tuc!");
            getch();
            break;
        case 2:
            if (daNhap) {
                printf("\nBan da chon xuat DS sinh vien!");
                xuatN(a, n);
            }
            else {
                printf("\nNhap DS SV truoc!!!!");
            }
            printf("\nBam phim bat ky de tiep tuc!");
            getch();
            break;
        case 3:
            if (daNhap) {
                printf("\nBan da chon sap xep SV theo STB!");
                sapxep(a, n);
                xuatN(a, n);
            }
            else {
                printf("\nNhap DS SV truoc!!!!");
            }
            printf("\nBam phim bat ky de tiep tuc!");
            getch();
            break;
        case 4:
            if (daNhap) {
                printf("\nBan da chon thoat xep loai SV!");
                xeploaiN(a, n);
            }
            else {
                printf("\nNhap DS SV truoc!!!!");
            }
            printf("\nBam phim bat ky de tiep tuc!");
            getch();
            break;
        case 5:
            if (daNhap) {
                printf("\nBan da chon xuat DS SV!");
                xuatFile(a, n, fileName);
            }
            else {
                printf("\nNhap DS SV truoc!!!!");
            }
            printf("\nXuat DSSV thanh cong vao file %s!", fileName);
            printf("\nBam phim bat ky de tiep tuc!");
            getch();
            break;
        case 0:
            printf("\nBan da chon thoat chuong trinh!");
            getch();
            return 0;
        default:
            printf("\nKhong co chuc nang nay!");
            printf("\nBam phim bat ky de tiep tuc!");
            getch();
            break;
        }
    }
}

