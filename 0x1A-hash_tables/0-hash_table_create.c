#include "hash_tables.h"
/**
*hash_table_create - creates hash tables
*@size: size of the hash table
*Return: addres of the new Hash table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
unsigned long int i;
hash_table_t *table;
table  = malloc(sizeof(hash_table_t));
if (table == NULL)
return (NULL);
table->size = size;
table->array  = malloc(sizeof(hash_node_t *) * size);
if (table->array == NULL)
return (NULL);
for (i = 0; i < size; i++)
table->array[i] = NULL;
return (table);
}
