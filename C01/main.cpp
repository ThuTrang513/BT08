#include<iostream>
#include<cstring>
using namespace std;
void reverse(char a[]){
    int dem = 0;
    string c = "";
    char *p = a;
    while(*p != NULL){
        c += *p;
        p++;
        dem++;
    }
    for(int i = 0; i < dem; i++){
        *(a+i) = c[dem-1-i];
    }
    cout << a;
}
char* update(char * a){
    char * t = a;
    while(*a != NULL){
        *a = *(a+1);
        a++;
    }
    return t-1;
}
char *delete_char (char *a,char c){
    char *k = a;
    while(*a != NULL){
        if(*a == c){
            a = update(a);
        }
        a++;
    }
    return k;
}
void pad_left(char a[], int n){
    int dem = 0;
    char *p = a;
    while(*p != NULL){
        dem++;
        p++;
    }
    if(dem < n){
            int k = n - dem;
        for(int i = n-1; i >= 0; i--){
            if(i < k) *(a+i) = ' ';
            else *(a + i) = *(a+i-k);
        }
        for(int i = 0; i < n; i++){
            cout << *(a+i);
        }
    }
    else{
        cout << a;
    }
}
void pad_right(char a[], int n){
    int dem = 0;
    char *p = a;
    while(*p != NULL){
        dem++;
        p++;
    }
    if(dem < n){
            int k = n - dem;
        for(int i = n-1; i >= dem; i--){
            *(a+i) = '-';
        }
        for(int i = 0; i < n; i++){
            cout << *(a+i);
        }
    }
    else{
        cout << a;
    }
}
void truncate(char a[], int n){
    int dem = 0;
    char *p = a;
    while(*p != NULL){
        dem++;
        p++;
    }
    if(dem > n){
        *(a+n) = NULL;
        cout << a;
    }
    else{
        cout << a;
    }
}
bool is_palindrome(char a[]){
    int dem = 0;
    char *p = a;
    while(*p != NULL){
        dem++;
        p++;
    }
    for(int i = 0; i <= dem/2; i++){
        if(*(a+i) != *(a + dem-1-i)) return false;
    }
    return true;
}
void trim_left(char a[]){
    while(*a == ' '){
        a = a+1;
    }
    cout << a;
}
void trim_right(char a[]){
    int dem = 0;
    char *p = a;
    while(*p != ' '){
        p++;
        dem++;
    }
    *(a+dem-1) = NULL;
    cout << a;
}
int main(){
    char a[100];
    gets(a);
    //char c;
    //cin >> c;
    //cout << delete_char(a,c);
    /*int n;
    cin >> n;
    truncate(a,n);*/
    //cout << is_palindrome(a);
    reverse(a);
}
