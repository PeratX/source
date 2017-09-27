

int __fastcall PerfTimer::rawRelease(int a1, int a2, int a3)
{
  int v3; // r8@1
  unsigned int v4; // r2@1
  unsigned int v5; // r2@1
  int v6; // r4@1
  int *v7; // r4@1
  char *v8; // t1@1
  char *v9; // r0@1
  int *v10; // r7@1
  int result; // r0@2
  void **v12; // r9@3
  _BYTE *v13; // r10@3
  unsigned int v14; // r2@3
  unsigned int v15; // r1@5
  unsigned int v16; // r5@5
  char *v17; // r6@11
  int v18; // r8@13
  int v19; // r8@15

  v3 = a2;
  v4 = (a3 - 1) | ((unsigned int)(a3 - 1) >> 1) | (((a3 - 1) | ((unsigned int)(a3 - 1) >> 1)) >> 2);
  v5 = v4 | (v4 >> 4) | ((v4 | (v4 >> 4)) >> 8);
  v6 = a1
     + 12 * PerfTimer::MultiplyDeBruijnBitPosition[125613361 * (((v5 | (v5 >> 16)) + 1) & ~(v5 | (v5 >> 16))) >> 27];
  v8 = *(char **)(v6 + 20);
  v7 = (int *)(v6 + 20);
  v10 = v7 - 1;
  v9 = (char *)*(v7 - 1);
  if ( v9 == v8 )
  {
    v12 = (void **)(v7 - 2);
    v13 = (_BYTE *)*(v7 - 2);
    v14 = (v9 - v13) >> 2;
    if ( !v14 )
      v14 = 1;
    v15 = v14 + ((v9 - v13) >> 2);
    v16 = v14 + ((v9 - v13) >> 2);
    if ( 0 != v15 >> 30 )
      v16 = 0x3FFFFFFF;
    if ( v15 < v14 )
    if ( v16 )
    {
      if ( v16 >= 0x40000000 )
        sub_21E57F4();
      v17 = (char *)operator new(4 * v16);
      v13 = *v12;
      v9 = (char *)*v10;
    }
    else
      v17 = 0;
    *(_DWORD *)&v17[v9 - v13] = v3;
    v18 = (int)&v17[v9 - v13];
    if ( 0 != (v9 - v13) >> 2 )
      _aeabi_memmove4(v17, v13);
    v19 = v18 + 4;
    if ( v13 )
      operator delete(v13);
    *v12 = v17;
    result = (int)&v17[4 * v16];
    *v10 = v19;
    *v7 = result;
  }
  else
    *(_DWORD *)v9 = a2;
    result = *v10 + 4;
    *v10 = result;
  return result;
}


PerfTimer *__fastcall PerfTimer::~PerfTimer(PerfTimer *this)
{
  PerfTimer *v1; // r9@1
  char *v2; // r5@1
  __int64 v3; // r4@4
  __int64 v4; // kr00_8@4
  unsigned int v5; // r1@4
  const void **v6; // r0@6
  char *v7; // r7@8
  _DWORD *v8; // r6@8
  int *v9; // r6@8
  int v10; // t1@8
  void *v11; // r0@9
  void *v12; // r0@10
  RakNet::BitStream *v13; // r0@11
  unsigned int v14; // r3@11
  int i; // r4@14
  int v16; // r6@15
  int j; // r7@16
  char *v18; // r0@17
  char *v19; // r4@17
  int v20; // r5@17
  int v21; // r0@18
  RakNet::BitStream *v22; // r0@21
  unsigned int v23; // r3@21
  int v24; // r1@24
  unsigned __int64 v25; // r2@24
  RakNet::BitStream **v26; // r11@24
  void **v27; // r0@24
  void *v28; // r0@24
  void **v29; // r8@25
  int v30; // r1@25
  void *v31; // r0@25
  PerfTimer *v32; // r7@26
  RakNet::BitStream *v33; // r0@27
  void *v34; // r0@28
  void *v35; // r5@29
  unsigned __int64 v36; // r2@30
  char *v37; // r0@30
  void **v38; // r5@33 OVERLAPPED
  void **v39; // r6@33 OVERLAPPED
  unsigned int *v41; // r1@45
  signed int v42; // r0@47
  unsigned int *v43; // r2@49
  signed int v44; // r1@51
  unsigned int *v45; // r2@53
  signed int v46; // r1@55
  unsigned int *v47; // r2@68
  signed int v48; // r1@70
  unsigned int *v49; // r2@72
  signed int v50; // r1@74
  char v51; // [sp+4h] [bp-76Ch]@15
  int v52; // [sp+8h] [bp-768h]@14
  int v53; // [sp+Ch] [bp-764h]@14
  int *v54; // [sp+10h] [bp-760h]@14
  int *v55; // [sp+14h] [bp-75Ch]@14
  int v56; // [sp+18h] [bp-758h]@14
  unsigned __int8 v57[2]; // [sp+1Eh] [bp-752h]@11
  int v58; // [sp+20h] [bp-750h]@4
  unsigned int v59; // [sp+28h] [bp-748h]@4
  void **v60; // [sp+2Ch] [bp-744h]@1
  int v61; // [sp+30h] [bp-740h]@25
  void **v62; // [sp+34h] [bp-73Ch]@1
  void **v63; // [sp+38h] [bp-738h]@4
  int v64; // [sp+54h] [bp-71Ch]@25
  int v65; // [sp+5Ch] [bp-714h]@24
  int v66; // [sp+60h] [bp-710h]@25
  __int64 v67; // [sp+E8h] [bp-688h]@8
  const char *v68; // [sp+F0h] [bp-680h]@8
  signed int v69; // [sp+F4h] [bp-67Ch]@8
  char *v70; // [sp+F8h] [bp-678h]@8
  int v71; // [sp+FCh] [bp-674h]@8
  __int64 v72; // [sp+100h] [bp-670h]@8
  int v73[3]; // [sp+104h] [bp-66Ch]@8
  unsigned __int8 v74; // [sp+10Eh] [bp-662h]@13
  char v75; // [sp+113h] [bp-65Dh]@17
  unsigned __int8 v76; // [sp+114h] [bp-65Ch]@23
  int v77; // [sp+118h] [bp-658h]@21
  int v78; // [sp+124h] [bp-64Ch]@24
  int v79; // [sp+22Ch] [bp-544h]@11
  int v80; // [sp+238h] [bp-538h]@16
  char v81; // [sp+340h] [bp-430h]@8
  int v82; // [sp+344h] [bp-42Ch]@8
  int v83; // [sp+744h] [bp-2Ch]@8
  RakNet *v84; // [sp+748h] [bp-28h]@1

  v1 = this;
  v84 = _stack_chk_guard;
  sub_21D103C((int)&v60, 24);
  v2 = (char *)&v62;
  if ( pthread_equal(*((_DWORD *)v1 + 1131), 0) )
    sub_21CBF38((char *)&v62, (int)"thread::id of a non-executing thread", 36);
  else
    v2 = sub_21CC2A8((char *)&v62);
  sub_21CBF38(v2, (int)".txt", 4);
  LODWORD(v3) = PerfTimer::mPath;
  HIDWORD(v3) = *(_DWORD *)(PerfTimer::mPath - 12);
  sub_21E94B4((void **)&v59, "profile");
  sub_21CFED8(&v58, (int)&v63);
  v4 = *(_QWORD *)(v59 - 12);
  v5 = *(_DWORD *)(v58 - 12) + v4;
  if ( v5 > HIDWORD(v4) && v5 <= *(_DWORD *)(v58 - 8) )
    v6 = sub_21E82D8((const void **)&v58, 0, v59, (_BYTE *)v4);
    v6 = sub_21E72F0((const void **)&v59, (const void **)&v58);
  v7 = (char *)*v6;
  v8 = *v6;
  *v6 = &unk_28898CC;
  v10 = *(v8 - 3);
  v9 = v8 - 3;
  v67 = v3;
  v68 = "profiler";
  v71 = v10;
  v69 = -1;
  v70 = v7;
  Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v81, (int)&v67, 3);
  LODWORD(v72) = &v82;
  v73[0] = v83;
  Core::FileStream::open((int)v1 + 196, &v72, 52);
  if ( v9 != &dword_28898C0 )
  {
    v41 = (unsigned int *)(v7 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v42 = __ldrex(v41);
      while ( __strex(v42 - 1, v41) );
    }
    else
      v42 = (*v41)--;
    if ( v42 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  }
  v11 = (void *)(v58 - 12);
  if ( (int *)(v58 - 12) != &dword_28898C0 )
    v43 = (unsigned int *)(v58 - 4);
        v44 = __ldrex(v43);
      while ( __strex(v44 - 1, v43) );
      v44 = (*v43)--;
    if ( v44 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  v12 = (void *)(v59 - 12);
  if ( (int *)(v59 - 12) != &dword_28898C0 )
    v45 = (unsigned int *)(v59 - 4);
        v46 = __ldrex(v45);
      while ( __strex(v46 - 1, v45) );
      v46 = (*v45)--;
    if ( v46 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  RakNet::BitStream::BitStream((RakNet::BitStream *)&v79);
  v13 = (RakNet::BitStream *)*((_DWORD *)v1 + 1125);
  *(_WORD *)v57 = *((_DWORD *)v1 + 1125);
  if ( RakNet::BitStream::IsNetworkOrderInternal(v13) )
    RakNet::BitStream::WriteBits((RakNet::BitStream *)&v79, v57, 0x10u, 1);
    RakNet::BitStream::ReverseBytes((RakNet::BitStream *)v57, &v74, (unsigned __int8 *)2, v14);
    RakNet::BitStream::WriteBits((RakNet::BitStream *)&v79, &v74, 0x10u, 1);
  v56 = 0;
  v52 = 0;
  v53 = 0;
  v54 = &v52;
  v55 = &v52;
  for ( i = *((_DWORD *)v1 + 1124); i; i = *(_DWORD *)i )
    v16 = *(_DWORD *)(i + 4);
    *(_DWORD *)std::map<int,char const*,std::less<int>,std::allocator<std::pair<int const,char const*>>>::operator[](
                 (int)&v51,
                 (int *)(i + 8)) = v16;
  sub_21CBD44((char *)v1 + 204, v80, (unsigned int)(v79 + 7) >> 3);
  for ( j = (int)v54; (int *)j != &v52; j = sub_21D47E8(j) )
    v75 = strlen(*(const char **)(j + 20));
    v18 = sub_21CBF38((char *)v1 + 204, (int)&v75, 1);
    v19 = v18;
    v20 = *(_DWORD *)(j + 20);
    if ( v20 )
      v21 = strlen(*(const char **)(j + 20));
      sub_21CBF38(v19, v20, v21);
      sub_21B583C(
        (int)&v18[*(_DWORD *)(*(_DWORD *)v18 - 12)],
        *(_DWORD *)&v18[*(_DWORD *)(*(_DWORD *)v18 - 12) + 20] | 1);
  v22 = (RakNet::BitStream *)RakNet::BitStream::BitStream((RakNet::BitStream *)&v77);
  if ( RakNet::BitStream::IsNetworkOrderInternal(v22) )
    RakNet::BitStream::WriteBits((RakNet::BitStream *)&v77, (const unsigned __int8 *)v1 + 4528, 0x20u, 1);
    RakNet::BitStream::ReverseBytes((PerfTimer *)((char *)v1 + 4528), &v76, (unsigned __int8 *)4, v23);
    RakNet::BitStream::WriteBits((RakNet::BitStream *)&v77, &v76, 0x20u, 1);
  sub_21CBD44((char *)v1 + 204, v78, (unsigned int)(v77 + 7) >> 3);
  sub_21CBD44(
    (char *)v1 + 204,
    *(_DWORD *)(*((_DWORD *)v1 + 1130) + 12),
    (unsigned int)(**((_DWORD **)v1 + 1130) + 7) >> 3);
  Core::FileStdStreamBuf::close((PerfTimer *)((char *)v1 + 208), v24, v25);
  v26 = (RakNet::BitStream **)((char *)v1 + 4520);
  RakNet::BitStream::~BitStream((RakNet::BitStream *)&v77);
  std::_Rb_tree<int,std::pair<int const,char const*>,std::_Select1st<std::pair<int const,char const*>>,std::less<int>,std::allocator<std::pair<int const,char const*>>>::_M_erase(
    (int)&v51,
    v53);
  RakNet::BitStream::~BitStream((RakNet::BitStream *)&v79);
  v27 = off_26D3F84;
  v60 = off_26D3F60;
  *(_DWORD *)((char *)*(off_26D3F60 - 3) + (_DWORD)&v60) = off_26D3F80[0];
  v62 = v27;
  v63 = &off_27734E8;
  v28 = (void *)(v65 - 12);
  if ( (int *)(v65 - 12) != &dword_28898C0 )
    v47 = (unsigned int *)(v65 - 4);
        v48 = __ldrex(v47);
      while ( __strex(v48 - 1, v47) );
      v48 = (*v47)--;
    if ( v48 <= 0 )
      j_j_j_j__ZdlPv_9(v28);
  v29 = (void **)((char *)v1 + 4496);
  v63 = &off_26D40A8;
  sub_21C802C((unsigned int **)&v64);
  v60 = (void **)off_26D3F68;
  *(void ***)((char *)&v60 + *((_DWORD *)off_26D3F68 - 3)) = (void **)off_26D3F6C;
  v61 = 0;
  sub_21B6560(&v66);
  v30 = *((_DWORD *)v1 + 1133);
  v31 = (void *)(v30 - 12);
  if ( (int *)(v30 - 12) != &dword_28898C0 )
    v49 = (unsigned int *)(v30 - 4);
        v50 = __ldrex(v49);
      while ( __strex(v50 - 1, v49) );
      v50 = (*v49)--;
    if ( v50 <= 0 )
      j_j_j_j__ZdlPv_9(v31);
  v32 = (PerfTimer *)((char *)v1 + 4488);
  if ( *v26 )
    v33 = RakNet::BitStream::~BitStream(*v26);
    operator delete((void *)v33);
  *v26 = 0;
  v34 = *v29;
  if ( *v29 )
    do
      v35 = *(void **)v34;
      operator delete(v34);
      v34 = v35;
    while ( v35 );
  _aeabi_memclr4(*(_DWORD *)v32, 4 * *((_DWORD *)v1 + 1123));
  *((_DWORD *)v1 + 1125) = 0;
  *v29 = 0;
  v37 = *(char **)v32;
  if ( *(_DWORD *)v32 && (char *)v1 + 4512 != v37 )
    operator delete(v37);
  *((_DWORD *)v1 + 49) = &off_26D679C;
  *((_DWORD *)v1 + 1088) = &off_26D67C4;
  *((_DWORD *)v1 + 51) = &off_26D67B0;
  Core::FileStdStreamBuf::~FileStdStreamBuf((PerfTimer *)((char *)v1 + 208), (int)&off_26D67C4, v36);
  *((_DWORD *)v1 + 49) = &off_26D67DC;
  *((_DWORD *)v1 + 1088) = &off_26D67F0;
  *((_DWORD *)v1 + 50) = 0;
  sub_21B6560((_DWORD *)v1 + 1088);
  *(_QWORD *)&v38 = *(_QWORD *)((char *)v1 + 180);
  if ( v38 != v39 )
      if ( *v38 )
        operator delete[](*v38);
      *v38 = 0;
      ++v38;
    while ( v39 != v38 );
    v38 = (void **)*((_DWORD *)v1 + 45);
  if ( v38 )
    operator delete(v38);
  std::array<std::vector<PerfTimer::Node *,std::allocator<PerfTimer::Node *>>,14u>::~array((int)v1 + 12);
  if ( *(_DWORD *)v1 )
    operator delete(*(void **)v1);
  if ( _stack_chk_guard != v84 )
    _stack_chk_fail(_stack_chk_guard - v84);
  return v1;
}


RakNet *__fastcall PerfTimer::serialize(PerfTimer *this, const char **a2)
{
  PerfTimer *v2; // r5@1
  const char **v3; // r4@1
  RakNet::BitStream *v4; // r7@1
  RakNet::BitStream *v5; // r8@1
  RakNet::BitStream *v6; // r0@1
  RakNet::BitStream **v7; // r10@1
  unsigned int v8; // r3@1
  unsigned __int8 *v9; // r1@2
  RakNet::BitStream *v10; // r0@2
  RakNet::BitStream *v11; // r7@4
  RakNet::BitStream *v12; // r0@4
  unsigned int v13; // r3@4
  unsigned __int8 *v14; // r1@5
  RakNet::BitStream *v15; // r0@5
  RakNet::BitStream *v16; // r0@7
  RakNet::BitStream *v17; // r7@7
  unsigned int v18; // r3@7
  RakNet::BitStream *v19; // r0@8
  unsigned __int8 *v20; // r1@8
  RakNet::BitStream *v21; // r0@10
  RakNet::BitStream *v22; // r7@10
  unsigned int v23; // r3@10
  RakNet::BitStream *v24; // r0@11
  unsigned __int8 *v25; // r1@11
  RakNet::BitStream *v26; // r0@13
  RakNet::BitStream *v27; // r6@13
  unsigned int v28; // r3@13
  RakNet::BitStream *v29; // r0@14
  unsigned __int8 *v30; // r1@14
  RakNet::BitStream *v31; // r0@16
  RakNet::BitStream *v32; // r7@16
  unsigned int v33; // r3@16
  RakNet::BitStream *v34; // r0@17
  unsigned __int8 *v35; // r1@17
  int v36; // r6@20
  signed int v37; // r7@20
  RakNet *result; // r0@22
  __int16 v39; // [sp+0h] [bp-30h]@4
  __int16 v40; // [sp+2h] [bp-2Eh]@1
  unsigned __int8 v41; // [sp+4h] [bp-2Ch]@3
  RakNet *v42; // [sp+Ch] [bp-24h]@1

  v2 = this;
  v3 = a2;
  v42 = _stack_chk_guard;
  v4 = (RakNet::BitStream *)*((_DWORD *)this + 1130);
  v5 = (RakNet::BitStream *)(a2 + 4);
  v6 = (RakNet::BitStream *)PerfTimer::_getStringId(this, *a2);
  v40 = (signed __int16)v6;
  v7 = (RakNet::BitStream **)((char *)v2 + 4520);
  if ( RakNet::BitStream::IsNetworkOrderInternal(v6) )
  {
    v9 = (unsigned __int8 *)&v40;
    v10 = v4;
  }
  else
    RakNet::BitStream::ReverseBytes((RakNet::BitStream *)&v40, &v41, (unsigned __int8 *)2, v8);
    v9 = &v41;
  RakNet::BitStream::WriteBits(v10, v9, 0x10u, 1);
  v11 = *v7;
  v12 = (RakNet::BitStream *)PerfTimer::_getStringId(v2, v3[1]);
  v39 = (signed __int16)v12;
  if ( RakNet::BitStream::IsNetworkOrderInternal(v12) )
    v14 = (unsigned __int8 *)&v39;
    v15 = v11;
    RakNet::BitStream::ReverseBytes((RakNet::BitStream *)&v39, &v41, (unsigned __int8 *)2, v13);
    v14 = &v41;
  v16 = (RakNet::BitStream *)RakNet::BitStream::WriteBits(v15, v14, 0x10u, 1);
  v17 = *v7;
  if ( RakNet::BitStream::IsNetworkOrderInternal(v16) )
    v19 = v17;
    v20 = (unsigned __int8 *)(v3 + 2);
    RakNet::BitStream::ReverseBytes((RakNet::BitStream *)(v3 + 2), &v41, (unsigned __int8 *)4, v18);
    v20 = &v41;
  v21 = (RakNet::BitStream *)RakNet::BitStream::WriteBits(v19, v20, 0x20u, 1);
  v22 = *v7;
  if ( RakNet::BitStream::IsNetworkOrderInternal(v21) )
    v24 = v22;
    v25 = (unsigned __int8 *)v5;
    RakNet::BitStream::ReverseBytes(v5, &v41, (unsigned __int8 *)8, v23);
    v25 = &v41;
  v26 = (RakNet::BitStream *)RakNet::BitStream::WriteBits(v24, v25, 0x40u, 1);
  v27 = *v7;
  if ( RakNet::BitStream::IsNetworkOrderInternal(v26) )
    v29 = v27;
    v30 = (unsigned __int8 *)(v3 + 6);
    RakNet::BitStream::ReverseBytes((RakNet::BitStream *)(v3 + 6), &v41, (unsigned __int8 *)8, v28);
    v30 = &v41;
  v31 = (RakNet::BitStream *)RakNet::BitStream::WriteBits(v29, v30, 0x40u, 1);
  v32 = *v7;
  if ( RakNet::BitStream::IsNetworkOrderInternal(v31) )
    v34 = v32;
    v35 = (unsigned __int8 *)(v3 + 3);
    RakNet::BitStream::ReverseBytes((RakNet::BitStream *)(v3 + 3), &v41, (unsigned __int8 *)2, v33);
    v35 = &v41;
  RakNet::BitStream::WriteBits(v34, v35, 0x10u, 1);
  if ( *((_WORD *)v3 + 6) )
    v36 = 0;
    v37 = 0;
    do
    {
      PerfTimer::serialize(v2, (const char **)&v3[8][v36]);
      v36 += 40;
      ++v37;
    }
    while ( v37 < *((_WORD *)v3 + 6) );
  result = (RakNet *)(_stack_chk_guard - v42);
  if ( _stack_chk_guard != v42 )
    _stack_chk_fail(result);
  return result;
}


int __fastcall PerfTimer::allocate(PerfTimer *this, int a2)
{
  unsigned int v2; // r1@1
  unsigned int v3; // r1@1
  int v4; // r1@1
  int v5; // r2@1
  char *v6; // r1@1
  int v7; // r1@1
  int v8; // t1@1
  int v9; // r3@1
  int result; // r0@2

  v2 = (a2 - 1) | ((unsigned int)(a2 - 1) >> 1) | (((a2 - 1) | ((unsigned int)(a2 - 1) >> 1)) >> 2);
  v3 = v2 | (v2 >> 4) | ((v2 | (v2 >> 4)) >> 8);
  v4 = v3 | (v3 >> 16);
  v5 = v4 + 1;
  v6 = (char *)this + 12 * PerfTimer::MultiplyDeBruijnBitPosition[125613361 * ((v4 + 1) & (unsigned int)~v4) >> 27];
  v8 = *((_DWORD *)v6 + 3);
  v7 = (int)(v6 + 12);
  v9 = *(_DWORD *)(v7 + 4);
  if ( v9 == v8 )
  {
    result = j_j_j__ZN9PerfTimer13allocateNodesERSt6vectorIPNS_4NodeESaIS2_EEi((int)this, v7, v5);
  }
  else
    result = *(_DWORD *)(v9 - 4);
    *(_DWORD *)(v7 + 4) = v9 - 4;
  return result;
}


unsigned int __fastcall PerfTimer::_roundToPower2(PerfTimer *this, unsigned int a2)
{
  unsigned int v2; // r0@1
  unsigned int v3; // r0@1

  v2 = ((unsigned int)this - 1) | (((unsigned int)this - 1) >> 1) | ((((unsigned int)this - 1) | (((unsigned int)this - 1) >> 1)) >> 2);
  v3 = v2 | (v2 >> 4) | ((v2 | (v2 >> 4)) >> 8);
  return (v3 | (v3 >> 16)) + 1;
}


int __fastcall PerfTimer::allocateNodes(int a1, int a2, int a3)
{
  int v3; // r6@1
  int v4; // r7@1
  int v5; // r4@1
  int v6; // r11@1
  signed __int64 v7; // r0@1
  char *v8; // r0@5
  char *v9; // r3@6
  char **v10; // r1@8 OVERLAPPED
  char **v11; // r2@8
  signed int v12; // r4@12
  int *v13; // r8@12 OVERLAPPED
  int v14; // r5@12
  int v15; // r10@12
  _BYTE *v16; // r7@15 OVERLAPPED
  char *v17; // r6@15
  signed int v18; // r0@15
  unsigned int v19; // r1@15
  unsigned int v20; // r0@17
  unsigned int v21; // r9@17
  char *v22; // r0@23
  signed int v23; // r2@24
  int v24; // r8@24
  int v26; // [sp+4h] [bp-2Ch]@12
  void *ptr; // [sp+8h] [bp-28h]@8

  v3 = a3;
  v4 = a1;
  v5 = a3 << 10;
  v6 = a2;
  v7 = 40LL * (unsigned int)(a3 << 10);
  if ( !is_mul_ok(0x28u, a3 << 10) )
    HIDWORD(v7) = 1;
  if ( HIDWORD(v7) )
    LODWORD(v7) = -1;
  v8 = (char *)operator new[](v7);
  if ( v3 )
  {
    v9 = v8;
    do
    {
      *((_WORD *)v9 + 6) = 0;
      *((_DWORD *)v9 + 2) = 0;
      *(_DWORD *)v9 = 0;
      *((_DWORD *)v9 + 1) = 0;
      *((_DWORD *)v9 + 4) = 0;
      *((_DWORD *)v9 + 5) = 0;
      *((_DWORD *)v9 + 6) = 0;
      *((_DWORD *)v9 + 7) = 0;
      *((_DWORD *)v9 + 8) = 0;
      v9 += 40;
    }
    while ( v9 != &v8[40 * v5] );
  }
  ptr = v8;
  *(_QWORD *)&v10 = *(_QWORD *)(v4 + 184);
  if ( v10 == v11 )
    j__ZNSt6vectorISt10unique_ptrIA_N9PerfTimer4NodeESt14default_deleteIS3_EESaIS6_EE19_M_emplace_back_auxIJS6_EEEvDpOT_(
      (_QWORD *)(v4 + 180),
      (int *)&ptr);
    if ( ptr )
      operator delete[](ptr);
  else
    ptr = 0;
    *v10 = v8;
    *(_DWORD *)(v4 + 184) = v10 + 1;
  v12 = 1023;
  ptr = 0;
  v13 = *(int **)(v6 + 4);
  v26 = *(_DWORD *)(*(_DWORD *)(v4 + 184) - 4);
  v14 = v26 + 40 * v3;
  v15 = 40 * v3;
  do
    if ( v13 == *(int **)(v6 + 8) )
      v16 = *(_BYTE **)v6;
      v17 = 0;
      v18 = (signed int)v13 - *(_DWORD *)v6;
      v19 = v18 >> 2;
      if ( !(v18 >> 2) )
        v19 = 1;
      v20 = v19 + (v18 >> 2);
      v21 = v20;
      if ( 0 != v20 >> 30 )
        v21 = 0x3FFFFFFF;
      if ( v20 < v19 )
      if ( v21 )
      {
        if ( v21 >= 0x40000000 )
          sub_21E57F4();
        v22 = (char *)operator new(4 * v21);
        *(_QWORD *)(&v13 - 1) = *(_QWORD *)v6;
        v17 = v22;
      }
      v23 = (char *)v13 - v16;
      v24 = (int)&v17[(char *)v13 - v16];
      *(_DWORD *)&v17[v23] = v14;
      if ( v23 >> 2 )
        _aeabi_memmove4(v17, v16);
      v13 = (int *)(v24 + 4);
      if ( v16 )
        operator delete(v16);
      *(_DWORD *)v6 = v17;
      *(_DWORD *)(v6 + 4) = v13;
      *(_DWORD *)(v6 + 8) = &v17[4 * v21];
    else
      *v13 = v14;
      v13 = (int *)(*(_DWORD *)(v6 + 4) + 4);
    v14 += v15;
    --v12;
  while ( v12 );
  return v26;
}


char *__fastcall PerfTimer::_getIdleQueue(PerfTimer *this, int a2)
{
  return (char *)this + 12 * PerfTimer::MultiplyDeBruijnBitPosition[125613361 * (a2 & (unsigned int)-a2) >> 27] + 12;
}


int __fastcall PerfTimer::releaseNodeChildren(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  int v4; // r6@1
  int v5; // r7@2
  int v6; // r1@4
  int v8; // [sp+Ch] [bp-34h]@0

  v2 = a2;
  v3 = a1;
  v4 = *(_WORD *)(a2 + 12);
  if ( *(_WORD *)(a2 + 12) )
  {
    v5 = 0;
    do
    {
      PerfTimer::releaseNodeChildren(v3, *(_DWORD *)(v2 + 32) + 8 * (4 * (unsigned __int16)v5 + v5));
      ++v5;
    }
    while ( (unsigned __int16)v5 != v4 );
  }
  LOWORD(v8) = 0;
  *(_DWORD *)v2 = 0;
  *(_DWORD *)(v2 + 4) = 0;
  *(_DWORD *)(v2 + 8) = 0;
  *(_DWORD *)(v2 + 12) = v8;
  v6 = v2 + 16;
  *(_DWORD *)v6 = 0;
  *(_DWORD *)(v6 + 4) = 0;
  *(_DWORD *)(v6 + 8) = 0;
  *(_DWORD *)(v6 + 12) = 0;
  *(_DWORD *)(v6 + 16) = 0;
  return j_j_j__ZN9PerfTimer10rawReleaseEPNS_4NodeEi(v3, v2, *(_WORD *)(v2 + 12));
}


int __fastcall PerfTimer::_getMostSignificantBit(PerfTimer *this, int a2)
{
  return PerfTimer::MultiplyDeBruijnBitPosition[125613361 * ((unsigned int)this & -(signed int)this) >> 27];
}


int __fastcall PerfTimer::pop(PerfTimer *this)
{
  PerfTimer *v1; // r4@1
  int result; // r0@1
  int v9; // r5@3

  v1 = this;
  result = *((_DWORD *)this + 48);
  if ( result )
  {
    *((_DWORD *)v1 + 48) = result - 1;
    _R5 = *(_DWORD *)(*((_DWORD *)v1 + 1) - 4);
    _R0 = getTimeS();
    __asm
    {
      VLDR            D0, [R5,#0x18]
      VMOV            D1, R0, R1
      VSUB.F64        D0, D1, D0
      VSTR            D0, [R5,#0x10]
    }
    if ( !*((_DWORD *)v1 + 48) )
      ++*((_DWORD *)v1 + 1132);
      v9 = *(_DWORD *)(*((_DWORD *)v1 + 1) - 4);
      PerfTimer::serialize(v1, *(const char ***)(*((_DWORD *)v1 + 1) - 4));
      PerfTimer::releaseNodeChildren((int)v1, v9);
    result = *((_DWORD *)v1 + 1) - 4;
    *((_DWORD *)v1 + 1) = result;
  }
  return result;
}


void __fastcall PerfTimer::init(int *a1)
{
  int *v1; // r4@1
  int *v2; // r0@1
  void *v3; // r0@5
  unsigned int *v4; // r2@7
  signed int v5; // r1@9
  int v6; // [sp+0h] [bp-50h]@3
  int v7; // [sp+4h] [bp-4Ch]@3
  char v8; // [sp+8h] [bp-48h]@3
  void (*v9)(void); // [sp+10h] [bp-40h]@3
  int v10; // [sp+1Ch] [bp-34h]@1
  int v11; // [sp+20h] [bp-30h]@1
  char v12; // [sp+24h] [bp-2Ch]@1
  void (*v13)(void); // [sp+2Ch] [bp-24h]@1
  int v14; // [sp+38h] [bp-18h]@1

  v1 = a1;
  EntityInteraction::setInteractText(&PerfTimer::mPath, a1);
  v2 = sub_21E8AF4(&v14, v1);
  sub_21E7408((const void **)v2, "/profiler", 9u);
  v10 = v14;
  v11 = *(_DWORD *)(v14 - 12);
  Core::FileSystem::deleteDirectoryAndContentsRecursively((int)&v12, (__int64 *)&v10);
  if ( v13 )
    v13();
  v6 = v14;
  v7 = -1;
  Core::FileSystem::createDirectoryRecursively((int)&v8, (__int64 *)&v6);
  if ( v9 )
    v9();
  v3 = (void *)(v14 - 12);
  if ( (int *)(v14 - 12) != &dword_28898C0 )
  {
    v4 = (unsigned int *)(v14 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v5 = __ldrex(v4);
      while ( __strex(v5 - 1, v4) );
    }
    else
      v5 = (*v4)--;
    if ( v5 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  }
}


int __fastcall PerfTimer::PerfTimer(int a1, pthread_t a2)
{
  pthread_t v2; // r10@1
  int v3; // r4@1
  double v4; // r0@1
  unsigned int v5; // r0@1
  int v6; // r6@3
  void *v7; // r5@3
  RakNet::BitStream *v8; // r5@4
  RakNet::BitStream *v9; // r0@4
  RakNet::BitStream *v10; // r0@5
  signed int v11; // r11@6
  int v12; // r9@7
  int v13; // r6@7
  int v14; // r7@8
  char *v15; // r0@8
  char *v16; // r5@8
  signed int v17; // r7@8
  void *v18; // r0@10
  BackgroundWorker *v19; // r0@14
  int *v20; // r0@14

  v2 = a2;
  v3 = a1;
  _aeabi_memclr4(a1, 196);
  sub_21B6308(v3 + 4352);
  *(_DWORD *)(v3 + 4352) = &off_26D3AF0;
  *(_DWORD *)(v3 + 4464) = 0;
  *(_WORD *)(v3 + 4468) = 0;
  *(_DWORD *)(v3 + 4484) = 0;
  *(_DWORD *)(v3 + 4480) = 0;
  *(_DWORD *)(v3 + 4476) = 0;
  *(_DWORD *)(v3 + 4472) = 0;
  Core::FileStream::FileStream((Core::FileStream *)(v3 + 196), (int)off_26D81A4);
  *(_DWORD *)(v3 + 196) = &off_26D8170;
  *(_DWORD *)(v3 + 4352) = &off_26D8198;
  *(_DWORD *)(v3 + 204) = &off_26D8184;
  *(_DWORD *)(v3 + 4496) = 0;
  *(_DWORD *)(v3 + 4500) = 0;
  *(_DWORD *)(v3 + 4504) = 1065353216;
  LODWORD(v4) = v3 + 4504;
  *(_DWORD *)(v3 + 4508) = 0;
  v5 = sub_21E6254(v4);
  *(_DWORD *)(v3 + 4492) = v5;
  if ( v5 == 1 )
  {
    v7 = (void *)(v3 + 4512);
    *(_DWORD *)(v3 + 4512) = 0;
  }
  else
    if ( v5 >= 0x40000000 )
      sub_21E57F4();
    v6 = 4 * v5;
    v7 = operator new(4 * v5);
    _aeabi_memclr4(v7, v6);
  *(_DWORD *)(v3 + 4488) = v7;
  *(_DWORD *)(v3 + 4516) = 0;
  *(_DWORD *)(v3 + 4520) = 0;
  *(_DWORD *)(v3 + 4524) = v2;
  *(_DWORD *)(v3 + 4528) = 0;
  *(_DWORD *)(v3 + 4532) = &unk_28898CC;
  v8 = (RakNet::BitStream *)operator new(0x114u);
  RakNet::BitStream::BitStream(v8);
  v9 = *(RakNet::BitStream **)(v3 + 4520);
  *(_DWORD *)(v3 + 4520) = v8;
  if ( v9 )
    v10 = RakNet::BitStream::~BitStream(v9);
    operator delete((void *)v10);
  v11 = -168;
  do
    v12 = v3 + v11;
    v13 = *(_DWORD *)(v3 + v11 + 180);
    if ( !((unsigned int)((*(_DWORD *)(v3 + v11 + 188) - v13) >> 2) >> 11) )
    {
      v14 = *(_DWORD *)(v12 + 184);
      v15 = (char *)operator new(0x2000u);
      v16 = v15;
      v17 = v14 - v13;
      if ( v17 )
        _aeabi_memmove4(v15, v13);
      v18 = *(void **)(v12 + 180);
      if ( v18 )
        operator delete(v18);
      *(_DWORD *)(v12 + 180) = v16;
      *(_DWORD *)(v12 + 184) = &v16[4 * (v17 >> 2)];
      *(_DWORD *)(v12 + 188) = v16 + 0x2000;
    }
    v11 += 12;
  while ( v11 );
  v19 = (BackgroundWorker *)BackgroundWorker::getWorkerForThread(v2);
  v20 = (int *)BackgroundWorker::getName(v19);
  EntityInteraction::setInteractText((int *)(v3 + 4532), v20);
  return v3;
}


int __fastcall PerfTimer::_getStringId(PerfTimer *this, const char *a2)
{
  PerfTimer *v2; // r10@1
  unsigned int v3; // r7@1
  const char *v4; // r9@1
  int v5; // r11@1
  int v6; // r1@1
  char *v7; // r8@1
  int *v8; // r6@1
  int v9; // r4@2
  int v10; // r0@2
  int v11; // r5@4
  int v12; // r4@7
  char *v13; // r10@7
  bool v14; // zf@8
  int v15; // r8@13
  int v16; // r0@14
  int v17; // r5@15
  bool v18; // zf@18
  _DWORD *v19; // r0@23
  char *v21; // [sp+0h] [bp-28h]@13

  v2 = this;
  v3 = *((_DWORD *)this + 1123);
  v4 = a2;
  v5 = (unsigned int)a2 % v3;
  v6 = *((_DWORD *)this + 1122);
  v7 = (char *)this + 4488;
  v8 = *(int **)(v6 + 4 * v5);
  if ( !v8 )
  {
    v12 = *((_DWORD *)this + 1129);
    v13 = (char *)this + 4516;
LABEL_23:
    v19 = operator new(0xCu);
    *v19 = 0;
    v19[1] = v4;
    v19[2] = 0;
    v16 = std::_Hashtable<char const*,std::pair<char const* const,int>,std::allocator<std::pair<char const* const,int>>,std::__detail::_Select1st,std::equal_to<char const*>,std::hash<char const*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::_M_insert_unique_node(
            (int)v7,
            v5,
            (unsigned int)v4,
            (int)v19);
    goto LABEL_24;
  }
  v9 = *v8;
  v10 = *(_DWORD *)(v6 + 4 * v5);
  while ( *(const char **)(v9 + 4) != v4 )
    v11 = *(_DWORD *)v9;
    if ( *(_DWORD *)v9 )
    {
      v10 = v9;
      v9 = *(_DWORD *)v9;
      if ( *(_DWORD *)(v11 + 4) % v3 == v5 )
        continue;
    }
    goto LABEL_12;
  v14 = v10 == 0;
  if ( v10 )
    v10 = *(_DWORD *)v10;
    v14 = v10 == 0;
  if ( !v14 )
    return (unsigned __int16)*(_DWORD *)(v10 + 8);
LABEL_12:
  v12 = *((_DWORD *)v2 + 1129);
  v13 = (char *)v2 + 4516;
    goto LABEL_23;
  v21 = v7;
  v15 = *v8;
  while ( 1 )
    v16 = *(_DWORD *)(v15 + 4);
    if ( (const char *)v16 == v4 )
      break;
    v17 = *(_DWORD *)v15;
    if ( !*(_DWORD *)v15 )
      v7 = v21;
      goto LABEL_23;
    v8 = (int *)v15;
    v15 = *(_DWORD *)v15;
    if ( *(_DWORD *)(v17 + 4) % v3 != v5 )
  v18 = v8 == 0;
  v7 = v21;
  if ( v8 )
    v16 = *v8;
    v18 = *v8 == 0;
  if ( v18 )
LABEL_24:
  *(_DWORD *)(v16 + 8) = v12;
  ++*(_DWORD *)v13;
  return (unsigned __int16)v12;
}


int __fastcall PerfTimer::push(PerfTimer *this, const char *a2, const char *a3, int a4)
{
  PerfTimer *v4; // r4@1
  const char *v5; // r10@1
  int v6; // r11@1
  const char *v7; // r9@1
  int result; // r0@1
  int v9; // r0@3
  int v10; // r6@4
  int v11; // r8@6
  int v12; // r0@6
  unsigned int v13; // r1@7
  int v14; // r6@7
  unsigned int v15; // r1@7
  int v16; // r1@7
  int v17; // r2@7
  int v18; // r1@7
  int v19; // r1@7
  int v20; // t1@7
  int v21; // r11@7
  int v22; // r7@7
  int v23; // r0@8
  int v24; // r2@9
  int v25; // r0@10
  char *v31; // r5@14 OVERLAPPED
  __int64 v32; // r0@14
  int v33; // r0@18
  int v34; // r7@18
  int v35; // r6@18
  char *v37; // r5@18
  int v38; // r0@18
  int v39; // r0@18
  int v40; // r1@18
  int v41; // r2@18
  int *v42; // r0@18
  int v43; // r8@18
  _BYTE *v44; // r6@21
  signed int v45; // r1@21
  unsigned int v46; // r2@21
  unsigned int v47; // r1@23
  unsigned int v48; // r7@23
  int v49; // r8@30
  int v50; // r8@32
  int v51; // r0@34
  _BYTE *v52; // r8@35
  signed int v53; // r1@35
  unsigned int v54; // r2@35
  unsigned int v55; // r1@37
  unsigned int v56; // r7@37
  char *v57; // r6@44
  int v58; // r6@46 OVERLAPPED

  v4 = this;
  v5 = a2;
  v6 = a4;
  v7 = a3;
  result = *((_DWORD *)this + 48);
  if ( !PerfTimer::mEnabled )
  {
    if ( !result )
      return result;
LABEL_6:
    v11 = *((_DWORD *)v4 + 1);
    v12 = *(_DWORD *)(v11 - 4);
    if ( *(_WORD *)(v12 + 12) )
    {
      v13 = *(_WORD *)(v12 + 12) | ((unsigned int)*(_WORD *)(v12 + 12) >> 1) | ((*(_WORD *)(v12 + 12) | ((unsigned int)*(_WORD *)(v12 + 12) >> 1)) >> 2);
      v14 = a4;
      v15 = v13 | (v13 >> 4) | ((v13 | (v13 >> 4)) >> 8);
      v16 = v15 | (v15 >> 16);
      v17 = v16 + 1;
      v18 = (int)v4 + 12 * PerfTimer::MultiplyDeBruijnBitPosition[125613361 * ((v16 + 1) & (unsigned int)~v16) >> 27];
      v20 = *(_DWORD *)(v18 + 12);
      v19 = v18 + 12;
      v21 = *(_DWORD *)(v12 + 32);
      v22 = *(_DWORD *)(v19 + 4);
      if ( v22 == v20 )
      {
        v23 = PerfTimer::allocateNodes((int)v4, v19, v17);
      }
      else
        v23 = *(_DWORD *)(v22 - 4);
        *(_DWORD *)(v19 + 4) = v22 - 4;
      *(_DWORD *)(*(_DWORD *)(v11 - 4) + 32) = v23;
      _aeabi_memcpy8(*(_DWORD *)(*(_DWORD *)(v11 - 4) + 32), v21, 40 * *(_WORD *)(*(_DWORD *)(v11 - 4) + 12));
      PerfTimer::rawRelease((int)v4, v21, *(_WORD *)(*(_DWORD *)(v11 - 4) + 12));
      v6 = v14;
    }
    else
      v24 = *((_DWORD *)v4 + 4);
      if ( v24 == *((_DWORD *)v4 + 3) )
        v25 = PerfTimer::allocateNodes((int)v4, (int)v4 + 12, 1);
        v25 = *(_DWORD *)(v24 - 4);
        *((_DWORD *)v4 + 4) = v24 - 4;
      *(_DWORD *)(*(_DWORD *)(v11 - 4) + 32) = v25;
    v33 = *(_DWORD *)(v11 - 4);
    v34 = *(_DWORD *)(v33 + 32);
    v35 = *(_WORD *)(v33 + 12);
    _R0 = getTimeS();
    __asm { VMOV            D0, R0, R1 }
    v37 = 0;
    *(_DWORD *)(v34 + 40 * v35) = v5;
    v38 = v34 + 40 * v35;
    *(_DWORD *)(v38 + 4) = v7;
    *(_DWORD *)(v38 + 8) = v6;
    *(_WORD *)(v38 + 12) = 0;
    *(_DWORD *)(v38 + 16) = 0;
    *(_DWORD *)(v38 + 20) = 0;
    __asm { VSTR            D0, [R0,#0x18] }
    *(_DWORD *)(v38 + 32) = 0;
    v39 = *(_DWORD *)(v11 - 4);
    v40 = *(_WORD *)(v39 + 12);
    v41 = *(_DWORD *)(v39 + 32);
    *(_WORD *)(v39 + 12) = v40 + 1;
    v42 = (int *)*(_QWORD *)((char *)v4 + 4);
    v43 = v41 + 40 * v40;
    if ( v42 != (int *)(*(_QWORD *)((char *)v4 + 4) >> 32) )
      *v42 = v43;
      goto LABEL_20;
    v44 = *(_BYTE **)v4;
    v45 = (signed int)v42 - *(_DWORD *)v4;
    v46 = v45 >> 2;
    if ( 0 == v45 >> 2 )
      v46 = 1;
    v47 = v46 + (v45 >> 2);
    v48 = v47;
    if ( 0 != v47 >> 30 )
      v48 = 0x3FFFFFFF;
    if ( v47 < v46 )
    if ( v48 )
      if ( v48 >= 0x40000000 )
        goto LABEL_52;
      v37 = (char *)operator new(4 * v48);
      v42 = (int *)(*(_QWORD *)v4 >> 32);
      v44 = (_BYTE *)*(_QWORD *)v4;
    *(_DWORD *)&v37[(char *)v42 - v44] = v43;
    v49 = (int)&v37[(char *)v42 - v44];
    if ( ((char *)v42 - v44) >> 2 )
      _aeabi_memmove4(v37, v44);
    v50 = v49 + 4;
    if ( v44 )
      operator delete(v44);
    v51 = (int)&v37[4 * v48];
    *(_DWORD *)v4 = v37;
    *((_DWORD *)v4 + 1) = v50;
    goto LABEL_49;
  }
  if ( result )
    goto LABEL_6;
  v9 = *((_DWORD *)v4 + 4);
  if ( v9 == *((_DWORD *)v4 + 3) )
    v10 = PerfTimer::allocateNodes((int)v4, (int)v4 + 12, 1);
  else
    v10 = *(_DWORD *)(v9 - 4);
    *((_DWORD *)v4 + 4) = v9 - 4;
  _R0 = getTimeS();
  __asm { VMOV            D0, R0, R1 }
  v31 = 0;
  *(_DWORD *)v10 = v5;
  *(_DWORD *)(v10 + 4) = v7;
  *(_DWORD *)(v10 + 8) = v6;
  *(_WORD *)(v10 + 12) = 0;
  *(_DWORD *)(v10 + 16) = 0;
  *(_DWORD *)(v10 + 20) = 0;
  __asm { VSTR            D0, [R6,#0x18] }
  *(_DWORD *)(v10 + 32) = 0;
  v32 = *(_QWORD *)((char *)v4 + 4);
  if ( (_DWORD)v32 == HIDWORD(v32) )
    v52 = *(_BYTE **)v4;
    v53 = v32 - *(_DWORD *)v4;
    v54 = v53 >> 2;
    if ( 0 == v53 >> 2 )
      v54 = 1;
    v55 = v54 + (v53 >> 2);
    v56 = v55;
    if ( 0 != v55 >> 30 )
      v56 = 0x3FFFFFFF;
    if ( v55 < v54 )
    if ( !v56 )
      goto LABEL_44;
    if ( v56 < 0x40000000 )
      v31 = (char *)operator new(4 * v56);
      LODWORD(v32) = *(_QWORD *)v4 >> 32;
      v52 = (_BYTE *)*(_QWORD *)v4;
LABEL_44:
      *(_DWORD *)&v31[v32 - (_DWORD)v52] = v10;
      v57 = &v31[v32 - (_DWORD)v52];
      if ( ((signed int)v32 - (signed int)v52) >> 2 )
        _aeabi_memmove4(v31, v52);
      v58 = (int)(v57 + 4);
      if ( v52 )
        operator delete(v52);
      v51 = (int)&v31[4 * v56];
      *(_QWORD *)v4 = *(_QWORD *)&v31;
LABEL_49:
      *((_DWORD *)v4 + 2) = v51;
      goto LABEL_50;
LABEL_52:
    sub_21E57F4();
  *(_DWORD *)v32 = v10;
LABEL_20:
  *((_DWORD *)v4 + 1) += 4;
LABEL_50:
  result = *((_DWORD *)v4 + 48) + 1;
  *((_DWORD *)v4 + 48) = result;
  return result;
}
