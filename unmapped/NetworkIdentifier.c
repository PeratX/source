

unsigned int __fastcall NetworkIdentifier::getHash(NetworkIdentifier *this)
{
  int v1; // r1@1
  unsigned int result; // r0@2
  unsigned int v3; // r1@7
  unsigned int v4; // r1@7
  unsigned int v5; // r1@7

  v1 = *((_DWORD *)this + 36);
  if ( v1 )
  {
    if ( v1 == 2 )
    {
      v3 = *((_WORD *)this + 9) - 1640531527;
      v4 = v3 ^ (*((_DWORD *)this + 6) + (v3 << 6) + (v3 >> 2) - 1640531527) ^ (*((_DWORD *)this + 7)
                                                                              + ((v3 ^ (*((_DWORD *)this + 6)
                                                                                      + (v3 << 6)
                                                                                      + (v3 >> 2)
                                                                                      - 1640531527)) << 6)
                                                                                      - 1640531527)) >> 2)
                                                                              - 1640531527);
      v5 = v4 ^ (*((_DWORD *)this + 8) + (v4 << 6) + (v4 >> 2) - 1640531527);
      result = (*((_DWORD *)this + 9) + (v5 << 6) + (v5 >> 2) - 1640531527) ^ v5;
    }
    else if ( v1 == 1 )
      result = (*((_DWORD *)this + 5)
              + ((*((_WORD *)this + 9) - 1640531527) << 6)
              + (((unsigned int)*((_WORD *)this + 9) - 1640531527) >> 2)
              - 1640531527) ^ (*((_WORD *)this + 9) - 1640531527);
    else
      result = 0;
  }
  else
    result = j_j_j__ZN6RakNet10RakNetGUID8ToUint32ERKS0_(this, 0);
  return result;
}


int __fastcall NetworkIdentifier::getPort(NetworkIdentifier *this)
{
  int v1; // r1@1
  bool v2; // zf@1
  int result; // r0@4

  v1 = *((_DWORD *)this + 36);
  v2 = v1 == 1;
  if ( v1 != 1 )
    v2 = v1 == 2;
  if ( v2 )
    result = *((_WORD *)this + 9);
  else
    result = 0;
  return result;
}


    if ( NetworkIdentifier::equalsTypeData((NetworkIdentifier *)v4, *(const NetworkIdentifier **)v3)
{
    {
      v5 = 1;
    }
    result = v5;
  }
  else
  {
    result = 0;
  return result;
}


int __fastcall NetworkIdentifier::_init(int result, const sockaddr_in *a2)
{
  __int64 v2; // kr00_8@1

  v2 = *(_QWORD *)&a2->sin_family;
  *(_QWORD *)(result + 24) = *(_QWORD *)&a2->sin_zero[0];
  *(_QWORD *)(result + 16) = v2;
  *(_DWORD *)(result + 144) = 1;
  return result;
}


int __fastcall NetworkIdentifier::NetworkIdentifier(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r6@1
  int v4; // r4@1
  int v5; // r2@1
  int v6; // r3@1
  int v7; // r0@1
  int v8; // r0@1
  int v9; // r1@1
  int v10; // r2@1
  int v11; // r1@1
  int v12; // r2@1
  int v13; // r3@1

  v2 = a1;
  v3 = a1 + 16;
  v4 = a2;
  v5 = unk_27EA82C;
  v6 = *(_DWORD *)&word_27EA830;
  v7 = dword_27EA834;
  *(_DWORD *)v2 = unk_27EA828;
  *(_DWORD *)(v2 + 4) = v5;
  *(_DWORD *)(v2 + 8) = v6;
  *(_DWORD *)(v2 + 12) = v7;
  _aeabi_memclr8(v2 + 16, 128);
  v8 = *(_DWORD *)v4;
  v9 = *(_DWORD *)(v4 + 4);
  v10 = *(_DWORD *)(v4 + 8);
  v4 += 12;
  *(_DWORD *)v3 = v8;
  *(_DWORD *)(v3 + 4) = v9;
  *(_DWORD *)(v3 + 8) = v10;
  v3 += 12;
  v11 = *(_DWORD *)(v4 + 4);
  v12 = *(_DWORD *)(v4 + 8);
  v13 = *(_DWORD *)(v4 + 12);
  *(_DWORD *)v3 = *(_DWORD *)v4;
  *(_DWORD *)(v3 + 4) = v11;
  *(_DWORD *)(v3 + 8) = v12;
  *(_DWORD *)(v3 + 12) = v13;
  *(_DWORD *)(v2 + 144) = 2;
  return v2;
}


signed int __fastcall NetworkIdentifier::isUnassigned(NetworkIdentifier *this)
{
  NetworkIdentifier *v1; // r4@1
  int v2; // r0@1
  signed int v3; // r4@3
  signed int v4; // r6@7
  int v5; // r0@11
  void *v6; // r0@20
  void *v7; // r0@22
  unsigned int *v9; // r2@24
  signed int v10; // r1@26
  unsigned int *v11; // r2@28
  signed int v12; // r1@30
  int v13; // [sp+0h] [bp-28h]@10
  int v14; // [sp+4h] [bp-24h]@6

  v1 = this;
  v2 = *((_DWORD *)this + 36);
  if ( !v2 )
  {
    if ( RakNet::RakNetGUID::operator==(v1, &unk_27EDC90) )
      return 1;
    v2 = *((_DWORD *)v1 + 36);
  }
  if ( v2 == 1 )
    NetworkIdentifier::getAddress((NetworkIdentifier *)&v14, (int)v1);
    if ( !sub_21E7D6C((const void **)&v14, "0.0.0.0") )
    {
      v3 = 1;
LABEL_22:
      v7 = (void *)(v14 - 12);
      if ( (int *)(v14 - 12) != &dword_28898C0 )
      {
        v9 = (unsigned int *)(v14 - 4);
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
          j_j_j_j__ZdlPv_9(v7);
      }
      return v3;
    }
    v4 = 1;
  else
    v4 = 0;
  if ( v2 == 2 )
    NetworkIdentifier::getAddress((NetworkIdentifier *)&v13, (int)v1);
    if ( sub_21E7D6C((const void **)&v13, "::") )
      v5 = *((_DWORD *)v1 + 36);
      v3 = 0;
      if ( v5 == 3 )
        v3 = 1;
    else
    v6 = (void *)(v13 - 12);
    if ( (int *)(v13 - 12) != &dword_28898C0 )
      v11 = (unsigned int *)(v13 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v12 = __ldrex(v11);
        while ( __strex(v12 - 1, v11) );
      else
        v12 = (*v11)--;
      if ( v12 <= 0 )
        j_j_j_j__ZdlPv_9(v6);
    if ( v4 )
      goto LABEL_22;
    v3 = 0;
    if ( v2 == 3 )
    if ( v4 == 1 )
  return v3;
}


int __fastcall NetworkIdentifier::_init(int result, const sockaddr_in6 *a2)
{
  int v2; // r2@1
  char *v3; // r1@1
  int v4; // r3@1
  uint32_t v5; // r12@1
  uint32_t v6; // lr@1
  int v7; // r2@1
  int v8; // r4@1
  int v9; // r12@1
  int v10; // lr@1

  v2 = result + 16;
  v4 = *(_DWORD *)&a2->sin6_family;
  v5 = a2->sin6_flowinfo;
  v6 = a2->sin6_addr.in6_u.u6_addr32[0];
  v3 = (char *)&a2->sin6_addr.in6_u.u6_addr8[4];
  *(_DWORD *)v2 = v4;
  *(_DWORD *)(v2 + 4) = v5;
  *(_DWORD *)(v2 + 8) = v6;
  v7 = result + 28;
  v8 = *((_DWORD *)v3 + 1);
  v9 = *((_DWORD *)v3 + 2);
  v10 = *((_DWORD *)v3 + 3);
  *(_DWORD *)v7 = *(_DWORD *)v3;
  *(_DWORD *)(v7 + 4) = v8;
  *(_DWORD *)(v7 + 8) = v9;
  *(_DWORD *)(v7 + 12) = v10;
  *(_DWORD *)(result + 144) = 2;
  return result;
}


int __fastcall NetworkIdentifier::NetworkIdentifier(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r6@1
  int v4; // r4@1
  int v5; // r2@1
  int v6; // r3@1
  int v7; // r0@1
  int v8; // r0@1
  int v9; // r1@1
  int v10; // r2@1
  int v11; // r1@1
  int v12; // r2@1
  int v13; // r3@1

  v2 = a1;
  v3 = a1 + 16;
  v4 = a2;
  v5 = unk_27EA82C;
  v6 = *(_DWORD *)&word_27EA830;
  v7 = dword_27EA834;
  *(_DWORD *)v2 = unk_27EA828;
  *(_DWORD *)(v2 + 4) = v5;
  *(_DWORD *)(v2 + 8) = v6;
  *(_DWORD *)(v2 + 12) = v7;
  _aeabi_memclr8(v2 + 16, 128);
  v8 = *(_DWORD *)v4;
  v9 = *(_DWORD *)(v4 + 4);
  v10 = *(_DWORD *)(v4 + 8);
  v4 += 12;
  *(_DWORD *)v3 = v8;
  *(_DWORD *)(v3 + 4) = v9;
  *(_DWORD *)(v3 + 8) = v10;
  v3 += 12;
  v11 = *(_DWORD *)(v4 + 4);
  v12 = *(_DWORD *)(v4 + 8);
  v13 = *(_DWORD *)(v4 + 12);
  *(_DWORD *)v3 = *(_DWORD *)v4;
  *(_DWORD *)(v3 + 4) = v11;
  *(_DWORD *)(v3 + 8) = v12;
  *(_DWORD *)(v3 + 12) = v13;
  *(_DWORD *)(v2 + 144) = 2;
  return v2;
}


int __fastcall NetworkIdentifier::NetworkIdentifier(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  int v4; // r2@1
  int v5; // r3@1
  int v6; // r0@1

  v2 = a1;
  v3 = a2;
  v4 = unk_27EA82C;
  v5 = *(_DWORD *)&word_27EA830;
  v6 = dword_27EA834;
  *(_DWORD *)v2 = unk_27EA828;
  *(_DWORD *)(v2 + 4) = v4;
  *(_DWORD *)(v2 + 8) = v5;
  *(_DWORD *)(v2 + 12) = v6;
  _aeabi_memclr8(v2 + 16, 128);
  *(_QWORD *)v2 = *(_QWORD *)v3;
  *(_WORD *)(v2 + 8) = *(_WORD *)(v3 + 8);
  *(_DWORD *)(v2 + 144) = 0;
  return v2;
}


int __fastcall NetworkIdentifier::NetworkIdentifier(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  int v4; // r2@1
  int v5; // r3@1
  int v6; // r0@1
  int v7; // r1@1
  int v8; // r2@1
  int v9; // r3@1
  int v10; // r12@1

  v2 = a1;
  v3 = a2;
  v4 = unk_27EA82C;
  v5 = *(_DWORD *)&word_27EA830;
  v6 = dword_27EA834;
  *(_DWORD *)v2 = unk_27EA828;
  *(_DWORD *)(v2 + 4) = v4;
  *(_DWORD *)(v2 + 8) = v5;
  *(_DWORD *)(v2 + 12) = v6;
  _aeabi_memclr8(v2 + 16, 128);
  v7 = *(_DWORD *)(v3 + 4);
  v8 = *(_DWORD *)(v3 + 8);
  v9 = *(_DWORD *)(v3 + 12);
  v10 = v2 + 16;
  *(_DWORD *)v10 = *(_DWORD *)v3;
  *(_DWORD *)(v10 + 4) = v7;
  *(_DWORD *)(v10 + 8) = v8;
  *(_DWORD *)(v10 + 12) = v9;
  *(_DWORD *)(v2 + 144) = 1;
  return v2;
}


RakNet *__fastcall NetworkIdentifier::getAddress(NetworkIdentifier *this, int a2)
{
  void **v2; // r4@1
  int v3; // r5@1
  int v4; // r0@1
  RakNet *result; // r0@10
  int buf; // [sp+18h] [bp-60h]@5
  int v7; // [sp+1Ch] [bp-5Ch]@5
  int v8; // [sp+20h] [bp-58h]@5
  int v9; // [sp+24h] [bp-54h]@5
  char v10; // [sp+28h] [bp-50h]@5
  char v11; // [sp+30h] [bp-48h]@3
  RakNet *v12; // [sp+64h] [bp-14h]@1

  v2 = (void **)this;
  v3 = a2;
  v12 = _stack_chk_guard;
  v4 = *(_DWORD *)(a2 + 144);
  if ( v4 == 1 )
  {
    v10 = 0;
    v8 = 0;
    v9 = 0;
    buf = 0;
    v7 = 0;
    if ( inet_ntop(*(_WORD *)(a2 + 16), (const void *)(a2 + 20), (char *)&buf, 0x11u) )
      sub_21E94B4(v2, (const char *)&buf);
    else
      sub_21E94B4(v2, "0.0.0.0");
  }
  else if ( v4 == 2 )
    _aeabi_memclr8(&v11, 47);
    if ( inet_ntop(*(_WORD *)(v3 + 16), (const void *)(v3 + 24), &v11, 0x2Fu) )
      sub_21E94B4(v2, &v11);
      sub_21E94B4(v2, "::");
  else
    sub_21E94B4(v2, (const char *)&unk_257BC67);
  result = (RakNet *)(_stack_chk_guard - v12);
  if ( _stack_chk_guard != v12 )
    _stack_chk_fail(result);
  return result;
}


int __fastcall NetworkIdentifier::_init(int result, const RakNet::SystemAddress *a2)
{
  int v2; // r2@1
  char *v3; // r1@1
  int v4; // r3@1
  int v5; // r12@1
  int v6; // lr@1
  int v7; // r2@1
  int v8; // r4@1
  int v9; // r12@1
  int v10; // lr@1

  v2 = result + 16;
  v4 = *(_DWORD *)a2;
  v5 = *((_DWORD *)a2 + 1);
  v6 = *((_DWORD *)a2 + 2);
  v3 = (char *)a2 + 12;
  *(_DWORD *)v2 = v4;
  *(_DWORD *)(v2 + 4) = v5;
  *(_DWORD *)(v2 + 8) = v6;
  v7 = result + 28;
  v8 = *((_DWORD *)v3 + 1);
  v9 = *((_DWORD *)v3 + 2);
  v10 = *((_DWORD *)v3 + 3);
  *(_DWORD *)v7 = *(_DWORD *)v3;
  *(_DWORD *)(v7 + 4) = v8;
  *(_DWORD *)(v7 + 8) = v9;
  *(_DWORD *)(v7 + 12) = v10;
  *(_DWORD *)(result + 144) = 2;
  return result;
}


void __fastcall NetworkIdentifier::toString(NetworkIdentifier *this, int a2)
{
  const void **v2; // r6@1
  int v3; // r5@1
  char *v4; // r0@2
  char *v5; // r5@2
  unsigned int v6; // r0@2
  void *v7; // r0@3
  const void **v8; // r0@4
  char *v9; // r0@4
  void *v10; // r0@5
  unsigned int *v11; // r2@6
  signed int v12; // r1@8
  void *v13; // r0@11
  const void **v14; // r0@12
  char *v15; // r0@12
  unsigned int *v16; // r2@15
  signed int v17; // r1@17
  unsigned int *v18; // r2@19
  signed int v19; // r1@21
  unsigned int *v20; // r2@23
  signed int v21; // r1@25
  unsigned int *v22; // r2@27
  signed int v23; // r1@29
  int v24; // [sp+4h] [bp-2Ch]@4
  char *v25; // [sp+8h] [bp-28h]@4
  int v26; // [sp+Ch] [bp-24h]@3
  int v27; // [sp+10h] [bp-20h]@12
  char *v28; // [sp+14h] [bp-1Ch]@12
  int v29; // [sp+18h] [bp-18h]@11

  v2 = (const void **)this;
  v3 = a2;
  *(_DWORD *)this = &unk_28898CC;
  switch ( *(_DWORD *)(a2 + 144) )
  {
    case 0:
      sub_21E7408((const void **)this, "raknet:", 7u);
      v4 = RakNet::RakNetGUID::ToString((RakNet::RakNetGUID *)v3);
      v5 = v4;
      v6 = strlen(v4);
      sub_21E7408(v2, v5, v6);
      break;
    case 2:
      sub_21E7408((const void **)this, "address6:", 9u);
      NetworkIdentifier::getAddress((NetworkIdentifier *)&v26, v3);
      sub_21E72F0(v2, (const void **)&v26);
      v7 = (void *)(v26 - 12);
      if ( (int *)(v26 - 12) != &dword_28898C0 )
      {
        v16 = (unsigned int *)(v26 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v17 = __ldrex(v16);
          while ( __strex(v17 - 1, v16) );
        }
        else
          v17 = (*v16)--;
        if ( v17 <= 0 )
          j_j_j_j__ZdlPv_9(v7);
      }
      Util::toString<unsigned short,(void *)0,(void *)0>((void **)&v24, *(_WORD *)(v3 + 18));
      v8 = sub_21E82D8((const void **)&v24, 0, (unsigned int)":", (_BYTE *)1);
      v25 = (char *)*v8;
      *v8 = &unk_28898CC;
      sub_21E72F0(v2, (const void **)&v25);
      v9 = v25 - 12;
      if ( (int *)(v25 - 12) != &dword_28898C0 )
        v20 = (unsigned int *)(v25 - 4);
            v21 = __ldrex(v20);
          while ( __strex(v21 - 1, v20) );
          v21 = (*v20)--;
        if ( v21 <= 0 )
          j_j_j_j__ZdlPv_9(v9);
      v10 = (void *)(v24 - 12);
      if ( (int *)(v24 - 12) != &dword_28898C0 )
        v11 = (unsigned int *)(v24 - 4);
        if ( !&pthread_create )
          goto LABEL_35;
        __dmb();
        do
          v12 = __ldrex(v11);
        while ( __strex(v12 - 1, v11) );
        goto LABEL_36;
    case 3:
      sub_21E7408((const void **)this, "generic:", 8u);
    case 1:
      sub_21E7408((const void **)this, "address:", 8u);
      NetworkIdentifier::getAddress((NetworkIdentifier *)&v29, v3);
      sub_21E72F0(v2, (const void **)&v29);
      v13 = (void *)(v29 - 12);
      if ( (int *)(v29 - 12) != &dword_28898C0 )
        v18 = (unsigned int *)(v29 - 4);
            v19 = __ldrex(v18);
          while ( __strex(v19 - 1, v18) );
          v19 = (*v18)--;
        if ( v19 <= 0 )
          j_j_j_j__ZdlPv_9(v13);
      Util::toString<unsigned short,(void *)0,(void *)0>((void **)&v27, *(_WORD *)(v3 + 18));
      v14 = sub_21E82D8((const void **)&v27, 0, (unsigned int)":", (_BYTE *)1);
      v28 = (char *)*v14;
      *v14 = &unk_28898CC;
      sub_21E72F0(v2, (const void **)&v28);
      v15 = v28 - 12;
      if ( (int *)(v28 - 12) != &dword_28898C0 )
        v22 = (unsigned int *)(v28 - 4);
            v23 = __ldrex(v22);
          while ( __strex(v23 - 1, v22) );
          v23 = (*v22)--;
        if ( v23 <= 0 )
          j_j_j_j__ZdlPv_9(v15);
      v10 = (void *)(v27 - 12);
      if ( (int *)(v27 - 12) != &dword_28898C0 )
        v11 = (unsigned int *)(v27 - 4);
            v12 = __ldrex(v11);
          while ( __strex(v12 - 1, v11) );
LABEL_35:
          v12 = (*v11)--;
LABEL_36:
        if ( v12 <= 0 )
          j_j_j_j__ZdlPv_9(v10);
    default:
      return;
  }
}


int __fastcall NetworkIdentifier::NetworkIdentifier(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r6@1
  int v4; // r5@1
  int v5; // r1@1
  int v6; // r2@1
  int v7; // r3@1
  signed int v8; // r0@2
  int v9; // r2@3
  int v10; // r3@3
  int v11; // r6@3
  int v12; // r2@3
  int v13; // r3@3
  int v14; // r7@3

  v2 = a1;
  v3 = a1 + 16;
  v4 = a2;
  v5 = unk_27EA82C;
  v6 = *(_DWORD *)&word_27EA830;
  v7 = dword_27EA834;
  *(_DWORD *)a1 = unk_27EA828;
  *(_DWORD *)(a1 + 4) = v5;
  *(_DWORD *)(a1 + 8) = v6;
  *(_DWORD *)(a1 + 12) = v7;
  _aeabi_memclr8(a1 + 16, 128);
  if ( RakNet::RakNetGUID::operator!=((_QWORD *)v4, &unk_27EA828) == 1 )
  {
    *(_QWORD *)v2 = *(_QWORD *)v4;
    *(_WORD *)(v2 + 8) = *(_WORD *)(v4 + 8);
    v8 = 0;
  }
  else
    v9 = *(_DWORD *)(v4 + 20);
    v10 = *(_DWORD *)(v4 + 24);
    *(_DWORD *)v3 = *(_DWORD *)(v4 + 16);
    *(_DWORD *)(v3 + 4) = v9;
    *(_DWORD *)(v3 + 8) = v10;
    v11 = v3 + 12;
    v12 = *(_DWORD *)(v4 + 32);
    v13 = *(_DWORD *)(v4 + 36);
    v14 = *(_DWORD *)(v4 + 40);
    v8 = 2;
    *(_DWORD *)v11 = *(_DWORD *)(v4 + 28);
    *(_DWORD *)(v11 + 4) = v12;
    *(_DWORD *)(v11 + 8) = v13;
    *(_DWORD *)(v11 + 12) = v14;
  *(_DWORD *)(v2 + 144) = v8;
  return v2;
}


void __fastcall NetworkIdentifier::toString(NetworkIdentifier *this, int a2)
{
  NetworkIdentifier::toString(this, a2);
}


signed int __fastcall NetworkIdentifier::equalsTypeData(NetworkIdentifier *this, const NetworkIdentifier *a2)
{
  signed int v2; // r4@1
  signed int result; // r0@2

  v2 = 1;
  switch ( *((_DWORD *)this + 36) )
  {
    case 0:
      result = RakNet::RakNetGUID::operator==(this, a2);
      break;
    case 1:
      v2 = 0;
      if ( *((_WORD *)this + 9) != *((_WORD *)a2 + 9) )
        goto LABEL_12;
      if ( *((_DWORD *)this + 5) == *((_DWORD *)a2 + 5) )
        v2 = 1;
      result = v2;
    case 2:
      if ( !memcmp((char *)this + 24, (char *)a2 + 24, 0x10u) )
    case 3:
      goto LABEL_12;
    default:
LABEL_12:
  }
  return result;
}


int __fastcall NetworkIdentifier::_init(int result, const RakNet::RakNetGUID *a2)
{
  *(_QWORD *)result = *(_QWORD *)a2;
  *(_WORD *)(result + 8) = *((_WORD *)a2 + 4);
  *(_DWORD *)(result + 144) = 0;
  return result;
}
