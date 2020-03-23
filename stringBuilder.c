#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "stringBuilder.h"

static stringBuilder* Append(stringBuilder *stringBuilder, char* value)
{
  if(stringBuilder->capacity == 0) stringBuilder->capacity = 16;
  if(stringBuilder->string == NULL) stringBuilder->string = (char*)malloc(sizeof(char) * stringBuilder->capacity);

  int argumentLength = strlen(value);
  int remainingSpace = stringBuilder->capacity - stringBuilder->length - 1;

  while(remainingSpace - argumentLength < 0)
  {
    stringBuilder->capacity *= 2;

    remainingSpace = stringBuilder->capacity - stringBuilder->length - 1;
  }

  snprintf(stringBuilder->string + stringBuilder->length, remainingSpace, "%s", value);
  stringBuilder->length += argumentLength;

  return stringBuilder;
}

stringBuilderAPIStruct const stringBuilderAPI = {Append};
