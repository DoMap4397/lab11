#include <stdio.h>
#include <string.h>

int Check(int age1, int age2, int height1, int height2, char name1[], char tinhcach1[], char hocthuc1[], char name2[], char tinhcach2[], char hocthuc2[]){
    if (strcmp(name1, name2)==0) {
        return 1;
    }
    else{
        if(age2==age1 && height1==height2 && strcmp(tinhcach1, tinhcach2)==0 && strcmp(hocthuc1, hocthuc2)==0){
            return 1;
        }
    }
    return 0;
}

int Say(){
    printf("Chúc mừng bạn đã tìm đúng gu của mình rồi đó, tỏ tình với cô ấy ngay thôi nào:D\n");
    printf("=========Tỏ Tình=========\n");
    printf("Date with me :D ???\n");
    printf("Her choice(Y or N): ");
    char answer;
    scanf("%c",&answer);
    scanf("%c",&answer);
    if(answer == 'Y' || answer == 'y'){
        return 1;
    }
    else{
        if (answer == 'Y' || answer == 'y') {
            return 0;
        }
    }
    return 0;
}
void Break(){
    printf("Bạn đã tỏ tình thất bại -_- !!!\n");
    printf("Don't be sad, try to confess again. \n");
    printf("If, after all, your efforts with someone you like, she still won't mind you :((");
    printf("Don't be sad, guy, forget her and look for a new girl who truly appreciates your love.\n");
    printf("Good luck.\n");
    printf("\n");
}
void Love(){
    printf("Bạn tỏ tình thành công <3 <3 <3\n");
    printf("Love her the way you two belong together!\n");
    printf("Good luck with your selection.\n");
    printf("\n");
}
int main(){
    int age1=0,age2=0,height1=0,height2=0;
    char name1[100],name2[100];
    char tinhcach1[150],tinhcach2[150];
    char hocthuc1[150],hocthuc2[150];
    while (1) {
        printf("I. Nhập tiêu chuẩn.\n");
        printf("II. Nhập thực tế. \n");
        printf("III. Check đối tượng. \n");
        int tmp;
        scanf("%d",&tmp);
        switch (tmp) {
            case 1:
                printf("Tiêu chuẩn của bạn:\n");
                printf("\n0. Special optional. Name: \t");
                scanf("%s",name1);
                printf("1. Học thức: \t");
                scanf("%s",hocthuc1);
                printf("2. Tính tình: \t");
                scanf("%s",tinhcach1);
                printf("3. Chiều cao: \t");
                scanf("%d",&height1);
                printf("4. Tuổi tác: \t");
                scanf("%d",&age1);
                printf("\n");
                break;
            case 2:
                printf("Đối tượng thực tế:\n");
                printf("\n0. Special optional. Name:\t");
                scanf("%s",name2);
                printf("1. Học thức: \t");
                scanf("%s",hocthuc2);
                printf("2. Tính tình: \t");
                scanf("%s",tinhcach2);
                printf("3. Chiều cao: \t");
                scanf("%d",&height2);
                printf("4. Tuổi tác: \t");
                scanf("%d",&age2);
                printf("\n");
                break;
            case 3:
                if (Check(age1,age2,height1,height2,name1,tinhcach1,hocthuc1,name2,tinhcach2,hocthuc2)) {
                    if (Say()) {
                        Love();
                    }
                    else Break();
                }
                else{
                    printf("Đối tượng không không phải gu của bạn :((( \n");
                    
                }
                break;
            default:
                break;
        }
    }
}
