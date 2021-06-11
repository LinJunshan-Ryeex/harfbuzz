#include "heyos.h"

void* hb_malloc_impl(size_t size)
{
    return heyos_malloc(size);
}

void* hb_calloc_impl(size_t nmemb, size_t size)
{
    return heyos_calloc(nmemb, size);
}

void* hb_realloc_impl(void* ptr, size_t size)
{
    return heyos_realloc(ptr, size);
}

void  hb_free_impl(void* ptr)
{
    heyos_free(ptr);
}

