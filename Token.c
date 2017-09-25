

int __fastcall Token::getText(int result, int a2)
{
  if ( *(_BYTE *)(result + 12) )
    result = a2;
  return result;
}


signed int __fastcall Token::_parseRandom(Token *this)
{
  Token *v1; // r4@1
  _BYTE *v2; // r0@1
  int v3; // r5@4
  int v4; // r0@6
  signed int v5; // r5@6
  char *v6; // r6@7
  void *v7; // r0@9
  int v8; // r2@10
  unsigned int v9; // r3@10
  void *v10; // r0@11
  char v11; // r0@15
  unsigned int v12; // r0@17
  signed int v13; // r3@17
  signed int v14; // r2@17
  _DWORD *v15; // r1@17
  int v16; // r0@18
  int v17; // r5@18
  int v18; // r5@20
  int v19; // r6@20
  unsigned int v20; // r1@21
  int v21; // r0@27
  void *v22; // r0@28
  void *v23; // r0@29
  unsigned int *v25; // r2@31
  signed int v26; // r1@33
  unsigned int *v27; // r2@35
  signed int v28; // r1@37
  unsigned int *v29; // r2@39
  signed int v30; // r1@41
  unsigned int *v31; // r2@43
  signed int v32; // r1@45
  int v33; // [sp+4h] [bp-3Ch]@11
  int v34; // [sp+8h] [bp-38h]@11
  int v35; // [sp+Ch] [bp-34h]@14
  int v36; // [sp+10h] [bp-30h]@13
  int v37; // [sp+18h] [bp-28h]@9
  int v38; // [sp+1Ch] [bp-24h]@9
  int v39; // [sp+20h] [bp-20h]@14
  int v40; // [sp+24h] [bp-1Ch]@12

  v1 = this;
  v2 = *(_BYTE **)this;
  if ( *((_DWORD *)v2 - 1) >= 0 )
  {
    sub_21E8010((const void **)v1);
    v2 = *(_BYTE **)v1;
  }
  if ( *v2 == 91 )
    v3 = *((_DWORD *)v2 - 3) - 1;
    if ( *((_DWORD *)v2 - 1) >= 0 )
    {
      sub_21E8010((const void **)v1);
      v2 = *(_BYTE **)v1;
    }
    v4 = v2[v3];
    v5 = 0;
    if ( v4 == 93 )
      v6 = sub_21E77E4((int *)v1, 58, 0);
      if ( v6 != (char *)-1 )
      {
        if ( !*(_DWORD *)(*(_DWORD *)v1 - 12) )
          sub_21E5B04("%s: __pos (which is %zu) > this->size() (which is %zu)", (int)"basic_string::substr", 1, 0);
        sub_21E9040((void **)&v37, (int *)v1, 1u, (unsigned int)(v6 - 1));
        j_Token::Token((int)&v38, (int)&v37);
        v7 = (void *)(v37 - 12);
        if ( (int *)(v37 - 12) != &dword_28898C0 )
        {
          v25 = (unsigned int *)(v37 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v26 = __ldrex(v25);
            while ( __strex(v26 - 1, v25) );
          }
          else
            v26 = (*v25)--;
          if ( v26 <= 0 )
            j_j_j_j__ZdlPv_9(v7);
        }
        v8 = (int)(v6 + 1);
        v9 = *(_DWORD *)(*(_DWORD *)v1 - 12);
        if ( v9 < (unsigned int)(v6 + 1) )
          sub_21E5B04("%s: __pos (which is %zu) > this->size() (which is %zu)", (int)"basic_string::substr", v8, v9);
        sub_21E9040((void **)&v33, (int *)v1, v8, v9 - 2);
        j_Token::Token((int)&v34, (int)&v33);
        v10 = (void *)(v33 - 12);
        if ( (int *)(v33 - 12) != &dword_28898C0 )
          v27 = (unsigned int *)(v33 - 4);
              v28 = __ldrex(v27);
            while ( __strex(v28 - 1, v27) );
            v28 = (*v27)--;
          if ( v28 <= 0 )
            j_j_j_j__ZdlPv_9(v10);
        if ( v40 == 1 )
          if ( v36 == 1 )
            if ( v39 >= v35 )
            {
              v5 = 0;
            }
            else
              v11 = byte_2836168;
              __dmb();
              if ( !(v11 & 1) && j_j___cxa_guard_acquire_0((unsigned int *)&byte_2836168) )
              {
                v12 = sub_21E67AC((int)&Random::mRandomDevice);
                v13 = -397;
                dword_2835794 = v12;
                dword_2836158 = 625;
                byte_283615C = 0;
                dword_2836160 = 0;
                v14 = 1;
                dword_2835798 = v12;
                v15 = &unk_283579C;
                do
                {
                  v16 = v12 ^ (v12 >> 30);
                  v17 = v13++ + 1812433253 * v16;
                  v12 = v14++ + 1812433253 * v16;
                  *v15 = v17 + 398;
                  ++v15;
                }
                while ( v13 );
                dword_2836158 = 624;
                dword_2836164 = 398;
                j_j___cxa_guard_release_0((unsigned int *)&byte_2836168);
              }
              v18 = v39;
              v19 = v35;
              if ( v35 == v39 )
                v20 = 0;
              else
                v20 = j_Random::_genRandInt32((Random *)&dword_2835794) % (v19 - v18);
              v21 = v20 + v18;
              v5 = 1;
              *((_DWORD *)v1 + 1) = v21;
            v5 = 0;
        else
          v5 = 0;
        v22 = (void *)(v34 - 12);
        if ( (int *)(v34 - 12) != &dword_28898C0 )
          v29 = (unsigned int *)(v34 - 4);
              v30 = __ldrex(v29);
            while ( __strex(v30 - 1, v29) );
            v30 = (*v29)--;
          if ( v30 <= 0 )
            j_j_j_j__ZdlPv_9(v22);
        v23 = (void *)(v38 - 12);
        if ( (int *)(v38 - 12) != &dword_28898C0 )
          v31 = (unsigned int *)(v38 - 4);
              v32 = __ldrex(v31);
            while ( __strex(v32 - 1, v31) );
            v32 = (*v31)--;
          if ( v32 <= 0 )
            j_j_j_j__ZdlPv_9(v23);
      }
  else
  return v5;
}


int __fastcall Token::getValue(Token *this, int a2)
{
  if ( *((_BYTE *)this + 12) )
  {
    if ( *((_DWORD *)this + 2) != 1 )
      a2 = *((_DWORD *)this + 1);
  }
  else
    a2 = *((_DWORD *)this + 1);
  return a2;
}


void __fastcall Token::tokenize(int a1, int *a2)
{
  int v2; // r8@1
  int *v3; // r5@1
  char *v4; // r2@1
  int v5; // r0@1
  int v6; // r1@1
  signed int v7; // r7@2
  int v8; // r2@2
  unsigned int *v9; // r2@3
  signed int v10; // r1@5
  unsigned int *v11; // r2@7
  signed int v12; // r1@9
  int v13; // r11@20
  int v14; // r9@21
  bool v15; // zf@28
  _BYTE *v16; // r0@31
  int v17; // r1@31 OVERLAPPED
  int v18; // r7@31
  unsigned int v19; // r2@31
  _DWORD *v20; // r0@34
  bool v21; // zf@36
  __int64 v22; // r0@40
  __int64 v23; // r2@41
  bool v24; // zf@42
  __int64 v25; // r0@46
  __int64 v26; // r2@47
  _BYTE *v27; // r0@48
  int v28; // r1@48 OVERLAPPED
  int v29; // r7@48
  unsigned int v30; // r2@48
  _DWORD *v31; // r0@51
  _BYTE *v32; // r0@54
  int v33; // r1@54 OVERLAPPED
  unsigned int v34; // r2@54
  char *v35; // r0@60
  char *v36; // r0@63
  char *v37; // r0@67
  unsigned int *v38; // r2@69
  signed int v39; // r1@71
  char *v40; // [sp+Ch] [bp-4Ch]@3
  __int64 v41; // [sp+10h] [bp-48h]@41
  char v42; // [sp+18h] [bp-40h]@41
  char *v43; // [sp+1Ch] [bp-3Ch]@7
  __int64 v44; // [sp+20h] [bp-38h]@47
  char v45; // [sp+28h] [bp-30h]@47
  _BYTE **v46; // [sp+2Ch] [bp-2Ch]@1

  v2 = a1;
  v3 = a2;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  v4 = (char *)&unk_28898CC;
  v46 = (_BYTE **)&unk_28898CC;
  v5 = *a2;
  v6 = *(_DWORD *)(*a2 - 12);
  if ( v6 >= 0 )
  {
    v7 = 0;
    v8 = 0;
    while ( 1 )
    {
      v13 = v8;
      if ( v8 >= v6 )
        v14 = 0;
      else
        v14 = *(_BYTE *)(v5 + v8);
      if ( v7 == 2 )
      {
        v21 = v14 == 34;
        if ( v14 != 34 )
          v21 = v14 == 0;
        if ( v21 )
        {
          j_Token::Token((int)&v40, (int)&v46);
          v22 = *(_QWORD *)(v2 + 4);
          if ( (_DWORD)v22 == HIDWORD(v22) )
          {
            j_std::vector<Token,std::allocator<Token>>::_M_emplace_back_aux<Token>((unsigned __int64 *)v2, (int)&v40);
          }
          else
            *(_DWORD *)v22 = v40;
            v40 = (char *)&unk_28898CC;
            v23 = v41;
            *(_BYTE *)(v22 + 12) = v42;
            *(_QWORD *)(v22 + 4) = v23;
            *(_DWORD *)(v2 + 4) = v22 + 16;
          v35 = v40 - 12;
          if ( (int *)(v40 - 12) != &dword_28898C0 )
            v9 = (unsigned int *)(v40 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v10 = __ldrex(v9);
              while ( __strex(v10 - 1, v9) );
            }
            else
              v10 = (*v9)--;
            if ( v10 <= 0 )
              j_j_j_j__ZdlPv_9(v35);
          v7 = 0;
          sub_21E7EE0((const void **)&v46, 0, *(v46 - 3), 0);
          goto LABEL_65;
        }
        v27 = v46;
        *(_QWORD *)&v28 = *(_QWORD *)(v46 - 3);
        v29 = v28 + 1;
        if ( v28 + 1 > v30 || (signed int)*(v46 - 1) >= 1 )
          sub_21E6FCC((const void **)&v46, v28 + 1);
          v27 = v46;
          v28 = (int)*(v46 - 3);
        v27[v28] = v14;
        v31 = v46;
        if ( (int *)(v46 - 3) != &dword_28898C0 )
          *(v46 - 1) = 0;
          *(v31 - 3) = v29;
          *((_BYTE *)v31 + v29) = byte_26C67B8[0];
LABEL_53:
        v7 = 2;
        goto LABEL_65;
      }
      if ( v7 == 1 )
        v24 = v14 == 0;
        if ( v14 )
          v24 = v14 == 32;
        if ( v24 || v14 == 9 )
          j_Token::Token((int)&v43, (int)&v46);
          v25 = *(_QWORD *)(v2 + 4);
          if ( (_DWORD)v25 == HIDWORD(v25) )
            j_std::vector<Token,std::allocator<Token>>::_M_emplace_back_aux<Token>((unsigned __int64 *)v2, (int)&v43);
            *(_DWORD *)v25 = v43;
            v43 = (char *)&unk_28898CC;
            v26 = v44;
            *(_BYTE *)(v25 + 12) = v45;
            *(_QWORD *)(v25 + 4) = v26;
            *(_DWORD *)(v2 + 4) = v25 + 16;
          v36 = v43 - 12;
          if ( (int *)(v43 - 12) != &dword_28898C0 )
            v11 = (unsigned int *)(v43 - 4);
                v12 = __ldrex(v11);
              while ( __strex(v12 - 1, v11) );
              v12 = (*v11)--;
            if ( v12 <= 0 )
              j_j_j_j__ZdlPv_9(v36);
        v32 = v46;
        *(_QWORD *)&v33 = *(_QWORD *)(v46 - 3);
        v18 = v33 + 1;
        if ( v33 + 1 > v34 || (signed int)*(v46 - 1) >= 1 )
          sub_21E6FCC((const void **)&v46, v33 + 1);
          v32 = v46;
          v33 = (int)*(v46 - 3);
        v32[v33] = v14;
        v20 = v46;
        if ( (int *)(v46 - 3) == &dword_28898C0 )
          v7 = 1;
        if ( v7 )
        if ( v14 == 34 )
          goto LABEL_53;
        v7 = 0;
        if ( !v14 )
        v15 = v14 == 9;
        if ( v14 != 9 )
          v15 = v14 == 32;
        if ( v15 )
        v16 = v46;
        *(_QWORD *)&v17 = *(_QWORD *)(v46 - 3);
        v18 = v17 + 1;
        if ( v17 + 1 > v19 || (signed int)*(v46 - 1) >= 1 )
          sub_21E6FCC((const void **)&v46, v17 + 1);
          v16 = v46;
          v17 = (int)*(v46 - 3);
        v16[v17] = v14;
      *(v20 - 1) = 0;
      *(v20 - 3) = v18;
      *((_BYTE *)v20 + v18) = byte_26C67B8[0];
      v7 = 1;
LABEL_65:
      v5 = *v3;
      v8 = v13 + 1;
      v6 = *(_DWORD *)(*v3 - 12);
      if ( v13 >= v6 )
        v4 = (char *)v46;
        break;
    }
  }
  v37 = v4 - 12;
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v38 = (unsigned int *)(v4 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v39 = __ldrex(v38);
      while ( __strex(v39 - 1, v38) );
    else
      v39 = (*v38)--;
    if ( v39 <= 0 )
      j_j_j_j__ZdlPv_9(v37);
}


int *__fastcall Token::Token(int *a1, int *a2)
{
  int *v2; // r5@1
  int *v3; // r4@1
  char v4; // r1@9
  void *v5; // r0@11
  unsigned int *v7; // r2@13
  signed int v8; // r1@15
  int v9; // [sp+0h] [bp-20h]@1

  v2 = a2;
  v3 = a1;
  sub_21E8AF4(a1, a2);
  v3[2] = j_sscanf_0((const char *)*v2, "%d", v3 + 1) != 0;
  j_Util::toLower((void **)&v9, *(_DWORD *)(*v3 - 12), *v3);
  if ( sub_21E7D6C((const void **)&v9, "true") )
  {
    if ( sub_21E7D6C((const void **)&v9, "false") )
    {
      if ( !v3[2] && j_Token::_parseRandom((Token *)v3) == 1 )
        v3[2] = 1;
    }
    else
      v3[2] = 2;
      *((_BYTE *)v3 + 4) = 0;
  }
  else
    v3[2] = 2;
    *((_BYTE *)v3 + 4) = 1;
  v4 = 0;
  if ( !*(_DWORD *)(*v3 - 12) )
    v4 = 1;
  *((_BYTE *)v3 + 12) = v4;
  v5 = (void *)(v9 - 12);
  if ( (int *)(v9 - 12) != &dword_28898C0 )
    v7 = (unsigned int *)(v9 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
      v8 = (*v7)--;
    if ( v8 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  return v3;
}


void __fastcall Token::tokenize(int a1, int *a2)
{
  Token::tokenize(a1, a2);
}


int __fastcall Token::getValueAsFloat(Token *this, float _R1)
{
  int v6; // r0@3
  int result; // r0@5
  int v8; // [sp+4h] [bp-14h]@3

  __asm { VMOV            S16, R1 }
  if ( !*((_BYTE *)this + 12) || *((_DWORD *)this + 2) != 1 )
  {
    v8 = 0;
    v6 = j_sscanf_0(*(const char **)this, "%f", &v8);
    __asm { VLDR            S0, [SP,#0x18+var_14] }
    if ( v6 == 1 )
      __asm { VMOVEQ.F32      S16, S0 }
  }
  __asm { VMOV            R0, S16 }
  return result;
}


signed int __fastcall Token::compatibleWith(int a1, int a2)
{
  signed int result; // r0@2
  unsigned int v3; // r1@6

  if ( a2 )
  {
    if ( a2 == 1 )
    {
      result = *(_DWORD *)(a1 + 8);
      if ( result != 1 )
        result = 0;
    }
    else if ( a2 == 2 )
      v3 = *(_DWORD *)(a1 + 8) - 1;
      result = 0;
      if ( v3 < 2 )
        result = 1;
    else
  }
  else
    result = 1;
  return result;
}


int __fastcall Token::getBool(Token *this, int a2)
{
  int v2; // r2@1
  int v3; // r1@5

  v2 = *((_DWORD *)this + 2);
  if ( !*((_BYTE *)this + 12) || (unsigned int)(v2 - 1) >= 2 )
  {
    if ( v2 == 1 )
    {
      v3 = *((_DWORD *)this + 1);
      return v3 != 0;
    }
    if ( v2 == 2 )
      v3 = *((_BYTE *)this + 4);
  }
  return a2;
}
