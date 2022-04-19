#include <klib.h>
#include <klib-macros.h>
#include <stdint.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

size_t strlen(const char *s) {
  //panic("Not implemented");
  size_t len = 0;
  while(s[len] != '\0') len++;
  return len;
}

char *strcpy(char *dst, const char *src) {
  //panic("Not implemented");
  size_t i;
  for (i = 0; src[i] != '\0'; i++) dst[i] = src[i];
  
  dst[i] = '\n';

  return dst;
}

char *strncpy(char *dst, const char *src, size_t n) {
  //panic("Not implemented");
  size_t i;

  for (i = 0; i < n && src[i] != '\0'; i++)
    dst[i] = src[i];
  for ( ; i < n; i++)
    dst[i] = '\0';
  
  return dst;
}

char *strcat(char *dst, const char *src) {
  //panic("Not implemented");
  size_t src_len = 0;
  size_t dst_len = 0;
  while(src[src_len]!='\0') src_len++;
  while(dst[dst_len]!='\0') dst_len++;

  size_t i;
  for(i=0; src[i]!='\0'&& i<src_len; i++)
    dst[dst_len+i] = src[i];
  dst[dst_len+i] = '\0';

  return dst;
}

int strcmp(const char *s1, const char *s2) {
  //panic("Not implemented");
  size_t i;
  for(i=0; s1[i]==s2[i]; i++){
    if(s1[i] == '\0') return 0;
  }
  if(s1[i] > s2[i]) return 1;
  else return -1;
}

int strncmp(const char *s1, const char *s2, size_t n) {
  //panic("Not implemented");
  while(*s1==*s2 && *s1!='\0' && *s2!='\0' && (n--)){
    s1++;
    s2++;
  }

  if(n==0 || *s1==*s2) return 0;
  else if(*s1 > *s2) return 1;
  else return -1;

}

void *memset(void *s, int c, size_t n) {
  panic("Not implemented");
}

void *memmove(void *dst, const void *src, size_t n) {
  panic("Not implemented");
}

void *memcpy(void *out, const void *in, size_t n) {
  panic("Not implemented");
}

int memcmp(const void *s1, const void *s2, size_t n) {
  panic("Not implemented");
}

#endif
