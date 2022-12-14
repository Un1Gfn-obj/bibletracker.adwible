// bs.h for bitset
#pragma once

// this type is incomplete on purpose
typedef struct bitset_s bitset_t;

void bs_init();
bitset_t *bs_new(const int);

gboolean bs_get(bitset_t *const, const glong);

void bs_toggle(bitset_t *const, const glong, const gboolean);
void bs_free(bitset_t *const);
void bs_test(bitset_t *const);

void bs_save(const bitset_t *const, const gchar *const);
void bs_load(bitset_t *const, const gchar *const);

void bs_chdir();
