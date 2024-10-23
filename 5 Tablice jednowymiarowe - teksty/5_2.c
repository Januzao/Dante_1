    #include <stdio.h>

    int main() {
        char tekst[] = {'T', 'o', ' ', 'j', 'e', 's', 't', ' ', 't', 'e', 'k', 's', 't', '\x0'};
        int asd = 0;

        while (tekst[asd] != '\x0') {
            putc(tekst[asd], stdout);
            printf(" %d %c\n", tekst[asd], tekst[asd]);
            asd++;
        }
        return 0;
    }
