#define RAND_MAX 077777



int sprintf (char *, char *, ...);
int kprintf (char *,  ...);
int kputc(int, unsigned char);
int printf (char *,  ...);
int fprintf (int, char *,  ...);
void bzero(void *, int);
int strlen(const char *);
char *strcat(char *, char *);
int strcmp(const char *, const char *);
char *strncat(char *, char *, int);
int strncmp(char *, char *, int);
char *strncpy(char *s1, char *s2, int n);
char *strcpy(char *, const char *);
char *strchr(const char *s, int c);
int create(int *, int, int, char *, int, long, ...);
int disable(short *);
int restore(short *);
int freebuf(void *);
int * getbuf(int);
int * nbgetbuf(int);
int atoi (char *);
double atof(char *);
long atol(char *);
int blkcopy(void *, void *, int);
int enq(int, void *, int);
char * deq(int);
char * headq(int);
char * seeq(int);
int newq(int, int);
int freeq(int);
int lenq(int);
/*static int initq();*/
int control(int,int,...);
int inb(int);
int inw(int);
int inl(int);
int outb(int, int);
int outw(int, int);
int outl(int, int);
int outsw(int, int, int);
int insw(int, int ,int);
int monitor(unsigned short);
int sscanf(char *, char *, ...);
int rand();
int srand(unsigned int);
