#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>
#include <stdint.h>


#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

//only for positive number
int int2str(int num, char *str)
{
	int index = 0,i;
	while(num != 0)
	{
		str[index] = num%10 + 0x30;
		index ++;
		num /= 10;
	}

	for(i=0; i < index/2; i++)
	{
		int tmp = str[index - i - 1];
		str[index - i - 1] = str[i];
		str[i] = tmp;
	}

	str[index] = '\0';
	return index;
}


int printf(const char *fmt, ...) {
  panic("Not implemented");
}

int vsprintf(char *out, const char *fmt, va_list ap) {
  panic("Not implemented");
}

int sprintf(char *out, const char *fmt, ...) {
	int i,j,index = 0;
	va_list var_arg;
	va_start(var_arg, fmt);
	
	//if(strlen(fmt) == 2)
	//	asm("ebreak");
	size_t len = strlen(fmt);
	for(i = 0; i < len; i++)
	{

		if(fmt[i] == '%' && (i + 1) < strlen(fmt))
		{
			if(fmt[i+1] == 'd')
			{
				i++;
				int tmp1 = va_arg(var_arg, int);
				char tmp2[500];
				int len = int2str(tmp1, tmp2);
				for(j=0; j<len; j++)
				{
					out[index] = tmp2[j];
					index++;
				}
			}
			else if(fmt[i+1] == 's')
			{
				i++;
				char* tmp = va_arg(var_arg, char*);
				j = 0;
				while(tmp[j] != '\0')
				{
					out[index] = tmp[j];
					j++;
					index++;
				}					
			}
			else if(fmt[i+1] == '%')
			{
				i++;
				out[index++] = '%';
			}
			else
			{
				return -1;
			}
		}
		else
		{
			out[index] = fmt[i];
			index++;
		}
	}

	va_end(var_arg);
	out[index] = '\0';
	return index;
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}

#endif
