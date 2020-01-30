int searchFirstOccurrence(char* pattern, char* text)
{
	int c, d, e, text_length, pattern_length, position = -1;

	int len_max=-1;
	int n_max=-1;
  text_length    = strlen(text)-1;
  pattern_length = strlen(pattern)-1;

  if (pattern_length > text_length) {
    return -1;
  }

  for (c = 0; c <= text_length - pattern_length; c++) {
    position = e = c;
	len_max++;
    for (d = 0; d < pattern_length; d++) {
      if (pattern[d] == text[e]) {
        e++;
      }
      else {
        break;
      }
    }
    if (d == pattern_length) {
      return position;
    }
  }

  return -1;
}

int searchLastOccurrence(char* pattern, char* text)
{
	int c, d, e, text_length, pattern_length, position = -1;
	int t=-1;
	int len_max=-1;
	int n_max=-1;
  text_length    = strlen(text)-1;
  pattern_length = strlen(pattern)-1;

  if (pattern_length > text_length) {
    return -1;
  }

  for (c = 0; c <= text_length - pattern_length; c++) {
    t = e = c;
	
	len_max++;
    for (d = 0; d < pattern_length; d++) {
      if (pattern[d] == text[e]) {
        e++;
      }
      else {
        break;
      }
    }
    if (d == pattern_length) {
      if(t>position){position=t;}
    }
  }

  return position;}

int numOccurrences(char* pattern, char* text)
{
	int c, d, e, text_length, pattern_length, position = -1;
	int count=0;
	int len_max=-1;
	int n_max=-1;
  text_length    = strlen(text)-1;
  pattern_length = strlen(pattern)-1;

  if (pattern_length > text_length) {
    return -1;
  }

  for (c = 0; c <= text_length - pattern_length; c++) {
    position = e = c;
	len_max++;
    for (d = 0; d < pattern_length; d++) {
      if (pattern[d] == text[e]) {
        e++;
      }
      else {
        break;
      }
    }
    if (d == pattern_length) {
      count++;
    }
  }
if(count>0){
return count;
}

  return -1;
}

// Find the length of longest prefix of the pattern that matches a substring of the pattern
int longestPrefix(char *pattern, char *text){
	int c, d, e, text_length, pattern_length, position = -1;

	int len_max=-1;
	int n_max=-1;
  text_length    = strlen(text)-1;
  pattern_length = strlen(pattern)-1;

  if (pattern_length > text_length) {
    return -1;
  }

  for (c = 0; c <= text_length - pattern_length; c++) {
    position = e = c;
	len_max++;
    for (d = 0; d < pattern_length; d++) {
      if (pattern[d] == text[e]) {
        e++;
      }
      else {
        break;
      }
    }
    if (d == pattern_length) {
      //return position;
	if(n_max>len_max){
		len_max=n_max;	
	}
    }
  }

  return len_max;
}

// Count the number of characters compared while finding all occurences of the pattern in the given text
// Characters must be matched from left to right
int charactersCompared(char *pattern, char *text){
return 0;
}

