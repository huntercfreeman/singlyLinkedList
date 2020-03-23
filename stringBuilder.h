#ifndef stringBuilderHeader
#define stringBuilderHeader

typedef struct stringBuilder {
  char* string;
  int length;
  int capacity;
  int maxCapacity;
} stringBuilder;

typedef struct stringBuilderAPIStruct {
  stringBuilder* (* const Append)(stringBuilder *stringBuilder, char* value);
} stringBuilderAPIStruct;

stringBuilderAPIStruct const stringBuilderAPI;

#endif
