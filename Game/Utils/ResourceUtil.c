

_QWORD *__fastcall ResourceUtil::stringFromPath(_QWORD *result, int a2)
{
  *result = *(_QWORD *)((char *)&unk_287E780 + 8 * a2 + 4);
  return result;
}


signed int __fastcall ResourceUtil::pathFromString(int a1, _BYTE *a2)
{
  int v2; // lr@1
  signed int result; // r0@2
  char *v4; // r2@3
  _BYTE *v5; // r3@4
  _BYTE *v6; // r2@4
  int v7; // r4@4

  v2 = a1;
  if ( a1 )
  {
    result = 0;
    do
    {
      v4 = (char *)&unk_287E780 + 8 * result;
      if ( *((_DWORD *)v4 + 1) == v2 )
      {
        v5 = (_BYTE *)*((_DWORD *)v4 + 2);
        v6 = a2;
        v7 = v2;
        while ( *v5 == *v6 )
        {
          ++v5;
          ++v6;
          if ( !--v7 )
            return result;
        }
      }
      ++result;
    }
    while ( result < 11 );
    result = 11;
  }
  else if ( dword_287E784 )
    if ( dword_287E78C )
      if ( dword_287E794 )
        if ( dword_287E79C )
          if ( dword_287E7A4 )
          {
            if ( dword_287E7AC )
            {
              if ( dword_287E7B4 )
              {
                if ( dword_287E7BC )
                {
                  if ( dword_287E7C4 )
                  {
                    if ( dword_287E7CC )
                    {
                      result = 11;
                      if ( !dword_287E7D4 )
                        result = 10;
                    }
                    else
                      result = 9;
                  }
                  else
                    result = 8;
                }
                else
                  result = 7;
              }
              else
                result = 6;
            }
            else
              result = 5;
          }
          else
            result = 4;
        else
          result = 3;
      else
        result = 2;
    else
      result = 1;
  else
  return result;
}
