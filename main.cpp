/*
Utilizzando la libreria <string>, scrivere un programma che inserite due stringhe nello stdin
verifichi se una è l’anagramma dell’altra.
 */

#include <iostream>
#include <string>

using namespace std;

int main() {
    char a[21] = {
        'a', 'b', 'c', 'd', 'e', 'f', 'g',
        'h', 'i', 'l', 'm', 'n', 'o', 'p',
        'q', 'r', 's', 't', 'u', 'v', 'z'
    };

    int a_cont_s1[21] = {};
    int a_cont_s2[21] = {};
    string str1;
    string str2;
    bool anagramma = true;

    cout << "Inserire la parola: " << endl;
    cin >> str1;

    cout << "Inserire un possibile anagramma: " << endl;
    cin >> str2;


    for (int i = 0; str1.at(i) < str1.size(); i++) {
        for (int j = 0; j < 21; j++) {
            if (a[j] == str1.at(i)) {
                a_cont_s1[j]++;
                break;
            }
        }
    }

    for (int i = 0; str2.at(i) < str2.size(); i++) {
        for (int j = 0; j < 21; j++) {
            if (a[j] == str2.at(i)) {
                a_cont_s2[j]++;
                break;
            }
        }
    }


    for (int i = 0; i < 21; i++) {
        if (a_cont_s1[i] != a_cont_s2[i]) {
            anagramma = false;
            break;
        }
    }

    if (anagramma) {
        cout << "La parola: [" << str2 << "] e un anagramma alla parola: [" << str1 << "]" << endl;
    } else {
        cout << "La parola: [" << str1 << "] non e un anagramma" << endl;
    }


    return 0;
}
