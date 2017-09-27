

int __fastcall CommandLexer::step(int result)
{
  _BYTE *v1; // r1@1
  unsigned int v2; // lr@1
  unsigned int v3; // r10@2
  signed int v4; // r12@2
  signed int v5; // r11@2
  int v6; // r5@29
  bool v7; // zf@34
  bool v8; // cf@67
  bool v9; // zf@67
  unsigned int v10; // r6@68
  _BYTE *v11; // r6@76
  char v12; // r5@77
  bool v13; // zf@99
  signed int v14; // r1@103
  int v15; // r2@117
  int v16; // r2@124
  signed int v17; // r7@124
  char v18; // r6@126
  char v19; // [sp+34h] [bp-4Ch]@1
  int v20; // [sp+38h] [bp-48h]@1
  unsigned __int8 v21; // [sp+3Ch] [bp-44h]@1
  int v22; // [sp+40h] [bp-40h]@1
  unsigned __int8 v23; // [sp+44h] [bp-3Ch]@1
  int v24; // [sp+48h] [bp-38h]@1
  unsigned __int8 v25; // [sp+4Ch] [bp-34h]@1
  int v26; // [sp+50h] [bp-30h]@1
  char v27; // [sp+54h] [bp-2Ch]@1
  int v28; // [sp+58h] [bp-28h]@1

  v1 = (_BYTE *)(*(_QWORD *)(result + 4) + (*(_QWORD *)(result + 4) >> 32));
  *(_DWORD *)(result + 4) = v1;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 0;
  v19 = 125;
  v20 = 16;
  v21 = 91;
  v22 = 13;
  v23 = 93;
  v24 = 14;
  v25 = 58;
  v26 = 11;
  v27 = 33;
  v28 = 12;
  v2 = *v1;
  if ( *v1 )
  {
    v3 = 0;
    v4 = 0;
    v5 = 0;
    do
    {
      if ( v3 )
      {
        switch ( v5 )
        {
          case 18:
            if ( v2 <= 0x7E && *(_BYTE *)(ctype_ + v2 + 1) & 8 )
              return result;
            *(_DWORD *)(result + 8) = ++v3;
            v5 = 18;
            break;
          case 3:
            if ( (v2 > 0x7E || !(*(_BYTE *)(ctype_ + v2 + 1) & 7))
              && (v2 - 45 > 0x12 || !((1 << (v2 - 45)) & 0x42003))
              && v2 != 95 )
            {
              goto LABEL_94;
            }
            v5 = 3;
          case 1:
          case 2:
            if ( (unsigned __int8)(v2 - 48) <= 9u )
              goto LABEL_16;
            if ( v2 == 46 )
              v4 = 6;
              *(_DWORD *)(result + 8) = ++v3;
              *(_DWORD *)(result + 12) = 6;
              v5 = 6;
            else
              if ( !(*(_BYTE *)(ctype_ + v2 + 1) & 7) )
              {
                v7 = v2 == 95;
                if ( v2 != 95 )
                  v7 = v2 == 58;
                if ( !v7 )
                  return result;
              }
              v7 = v4 == 1;
              v4 = 18;
              if ( v7 )
                v4 = 3;
              *(_DWORD *)(result + 12) = v4;
              v5 = v4;
          case 6:
          case 7:
          case 8:
LABEL_16:
              break;
            if ( v2 == 43 )
              goto LABEL_53;
            if ( v2 != 46 )
              if ( v2 != 45 )
                return result;
LABEL_53:
              if ( v3 <= 1 && v4 != 6 )
                *(_DWORD *)(result + 8) = v3 + 1;
                v3 = 2;
                v5 = v4;
                break;
LABEL_83:
              v4 = 3;
              v5 = 3;
              *(_DWORD *)(result + 12) = 3;
            if ( v4 == 6 )
              goto LABEL_83;
            if ( v3 != 1 )
              v6 = 0;
              while ( v1[v6] != 46 )
                if ( ++v6 >= v3 - 1 )
                  goto LABEL_45;
LABEL_45:
            v5 = v4;
          case 4:
            if ( v3 == 1 )
              if ( v2 - 97 <= 0x12 && (1 << (v2 - 97)) & 0x68011 )
                v5 = 4;
                *(_DWORD *)(result + 8) = 2;
            else if ( (v2 > 0x7E || !(*(_BYTE *)(ctype_ + v2 + 1) & 7))
                   && (v2 - 45 > 0x12 || !((1 << (v2 - 45)) & 0x42003))
                   && v2 != 95 )
            v4 = 18;
            *(_DWORD *)(result + 12) = 18;
          case 17:
            if ( v2 == 34 )
              v11 = &v1[v3 - 2];
              if ( v11 <= v1 )
              v12 = 0;
              do
                if ( *v11 != 92 )
                  break;
                --v11;
                v12 ^= 1u;
              while ( v11 > v1 );
              if ( !(v12 & 1) )
            goto LABEL_85;
          default:
            return result;
        }
      }
      else
        *(_DWORD *)(result + 8) = 1;
        if ( v2 == 47 )
          v14 = 5;
          goto LABEL_122;
        if ( v2 == 61 )
          v14 = 9;
        if ( v2 == 44 )
          v14 = 10;
        if ( v2 == 123 )
          v14 = 15;
        if ( v2 == 125 )
          v14 = v20;
        if ( v2 == v21 )
          v14 = v22;
        if ( v2 == v23 )
          v14 = v24;
        if ( v2 == v25 )
          v14 = v26;
        if ( v2 == 34 )
          v4 = 17;
          v3 = 1;
          *(_DWORD *)(result + 12) = 17;
LABEL_85:
          v5 = 17;
        else if ( v2 == 64 )
          v4 = 4;
          *(_DWORD *)(result + 12) = 4;
          v5 = 4;
        else
          if ( v2 == 33 )
          {
            v14 = v28;
            goto LABEL_122;
          }
          v8 = v2 >= 0x2B;
          v9 = v2 == 43;
          if ( v2 != 43 )
            v10 = (unsigned __int8)(v2 - 48);
            v8 = v10 >= 9;
            v9 = v10 == 9;
          if ( !v9 && v8 )
            switch ( v2 )
              case 0x7Eu:
                v4 = 7;
                v3 = 1;
                *(_DWORD *)(result + 12) = 7;
                v5 = 7;
              case 0x5Eu:
                v4 = 8;
                *(_DWORD *)(result + 12) = 8;
                v5 = 8;
              case 0x2Du:
                v4 = 2;
                *(_DWORD *)(result + 12) = 2;
                v5 = 2;
              default:
                if ( v2 <= 0x7E && *(_BYTE *)(ctype_ + v2 + 1) & 7
                  || v2 - 45 <= 0x12 && (1 << (v2 - 45)) & 0x42003
                  || v2 == 95 )
                {
                  v4 = 3;
                  v3 = 1;
                  *(_DWORD *)(result + 12) = 3;
                  v5 = 3;
                }
                else if ( v2 <= 0x7E && *(_BYTE *)(ctype_ + v2 + 1) & 8 )
                  v3 = 0;
                  *(_DWORD *)(result + 4) = ++v1;
                  *(_DWORD *)(result + 8) = 0;
                else
                  v4 = 18;
                  *(_DWORD *)(result + 12) = 18;
                  v5 = 18;
          else
            v3 = 1;
            v4 = 1;
            *(_DWORD *)(result + 12) = 1;
            v5 = 1;
      v2 = v1[v3];
    }
    while ( v1[v3] );
LABEL_94:
    if ( (unsigned int)(v4 - 6) <= 2 )
      if ( v1[v3 - 1] != 46 )
        goto LABEL_109;
      goto LABEL_108;
    if ( v4 != 3 )
      if ( v4 == 17 )
LABEL_108:
        *(_DWORD *)(result + 12) = 18;
      v13 = v4 == 4;
      if ( v4 == 4 )
        v13 = v3 == 1;
      if ( v13 )
        v14 = 18;
        goto LABEL_122;
LABEL_109:
        return result;
      goto LABEL_121;
    if ( v3 )
      v15 = 0;
      while ( v1[v15] != 58 )
        if ( v3 == ++v15 )
          goto LABEL_109;
      v16 = (int)&v1[v15];
      v17 = 1;
      while ( &v1[v3 - v16] != (_BYTE *)v17 )
        v18 = *(_BYTE *)(v16 + v17++);
        if ( (unsigned __int8)(v18 - 48) >= 0xAu )
      v3 = v16 - (_DWORD)v1;
      *(_DWORD *)(result + 8) = v16 - (_DWORD)v1;
      goto LABEL_109;
  }
LABEL_121:
  v14 = 19;
LABEL_122:
  *(_DWORD *)(result + 12) = v14;
  return result;
}


unsigned int __fastcall CommandLexer::isSpace(CommandLexer *this, char a2)
{
  unsigned int result; // r0@2

  if ( (unsigned int)this <= 0x7E )
    result = (*((_BYTE *)this + ctype_ + 1) & 8u) >> 3;
  else
    result = 0;
  return result;
}


signed int __fastcall CommandLexer::isIdentifierCharacter(CommandLexer *this, char a2)
{
  CommandLexer *v2; // r1@1
  signed int result; // r0@3
  char v4; // r2@4

  v2 = this;
  if ( (unsigned int)this <= 0x7E && *((_BYTE *)this + ctype_ + 1) & 7 )
  {
    result = 1;
  }
  else
    v4 = (_BYTE)this - 45;
    if ( ((unsigned int)v2 - 45 > 0x12 || !((1 << v4) & 0x42003)) && v2 != (CommandLexer *)95 )
      result = 0;
  return result;
}


char *__fastcall CommandLexer::next(CommandLexer *this)
{
  return (char *)this + 4;
}


int __fastcall CommandLexer::isAlphaNumeric(CommandLexer *this, char a2)
{
  int result; // r0@2

  if ( (unsigned int)this <= 0x7E )
    result = (*((_BYTE *)this + ctype_ + 1) & 7) != 0;
  else
    result = 0;
  return result;
}


CommandLexer *__fastcall CommandLexer::CommandLexer(CommandLexer *this, _DWORD *a2)
{
  CommandLexer *v2; // r4@1

  v2 = this;
  *(_DWORD *)this = a2;
  *((_DWORD *)this + 1) = *a2;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  j_CommandLexer::step(this);
  return v2;
}


signed int __fastcall CommandLexer::isDigit(CommandLexer *this, char a2)
{
  unsigned int v2; // r1@1
  signed int result; // r0@1

  v2 = (unsigned __int8)((_BYTE)this - 48);
  result = 0;
  if ( v2 < 0xA )
    result = 1;
  return result;
}
