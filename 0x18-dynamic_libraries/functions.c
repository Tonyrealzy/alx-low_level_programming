#include "main.h"
#include <unistd.h>

int _putchar(char c) {
    return write(1, &c, 1);
}

int _islower(int c) {
    return (c >= 'a' && c <= 'z');
}

int _isalpha(int c) {
    return _islower(c) || _isupper(c);
}

int _abs(int n) {
    return (n < 0) ? -n : n;
}

int _isupper(int c) {
    return (c >= 'A' && c <= 'Z');
}

int _isdigit(int c) {
    return (c >= '0' && c <= '9');
}

int _strlen(char *s) {
    int count = 0;
    while (*s) {
        count++;
        s++;
    }
    return count;
}

void _puts(char *s) {
    while (*s) {
        _putchar(*s);
        s++;
    }
}

char *_strcpy(char *dest, char *src) {
    char *original_dest = dest;
    while (*src) {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
    return original_dest;
}

int _atoi(char *s) {
    int result = 0;
    int sign = 1;

    while (*s == ' ' || (*s >= 9 && *s <= 13)) {
        s++;
    }

    if (*s == '-' || *s == '+') {
        sign = (*s == '-') ? -1 : 1;
        s++;
    }

    while (*s >= '0' && *s <= '9') {
        result = result * 10 + (*s - '0');
        s++;
    }

    return result * sign;
}

char *_strcat(char *dest, char *src) {
    char *original_dest = dest;

    while (*dest) {
        dest++;
    }

    while (*src) {
        *dest = *src;
        dest++;
        src++;
    }

    *dest = '\0';
    return original_dest;
}

char *_strncat(char *dest, char *src, int n) {
    char *original_dest = dest;

    while (*dest) {
        dest++;
    }

    while (*src && n > 0) {
        *dest = *src;
        dest++;
        src++;
        n--;
    }

    *dest = '\0';
    return original_dest;
}

char *_strncpy(char *dest, char *src, int n) {
    char *original_dest = dest;

    while (*src && n > 0) {
        *dest = *src;
        dest++;
        src++;
        n--;
    }

    while (n > 0) {
        *dest = '\0';
        dest++;
        n--;
    }

    return original_dest;
}

int _strcmp(char *s1, char *s2) {
    while (*s1 && *s2 && *s1 == *s2) {
        s1++;
        s2++;
    }

    return (*s1 - *s2);
}

char *_memset(char *s, char b, unsigned int n) {
    while (n > 0) {
        *s = b;
        s++;
        n--;
    }

    return s;
}

char *_memcpy(char *dest, char *src, unsigned int n) {
    char *original_dest = dest;

    while (n > 0) {
        *dest = *src;
        dest++;
        src++;
        n--;
    }

    return original_dest;
}

char *_strchr(char *s, char c) {
    while (*s) {
        if (*s == c) {
            return s;
        }
        s++;
    }

    return NULL;
}

unsigned int _strspn(char *s, char *accept) {
    unsigned int count = 0;

    while (*s && _strchr(accept, *s)) {
        count++;
        s++;
    }

    return count;
}

char *_strpbrk(char *s, char *accept) {
    while (*s) {
        if (_strchr(accept, *s)) {
            return s;
        }
        s++;
    }

    return NULL;
}

char *_strstr(char *haystack, char *needle) {
    while (*haystack) {
        char *h = haystack;
        char *n = needle;

        while (*haystack && *n && *haystack == *n) {
            haystack++;
            n++;
        }

        if (!*n) {
            return h;
        }

        haystack = h + 1;
    }

    return NULL;
}
