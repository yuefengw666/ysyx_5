#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

int ulong2a(char *out, int *pn, int size, unsigned long num);
int long2a(char *out, int *pn, int size, long num);
int str2a(char *out, int *pn, int size, const char *str);
int vsnprintf(char *out, size_t size, const char *fmt, va_list ap);

int printf(const char *fmt, ...) {
  panic("Not implemented");
}

int vsprintf(char *out, const char *fmt, va_list ap) {
  //panic("Not implemented");
  return vsnprintf(out, -1, fmt, ap);
}

int sprintf(char *out, const char *fmt, ...) {
  //panic("Not implemented");
  va_list ap;
  va_start(ap,fmt);

  int n =vsprintf(out, fmt, ap);
  va_end(ap);
  return n;
}

int snprintf(char *out, size_t size, const char *fmt, ...) {
  //panic("Not implemented");
  va_list ap;
  va_start(ap,fmt);
  int n = vsnprintf(out, size, fmt, ap);
  va_end(ap);

  return n;
}

int vsnprintf(char *out, size_t size, const char *fmt, va_list ap) {
  //panic("Not implemented");
  int n=0;

  while (n < size - 1 && *fmt){
    if(*fmt != '%'){
      out[n++] = *fmt++;
      continue;
    }
    
    fmt++;
    switch(*fmt){
      case 'c':
        out[n++] = va_arg(ap,int);
        break;
      case 'd':
        long2a(out, &n, size, va_arg(ap,int));
        break;
      case 's':
        str2a(out, &n, size, va_arg(ap,char*));
        break;
      //case 'x':
      default:
        return -1;
        break;
    }
    fmt++;
  }
  
  out[n] = '\0';
  return n;
}


int ulong2a(char *out, int *pn, int size, unsigned long num){
  int n = *pn;
  //int i = n;

  while(n < size-1){
    out[n++] = num % 10 + '0';
    num = num / 10;
    if(num == 0) break;
  }
  
  *pn = n--;

  /*while(i<n){
    char c = out[i];
    out[i++] = out[n];
    out[n--] = c;
  }*/
  return *pn;
}

int long2a(char *out, int *pn, int size, long num){
  int n = *pn;
  
  if(n < size-1 && num < 0){
    out[n++] = '-';
    num = -num;
  }

  *pn = n;
  return ulong2a(out, pn, size, num);
}

int str2a(char *out, int *pn, int size, const char *str){
  int n = *pn;
  while(n < size -1 && *str){
    out[n++] = *str++;
  }

  *pn = n;
  return n;
}

#endif
