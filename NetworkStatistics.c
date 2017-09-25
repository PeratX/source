

int __fastcall NetworkStatistics::dataReceivedFrom(int result, int a2, _DWORD *a3)
{
  *(_DWORD *)(result + 6824) += *(_DWORD *)(*a3 - 12);
  return result;
}


int __fastcall NetworkStatistics::packetSentTo(NetworkStatistics *this, const NetworkIdentifier *a2, const Packet *a3, const BinaryStream *a4)
{
  NetworkStatistics *v4; // r4@1
  const BinaryStream *v5; // r5@1
  int v6; // r0@1
  const BinaryStream *v7; // r5@2
  int v8; // r0@3
  _DWORD *v9; // t1@3
  int result; // r0@4

  v4 = this;
  v5 = a4;
  v6 = (*(int (__fastcall **)(const Packet *))(*(_DWORD *)a3 + 8))(a3);
  if ( v6 < 106 )
  {
    v8 = (int)v4 + 20 * v6;
    ++*(_DWORD *)(v8 + 4272);
    v9 = (_DWORD *)*((_DWORD *)v5 + 3);
    v7 = (const BinaryStream *)((char *)v5 + 12);
    *(_DWORD *)(v8 + 4276) += *(_DWORD *)(*v9 - 12);
  }
  else
  result = *(_DWORD *)(**(_DWORD **)v7 - 12) + *((_DWORD *)v4 + 1703);
  *((_DWORD *)v4 + 1703) = result;
  return result;
}


unsigned int __fastcall NetworkStatistics::tick(NetworkStatistics *this)
{
  NetworkStatistics *v1; // r8@1
  unsigned int result; // r0@1
  int v10; // r0@2
  int *v11; // r4@2
  NetworkStatistics *v12; // r6@2
  void **v13; // r9@2
  int v14; // r2@3
  int v15; // r3@3
  int v16; // r7@3
  int v17; // r7@3
  char *v18; // r5@3
  void *v19; // r10@4
  unsigned int v20; // r2@4
  unsigned int v21; // r1@6
  unsigned int v22; // r11@6
  signed int v23; // r2@14
  int v24; // r1@14
  int v25; // r3@14
  int v26; // r7@14
  int v27; // r12@14
  int v28; // r6@14
  int v29; // r0@14
  int v30; // r1@23
  int v31; // r4@24
  int v32; // r5@24
  int v33; // r6@24
  int v34; // r7@24
  int v35; // r2@24
  int v36; // r0@24
  int v37; // r3@24
  int *v38; // [sp+4h] [bp-3Ch]@4

  v1 = this;
  _R1 = 1717986919;
  _R0 = *((_DWORD *)this + 2) + 1;
  *((_DWORD *)v1 + 2) = _R0;
  __asm { SMMUL.W         R1, R0, R1 }
  result = _R0 - 20 * (((signed int)_R1 >> 3) + (_R1 >> 31));
  if ( !result )
  {
    v10 = *((_DWORD *)v1 + 1708);
    v11 = (int *)((char *)v1 + 6832);
    v12 = (NetworkStatistics *)((char *)v1 + 6812);
    v13 = (void **)((char *)v1 + 6828);
    if ( v10 == *((_DWORD *)v1 + 1709) )
    {
      v19 = *v13;
      v38 = (int *)((char *)v1 + 6832);
      v20 = (v10 - (signed int)*v13) >> 4;
      if ( !v20 )
        v20 = 1;
      v21 = v20 + ((v10 - (signed int)v19) >> 4);
      v22 = v20 + ((v10 - (signed int)v19) >> 4);
      if ( 0 != v21 >> 28 )
        v22 = 0xFFFFFFF;
      if ( v21 < v20 )
      if ( v22 )
      {
        if ( v22 >= 0x10000000 )
          sub_21E57F4();
        v18 = (char *)j_operator new(16 * v22);
        v19 = *v13;
        v10 = *v38;
      }
      else
        v18 = 0;
      v23 = v10 - (_DWORD)v19;
      v24 = *(_DWORD *)v12;
      v25 = *((_DWORD *)v1 + 1704);
      v26 = *((_DWORD *)v1 + 1705);
      v27 = *((_DWORD *)v1 + 1706);
      v28 = (int)&v18[v10 - (_DWORD)v19];
      v29 = v28 + 4;
      *(_DWORD *)&v18[v23] = v24;
      *(_DWORD *)v29 = v25;
      *(_DWORD *)(v29 + 4) = v26;
      *(_DWORD *)(v29 + 8) = v27;
      if ( 0 != v23 >> 4 )
        j___aeabi_memmove4_0((int)v18, (int)v19);
      v17 = v28 + 16;
      if ( v19 )
        j_operator delete(v19);
      v11 = (int *)((char *)v1 + 6832);
      *v13 = v18;
      *v38 = v17;
      *((_DWORD *)v1 + 1709) = &v18[16 * v22];
    }
    else
      v14 = *((_DWORD *)v1 + 1704);
      v15 = *((_DWORD *)v1 + 1705);
      v16 = *((_DWORD *)v1 + 1706);
      *(_DWORD *)v10 = *(_DWORD *)v12;
      *(_DWORD *)(v10 + 4) = v14;
      *(_DWORD *)(v10 + 8) = v15;
      *(_DWORD *)(v10 + 12) = v16;
      v17 = *v11 + 16;
      *v11 = v17;
      v18 = (char *)*v13;
    *((_DWORD *)v1 + 1706) = 0;
    *((_DWORD *)v1 + 1705) = 0;
    *((_DWORD *)v1 + 1704) = 0;
    *((_DWORD *)v1 + 1703) = 0;
    if ( (unsigned int)((v17 - (signed int)v18) >> 4) >= 0xB )
      if ( (char *)v17 != v18 + 16 )
        j___aeabi_memmove4_0((int)v18, (int)(v18 + 16));
        v17 = *v11;
      *v11 = v17 - 16;
    v30 = (int)v1 + 4268;
    do
      v31 = *(_DWORD *)(v30 + 4);
      v32 = *(_DWORD *)(v30 + 8);
      v33 = *(_DWORD *)(v30 + 12);
      v34 = *(_DWORD *)(v30 + 16);
      v35 = (int)v1 + 20 * *(_DWORD *)v30 + 2148;
      *(_DWORD *)v35 = *(_DWORD *)v30;
      *(_DWORD *)(v35 + 4) = v31;
      *(_DWORD *)(v35 + 8) = v32;
      *(_DWORD *)(v35 + 12) = v33;
      *(_DWORD *)(v35 + 16) = v34;
      v36 = *(_QWORD *)v30;
      v37 = (int)v1 + 20 * v36;
      *(_DWORD *)(v37 + 32) += *(_QWORD *)v30 >> 32;
      *(_DWORD *)(v37 + 36) += *(_DWORD *)(v30 + 8);
      *(_DWORD *)(v37 + 40) += *(_DWORD *)(v30 + 12);
      *(_DWORD *)(v37 + 44) += *(_DWORD *)(v30 + 16);
      *(_DWORD *)v30 = v36;
      result = 0;
      *(_DWORD *)(v30 + 16) = 0;
      *(_DWORD *)(v30 + 12) = 0;
      *(_DWORD *)(v30 + 8) = 0;
      *(_DWORD *)(v30 + 4) = 0;
      v30 += 20;
    while ( (NetworkStatistics *)v30 != (NetworkStatistics *)((char *)v1 + 6388) );
  }
  return result;
}


unsigned int __fastcall NetworkStatistics::getAverageLast10Seconds(NetworkStatistics *this, int a2)
{
  NetworkStatistics *v2; // r4@1
  int v3; // r2@1
  unsigned int result; // r0@1
  int v5; // r12@1
  unsigned int v6; // r5@2
  unsigned int v7; // r6@2
  unsigned int v8; // r7@2
  unsigned int v9; // r0@2
  int v10; // r3@2
  int v11; // r1@3
  unsigned int v12; // r8@4

  v2 = this;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  v3 = *(_DWORD *)(a2 + 6832);
  result = 6828;
  v5 = *(_DWORD *)(a2 + 6828);
  if ( v5 != v3 )
  {
    v6 = 0;
    v7 = 0;
    v8 = 0;
    v9 = 0;
    v10 = *(_DWORD *)(a2 + 6828);
    do
    {
      v9 += *(_DWORD *)v10;
      *(_DWORD *)v2 = v9;
      v8 += *(_DWORD *)(v10 + 4);
      *((_DWORD *)v2 + 1) = v8;
      v7 += *(_DWORD *)(v10 + 8);
      *((_DWORD *)v2 + 2) = v7;
      v11 = *(_DWORD *)(v10 + 12);
      v10 += 16;
      v6 += v11;
      *((_DWORD *)v2 + 3) = v6;
    }
    while ( v10 != v3 );
    v12 = (v3 - v5) >> 4;
    *(_DWORD *)v2 = v9 / v12;
    *((_DWORD *)v2 + 1) = v8 / v12;
    *((_DWORD *)v2 + 2) = v7 / v12;
    result = v6 / v12;
    *((_DWORD *)v2 + 3) = v6 / v12;
  }
  return result;
}


int __fastcall NetworkStatistics::packetReceivedFrom(NetworkStatistics *this, const NetworkIdentifier *a2, const Packet *a3, const BinaryStream *a4)
{
  NetworkStatistics *v4; // r4@1
  const BinaryStream *v5; // r5@1
  int v6; // r0@1
  const BinaryStream *v7; // r5@2
  int v8; // r0@3
  _DWORD *v9; // t1@3
  int result; // r0@4

  v4 = this;
  v5 = a4;
  v6 = (*(int (__fastcall **)(const Packet *))(*(_DWORD *)a3 + 8))(a3);
  if ( v6 < 106 )
  {
    v8 = (int)v4 + 20 * v6;
    ++*(_DWORD *)(v8 + 4280);
    v9 = (_DWORD *)*((_DWORD *)v5 + 3);
    v7 = (const BinaryStream *)((char *)v5 + 12);
    *(_DWORD *)(v8 + 4284) += *(_DWORD *)(*v9 - 12);
  }
  else
  result = *(_DWORD *)(**(_DWORD **)v7 - 12) + *((_DWORD *)v4 + 1705);
  *((_DWORD *)v4 + 1705) = result;
  return result;
}


int __fastcall NetworkStatistics::NetworkStatistics(__int64 a1)
{
  int v1; // r4@1
  int v2; // r5@1
  signed int v3; // r1@2
  int v4; // r0@5
  int v5; // r0@5
  int *v6; // r6@5
  void *v7; // r0@6
  unsigned int *v8; // r2@7
  int v9; // r0@15
  signed int v10; // r0@17
  unsigned int v11; // r1@17
  unsigned int v12; // r0@19
  unsigned int v13; // r7@19
  char *v14; // r5@24
  void *v15; // r9@24
  signed int v16; // r2@24
  int v17; // r1@24
  signed int v18; // r8@24
  int v19; // r8@26
  _DWORD *v21; // [sp+4h] [bp-4Ch]@1
  int *v22; // [sp+8h] [bp-48h]@1
  void **v23; // [sp+10h] [bp-40h]@1
  int v24; // [sp+18h] [bp-38h]@6
  int v25; // [sp+1Ch] [bp-34h]@5

  v1 = a1;
  LODWORD(a1) = &off_2719F00;
  *(_QWORD *)v1 = a1;
  j___aeabi_memclr4_0(v1 + 8, 40);
  v2 = 0;
  *(_DWORD *)(v1 + 56) = 0;
  *(_DWORD *)(v1 + 60) = 0;
  *(_DWORD *)(v1 + 48) = 0;
  *(_DWORD *)(v1 + 52) = 0;
  *(_DWORD *)(v1 + 80) = 0;
  *(_DWORD *)(v1 + 84) = 0;
  *(_DWORD *)(v1 + 72) = 0;
  *(_DWORD *)(v1 + 76) = 0;
  *(_DWORD *)(v1 + 64) = 0;
  *(_DWORD *)(v1 + 68) = 0;
  *(_DWORD *)(v1 + 96) = 0;
  *(_DWORD *)(v1 + 100) = 0;
  *(_DWORD *)(v1 + 88) = 0;
  *(_DWORD *)(v1 + 92) = 0;
  *(_DWORD *)(v1 + 120) = 0;
  *(_DWORD *)(v1 + 124) = 0;
  *(_DWORD *)(v1 + 112) = 0;
  *(_DWORD *)(v1 + 116) = 0;
  *(_DWORD *)(v1 + 104) = 0;
  *(_DWORD *)(v1 + 108) = 0;
  *(_DWORD *)(v1 + 136) = 0;
  *(_DWORD *)(v1 + 140) = 0;
  *(_DWORD *)(v1 + 128) = 0;
  *(_DWORD *)(v1 + 132) = 0;
  *(_DWORD *)(v1 + 160) = 0;
  *(_DWORD *)(v1 + 164) = 0;
  *(_DWORD *)(v1 + 152) = 0;
  *(_DWORD *)(v1 + 156) = 0;
  *(_DWORD *)(v1 + 144) = 0;
  *(_DWORD *)(v1 + 148) = 0;
  *(_DWORD *)(v1 + 176) = 0;
  *(_DWORD *)(v1 + 180) = 0;
  *(_DWORD *)(v1 + 168) = 0;
  *(_DWORD *)(v1 + 172) = 0;
  *(_DWORD *)(v1 + 200) = 0;
  *(_DWORD *)(v1 + 204) = 0;
  *(_DWORD *)(v1 + 192) = 0;
  *(_DWORD *)(v1 + 196) = 0;
  *(_DWORD *)(v1 + 184) = 0;
  *(_DWORD *)(v1 + 188) = 0;
  *(_DWORD *)(v1 + 216) = 0;
  *(_DWORD *)(v1 + 220) = 0;
  *(_DWORD *)(v1 + 208) = 0;
  *(_DWORD *)(v1 + 212) = 0;
  *(_DWORD *)(v1 + 240) = 0;
  *(_DWORD *)(v1 + 244) = 0;
  *(_DWORD *)(v1 + 232) = 0;
  *(_DWORD *)(v1 + 236) = 0;
  *(_DWORD *)(v1 + 224) = 0;
  *(_DWORD *)(v1 + 228) = 0;
  *(_DWORD *)(v1 + 256) = 0;
  *(_DWORD *)(v1 + 260) = 0;
  *(_DWORD *)(v1 + 248) = 0;
  *(_DWORD *)(v1 + 252) = 0;
  *(_DWORD *)(v1 + 280) = 0;
  *(_DWORD *)(v1 + 284) = 0;
  *(_DWORD *)(v1 + 272) = 0;
  *(_DWORD *)(v1 + 276) = 0;
  *(_DWORD *)(v1 + 264) = 0;
  *(_DWORD *)(v1 + 268) = 0;
  *(_DWORD *)(v1 + 296) = 0;
  *(_DWORD *)(v1 + 300) = 0;
  *(_DWORD *)(v1 + 288) = 0;
  *(_DWORD *)(v1 + 292) = 0;
  *(_DWORD *)(v1 + 320) = 0;
  *(_DWORD *)(v1 + 324) = 0;
  *(_DWORD *)(v1 + 312) = 0;
  *(_DWORD *)(v1 + 316) = 0;
  *(_DWORD *)(v1 + 304) = 0;
  *(_DWORD *)(v1 + 308) = 0;
  *(_DWORD *)(v1 + 336) = 0;
  *(_DWORD *)(v1 + 340) = 0;
  *(_DWORD *)(v1 + 328) = 0;
  *(_DWORD *)(v1 + 332) = 0;
  *(_DWORD *)(v1 + 360) = 0;
  *(_DWORD *)(v1 + 364) = 0;
  *(_DWORD *)(v1 + 352) = 0;
  *(_DWORD *)(v1 + 356) = 0;
  *(_DWORD *)(v1 + 344) = 0;
  *(_DWORD *)(v1 + 348) = 0;
  *(_DWORD *)(v1 + 376) = 0;
  *(_DWORD *)(v1 + 380) = 0;
  *(_DWORD *)(v1 + 368) = 0;
  *(_DWORD *)(v1 + 372) = 0;
  *(_DWORD *)(v1 + 400) = 0;
  *(_DWORD *)(v1 + 404) = 0;
  *(_DWORD *)(v1 + 392) = 0;
  *(_DWORD *)(v1 + 396) = 0;
  *(_DWORD *)(v1 + 384) = 0;
  *(_DWORD *)(v1 + 388) = 0;
  *(_DWORD *)(v1 + 416) = 0;
  *(_DWORD *)(v1 + 420) = 0;
  *(_DWORD *)(v1 + 408) = 0;
  *(_DWORD *)(v1 + 412) = 0;
  *(_DWORD *)(v1 + 440) = 0;
  *(_DWORD *)(v1 + 444) = 0;
  *(_DWORD *)(v1 + 432) = 0;
  *(_DWORD *)(v1 + 436) = 0;
  *(_DWORD *)(v1 + 424) = 0;
  *(_DWORD *)(v1 + 428) = 0;
  *(_DWORD *)(v1 + 456) = 0;
  *(_DWORD *)(v1 + 460) = 0;
  *(_DWORD *)(v1 + 448) = 0;
  *(_DWORD *)(v1 + 452) = 0;
  *(_DWORD *)(v1 + 480) = 0;
  *(_DWORD *)(v1 + 484) = 0;
  *(_DWORD *)(v1 + 472) = 0;
  *(_DWORD *)(v1 + 476) = 0;
  *(_DWORD *)(v1 + 464) = 0;
  *(_DWORD *)(v1 + 468) = 0;
  *(_DWORD *)(v1 + 496) = 0;
  *(_DWORD *)(v1 + 500) = 0;
  *(_DWORD *)(v1 + 488) = 0;
  *(_DWORD *)(v1 + 492) = 0;
  *(_DWORD *)(v1 + 520) = 0;
  *(_DWORD *)(v1 + 524) = 0;
  *(_DWORD *)(v1 + 512) = 0;
  *(_DWORD *)(v1 + 516) = 0;
  *(_DWORD *)(v1 + 504) = 0;
  *(_DWORD *)(v1 + 508) = 0;
  *(_DWORD *)(v1 + 536) = 0;
  *(_DWORD *)(v1 + 540) = 0;
  *(_DWORD *)(v1 + 528) = 0;
  *(_DWORD *)(v1 + 532) = 0;
  *(_DWORD *)(v1 + 560) = 0;
  *(_DWORD *)(v1 + 564) = 0;
  *(_DWORD *)(v1 + 552) = 0;
  *(_DWORD *)(v1 + 556) = 0;
  *(_DWORD *)(v1 + 544) = 0;
  *(_DWORD *)(v1 + 548) = 0;
  *(_DWORD *)(v1 + 576) = 0;
  *(_DWORD *)(v1 + 580) = 0;
  *(_DWORD *)(v1 + 568) = 0;
  *(_DWORD *)(v1 + 572) = 0;
  *(_DWORD *)(v1 + 600) = 0;
  *(_DWORD *)(v1 + 604) = 0;
  *(_DWORD *)(v1 + 592) = 0;
  *(_DWORD *)(v1 + 596) = 0;
  *(_DWORD *)(v1 + 584) = 0;
  *(_DWORD *)(v1 + 588) = 0;
  *(_DWORD *)(v1 + 616) = 0;
  *(_DWORD *)(v1 + 620) = 0;
  *(_DWORD *)(v1 + 608) = 0;
  *(_DWORD *)(v1 + 612) = 0;
  *(_DWORD *)(v1 + 640) = 0;
  *(_DWORD *)(v1 + 644) = 0;
  *(_DWORD *)(v1 + 632) = 0;
  *(_DWORD *)(v1 + 636) = 0;
  *(_DWORD *)(v1 + 624) = 0;
  *(_DWORD *)(v1 + 628) = 0;
  *(_DWORD *)(v1 + 656) = 0;
  *(_DWORD *)(v1 + 660) = 0;
  *(_DWORD *)(v1 + 648) = 0;
  *(_DWORD *)(v1 + 652) = 0;
  *(_DWORD *)(v1 + 680) = 0;
  *(_DWORD *)(v1 + 684) = 0;
  *(_DWORD *)(v1 + 672) = 0;
  *(_DWORD *)(v1 + 676) = 0;
  *(_DWORD *)(v1 + 664) = 0;
  *(_DWORD *)(v1 + 668) = 0;
  *(_DWORD *)(v1 + 696) = 0;
  *(_DWORD *)(v1 + 700) = 0;
  *(_DWORD *)(v1 + 688) = 0;
  *(_DWORD *)(v1 + 692) = 0;
  *(_DWORD *)(v1 + 720) = 0;
  *(_DWORD *)(v1 + 724) = 0;
  *(_DWORD *)(v1 + 712) = 0;
  *(_DWORD *)(v1 + 716) = 0;
  *(_DWORD *)(v1 + 704) = 0;
  *(_DWORD *)(v1 + 708) = 0;
  *(_DWORD *)(v1 + 736) = 0;
  *(_DWORD *)(v1 + 740) = 0;
  *(_DWORD *)(v1 + 728) = 0;
  *(_DWORD *)(v1 + 732) = 0;
  *(_DWORD *)(v1 + 760) = 0;
  *(_DWORD *)(v1 + 764) = 0;
  *(_DWORD *)(v1 + 752) = 0;
  *(_DWORD *)(v1 + 756) = 0;
  *(_DWORD *)(v1 + 744) = 0;
  *(_DWORD *)(v1 + 748) = 0;
  *(_DWORD *)(v1 + 776) = 0;
  *(_DWORD *)(v1 + 780) = 0;
  *(_DWORD *)(v1 + 768) = 0;
  *(_DWORD *)(v1 + 772) = 0;
  *(_DWORD *)(v1 + 800) = 0;
  *(_DWORD *)(v1 + 804) = 0;
  *(_DWORD *)(v1 + 792) = 0;
  *(_DWORD *)(v1 + 796) = 0;
  *(_DWORD *)(v1 + 784) = 0;
  *(_DWORD *)(v1 + 788) = 0;
  *(_DWORD *)(v1 + 816) = 0;
  *(_DWORD *)(v1 + 820) = 0;
  *(_DWORD *)(v1 + 808) = 0;
  *(_DWORD *)(v1 + 812) = 0;
  *(_DWORD *)(v1 + 840) = 0;
  *(_DWORD *)(v1 + 844) = 0;
  *(_DWORD *)(v1 + 832) = 0;
  *(_DWORD *)(v1 + 836) = 0;
  *(_DWORD *)(v1 + 824) = 0;
  *(_DWORD *)(v1 + 828) = 0;
  *(_DWORD *)(v1 + 856) = 0;
  *(_DWORD *)(v1 + 860) = 0;
  *(_DWORD *)(v1 + 848) = 0;
  *(_DWORD *)(v1 + 852) = 0;
  *(_DWORD *)(v1 + 880) = 0;
  *(_DWORD *)(v1 + 884) = 0;
  *(_DWORD *)(v1 + 872) = 0;
  *(_DWORD *)(v1 + 876) = 0;
  *(_DWORD *)(v1 + 864) = 0;
  *(_DWORD *)(v1 + 868) = 0;
  *(_DWORD *)(v1 + 896) = 0;
  *(_DWORD *)(v1 + 900) = 0;
  *(_DWORD *)(v1 + 888) = 0;
  *(_DWORD *)(v1 + 892) = 0;
  *(_DWORD *)(v1 + 920) = 0;
  *(_DWORD *)(v1 + 924) = 0;
  *(_DWORD *)(v1 + 912) = 0;
  *(_DWORD *)(v1 + 916) = 0;
  *(_DWORD *)(v1 + 904) = 0;
  *(_DWORD *)(v1 + 908) = 0;
  *(_DWORD *)(v1 + 936) = 0;
  *(_DWORD *)(v1 + 940) = 0;
  *(_DWORD *)(v1 + 928) = 0;
  *(_DWORD *)(v1 + 932) = 0;
  *(_DWORD *)(v1 + 960) = 0;
  *(_DWORD *)(v1 + 964) = 0;
  *(_DWORD *)(v1 + 952) = 0;
  *(_DWORD *)(v1 + 956) = 0;
  *(_DWORD *)(v1 + 944) = 0;
  *(_DWORD *)(v1 + 948) = 0;
  *(_DWORD *)(v1 + 976) = 0;
  *(_DWORD *)(v1 + 980) = 0;
  *(_DWORD *)(v1 + 968) = 0;
  *(_DWORD *)(v1 + 972) = 0;
  *(_DWORD *)(v1 + 1000) = 0;
  *(_DWORD *)(v1 + 1004) = 0;
  *(_DWORD *)(v1 + 992) = 0;
  *(_DWORD *)(v1 + 996) = 0;
  *(_DWORD *)(v1 + 984) = 0;
  *(_DWORD *)(v1 + 988) = 0;
  *(_DWORD *)(v1 + 1024) = 0;
  *(_DWORD *)(v1 + 1016) = 0;
  *(_DWORD *)(v1 + 1020) = 0;
  *(_DWORD *)(v1 + 1008) = 0;
  *(_DWORD *)(v1 + 1012) = 0;
  *(_DWORD *)(v1 + 1044) = 0;
  *(_DWORD *)(v1 + 1040) = 0;
  *(_DWORD *)(v1 + 1036) = 0;
  *(_DWORD *)(v1 + 1032) = 0;
  *(_DWORD *)(v1 + 1028) = 0;
  *(_DWORD *)(v1 + 1064) = 0;
  *(_DWORD *)(v1 + 1060) = 0;
  *(_DWORD *)(v1 + 1056) = 0;
  *(_DWORD *)(v1 + 1052) = 0;
  *(_DWORD *)(v1 + 1048) = 0;
  *(_DWORD *)(v1 + 1084) = 0;
  *(_DWORD *)(v1 + 1080) = 0;
  *(_DWORD *)(v1 + 1076) = 0;
  *(_DWORD *)(v1 + 1072) = 0;
  *(_DWORD *)(v1 + 1068) = 0;
  *(_DWORD *)(v1 + 1104) = 0;
  *(_DWORD *)(v1 + 1100) = 0;
  *(_DWORD *)(v1 + 1096) = 0;
  *(_DWORD *)(v1 + 1092) = 0;
  *(_DWORD *)(v1 + 1088) = 0;
  *(_DWORD *)(v1 + 1124) = 0;
  *(_DWORD *)(v1 + 1120) = 0;
  *(_DWORD *)(v1 + 1116) = 0;
  *(_DWORD *)(v1 + 1112) = 0;
  *(_DWORD *)(v1 + 1108) = 0;
  *(_DWORD *)(v1 + 1144) = 0;
  *(_DWORD *)(v1 + 1140) = 0;
  *(_DWORD *)(v1 + 1136) = 0;
  *(_DWORD *)(v1 + 1132) = 0;
  *(_DWORD *)(v1 + 1128) = 0;
  *(_DWORD *)(v1 + 1164) = 0;
  *(_DWORD *)(v1 + 1160) = 0;
  *(_DWORD *)(v1 + 1156) = 0;
  *(_DWORD *)(v1 + 1152) = 0;
  *(_DWORD *)(v1 + 1148) = 0;
  *(_DWORD *)(v1 + 1184) = 0;
  *(_DWORD *)(v1 + 1180) = 0;
  *(_DWORD *)(v1 + 1176) = 0;
  *(_DWORD *)(v1 + 1172) = 0;
  *(_DWORD *)(v1 + 1168) = 0;
  *(_DWORD *)(v1 + 1204) = 0;
  *(_DWORD *)(v1 + 1200) = 0;
  *(_DWORD *)(v1 + 1196) = 0;
  *(_DWORD *)(v1 + 1192) = 0;
  *(_DWORD *)(v1 + 1188) = 0;
  *(_DWORD *)(v1 + 1224) = 0;
  *(_DWORD *)(v1 + 1220) = 0;
  *(_DWORD *)(v1 + 1216) = 0;
  *(_DWORD *)(v1 + 1212) = 0;
  *(_DWORD *)(v1 + 1208) = 0;
  *(_DWORD *)(v1 + 1244) = 0;
  *(_DWORD *)(v1 + 1240) = 0;
  *(_DWORD *)(v1 + 1236) = 0;
  *(_DWORD *)(v1 + 1232) = 0;
  *(_DWORD *)(v1 + 1228) = 0;
  *(_DWORD *)(v1 + 1264) = 0;
  *(_DWORD *)(v1 + 1260) = 0;
  *(_DWORD *)(v1 + 1256) = 0;
  *(_DWORD *)(v1 + 1252) = 0;
  *(_DWORD *)(v1 + 1248) = 0;
  *(_DWORD *)(v1 + 1284) = 0;
  *(_DWORD *)(v1 + 1280) = 0;
  *(_DWORD *)(v1 + 1276) = 0;
  *(_DWORD *)(v1 + 1272) = 0;
  *(_DWORD *)(v1 + 1268) = 0;
  *(_DWORD *)(v1 + 1304) = 0;
  *(_DWORD *)(v1 + 1300) = 0;
  *(_DWORD *)(v1 + 1296) = 0;
  *(_DWORD *)(v1 + 1292) = 0;
  *(_DWORD *)(v1 + 1288) = 0;
  *(_DWORD *)(v1 + 1324) = 0;
  *(_DWORD *)(v1 + 1320) = 0;
  *(_DWORD *)(v1 + 1316) = 0;
  *(_DWORD *)(v1 + 1312) = 0;
  *(_DWORD *)(v1 + 1308) = 0;
  *(_DWORD *)(v1 + 1344) = 0;
  *(_DWORD *)(v1 + 1340) = 0;
  *(_DWORD *)(v1 + 1336) = 0;
  *(_DWORD *)(v1 + 1332) = 0;
  *(_DWORD *)(v1 + 1328) = 0;
  *(_DWORD *)(v1 + 1364) = 0;
  *(_DWORD *)(v1 + 1360) = 0;
  *(_DWORD *)(v1 + 1356) = 0;
  *(_DWORD *)(v1 + 1352) = 0;
  *(_DWORD *)(v1 + 1348) = 0;
  *(_DWORD *)(v1 + 1384) = 0;
  *(_DWORD *)(v1 + 1380) = 0;
  *(_DWORD *)(v1 + 1376) = 0;
  *(_DWORD *)(v1 + 1372) = 0;
  *(_DWORD *)(v1 + 1368) = 0;
  *(_DWORD *)(v1 + 1404) = 0;
  *(_DWORD *)(v1 + 1400) = 0;
  *(_DWORD *)(v1 + 1396) = 0;
  *(_DWORD *)(v1 + 1392) = 0;
  *(_DWORD *)(v1 + 1388) = 0;
  *(_DWORD *)(v1 + 1424) = 0;
  *(_DWORD *)(v1 + 1420) = 0;
  *(_DWORD *)(v1 + 1416) = 0;
  *(_DWORD *)(v1 + 1412) = 0;
  *(_DWORD *)(v1 + 1408) = 0;
  *(_DWORD *)(v1 + 1444) = 0;
  *(_DWORD *)(v1 + 1440) = 0;
  *(_DWORD *)(v1 + 1436) = 0;
  *(_DWORD *)(v1 + 1432) = 0;
  *(_DWORD *)(v1 + 1428) = 0;
  *(_DWORD *)(v1 + 1464) = 0;
  *(_DWORD *)(v1 + 1460) = 0;
  *(_DWORD *)(v1 + 1456) = 0;
  *(_DWORD *)(v1 + 1452) = 0;
  *(_DWORD *)(v1 + 1448) = 0;
  *(_DWORD *)(v1 + 1484) = 0;
  *(_DWORD *)(v1 + 1480) = 0;
  *(_DWORD *)(v1 + 1476) = 0;
  *(_DWORD *)(v1 + 1472) = 0;
  *(_DWORD *)(v1 + 1468) = 0;
  *(_DWORD *)(v1 + 1504) = 0;
  *(_DWORD *)(v1 + 1500) = 0;
  *(_DWORD *)(v1 + 1496) = 0;
  *(_DWORD *)(v1 + 1492) = 0;
  *(_DWORD *)(v1 + 1488) = 0;
  *(_DWORD *)(v1 + 1524) = 0;
  *(_DWORD *)(v1 + 1520) = 0;
  *(_DWORD *)(v1 + 1516) = 0;
  *(_DWORD *)(v1 + 1512) = 0;
  *(_DWORD *)(v1 + 1508) = 0;
  *(_DWORD *)(v1 + 1544) = 0;
  *(_DWORD *)(v1 + 1540) = 0;
  *(_DWORD *)(v1 + 1536) = 0;
  *(_DWORD *)(v1 + 1532) = 0;
  *(_DWORD *)(v1 + 1528) = 0;
  *(_DWORD *)(v1 + 1564) = 0;
  *(_DWORD *)(v1 + 1560) = 0;
  *(_DWORD *)(v1 + 1556) = 0;
  *(_DWORD *)(v1 + 1552) = 0;
  *(_DWORD *)(v1 + 1548) = 0;
  *(_DWORD *)(v1 + 1584) = 0;
  *(_DWORD *)(v1 + 1580) = 0;
  *(_DWORD *)(v1 + 1576) = 0;
  *(_DWORD *)(v1 + 1572) = 0;
  *(_DWORD *)(v1 + 1568) = 0;
  *(_DWORD *)(v1 + 1604) = 0;
  *(_DWORD *)(v1 + 1600) = 0;
  *(_DWORD *)(v1 + 1596) = 0;
  *(_DWORD *)(v1 + 1592) = 0;
  *(_DWORD *)(v1 + 1588) = 0;
  *(_DWORD *)(v1 + 1624) = 0;
  *(_DWORD *)(v1 + 1620) = 0;
  *(_DWORD *)(v1 + 1616) = 0;
  *(_DWORD *)(v1 + 1612) = 0;
  *(_DWORD *)(v1 + 1608) = 0;
  *(_DWORD *)(v1 + 1644) = 0;
  *(_DWORD *)(v1 + 1640) = 0;
  *(_DWORD *)(v1 + 1636) = 0;
  *(_DWORD *)(v1 + 1632) = 0;
  *(_DWORD *)(v1 + 1628) = 0;
  *(_DWORD *)(v1 + 1664) = 0;
  *(_DWORD *)(v1 + 1660) = 0;
  *(_DWORD *)(v1 + 1656) = 0;
  *(_DWORD *)(v1 + 1652) = 0;
  *(_DWORD *)(v1 + 1648) = 0;
  *(_DWORD *)(v1 + 1684) = 0;
  *(_DWORD *)(v1 + 1680) = 0;
  *(_DWORD *)(v1 + 1676) = 0;
  *(_DWORD *)(v1 + 1672) = 0;
  *(_DWORD *)(v1 + 1668) = 0;
  *(_DWORD *)(v1 + 1704) = 0;
  *(_DWORD *)(v1 + 1700) = 0;
  *(_DWORD *)(v1 + 1696) = 0;
  *(_DWORD *)(v1 + 1692) = 0;
  *(_DWORD *)(v1 + 1688) = 0;
  *(_DWORD *)(v1 + 1724) = 0;
  *(_DWORD *)(v1 + 1720) = 0;
  *(_DWORD *)(v1 + 1716) = 0;
  *(_DWORD *)(v1 + 1712) = 0;
  *(_DWORD *)(v1 + 1708) = 0;
  *(_DWORD *)(v1 + 1744) = 0;
  *(_DWORD *)(v1 + 1740) = 0;
  *(_DWORD *)(v1 + 1736) = 0;
  *(_DWORD *)(v1 + 1732) = 0;
  *(_DWORD *)(v1 + 1728) = 0;
  *(_DWORD *)(v1 + 1764) = 0;
  *(_DWORD *)(v1 + 1760) = 0;
  *(_DWORD *)(v1 + 1756) = 0;
  *(_DWORD *)(v1 + 1752) = 0;
  *(_DWORD *)(v1 + 1748) = 0;
  *(_DWORD *)(v1 + 1784) = 0;
  *(_DWORD *)(v1 + 1780) = 0;
  *(_DWORD *)(v1 + 1776) = 0;
  *(_DWORD *)(v1 + 1772) = 0;
  *(_DWORD *)(v1 + 1768) = 0;
  *(_DWORD *)(v1 + 1804) = 0;
  *(_DWORD *)(v1 + 1800) = 0;
  *(_DWORD *)(v1 + 1796) = 0;
  *(_DWORD *)(v1 + 1792) = 0;
  *(_DWORD *)(v1 + 1788) = 0;
  *(_DWORD *)(v1 + 1824) = 0;
  *(_DWORD *)(v1 + 1820) = 0;
  *(_DWORD *)(v1 + 1816) = 0;
  *(_DWORD *)(v1 + 1812) = 0;
  *(_DWORD *)(v1 + 1808) = 0;
  *(_DWORD *)(v1 + 1844) = 0;
  *(_DWORD *)(v1 + 1840) = 0;
  *(_DWORD *)(v1 + 1836) = 0;
  *(_DWORD *)(v1 + 1832) = 0;
  *(_DWORD *)(v1 + 1828) = 0;
  *(_DWORD *)(v1 + 1864) = 0;
  *(_DWORD *)(v1 + 1860) = 0;
  *(_DWORD *)(v1 + 1856) = 0;
  *(_DWORD *)(v1 + 1852) = 0;
  *(_DWORD *)(v1 + 1848) = 0;
  *(_DWORD *)(v1 + 1884) = 0;
  *(_DWORD *)(v1 + 1880) = 0;
  *(_DWORD *)(v1 + 1876) = 0;
  *(_DWORD *)(v1 + 1872) = 0;
  *(_DWORD *)(v1 + 1868) = 0;
  *(_DWORD *)(v1 + 1904) = 0;
  *(_DWORD *)(v1 + 1900) = 0;
  *(_DWORD *)(v1 + 1896) = 0;
  *(_DWORD *)(v1 + 1892) = 0;
  *(_DWORD *)(v1 + 1888) = 0;
  *(_DWORD *)(v1 + 1924) = 0;
  *(_DWORD *)(v1 + 1920) = 0;
  *(_DWORD *)(v1 + 1916) = 0;
  *(_DWORD *)(v1 + 1912) = 0;
  *(_DWORD *)(v1 + 1908) = 0;
  *(_DWORD *)(v1 + 1944) = 0;
  *(_DWORD *)(v1 + 1940) = 0;
  *(_DWORD *)(v1 + 1936) = 0;
  *(_DWORD *)(v1 + 1932) = 0;
  *(_DWORD *)(v1 + 1928) = 0;
  *(_DWORD *)(v1 + 1964) = 0;
  *(_DWORD *)(v1 + 1960) = 0;
  *(_DWORD *)(v1 + 1956) = 0;
  *(_DWORD *)(v1 + 1952) = 0;
  *(_DWORD *)(v1 + 1948) = 0;
  *(_DWORD *)(v1 + 1984) = 0;
  *(_DWORD *)(v1 + 1980) = 0;
  *(_DWORD *)(v1 + 1976) = 0;
  *(_DWORD *)(v1 + 1972) = 0;
  *(_DWORD *)(v1 + 1968) = 0;
  *(_DWORD *)(v1 + 2004) = 0;
  *(_DWORD *)(v1 + 2000) = 0;
  *(_DWORD *)(v1 + 1996) = 0;
  *(_DWORD *)(v1 + 1992) = 0;
  *(_DWORD *)(v1 + 1988) = 0;
  *(_DWORD *)(v1 + 2024) = 0;
  *(_DWORD *)(v1 + 2020) = 0;
  *(_DWORD *)(v1 + 2016) = 0;
  *(_DWORD *)(v1 + 2012) = 0;
  *(_DWORD *)(v1 + 2008) = 0;
  *(_DWORD *)(v1 + 2044) = 0;
  *(_DWORD *)(v1 + 2040) = 0;
  *(_DWORD *)(v1 + 2036) = 0;
  *(_DWORD *)(v1 + 2032) = 0;
  *(_DWORD *)(v1 + 2028) = 0;
  *(_DWORD *)(v1 + 2064) = 0;
  *(_DWORD *)(v1 + 2060) = 0;
  *(_DWORD *)(v1 + 2056) = 0;
  *(_DWORD *)(v1 + 2052) = 0;
  *(_DWORD *)(v1 + 2048) = 0;
  *(_DWORD *)(v1 + 2084) = 0;
  *(_DWORD *)(v1 + 2080) = 0;
  *(_DWORD *)(v1 + 2076) = 0;
  *(_DWORD *)(v1 + 2072) = 0;
  *(_DWORD *)(v1 + 2068) = 0;
  *(_DWORD *)(v1 + 2104) = 0;
  *(_DWORD *)(v1 + 2100) = 0;
  *(_DWORD *)(v1 + 2096) = 0;
  *(_DWORD *)(v1 + 2092) = 0;
  *(_DWORD *)(v1 + 2088) = 0;
  *(_DWORD *)(v1 + 2124) = 0;
  *(_DWORD *)(v1 + 2120) = 0;
  *(_DWORD *)(v1 + 2116) = 0;
  *(_DWORD *)(v1 + 2112) = 0;
  *(_DWORD *)(v1 + 2108) = 0;
  *(_DWORD *)(v1 + 2144) = 0;
  *(_DWORD *)(v1 + 2140) = 0;
  *(_DWORD *)(v1 + 2136) = 0;
  *(_DWORD *)(v1 + 2132) = 0;
  *(_DWORD *)(v1 + 2128) = 0;
  *(_DWORD *)(v1 + 2164) = 0;
  *(_DWORD *)(v1 + 2160) = 0;
  *(_DWORD *)(v1 + 2156) = 0;
  *(_DWORD *)(v1 + 2152) = 0;
  *(_DWORD *)(v1 + 2148) = 0;
  *(_DWORD *)(v1 + 2184) = 0;
  *(_DWORD *)(v1 + 2180) = 0;
  *(_DWORD *)(v1 + 2176) = 0;
  *(_DWORD *)(v1 + 2172) = 0;
  *(_DWORD *)(v1 + 2168) = 0;
  *(_DWORD *)(v1 + 2204) = 0;
  *(_DWORD *)(v1 + 2200) = 0;
  *(_DWORD *)(v1 + 2196) = 0;
  *(_DWORD *)(v1 + 2192) = 0;
  *(_DWORD *)(v1 + 2188) = 0;
  *(_DWORD *)(v1 + 2224) = 0;
  *(_DWORD *)(v1 + 2220) = 0;
  *(_DWORD *)(v1 + 2216) = 0;
  *(_DWORD *)(v1 + 2212) = 0;
  *(_DWORD *)(v1 + 2208) = 0;
  *(_DWORD *)(v1 + 2244) = 0;
  *(_DWORD *)(v1 + 2240) = 0;
  *(_DWORD *)(v1 + 2236) = 0;
  *(_DWORD *)(v1 + 2232) = 0;
  *(_DWORD *)(v1 + 2228) = 0;
  *(_DWORD *)(v1 + 2264) = 0;
  *(_DWORD *)(v1 + 2260) = 0;
  *(_DWORD *)(v1 + 2256) = 0;
  *(_DWORD *)(v1 + 2252) = 0;
  *(_DWORD *)(v1 + 2248) = 0;
  *(_DWORD *)(v1 + 2284) = 0;
  *(_DWORD *)(v1 + 2280) = 0;
  *(_DWORD *)(v1 + 2276) = 0;
  *(_DWORD *)(v1 + 2272) = 0;
  *(_DWORD *)(v1 + 2268) = 0;
  *(_DWORD *)(v1 + 2304) = 0;
  *(_DWORD *)(v1 + 2300) = 0;
  *(_DWORD *)(v1 + 2296) = 0;
  *(_DWORD *)(v1 + 2292) = 0;
  *(_DWORD *)(v1 + 2288) = 0;
  *(_DWORD *)(v1 + 2324) = 0;
  *(_DWORD *)(v1 + 2320) = 0;
  *(_DWORD *)(v1 + 2316) = 0;
  *(_DWORD *)(v1 + 2312) = 0;
  *(_DWORD *)(v1 + 2308) = 0;
  *(_DWORD *)(v1 + 2344) = 0;
  *(_DWORD *)(v1 + 2340) = 0;
  *(_DWORD *)(v1 + 2336) = 0;
  *(_DWORD *)(v1 + 2332) = 0;
  *(_DWORD *)(v1 + 2328) = 0;
  *(_DWORD *)(v1 + 2364) = 0;
  *(_DWORD *)(v1 + 2360) = 0;
  *(_DWORD *)(v1 + 2356) = 0;
  *(_DWORD *)(v1 + 2352) = 0;
  *(_DWORD *)(v1 + 2348) = 0;
  *(_DWORD *)(v1 + 2384) = 0;
  *(_DWORD *)(v1 + 2380) = 0;
  *(_DWORD *)(v1 + 2376) = 0;
  *(_DWORD *)(v1 + 2372) = 0;
  *(_DWORD *)(v1 + 2368) = 0;
  *(_DWORD *)(v1 + 2404) = 0;
  *(_DWORD *)(v1 + 2400) = 0;
  *(_DWORD *)(v1 + 2396) = 0;
  *(_DWORD *)(v1 + 2392) = 0;
  *(_DWORD *)(v1 + 2388) = 0;
  *(_DWORD *)(v1 + 2424) = 0;
  *(_DWORD *)(v1 + 2420) = 0;
  *(_DWORD *)(v1 + 2416) = 0;
  *(_DWORD *)(v1 + 2412) = 0;
  *(_DWORD *)(v1 + 2408) = 0;
  *(_DWORD *)(v1 + 2444) = 0;
  *(_DWORD *)(v1 + 2440) = 0;
  *(_DWORD *)(v1 + 2436) = 0;
  *(_DWORD *)(v1 + 2432) = 0;
  *(_DWORD *)(v1 + 2428) = 0;
  *(_DWORD *)(v1 + 2464) = 0;
  *(_DWORD *)(v1 + 2460) = 0;
  *(_DWORD *)(v1 + 2456) = 0;
  *(_DWORD *)(v1 + 2452) = 0;
  *(_DWORD *)(v1 + 2448) = 0;
  *(_DWORD *)(v1 + 2484) = 0;
  *(_DWORD *)(v1 + 2480) = 0;
  *(_DWORD *)(v1 + 2476) = 0;
  *(_DWORD *)(v1 + 2472) = 0;
  *(_DWORD *)(v1 + 2468) = 0;
  *(_DWORD *)(v1 + 2504) = 0;
  *(_DWORD *)(v1 + 2500) = 0;
  *(_DWORD *)(v1 + 2496) = 0;
  *(_DWORD *)(v1 + 2492) = 0;
  *(_DWORD *)(v1 + 2488) = 0;
  *(_DWORD *)(v1 + 2524) = 0;
  *(_DWORD *)(v1 + 2520) = 0;
  *(_DWORD *)(v1 + 2516) = 0;
  *(_DWORD *)(v1 + 2512) = 0;
  *(_DWORD *)(v1 + 2508) = 0;
  *(_DWORD *)(v1 + 2544) = 0;
  *(_DWORD *)(v1 + 2540) = 0;
  *(_DWORD *)(v1 + 2536) = 0;
  *(_DWORD *)(v1 + 2532) = 0;
  *(_DWORD *)(v1 + 2528) = 0;
  *(_DWORD *)(v1 + 2564) = 0;
  *(_DWORD *)(v1 + 2560) = 0;
  *(_DWORD *)(v1 + 2556) = 0;
  *(_DWORD *)(v1 + 2552) = 0;
  *(_DWORD *)(v1 + 2548) = 0;
  *(_DWORD *)(v1 + 2584) = 0;
  *(_DWORD *)(v1 + 2580) = 0;
  *(_DWORD *)(v1 + 2576) = 0;
  *(_DWORD *)(v1 + 2572) = 0;
  *(_DWORD *)(v1 + 2568) = 0;
  *(_DWORD *)(v1 + 2604) = 0;
  *(_DWORD *)(v1 + 2600) = 0;
  *(_DWORD *)(v1 + 2596) = 0;
  *(_DWORD *)(v1 + 2592) = 0;
  *(_DWORD *)(v1 + 2588) = 0;
  *(_DWORD *)(v1 + 2624) = 0;
  *(_DWORD *)(v1 + 2620) = 0;
  *(_DWORD *)(v1 + 2616) = 0;
  *(_DWORD *)(v1 + 2612) = 0;
  *(_DWORD *)(v1 + 2608) = 0;
  *(_DWORD *)(v1 + 2644) = 0;
  *(_DWORD *)(v1 + 2640) = 0;
  *(_DWORD *)(v1 + 2636) = 0;
  *(_DWORD *)(v1 + 2632) = 0;
  *(_DWORD *)(v1 + 2628) = 0;
  *(_DWORD *)(v1 + 2664) = 0;
  *(_DWORD *)(v1 + 2660) = 0;
  *(_DWORD *)(v1 + 2656) = 0;
  *(_DWORD *)(v1 + 2652) = 0;
  *(_DWORD *)(v1 + 2648) = 0;
  *(_DWORD *)(v1 + 2684) = 0;
  *(_DWORD *)(v1 + 2680) = 0;
  *(_DWORD *)(v1 + 2676) = 0;
  *(_DWORD *)(v1 + 2672) = 0;
  *(_DWORD *)(v1 + 2668) = 0;
  *(_DWORD *)(v1 + 2704) = 0;
  *(_DWORD *)(v1 + 2700) = 0;
  *(_DWORD *)(v1 + 2696) = 0;
  *(_DWORD *)(v1 + 2692) = 0;
  *(_DWORD *)(v1 + 2688) = 0;
  *(_DWORD *)(v1 + 2724) = 0;
  *(_DWORD *)(v1 + 2720) = 0;
  *(_DWORD *)(v1 + 2716) = 0;
  *(_DWORD *)(v1 + 2712) = 0;
  *(_DWORD *)(v1 + 2708) = 0;
  *(_DWORD *)(v1 + 2744) = 0;
  *(_DWORD *)(v1 + 2740) = 0;
  *(_DWORD *)(v1 + 2736) = 0;
  *(_DWORD *)(v1 + 2732) = 0;
  *(_DWORD *)(v1 + 2728) = 0;
  *(_DWORD *)(v1 + 2764) = 0;
  *(_DWORD *)(v1 + 2760) = 0;
  *(_DWORD *)(v1 + 2756) = 0;
  *(_DWORD *)(v1 + 2752) = 0;
  *(_DWORD *)(v1 + 2748) = 0;
  *(_DWORD *)(v1 + 2784) = 0;
  *(_DWORD *)(v1 + 2780) = 0;
  *(_DWORD *)(v1 + 2776) = 0;
  *(_DWORD *)(v1 + 2772) = 0;
  *(_DWORD *)(v1 + 2768) = 0;
  *(_DWORD *)(v1 + 2804) = 0;
  *(_DWORD *)(v1 + 2800) = 0;
  *(_DWORD *)(v1 + 2796) = 0;
  *(_DWORD *)(v1 + 2792) = 0;
  *(_DWORD *)(v1 + 2788) = 0;
  *(_DWORD *)(v1 + 2824) = 0;
  *(_DWORD *)(v1 + 2820) = 0;
  *(_DWORD *)(v1 + 2816) = 0;
  *(_DWORD *)(v1 + 2812) = 0;
  *(_DWORD *)(v1 + 2808) = 0;
  *(_DWORD *)(v1 + 2844) = 0;
  *(_DWORD *)(v1 + 2840) = 0;
  *(_DWORD *)(v1 + 2836) = 0;
  *(_DWORD *)(v1 + 2832) = 0;
  *(_DWORD *)(v1 + 2828) = 0;
  *(_DWORD *)(v1 + 2864) = 0;
  *(_DWORD *)(v1 + 2860) = 0;
  *(_DWORD *)(v1 + 2856) = 0;
  *(_DWORD *)(v1 + 2852) = 0;
  *(_DWORD *)(v1 + 2848) = 0;
  *(_DWORD *)(v1 + 2884) = 0;
  *(_DWORD *)(v1 + 2880) = 0;
  *(_DWORD *)(v1 + 2876) = 0;
  *(_DWORD *)(v1 + 2872) = 0;
  *(_DWORD *)(v1 + 2868) = 0;
  *(_DWORD *)(v1 + 2904) = 0;
  *(_DWORD *)(v1 + 2900) = 0;
  *(_DWORD *)(v1 + 2896) = 0;
  *(_DWORD *)(v1 + 2892) = 0;
  *(_DWORD *)(v1 + 2888) = 0;
  *(_DWORD *)(v1 + 2924) = 0;
  *(_DWORD *)(v1 + 2920) = 0;
  *(_DWORD *)(v1 + 2916) = 0;
  *(_DWORD *)(v1 + 2912) = 0;
  *(_DWORD *)(v1 + 2908) = 0;
  *(_DWORD *)(v1 + 2944) = 0;
  *(_DWORD *)(v1 + 2940) = 0;
  *(_DWORD *)(v1 + 2936) = 0;
  *(_DWORD *)(v1 + 2932) = 0;
  *(_DWORD *)(v1 + 2928) = 0;
  *(_DWORD *)(v1 + 2964) = 0;
  *(_DWORD *)(v1 + 2960) = 0;
  *(_DWORD *)(v1 + 2956) = 0;
  *(_DWORD *)(v1 + 2952) = 0;
  *(_DWORD *)(v1 + 2948) = 0;
  *(_DWORD *)(v1 + 2984) = 0;
  *(_DWORD *)(v1 + 2980) = 0;
  *(_DWORD *)(v1 + 2976) = 0;
  *(_DWORD *)(v1 + 2972) = 0;
  *(_DWORD *)(v1 + 2968) = 0;
  *(_DWORD *)(v1 + 3004) = 0;
  *(_DWORD *)(v1 + 3000) = 0;
  *(_DWORD *)(v1 + 2996) = 0;
  *(_DWORD *)(v1 + 2992) = 0;
  *(_DWORD *)(v1 + 2988) = 0;
  *(_DWORD *)(v1 + 3024) = 0;
  *(_DWORD *)(v1 + 3020) = 0;
  *(_DWORD *)(v1 + 3016) = 0;
  *(_DWORD *)(v1 + 3012) = 0;
  *(_DWORD *)(v1 + 3008) = 0;
  *(_DWORD *)(v1 + 3044) = 0;
  *(_DWORD *)(v1 + 3040) = 0;
  *(_DWORD *)(v1 + 3036) = 0;
  *(_DWORD *)(v1 + 3032) = 0;
  *(_DWORD *)(v1 + 3028) = 0;
  *(_DWORD *)(v1 + 3064) = 0;
  *(_DWORD *)(v1 + 3060) = 0;
  *(_DWORD *)(v1 + 3056) = 0;
  *(_DWORD *)(v1 + 3052) = 0;
  *(_DWORD *)(v1 + 3048) = 0;
  *(_DWORD *)(v1 + 3084) = 0;
  *(_DWORD *)(v1 + 3080) = 0;
  *(_DWORD *)(v1 + 3076) = 0;
  *(_DWORD *)(v1 + 3072) = 0;
  *(_DWORD *)(v1 + 3068) = 0;
  *(_DWORD *)(v1 + 3104) = 0;
  *(_DWORD *)(v1 + 3100) = 0;
  *(_DWORD *)(v1 + 3096) = 0;
  *(_DWORD *)(v1 + 3092) = 0;
  *(_DWORD *)(v1 + 3088) = 0;
  *(_DWORD *)(v1 + 3124) = 0;
  *(_DWORD *)(v1 + 3120) = 0;
  *(_DWORD *)(v1 + 3116) = 0;
  *(_DWORD *)(v1 + 3112) = 0;
  *(_DWORD *)(v1 + 3108) = 0;
  *(_DWORD *)(v1 + 3144) = 0;
  *(_DWORD *)(v1 + 3140) = 0;
  *(_DWORD *)(v1 + 3136) = 0;
  *(_DWORD *)(v1 + 3132) = 0;
  *(_DWORD *)(v1 + 3128) = 0;
  *(_DWORD *)(v1 + 3164) = 0;
  *(_DWORD *)(v1 + 3160) = 0;
  *(_DWORD *)(v1 + 3156) = 0;
  *(_DWORD *)(v1 + 3152) = 0;
  *(_DWORD *)(v1 + 3148) = 0;
  *(_DWORD *)(v1 + 3184) = 0;
  *(_DWORD *)(v1 + 3180) = 0;
  *(_DWORD *)(v1 + 3176) = 0;
  *(_DWORD *)(v1 + 3172) = 0;
  *(_DWORD *)(v1 + 3168) = 0;
  *(_DWORD *)(v1 + 3204) = 0;
  *(_DWORD *)(v1 + 3200) = 0;
  *(_DWORD *)(v1 + 3196) = 0;
  *(_DWORD *)(v1 + 3192) = 0;
  *(_DWORD *)(v1 + 3188) = 0;
  *(_DWORD *)(v1 + 3224) = 0;
  *(_DWORD *)(v1 + 3220) = 0;
  *(_DWORD *)(v1 + 3216) = 0;
  *(_DWORD *)(v1 + 3212) = 0;
  *(_DWORD *)(v1 + 3208) = 0;
  *(_DWORD *)(v1 + 3244) = 0;
  *(_DWORD *)(v1 + 3240) = 0;
  *(_DWORD *)(v1 + 3236) = 0;
  *(_DWORD *)(v1 + 3232) = 0;
  *(_DWORD *)(v1 + 3228) = 0;
  *(_DWORD *)(v1 + 3264) = 0;
  *(_DWORD *)(v1 + 3260) = 0;
  *(_DWORD *)(v1 + 3256) = 0;
  *(_DWORD *)(v1 + 3252) = 0;
  *(_DWORD *)(v1 + 3248) = 0;
  *(_DWORD *)(v1 + 3284) = 0;
  *(_DWORD *)(v1 + 3280) = 0;
  *(_DWORD *)(v1 + 3276) = 0;
  *(_DWORD *)(v1 + 3272) = 0;
  *(_DWORD *)(v1 + 3268) = 0;
  *(_DWORD *)(v1 + 3304) = 0;
  *(_DWORD *)(v1 + 3300) = 0;
  *(_DWORD *)(v1 + 3296) = 0;
  *(_DWORD *)(v1 + 3292) = 0;
  *(_DWORD *)(v1 + 3288) = 0;
  *(_DWORD *)(v1 + 3324) = 0;
  *(_DWORD *)(v1 + 3320) = 0;
  *(_DWORD *)(v1 + 3316) = 0;
  *(_DWORD *)(v1 + 3312) = 0;
  *(_DWORD *)(v1 + 3308) = 0;
  *(_DWORD *)(v1 + 3344) = 0;
  *(_DWORD *)(v1 + 3340) = 0;
  *(_DWORD *)(v1 + 3336) = 0;
  *(_DWORD *)(v1 + 3332) = 0;
  *(_DWORD *)(v1 + 3328) = 0;
  *(_DWORD *)(v1 + 3364) = 0;
  *(_DWORD *)(v1 + 3360) = 0;
  *(_DWORD *)(v1 + 3356) = 0;
  *(_DWORD *)(v1 + 3352) = 0;
  *(_DWORD *)(v1 + 3348) = 0;
  *(_DWORD *)(v1 + 3384) = 0;
  *(_DWORD *)(v1 + 3380) = 0;
  *(_DWORD *)(v1 + 3376) = 0;
  *(_DWORD *)(v1 + 3372) = 0;
  *(_DWORD *)(v1 + 3368) = 0;
  *(_DWORD *)(v1 + 3404) = 0;
  *(_DWORD *)(v1 + 3400) = 0;
  *(_DWORD *)(v1 + 3396) = 0;
  *(_DWORD *)(v1 + 3392) = 0;
  *(_DWORD *)(v1 + 3388) = 0;
  *(_DWORD *)(v1 + 3424) = 0;
  *(_DWORD *)(v1 + 3420) = 0;
  *(_DWORD *)(v1 + 3416) = 0;
  *(_DWORD *)(v1 + 3412) = 0;
  *(_DWORD *)(v1 + 3408) = 0;
  *(_DWORD *)(v1 + 3444) = 0;
  *(_DWORD *)(v1 + 3440) = 0;
  *(_DWORD *)(v1 + 3436) = 0;
  *(_DWORD *)(v1 + 3432) = 0;
  *(_DWORD *)(v1 + 3428) = 0;
  *(_DWORD *)(v1 + 3464) = 0;
  *(_DWORD *)(v1 + 3460) = 0;
  *(_DWORD *)(v1 + 3456) = 0;
  *(_DWORD *)(v1 + 3452) = 0;
  *(_DWORD *)(v1 + 3448) = 0;
  *(_DWORD *)(v1 + 3484) = 0;
  *(_DWORD *)(v1 + 3480) = 0;
  *(_DWORD *)(v1 + 3476) = 0;
  *(_DWORD *)(v1 + 3472) = 0;
  *(_DWORD *)(v1 + 3468) = 0;
  *(_DWORD *)(v1 + 3504) = 0;
  *(_DWORD *)(v1 + 3500) = 0;
  *(_DWORD *)(v1 + 3496) = 0;
  *(_DWORD *)(v1 + 3492) = 0;
  *(_DWORD *)(v1 + 3488) = 0;
  *(_DWORD *)(v1 + 3524) = 0;
  *(_DWORD *)(v1 + 3520) = 0;
  *(_DWORD *)(v1 + 3516) = 0;
  *(_DWORD *)(v1 + 3512) = 0;
  *(_DWORD *)(v1 + 3508) = 0;
  *(_DWORD *)(v1 + 3544) = 0;
  *(_DWORD *)(v1 + 3540) = 0;
  *(_DWORD *)(v1 + 3536) = 0;
  *(_DWORD *)(v1 + 3532) = 0;
  *(_DWORD *)(v1 + 3528) = 0;
  *(_DWORD *)(v1 + 3564) = 0;
  *(_DWORD *)(v1 + 3560) = 0;
  *(_DWORD *)(v1 + 3556) = 0;
  *(_DWORD *)(v1 + 3552) = 0;
  *(_DWORD *)(v1 + 3548) = 0;
  *(_DWORD *)(v1 + 3584) = 0;
  *(_DWORD *)(v1 + 3580) = 0;
  *(_DWORD *)(v1 + 3576) = 0;
  *(_DWORD *)(v1 + 3572) = 0;
  *(_DWORD *)(v1 + 3568) = 0;
  *(_DWORD *)(v1 + 3604) = 0;
  *(_DWORD *)(v1 + 3600) = 0;
  *(_DWORD *)(v1 + 3596) = 0;
  *(_DWORD *)(v1 + 3592) = 0;
  *(_DWORD *)(v1 + 3588) = 0;
  *(_DWORD *)(v1 + 3624) = 0;
  *(_DWORD *)(v1 + 3620) = 0;
  *(_DWORD *)(v1 + 3616) = 0;
  *(_DWORD *)(v1 + 3612) = 0;
  *(_DWORD *)(v1 + 3608) = 0;
  *(_DWORD *)(v1 + 3644) = 0;
  *(_DWORD *)(v1 + 3640) = 0;
  *(_DWORD *)(v1 + 3636) = 0;
  *(_DWORD *)(v1 + 3632) = 0;
  *(_DWORD *)(v1 + 3628) = 0;
  *(_DWORD *)(v1 + 3664) = 0;
  *(_DWORD *)(v1 + 3660) = 0;
  *(_DWORD *)(v1 + 3656) = 0;
  *(_DWORD *)(v1 + 3652) = 0;
  *(_DWORD *)(v1 + 3648) = 0;
  *(_DWORD *)(v1 + 3684) = 0;
  *(_DWORD *)(v1 + 3680) = 0;
  *(_DWORD *)(v1 + 3676) = 0;
  *(_DWORD *)(v1 + 3672) = 0;
  *(_DWORD *)(v1 + 3668) = 0;
  *(_DWORD *)(v1 + 3704) = 0;
  *(_DWORD *)(v1 + 3700) = 0;
  *(_DWORD *)(v1 + 3696) = 0;
  *(_DWORD *)(v1 + 3692) = 0;
  *(_DWORD *)(v1 + 3688) = 0;
  *(_DWORD *)(v1 + 3724) = 0;
  *(_DWORD *)(v1 + 3720) = 0;
  *(_DWORD *)(v1 + 3716) = 0;
  *(_DWORD *)(v1 + 3712) = 0;
  *(_DWORD *)(v1 + 3708) = 0;
  *(_DWORD *)(v1 + 3744) = 0;
  *(_DWORD *)(v1 + 3740) = 0;
  *(_DWORD *)(v1 + 3736) = 0;
  *(_DWORD *)(v1 + 3732) = 0;
  *(_DWORD *)(v1 + 3728) = 0;
  *(_DWORD *)(v1 + 3764) = 0;
  *(_DWORD *)(v1 + 3760) = 0;
  *(_DWORD *)(v1 + 3756) = 0;
  *(_DWORD *)(v1 + 3752) = 0;
  *(_DWORD *)(v1 + 3748) = 0;
  *(_DWORD *)(v1 + 3784) = 0;
  *(_DWORD *)(v1 + 3780) = 0;
  *(_DWORD *)(v1 + 3776) = 0;
  *(_DWORD *)(v1 + 3772) = 0;
  *(_DWORD *)(v1 + 3768) = 0;
  *(_DWORD *)(v1 + 3804) = 0;
  *(_DWORD *)(v1 + 3800) = 0;
  *(_DWORD *)(v1 + 3796) = 0;
  *(_DWORD *)(v1 + 3792) = 0;
  *(_DWORD *)(v1 + 3788) = 0;
  *(_DWORD *)(v1 + 3824) = 0;
  *(_DWORD *)(v1 + 3820) = 0;
  *(_DWORD *)(v1 + 3816) = 0;
  *(_DWORD *)(v1 + 3812) = 0;
  *(_DWORD *)(v1 + 3808) = 0;
  *(_DWORD *)(v1 + 3844) = 0;
  *(_DWORD *)(v1 + 3840) = 0;
  *(_DWORD *)(v1 + 3836) = 0;
  *(_DWORD *)(v1 + 3832) = 0;
  *(_DWORD *)(v1 + 3828) = 0;
  *(_DWORD *)(v1 + 3864) = 0;
  *(_DWORD *)(v1 + 3860) = 0;
  *(_DWORD *)(v1 + 3856) = 0;
  *(_DWORD *)(v1 + 3852) = 0;
  *(_DWORD *)(v1 + 3848) = 0;
  *(_DWORD *)(v1 + 3884) = 0;
  *(_DWORD *)(v1 + 3880) = 0;
  *(_DWORD *)(v1 + 3876) = 0;
  *(_DWORD *)(v1 + 3872) = 0;
  *(_DWORD *)(v1 + 3868) = 0;
  *(_DWORD *)(v1 + 3904) = 0;
  *(_DWORD *)(v1 + 3900) = 0;
  *(_DWORD *)(v1 + 3896) = 0;
  *(_DWORD *)(v1 + 3892) = 0;
  *(_DWORD *)(v1 + 3888) = 0;
  *(_DWORD *)(v1 + 3924) = 0;
  *(_DWORD *)(v1 + 3920) = 0;
  *(_DWORD *)(v1 + 3916) = 0;
  *(_DWORD *)(v1 + 3912) = 0;
  *(_DWORD *)(v1 + 3908) = 0;
  *(_DWORD *)(v1 + 3944) = 0;
  *(_DWORD *)(v1 + 3940) = 0;
  *(_DWORD *)(v1 + 3936) = 0;
  *(_DWORD *)(v1 + 3932) = 0;
  *(_DWORD *)(v1 + 3928) = 0;
  *(_DWORD *)(v1 + 3964) = 0;
  *(_DWORD *)(v1 + 3960) = 0;
  *(_DWORD *)(v1 + 3956) = 0;
  *(_DWORD *)(v1 + 3952) = 0;
  *(_DWORD *)(v1 + 3948) = 0;
  *(_DWORD *)(v1 + 3984) = 0;
  *(_DWORD *)(v1 + 3980) = 0;
  *(_DWORD *)(v1 + 3976) = 0;
  *(_DWORD *)(v1 + 3972) = 0;
  *(_DWORD *)(v1 + 3968) = 0;
  *(_DWORD *)(v1 + 4004) = 0;
  *(_DWORD *)(v1 + 4000) = 0;
  *(_DWORD *)(v1 + 3996) = 0;
  *(_DWORD *)(v1 + 3992) = 0;
  *(_DWORD *)(v1 + 3988) = 0;
  *(_DWORD *)(v1 + 4024) = 0;
  *(_DWORD *)(v1 + 4020) = 0;
  *(_DWORD *)(v1 + 4016) = 0;
  *(_DWORD *)(v1 + 4012) = 0;
  *(_DWORD *)(v1 + 4008) = 0;
  *(_DWORD *)(v1 + 4044) = 0;
  *(_DWORD *)(v1 + 4040) = 0;
  *(_DWORD *)(v1 + 4036) = 0;
  *(_DWORD *)(v1 + 4032) = 0;
  *(_DWORD *)(v1 + 4028) = 0;
  *(_DWORD *)(v1 + 4064) = 0;
  *(_DWORD *)(v1 + 4060) = 0;
  *(_DWORD *)(v1 + 4056) = 0;
  *(_DWORD *)(v1 + 4052) = 0;
  *(_DWORD *)(v1 + 4048) = 0;
  *(_DWORD *)(v1 + 4084) = 0;
  *(_DWORD *)(v1 + 4080) = 0;
  *(_DWORD *)(v1 + 4076) = 0;
  *(_DWORD *)(v1 + 4072) = 0;
  *(_DWORD *)(v1 + 4068) = 0;
  *(_DWORD *)(v1 + 4104) = 0;
  *(_DWORD *)(v1 + 4100) = 0;
  *(_DWORD *)(v1 + 4096) = 0;
  *(_DWORD *)(v1 + 4092) = 0;
  *(_DWORD *)(v1 + 4088) = 0;
  *(_DWORD *)(v1 + 4124) = 0;
  *(_DWORD *)(v1 + 4120) = 0;
  *(_DWORD *)(v1 + 4116) = 0;
  *(_DWORD *)(v1 + 4112) = 0;
  *(_DWORD *)(v1 + 4108) = 0;
  *(_DWORD *)(v1 + 4144) = 0;
  *(_DWORD *)(v1 + 4140) = 0;
  *(_DWORD *)(v1 + 4136) = 0;
  *(_DWORD *)(v1 + 4132) = 0;
  *(_DWORD *)(v1 + 4128) = 0;
  *(_DWORD *)(v1 + 4164) = 0;
  *(_DWORD *)(v1 + 4160) = 0;
  *(_DWORD *)(v1 + 4156) = 0;
  *(_DWORD *)(v1 + 4152) = 0;
  *(_DWORD *)(v1 + 4148) = 0;
  *(_DWORD *)(v1 + 4184) = 0;
  *(_DWORD *)(v1 + 4180) = 0;
  *(_DWORD *)(v1 + 4176) = 0;
  *(_DWORD *)(v1 + 4172) = 0;
  *(_DWORD *)(v1 + 4168) = 0;
  *(_DWORD *)(v1 + 4204) = 0;
  *(_DWORD *)(v1 + 4200) = 0;
  *(_DWORD *)(v1 + 4196) = 0;
  *(_DWORD *)(v1 + 4192) = 0;
  *(_DWORD *)(v1 + 4188) = 0;
  *(_DWORD *)(v1 + 4224) = 0;
  *(_DWORD *)(v1 + 4220) = 0;
  *(_DWORD *)(v1 + 4216) = 0;
  *(_DWORD *)(v1 + 4212) = 0;
  *(_DWORD *)(v1 + 4208) = 0;
  *(_DWORD *)(v1 + 4244) = 0;
  *(_DWORD *)(v1 + 4240) = 0;
  *(_DWORD *)(v1 + 4236) = 0;
  *(_DWORD *)(v1 + 4232) = 0;
  *(_DWORD *)(v1 + 4228) = 0;
  *(_DWORD *)(v1 + 4264) = 0;
  *(_DWORD *)(v1 + 4260) = 0;
  *(_DWORD *)(v1 + 4256) = 0;
  *(_DWORD *)(v1 + 4252) = 0;
  *(_DWORD *)(v1 + 4248) = 0;
  *(_DWORD *)(v1 + 4284) = 0;
  *(_DWORD *)(v1 + 4280) = 0;
  *(_DWORD *)(v1 + 4276) = 0;
  *(_DWORD *)(v1 + 4272) = 0;
  *(_DWORD *)(v1 + 4268) = 0;
  *(_DWORD *)(v1 + 4304) = 0;
  *(_DWORD *)(v1 + 4300) = 0;
  *(_DWORD *)(v1 + 4296) = 0;
  *(_DWORD *)(v1 + 4292) = 0;
  *(_DWORD *)(v1 + 4288) = 0;
  *(_DWORD *)(v1 + 4324) = 0;
  *(_DWORD *)(v1 + 4320) = 0;
  *(_DWORD *)(v1 + 4316) = 0;
  *(_DWORD *)(v1 + 4312) = 0;
  *(_DWORD *)(v1 + 4308) = 0;
  *(_DWORD *)(v1 + 4344) = 0;
  *(_DWORD *)(v1 + 4340) = 0;
  *(_DWORD *)(v1 + 4336) = 0;
  *(_DWORD *)(v1 + 4332) = 0;
  *(_DWORD *)(v1 + 4328) = 0;
  *(_DWORD *)(v1 + 4364) = 0;
  *(_DWORD *)(v1 + 4360) = 0;
  *(_DWORD *)(v1 + 4356) = 0;
  *(_DWORD *)(v1 + 4352) = 0;
  *(_DWORD *)(v1 + 4348) = 0;
  *(_DWORD *)(v1 + 4384) = 0;
  *(_DWORD *)(v1 + 4380) = 0;
  *(_DWORD *)(v1 + 4376) = 0;
  *(_DWORD *)(v1 + 4372) = 0;
  *(_DWORD *)(v1 + 4368) = 0;
  *(_DWORD *)(v1 + 4404) = 0;
  *(_DWORD *)(v1 + 4400) = 0;
  *(_DWORD *)(v1 + 4396) = 0;
  *(_DWORD *)(v1 + 4392) = 0;
  *(_DWORD *)(v1 + 4388) = 0;
  *(_DWORD *)(v1 + 4424) = 0;
  *(_DWORD *)(v1 + 4420) = 0;
  *(_DWORD *)(v1 + 4416) = 0;
  *(_DWORD *)(v1 + 4412) = 0;
  *(_DWORD *)(v1 + 4408) = 0;
  *(_DWORD *)(v1 + 4444) = 0;
  *(_DWORD *)(v1 + 4440) = 0;
  *(_DWORD *)(v1 + 4436) = 0;
  *(_DWORD *)(v1 + 4432) = 0;
  *(_DWORD *)(v1 + 4428) = 0;
  *(_DWORD *)(v1 + 4464) = 0;
  *(_DWORD *)(v1 + 4460) = 0;
  *(_DWORD *)(v1 + 4456) = 0;
  *(_DWORD *)(v1 + 4452) = 0;
  *(_DWORD *)(v1 + 4448) = 0;
  *(_DWORD *)(v1 + 4484) = 0;
  *(_DWORD *)(v1 + 4480) = 0;
  *(_DWORD *)(v1 + 4476) = 0;
  *(_DWORD *)(v1 + 4472) = 0;
  *(_DWORD *)(v1 + 4468) = 0;
  *(_DWORD *)(v1 + 4504) = 0;
  *(_DWORD *)(v1 + 4500) = 0;
  *(_DWORD *)(v1 + 4496) = 0;
  *(_DWORD *)(v1 + 4492) = 0;
  *(_DWORD *)(v1 + 4488) = 0;
  *(_DWORD *)(v1 + 4524) = 0;
  *(_DWORD *)(v1 + 4520) = 0;
  *(_DWORD *)(v1 + 4516) = 0;
  *(_DWORD *)(v1 + 4512) = 0;
  *(_DWORD *)(v1 + 4508) = 0;
  *(_DWORD *)(v1 + 4544) = 0;
  *(_DWORD *)(v1 + 4540) = 0;
  *(_DWORD *)(v1 + 4536) = 0;
  *(_DWORD *)(v1 + 4532) = 0;
  *(_DWORD *)(v1 + 4528) = 0;
  *(_DWORD *)(v1 + 4564) = 0;
  *(_DWORD *)(v1 + 4560) = 0;
  *(_DWORD *)(v1 + 4556) = 0;
  *(_DWORD *)(v1 + 4552) = 0;
  *(_DWORD *)(v1 + 4548) = 0;
  *(_DWORD *)(v1 + 4584) = 0;
  *(_DWORD *)(v1 + 4580) = 0;
  *(_DWORD *)(v1 + 4576) = 0;
  *(_DWORD *)(v1 + 4572) = 0;
  *(_DWORD *)(v1 + 4568) = 0;
  *(_DWORD *)(v1 + 4604) = 0;
  *(_DWORD *)(v1 + 4600) = 0;
  *(_DWORD *)(v1 + 4596) = 0;
  *(_DWORD *)(v1 + 4592) = 0;
  *(_DWORD *)(v1 + 4588) = 0;
  *(_DWORD *)(v1 + 4624) = 0;
  *(_DWORD *)(v1 + 4620) = 0;
  *(_DWORD *)(v1 + 4616) = 0;
  *(_DWORD *)(v1 + 4612) = 0;
  *(_DWORD *)(v1 + 4608) = 0;
  *(_DWORD *)(v1 + 4644) = 0;
  *(_DWORD *)(v1 + 4640) = 0;
  *(_DWORD *)(v1 + 4636) = 0;
  *(_DWORD *)(v1 + 4632) = 0;
  *(_DWORD *)(v1 + 4628) = 0;
  *(_DWORD *)(v1 + 4664) = 0;
  *(_DWORD *)(v1 + 4660) = 0;
  *(_DWORD *)(v1 + 4656) = 0;
  *(_DWORD *)(v1 + 4652) = 0;
  *(_DWORD *)(v1 + 4648) = 0;
  *(_DWORD *)(v1 + 4684) = 0;
  *(_DWORD *)(v1 + 4680) = 0;
  *(_DWORD *)(v1 + 4676) = 0;
  *(_DWORD *)(v1 + 4672) = 0;
  *(_DWORD *)(v1 + 4668) = 0;
  *(_DWORD *)(v1 + 4704) = 0;
  *(_DWORD *)(v1 + 4700) = 0;
  *(_DWORD *)(v1 + 4696) = 0;
  *(_DWORD *)(v1 + 4692) = 0;
  *(_DWORD *)(v1 + 4688) = 0;
  *(_DWORD *)(v1 + 4724) = 0;
  *(_DWORD *)(v1 + 4720) = 0;
  *(_DWORD *)(v1 + 4716) = 0;
  *(_DWORD *)(v1 + 4712) = 0;
  *(_DWORD *)(v1 + 4708) = 0;
  *(_DWORD *)(v1 + 4744) = 0;
  *(_DWORD *)(v1 + 4740) = 0;
  *(_DWORD *)(v1 + 4736) = 0;
  *(_DWORD *)(v1 + 4732) = 0;
  *(_DWORD *)(v1 + 4728) = 0;
  *(_DWORD *)(v1 + 4764) = 0;
  *(_DWORD *)(v1 + 4760) = 0;
  *(_DWORD *)(v1 + 4756) = 0;
  *(_DWORD *)(v1 + 4752) = 0;
  *(_DWORD *)(v1 + 4748) = 0;
  *(_DWORD *)(v1 + 4784) = 0;
  *(_DWORD *)(v1 + 4780) = 0;
  *(_DWORD *)(v1 + 4776) = 0;
  *(_DWORD *)(v1 + 4772) = 0;
  *(_DWORD *)(v1 + 4768) = 0;
  *(_DWORD *)(v1 + 4804) = 0;
  *(_DWORD *)(v1 + 4800) = 0;
  *(_DWORD *)(v1 + 4796) = 0;
  *(_DWORD *)(v1 + 4792) = 0;
  *(_DWORD *)(v1 + 4788) = 0;
  *(_DWORD *)(v1 + 4824) = 0;
  *(_DWORD *)(v1 + 4820) = 0;
  *(_DWORD *)(v1 + 4816) = 0;
  *(_DWORD *)(v1 + 4812) = 0;
  *(_DWORD *)(v1 + 4808) = 0;
  *(_DWORD *)(v1 + 4844) = 0;
  *(_DWORD *)(v1 + 4840) = 0;
  *(_DWORD *)(v1 + 4836) = 0;
  *(_DWORD *)(v1 + 4832) = 0;
  *(_DWORD *)(v1 + 4828) = 0;
  *(_DWORD *)(v1 + 4864) = 0;
  *(_DWORD *)(v1 + 4860) = 0;
  *(_DWORD *)(v1 + 4856) = 0;
  *(_DWORD *)(v1 + 4852) = 0;
  *(_DWORD *)(v1 + 4848) = 0;
  *(_DWORD *)(v1 + 4884) = 0;
  *(_DWORD *)(v1 + 4880) = 0;
  *(_DWORD *)(v1 + 4876) = 0;
  *(_DWORD *)(v1 + 4872) = 0;
  *(_DWORD *)(v1 + 4868) = 0;
  *(_DWORD *)(v1 + 4904) = 0;
  *(_DWORD *)(v1 + 4900) = 0;
  *(_DWORD *)(v1 + 4896) = 0;
  *(_DWORD *)(v1 + 4892) = 0;
  *(_DWORD *)(v1 + 4888) = 0;
  *(_DWORD *)(v1 + 4924) = 0;
  *(_DWORD *)(v1 + 4920) = 0;
  *(_DWORD *)(v1 + 4916) = 0;
  *(_DWORD *)(v1 + 4912) = 0;
  *(_DWORD *)(v1 + 4908) = 0;
  *(_DWORD *)(v1 + 4944) = 0;
  *(_DWORD *)(v1 + 4940) = 0;
  *(_DWORD *)(v1 + 4936) = 0;
  *(_DWORD *)(v1 + 4932) = 0;
  *(_DWORD *)(v1 + 4928) = 0;
  *(_DWORD *)(v1 + 4964) = 0;
  *(_DWORD *)(v1 + 4960) = 0;
  *(_DWORD *)(v1 + 4956) = 0;
  *(_DWORD *)(v1 + 4952) = 0;
  *(_DWORD *)(v1 + 4948) = 0;
  *(_DWORD *)(v1 + 4984) = 0;
  *(_DWORD *)(v1 + 4980) = 0;
  *(_DWORD *)(v1 + 4976) = 0;
  *(_DWORD *)(v1 + 4972) = 0;
  *(_DWORD *)(v1 + 4968) = 0;
  *(_DWORD *)(v1 + 5004) = 0;
  *(_DWORD *)(v1 + 5000) = 0;
  *(_DWORD *)(v1 + 4996) = 0;
  *(_DWORD *)(v1 + 4992) = 0;
  *(_DWORD *)(v1 + 4988) = 0;
  *(_DWORD *)(v1 + 5024) = 0;
  *(_DWORD *)(v1 + 5020) = 0;
  *(_DWORD *)(v1 + 5016) = 0;
  *(_DWORD *)(v1 + 5012) = 0;
  *(_DWORD *)(v1 + 5008) = 0;
  *(_DWORD *)(v1 + 5044) = 0;
  *(_DWORD *)(v1 + 5040) = 0;
  *(_DWORD *)(v1 + 5036) = 0;
  *(_DWORD *)(v1 + 5032) = 0;
  *(_DWORD *)(v1 + 5028) = 0;
  *(_DWORD *)(v1 + 5064) = 0;
  *(_DWORD *)(v1 + 5060) = 0;
  *(_DWORD *)(v1 + 5056) = 0;
  *(_DWORD *)(v1 + 5052) = 0;
  *(_DWORD *)(v1 + 5048) = 0;
  *(_DWORD *)(v1 + 5084) = 0;
  *(_DWORD *)(v1 + 5080) = 0;
  *(_DWORD *)(v1 + 5076) = 0;
  *(_DWORD *)(v1 + 5072) = 0;
  *(_DWORD *)(v1 + 5068) = 0;
  *(_DWORD *)(v1 + 5104) = 0;
  *(_DWORD *)(v1 + 5100) = 0;
  *(_DWORD *)(v1 + 5096) = 0;
  *(_DWORD *)(v1 + 5092) = 0;
  *(_DWORD *)(v1 + 5088) = 0;
  *(_DWORD *)(v1 + 5124) = 0;
  *(_DWORD *)(v1 + 5120) = 0;
  *(_DWORD *)(v1 + 5116) = 0;
  *(_DWORD *)(v1 + 5112) = 0;
  *(_DWORD *)(v1 + 5108) = 0;
  *(_DWORD *)(v1 + 5144) = 0;
  *(_DWORD *)(v1 + 5140) = 0;
  *(_DWORD *)(v1 + 5136) = 0;
  *(_DWORD *)(v1 + 5132) = 0;
  *(_DWORD *)(v1 + 5128) = 0;
  *(_DWORD *)(v1 + 5164) = 0;
  *(_DWORD *)(v1 + 5160) = 0;
  *(_DWORD *)(v1 + 5156) = 0;
  *(_DWORD *)(v1 + 5152) = 0;
  *(_DWORD *)(v1 + 5148) = 0;
  *(_DWORD *)(v1 + 5184) = 0;
  *(_DWORD *)(v1 + 5180) = 0;
  *(_DWORD *)(v1 + 5176) = 0;
  *(_DWORD *)(v1 + 5172) = 0;
  *(_DWORD *)(v1 + 5168) = 0;
  *(_DWORD *)(v1 + 5204) = 0;
  *(_DWORD *)(v1 + 5200) = 0;
  *(_DWORD *)(v1 + 5196) = 0;
  *(_DWORD *)(v1 + 5192) = 0;
  *(_DWORD *)(v1 + 5188) = 0;
  *(_DWORD *)(v1 + 5224) = 0;
  *(_DWORD *)(v1 + 5220) = 0;
  *(_DWORD *)(v1 + 5216) = 0;
  *(_DWORD *)(v1 + 5212) = 0;
  *(_DWORD *)(v1 + 5208) = 0;
  *(_DWORD *)(v1 + 5244) = 0;
  *(_DWORD *)(v1 + 5240) = 0;
  *(_DWORD *)(v1 + 5236) = 0;
  *(_DWORD *)(v1 + 5232) = 0;
  *(_DWORD *)(v1 + 5228) = 0;
  *(_DWORD *)(v1 + 5264) = 0;
  *(_DWORD *)(v1 + 5260) = 0;
  *(_DWORD *)(v1 + 5256) = 0;
  *(_DWORD *)(v1 + 5252) = 0;
  *(_DWORD *)(v1 + 5248) = 0;
  *(_DWORD *)(v1 + 5284) = 0;
  *(_DWORD *)(v1 + 5280) = 0;
  *(_DWORD *)(v1 + 5276) = 0;
  *(_DWORD *)(v1 + 5272) = 0;
  *(_DWORD *)(v1 + 5268) = 0;
  *(_DWORD *)(v1 + 5304) = 0;
  *(_DWORD *)(v1 + 5300) = 0;
  *(_DWORD *)(v1 + 5296) = 0;
  *(_DWORD *)(v1 + 5292) = 0;
  *(_DWORD *)(v1 + 5288) = 0;
  *(_DWORD *)(v1 + 5324) = 0;
  *(_DWORD *)(v1 + 5320) = 0;
  *(_DWORD *)(v1 + 5316) = 0;
  *(_DWORD *)(v1 + 5312) = 0;
  *(_DWORD *)(v1 + 5308) = 0;
  *(_DWORD *)(v1 + 5344) = 0;
  *(_DWORD *)(v1 + 5340) = 0;
  *(_DWORD *)(v1 + 5336) = 0;
  *(_DWORD *)(v1 + 5332) = 0;
  *(_DWORD *)(v1 + 5328) = 0;
  *(_DWORD *)(v1 + 5364) = 0;
  *(_DWORD *)(v1 + 5360) = 0;
  *(_DWORD *)(v1 + 5356) = 0;
  *(_DWORD *)(v1 + 5352) = 0;
  *(_DWORD *)(v1 + 5348) = 0;
  *(_DWORD *)(v1 + 5384) = 0;
  *(_DWORD *)(v1 + 5380) = 0;
  *(_DWORD *)(v1 + 5376) = 0;
  *(_DWORD *)(v1 + 5372) = 0;
  *(_DWORD *)(v1 + 5368) = 0;
  *(_DWORD *)(v1 + 5404) = 0;
  *(_DWORD *)(v1 + 5400) = 0;
  *(_DWORD *)(v1 + 5396) = 0;
  *(_DWORD *)(v1 + 5392) = 0;
  *(_DWORD *)(v1 + 5388) = 0;
  *(_DWORD *)(v1 + 5424) = 0;
  *(_DWORD *)(v1 + 5420) = 0;
  *(_DWORD *)(v1 + 5416) = 0;
  *(_DWORD *)(v1 + 5412) = 0;
  *(_DWORD *)(v1 + 5408) = 0;
  *(_DWORD *)(v1 + 5444) = 0;
  *(_DWORD *)(v1 + 5440) = 0;
  *(_DWORD *)(v1 + 5436) = 0;
  *(_DWORD *)(v1 + 5432) = 0;
  *(_DWORD *)(v1 + 5428) = 0;
  *(_DWORD *)(v1 + 5464) = 0;
  *(_DWORD *)(v1 + 5460) = 0;
  *(_DWORD *)(v1 + 5456) = 0;
  *(_DWORD *)(v1 + 5452) = 0;
  *(_DWORD *)(v1 + 5448) = 0;
  *(_DWORD *)(v1 + 5484) = 0;
  *(_DWORD *)(v1 + 5480) = 0;
  *(_DWORD *)(v1 + 5476) = 0;
  *(_DWORD *)(v1 + 5472) = 0;
  *(_DWORD *)(v1 + 5468) = 0;
  *(_DWORD *)(v1 + 5504) = 0;
  *(_DWORD *)(v1 + 5500) = 0;
  *(_DWORD *)(v1 + 5496) = 0;
  *(_DWORD *)(v1 + 5492) = 0;
  *(_DWORD *)(v1 + 5488) = 0;
  *(_DWORD *)(v1 + 5524) = 0;
  *(_DWORD *)(v1 + 5520) = 0;
  *(_DWORD *)(v1 + 5516) = 0;
  *(_DWORD *)(v1 + 5512) = 0;
  *(_DWORD *)(v1 + 5508) = 0;
  *(_DWORD *)(v1 + 5544) = 0;
  *(_DWORD *)(v1 + 5540) = 0;
  *(_DWORD *)(v1 + 5536) = 0;
  *(_DWORD *)(v1 + 5532) = 0;
  *(_DWORD *)(v1 + 5528) = 0;
  *(_DWORD *)(v1 + 5564) = 0;
  *(_DWORD *)(v1 + 5560) = 0;
  *(_DWORD *)(v1 + 5556) = 0;
  *(_DWORD *)(v1 + 5552) = 0;
  *(_DWORD *)(v1 + 5548) = 0;
  *(_DWORD *)(v1 + 5584) = 0;
  *(_DWORD *)(v1 + 5580) = 0;
  *(_DWORD *)(v1 + 5576) = 0;
  *(_DWORD *)(v1 + 5572) = 0;
  *(_DWORD *)(v1 + 5568) = 0;
  *(_DWORD *)(v1 + 5604) = 0;
  *(_DWORD *)(v1 + 5600) = 0;
  *(_DWORD *)(v1 + 5596) = 0;
  *(_DWORD *)(v1 + 5592) = 0;
  *(_DWORD *)(v1 + 5588) = 0;
  *(_DWORD *)(v1 + 5624) = 0;
  *(_DWORD *)(v1 + 5620) = 0;
  *(_DWORD *)(v1 + 5616) = 0;
  *(_DWORD *)(v1 + 5612) = 0;
  *(_DWORD *)(v1 + 5608) = 0;
  *(_DWORD *)(v1 + 5644) = 0;
  *(_DWORD *)(v1 + 5640) = 0;
  *(_DWORD *)(v1 + 5636) = 0;
  *(_DWORD *)(v1 + 5632) = 0;
  *(_DWORD *)(v1 + 5628) = 0;
  *(_DWORD *)(v1 + 5664) = 0;
  *(_DWORD *)(v1 + 5660) = 0;
  *(_DWORD *)(v1 + 5656) = 0;
  *(_DWORD *)(v1 + 5652) = 0;
  *(_DWORD *)(v1 + 5648) = 0;
  *(_DWORD *)(v1 + 5684) = 0;
  *(_DWORD *)(v1 + 5680) = 0;
  *(_DWORD *)(v1 + 5676) = 0;
  *(_DWORD *)(v1 + 5672) = 0;
  *(_DWORD *)(v1 + 5668) = 0;
  *(_DWORD *)(v1 + 5704) = 0;
  *(_DWORD *)(v1 + 5700) = 0;
  *(_DWORD *)(v1 + 5696) = 0;
  *(_DWORD *)(v1 + 5692) = 0;
  *(_DWORD *)(v1 + 5688) = 0;
  *(_DWORD *)(v1 + 5724) = 0;
  *(_DWORD *)(v1 + 5720) = 0;
  *(_DWORD *)(v1 + 5716) = 0;
  *(_DWORD *)(v1 + 5712) = 0;
  *(_DWORD *)(v1 + 5708) = 0;
  *(_DWORD *)(v1 + 5744) = 0;
  *(_DWORD *)(v1 + 5740) = 0;
  *(_DWORD *)(v1 + 5736) = 0;
  *(_DWORD *)(v1 + 5732) = 0;
  *(_DWORD *)(v1 + 5728) = 0;
  *(_DWORD *)(v1 + 5764) = 0;
  *(_DWORD *)(v1 + 5760) = 0;
  *(_DWORD *)(v1 + 5756) = 0;
  *(_DWORD *)(v1 + 5752) = 0;
  *(_DWORD *)(v1 + 5748) = 0;
  *(_DWORD *)(v1 + 5784) = 0;
  *(_DWORD *)(v1 + 5780) = 0;
  *(_DWORD *)(v1 + 5776) = 0;
  *(_DWORD *)(v1 + 5772) = 0;
  *(_DWORD *)(v1 + 5768) = 0;
  *(_DWORD *)(v1 + 5804) = 0;
  *(_DWORD *)(v1 + 5800) = 0;
  *(_DWORD *)(v1 + 5796) = 0;
  *(_DWORD *)(v1 + 5792) = 0;
  *(_DWORD *)(v1 + 5788) = 0;
  *(_DWORD *)(v1 + 5824) = 0;
  *(_DWORD *)(v1 + 5820) = 0;
  *(_DWORD *)(v1 + 5816) = 0;
  *(_DWORD *)(v1 + 5812) = 0;
  *(_DWORD *)(v1 + 5808) = 0;
  *(_DWORD *)(v1 + 5844) = 0;
  *(_DWORD *)(v1 + 5840) = 0;
  *(_DWORD *)(v1 + 5836) = 0;
  *(_DWORD *)(v1 + 5832) = 0;
  *(_DWORD *)(v1 + 5828) = 0;
  *(_DWORD *)(v1 + 5864) = 0;
  *(_DWORD *)(v1 + 5860) = 0;
  *(_DWORD *)(v1 + 5856) = 0;
  *(_DWORD *)(v1 + 5852) = 0;
  *(_DWORD *)(v1 + 5848) = 0;
  *(_DWORD *)(v1 + 5884) = 0;
  *(_DWORD *)(v1 + 5880) = 0;
  *(_DWORD *)(v1 + 5876) = 0;
  *(_DWORD *)(v1 + 5872) = 0;
  *(_DWORD *)(v1 + 5868) = 0;
  *(_DWORD *)(v1 + 5904) = 0;
  *(_DWORD *)(v1 + 5900) = 0;
  *(_DWORD *)(v1 + 5896) = 0;
  *(_DWORD *)(v1 + 5892) = 0;
  *(_DWORD *)(v1 + 5888) = 0;
  *(_DWORD *)(v1 + 5924) = 0;
  *(_DWORD *)(v1 + 5920) = 0;
  *(_DWORD *)(v1 + 5916) = 0;
  *(_DWORD *)(v1 + 5912) = 0;
  *(_DWORD *)(v1 + 5908) = 0;
  *(_DWORD *)(v1 + 5944) = 0;
  *(_DWORD *)(v1 + 5940) = 0;
  *(_DWORD *)(v1 + 5936) = 0;
  *(_DWORD *)(v1 + 5932) = 0;
  *(_DWORD *)(v1 + 5928) = 0;
  *(_DWORD *)(v1 + 5964) = 0;
  *(_DWORD *)(v1 + 5960) = 0;
  *(_DWORD *)(v1 + 5956) = 0;
  *(_DWORD *)(v1 + 5952) = 0;
  *(_DWORD *)(v1 + 5948) = 0;
  *(_DWORD *)(v1 + 5984) = 0;
  *(_DWORD *)(v1 + 5980) = 0;
  *(_DWORD *)(v1 + 5976) = 0;
  *(_DWORD *)(v1 + 5972) = 0;
  *(_DWORD *)(v1 + 5968) = 0;
  *(_DWORD *)(v1 + 6004) = 0;
  *(_DWORD *)(v1 + 6000) = 0;
  *(_DWORD *)(v1 + 5996) = 0;
  *(_DWORD *)(v1 + 5992) = 0;
  *(_DWORD *)(v1 + 5988) = 0;
  *(_DWORD *)(v1 + 6024) = 0;
  *(_DWORD *)(v1 + 6020) = 0;
  *(_DWORD *)(v1 + 6016) = 0;
  *(_DWORD *)(v1 + 6012) = 0;
  *(_DWORD *)(v1 + 6008) = 0;
  *(_DWORD *)(v1 + 6044) = 0;
  *(_DWORD *)(v1 + 6040) = 0;
  *(_DWORD *)(v1 + 6036) = 0;
  *(_DWORD *)(v1 + 6032) = 0;
  *(_DWORD *)(v1 + 6028) = 0;
  *(_DWORD *)(v1 + 6064) = 0;
  *(_DWORD *)(v1 + 6060) = 0;
  *(_DWORD *)(v1 + 6056) = 0;
  *(_DWORD *)(v1 + 6052) = 0;
  *(_DWORD *)(v1 + 6048) = 0;
  *(_DWORD *)(v1 + 6084) = 0;
  *(_DWORD *)(v1 + 6080) = 0;
  *(_DWORD *)(v1 + 6076) = 0;
  *(_DWORD *)(v1 + 6072) = 0;
  *(_DWORD *)(v1 + 6068) = 0;
  *(_DWORD *)(v1 + 6104) = 0;
  *(_DWORD *)(v1 + 6100) = 0;
  *(_DWORD *)(v1 + 6096) = 0;
  *(_DWORD *)(v1 + 6092) = 0;
  *(_DWORD *)(v1 + 6088) = 0;
  *(_DWORD *)(v1 + 6124) = 0;
  *(_DWORD *)(v1 + 6120) = 0;
  *(_DWORD *)(v1 + 6116) = 0;
  *(_DWORD *)(v1 + 6112) = 0;
  *(_DWORD *)(v1 + 6108) = 0;
  *(_DWORD *)(v1 + 6144) = 0;
  *(_DWORD *)(v1 + 6140) = 0;
  *(_DWORD *)(v1 + 6136) = 0;
  *(_DWORD *)(v1 + 6132) = 0;
  *(_DWORD *)(v1 + 6128) = 0;
  *(_DWORD *)(v1 + 6164) = 0;
  *(_DWORD *)(v1 + 6160) = 0;
  *(_DWORD *)(v1 + 6156) = 0;
  *(_DWORD *)(v1 + 6152) = 0;
  *(_DWORD *)(v1 + 6148) = 0;
  *(_DWORD *)(v1 + 6184) = 0;
  *(_DWORD *)(v1 + 6180) = 0;
  *(_DWORD *)(v1 + 6176) = 0;
  *(_DWORD *)(v1 + 6172) = 0;
  *(_DWORD *)(v1 + 6168) = 0;
  *(_DWORD *)(v1 + 6204) = 0;
  *(_DWORD *)(v1 + 6200) = 0;
  *(_DWORD *)(v1 + 6196) = 0;
  *(_DWORD *)(v1 + 6192) = 0;
  *(_DWORD *)(v1 + 6188) = 0;
  *(_DWORD *)(v1 + 6224) = 0;
  *(_DWORD *)(v1 + 6220) = 0;
  *(_DWORD *)(v1 + 6216) = 0;
  *(_DWORD *)(v1 + 6212) = 0;
  *(_DWORD *)(v1 + 6208) = 0;
  *(_DWORD *)(v1 + 6244) = 0;
  *(_DWORD *)(v1 + 6240) = 0;
  *(_DWORD *)(v1 + 6236) = 0;
  *(_DWORD *)(v1 + 6232) = 0;
  *(_DWORD *)(v1 + 6228) = 0;
  *(_DWORD *)(v1 + 6264) = 0;
  *(_DWORD *)(v1 + 6260) = 0;
  *(_DWORD *)(v1 + 6256) = 0;
  *(_DWORD *)(v1 + 6252) = 0;
  *(_DWORD *)(v1 + 6248) = 0;
  *(_DWORD *)(v1 + 6284) = 0;
  *(_DWORD *)(v1 + 6280) = 0;
  *(_DWORD *)(v1 + 6276) = 0;
  *(_DWORD *)(v1 + 6272) = 0;
  *(_DWORD *)(v1 + 6268) = 0;
  *(_DWORD *)(v1 + 6304) = 0;
  *(_DWORD *)(v1 + 6300) = 0;
  *(_DWORD *)(v1 + 6296) = 0;
  *(_DWORD *)(v1 + 6292) = 0;
  *(_DWORD *)(v1 + 6288) = 0;
  *(_DWORD *)(v1 + 6324) = 0;
  *(_DWORD *)(v1 + 6320) = 0;
  *(_DWORD *)(v1 + 6316) = 0;
  *(_DWORD *)(v1 + 6312) = 0;
  *(_DWORD *)(v1 + 6308) = 0;
  *(_DWORD *)(v1 + 6344) = 0;
  *(_DWORD *)(v1 + 6340) = 0;
  *(_DWORD *)(v1 + 6336) = 0;
  *(_DWORD *)(v1 + 6332) = 0;
  *(_DWORD *)(v1 + 6328) = 0;
  *(_DWORD *)(v1 + 6364) = 0;
  *(_DWORD *)(v1 + 6360) = 0;
  *(_DWORD *)(v1 + 6356) = 0;
  *(_DWORD *)(v1 + 6352) = 0;
  *(_DWORD *)(v1 + 6348) = 0;
  *(_DWORD *)(v1 + 6384) = 0;
  *(_DWORD *)(v1 + 6380) = 0;
  *(_DWORD *)(v1 + 6376) = 0;
  *(_DWORD *)(v1 + 6372) = 0;
  *(_DWORD *)(v1 + 6368) = 0;
  *(_DWORD *)(v1 + 6388) = &unk_28898CC;
  *(_DWORD *)(v1 + 6392) = &unk_28898CC;
  *(_DWORD *)(v1 + 6396) = &unk_28898CC;
  *(_DWORD *)(v1 + 6400) = &unk_28898CC;
  *(_DWORD *)(v1 + 6404) = &unk_28898CC;
  *(_DWORD *)(v1 + 6408) = &unk_28898CC;
  *(_DWORD *)(v1 + 6412) = &unk_28898CC;
  *(_DWORD *)(v1 + 6416) = &unk_28898CC;
  *(_DWORD *)(v1 + 6420) = &unk_28898CC;
  *(_DWORD *)(v1 + 6424) = &unk_28898CC;
  *(_DWORD *)(v1 + 6428) = &unk_28898CC;
  *(_DWORD *)(v1 + 6432) = &unk_28898CC;
  *(_DWORD *)(v1 + 6436) = &unk_28898CC;
  *(_DWORD *)(v1 + 6440) = &unk_28898CC;
  *(_DWORD *)(v1 + 6444) = &unk_28898CC;
  *(_DWORD *)(v1 + 6448) = &unk_28898CC;
  *(_DWORD *)(v1 + 6452) = &unk_28898CC;
  *(_DWORD *)(v1 + 6456) = &unk_28898CC;
  *(_DWORD *)(v1 + 6460) = &unk_28898CC;
  *(_DWORD *)(v1 + 6464) = &unk_28898CC;
  *(_DWORD *)(v1 + 6468) = &unk_28898CC;
  *(_DWORD *)(v1 + 6472) = &unk_28898CC;
  *(_DWORD *)(v1 + 6476) = &unk_28898CC;
  *(_DWORD *)(v1 + 6480) = &unk_28898CC;
  *(_DWORD *)(v1 + 6484) = &unk_28898CC;
  *(_DWORD *)(v1 + 6488) = &unk_28898CC;
  *(_DWORD *)(v1 + 6492) = &unk_28898CC;
  *(_DWORD *)(v1 + 6496) = &unk_28898CC;
  *(_DWORD *)(v1 + 6500) = &unk_28898CC;
  *(_DWORD *)(v1 + 6504) = &unk_28898CC;
  *(_DWORD *)(v1 + 6508) = &unk_28898CC;
  *(_DWORD *)(v1 + 6512) = &unk_28898CC;
  *(_DWORD *)(v1 + 6516) = &unk_28898CC;
  *(_DWORD *)(v1 + 6520) = &unk_28898CC;
  *(_DWORD *)(v1 + 6524) = &unk_28898CC;
  *(_DWORD *)(v1 + 6528) = &unk_28898CC;
  *(_DWORD *)(v1 + 6532) = &unk_28898CC;
  *(_DWORD *)(v1 + 6536) = &unk_28898CC;
  *(_DWORD *)(v1 + 6540) = &unk_28898CC;
  *(_DWORD *)(v1 + 6544) = &unk_28898CC;
  *(_DWORD *)(v1 + 6548) = &unk_28898CC;
  *(_DWORD *)(v1 + 6552) = &unk_28898CC;
  *(_DWORD *)(v1 + 6556) = &unk_28898CC;
  *(_DWORD *)(v1 + 6560) = &unk_28898CC;
  *(_DWORD *)(v1 + 6564) = &unk_28898CC;
  *(_DWORD *)(v1 + 6568) = &unk_28898CC;
  *(_DWORD *)(v1 + 6572) = &unk_28898CC;
  *(_DWORD *)(v1 + 6576) = &unk_28898CC;
  *(_DWORD *)(v1 + 6580) = &unk_28898CC;
  *(_DWORD *)(v1 + 6584) = &unk_28898CC;
  *(_DWORD *)(v1 + 6588) = &unk_28898CC;
  *(_DWORD *)(v1 + 6592) = &unk_28898CC;
  *(_DWORD *)(v1 + 6596) = &unk_28898CC;
  *(_DWORD *)(v1 + 6600) = &unk_28898CC;
  *(_DWORD *)(v1 + 6604) = &unk_28898CC;
  *(_DWORD *)(v1 + 6608) = &unk_28898CC;
  *(_DWORD *)(v1 + 6612) = &unk_28898CC;
  *(_DWORD *)(v1 + 6616) = &unk_28898CC;
  *(_DWORD *)(v1 + 6620) = &unk_28898CC;
  *(_DWORD *)(v1 + 6624) = &unk_28898CC;
  *(_DWORD *)(v1 + 6628) = &unk_28898CC;
  *(_DWORD *)(v1 + 6632) = &unk_28898CC;
  *(_DWORD *)(v1 + 6636) = &unk_28898CC;
  *(_DWORD *)(v1 + 6640) = &unk_28898CC;
  *(_DWORD *)(v1 + 6644) = &unk_28898CC;
  *(_DWORD *)(v1 + 6648) = &unk_28898CC;
  *(_DWORD *)(v1 + 6652) = &unk_28898CC;
  *(_DWORD *)(v1 + 6656) = &unk_28898CC;
  *(_DWORD *)(v1 + 6660) = &unk_28898CC;
  *(_DWORD *)(v1 + 6664) = &unk_28898CC;
  *(_DWORD *)(v1 + 6668) = &unk_28898CC;
  *(_DWORD *)(v1 + 6672) = &unk_28898CC;
  *(_DWORD *)(v1 + 6676) = &unk_28898CC;
  *(_DWORD *)(v1 + 6680) = &unk_28898CC;
  *(_DWORD *)(v1 + 6684) = &unk_28898CC;
  *(_DWORD *)(v1 + 6688) = &unk_28898CC;
  *(_DWORD *)(v1 + 6692) = &unk_28898CC;
  *(_DWORD *)(v1 + 6696) = &unk_28898CC;
  *(_DWORD *)(v1 + 6700) = &unk_28898CC;
  *(_DWORD *)(v1 + 6704) = &unk_28898CC;
  *(_DWORD *)(v1 + 6708) = &unk_28898CC;
  *(_DWORD *)(v1 + 6712) = &unk_28898CC;
  *(_DWORD *)(v1 + 6716) = &unk_28898CC;
  *(_DWORD *)(v1 + 6720) = &unk_28898CC;
  *(_DWORD *)(v1 + 6724) = &unk_28898CC;
  *(_DWORD *)(v1 + 6728) = &unk_28898CC;
  *(_DWORD *)(v1 + 6732) = &unk_28898CC;
  *(_DWORD *)(v1 + 6736) = &unk_28898CC;
  *(_DWORD *)(v1 + 6740) = &unk_28898CC;
  *(_DWORD *)(v1 + 6744) = &unk_28898CC;
  *(_DWORD *)(v1 + 6748) = &unk_28898CC;
  *(_DWORD *)(v1 + 6752) = &unk_28898CC;
  *(_DWORD *)(v1 + 6756) = &unk_28898CC;
  *(_DWORD *)(v1 + 6760) = &unk_28898CC;
  *(_DWORD *)(v1 + 6764) = &unk_28898CC;
  *(_DWORD *)(v1 + 6768) = &unk_28898CC;
  *(_DWORD *)(v1 + 6772) = &unk_28898CC;
  *(_DWORD *)(v1 + 6776) = &unk_28898CC;
  *(_DWORD *)(v1 + 6780) = &unk_28898CC;
  *(_DWORD *)(v1 + 6784) = &unk_28898CC;
  *(_DWORD *)(v1 + 6788) = &unk_28898CC;
  *(_DWORD *)(v1 + 6792) = &unk_28898CC;
  *(_DWORD *)(v1 + 6796) = &unk_28898CC;
  *(_DWORD *)(v1 + 6800) = &unk_28898CC;
  *(_DWORD *)(v1 + 6804) = &unk_28898CC;
  *(_DWORD *)(v1 + 6808) = &unk_28898CC;
  *(_DWORD *)(v1 + 6836) = 0;
  *(_DWORD *)(v1 + 6832) = 0;
  *(_DWORD *)(v1 + 6828) = 0;
  *(_DWORD *)(v1 + 6824) = 0;
  *(_DWORD *)(v1 + 6820) = 0;
  *(_DWORD *)(v1 + 6816) = 0;
  v21 = (_DWORD *)(v1 + 6836);
  *(_DWORD *)(v1 + 6812) = 0;
  v22 = (int *)(v1 + 6832);
  v23 = (void **)(v1 + 6828);
  *(_DWORD *)(*(_DWORD *)(v1 + 4) + 40) = v1;
  do
  {
    v4 = v1 + 20 * v2;
    *(_DWORD *)(v4 + 28) = v2;
    *(_DWORD *)(v4 + 2148) = v2;
    *(_DWORD *)(v4 + 4268) = v2;
    j_MinecraftPackets::createPacket((MinecraftPackets *)&v25, v2);
    v5 = v1 + 4 * v2;
    v6 = (int *)(v5 + 6388);
    if ( v25 )
    {
      (*(void (__fastcall **)(int *))(*(_DWORD *)v25 + 12))(&v24);
      xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v6, &v24);
      v7 = (void *)(v24 - 12);
      if ( (int *)(v24 - 12) != &dword_28898C0 )
      {
        v8 = (unsigned int *)(v24 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v3 = __ldrex(v8);
          while ( __strex(v3 - 1, v8) );
        }
        else
          v3 = (*v8)--;
        if ( v3 <= 0 )
          j_j_j_j__ZdlPv_9(v7);
      }
    }
    else
      sub_21E8190((void **)(v5 + 6388), "UnknownPacket", (_BYTE *)0xD);
      (*(void (**)(void))(*(_DWORD *)v25 + 4))();
    ++v2;
  }
  while ( v2 != 106 );
  v9 = *v22;
  if ( *v22 == *v21 )
    v10 = v9 - (_DWORD)*v23;
    v11 = v10 >> 4;
    if ( !(v10 >> 4) )
      v11 = 1;
    v12 = v11 + (v10 >> 4);
    v13 = v12;
    if ( 0 != v12 >> 28 )
      v13 = 0xFFFFFFF;
    if ( v12 < v11 )
    if ( v13 >= 0x10000000 )
      sub_21E57F4();
    v14 = (char *)j_operator new(16 * v13);
    v15 = *v23;
    v16 = *v22 - (_DWORD)*v23;
    v17 = (int)&v14[v16];
    *(_DWORD *)v17 = 0;
    v18 = v16 >> 4;
    *(_DWORD *)(v17 + 4) = 0;
    *(_DWORD *)(v17 + 8) = 0;
    *(_DWORD *)(v17 + 12) = 0;
    if ( v16 >> 4 )
      j___aeabi_memmove4_0((int)v14, (int)v15);
    v19 = (int)&v14[16 * v18 + 16];
    if ( v15 )
      j_operator delete(v15);
    *v23 = v14;
    *v22 = v19;
    *v21 = &v14[16 * v13];
  else
    *(_DWORD *)v9 = 0;
    *(_DWORD *)(v9 + 4) = 0;
    *(_DWORD *)(v9 + 8) = 0;
    *(_DWORD *)(v9 + 12) = 0;
    *v22 += 16;
  return v1;
}


int __fastcall NetworkStatistics::dataSentTo(int result, int a2, _DWORD *a3)
{
  *(_DWORD *)(result + 6816) += *(_DWORD *)(*a3 - 12);
  return result;
}


void __fastcall NetworkStatistics::~NetworkStatistics(NetworkStatistics *this)
{
  NetworkStatistics::~NetworkStatistics(this);
}


int __fastcall NetworkStatistics::getTotalPreviousSecond(int result, int a2)
{
  int v2; // r1@1
  int v3; // r2@1
  int v4; // r3@1
  int v5; // r12@1
  int v6; // r1@1

  v2 = *(_DWORD *)(a2 + 6832);
  v3 = *(_DWORD *)(v2 - 16);
  v4 = *(_DWORD *)(v2 - 12);
  v5 = *(_DWORD *)(v2 - 8);
  v6 = *(_DWORD *)(v2 - 4);
  *(_DWORD *)result = v3;
  *(_DWORD *)(result + 4) = v4;
  *(_DWORD *)(result + 8) = v5;
  *(_DWORD *)(result + 12) = v6;
  return result;
}


void __fastcall NetworkStatistics::getVerboseInfo(NetworkStatistics *this, int a2)
{
  int v2; // r11@1
  int v3; // r12@1
  int v4; // r9@1
  int v5; // r7@1
  int v6; // r8@1
  char *v7; // r0@1
  int v8; // r6@1
  int v9; // r1@2
  int v10; // lr@2
  int v11; // r7@2
  int v12; // r2@3
  int v13; // r3@3
  int v14; // r4@3
  int v15; // r5@3
  int v16; // r5@3
  int v17; // r4@3
  int v18; // r7@3
  int v19; // r2@4
  int v20; // r4@4
  unsigned int v21; // r1@4
  unsigned int v22; // r2@6
  unsigned int v23; // r10@6
  int v24; // r5@11
  char *v25; // r11@12
  int v26; // r5@14
  int v27; // r2@14
  int v28; // r3@14
  int v29; // r4@14
  int v30; // r7@14
  int v31; // r2@15
  int v32; // lr@16
  int v33; // r3@16
  int v34; // r4@16
  int v35; // r5@16
  int v36; // r6@16
  int v37; // r7@16
  int *v38; // r10@23
  char *v39; // r4@23
  char *v40; // r7@23
  int v41; // r1@23
  char *v42; // r7@23
  int v43; // r1@23
  char *v44; // r0@23
  int v45; // r3@27
  int v46; // r9@27
  char *v47; // r10@27
  char *v48; // r1@27
  char *v49; // r12@27
  int v50; // r11@28
  unsigned int v51; // r3@28
  int v52; // r4@29
  int v53; // r5@29
  int v54; // r6@29
  int v55; // r7@29
  int v56; // r7@30
  int v57; // r1@30
  int v58; // r8@30
  int v59; // lr@31
  int v60; // r2@31
  int v61; // r3@31
  int v62; // r4@31
  int v63; // r5@31
  int v64; // r6@31
  int v65; // r3@32
  int v66; // r5@32
  int v67; // r6@32
  int v68; // r7@32
  char *v69; // r10@34
  int v70; // r6@34
  __int64 v71; // kr08_8@34
  int v72; // r7@35
  int v73; // r5@35
  int v74; // r4@36
  int v75; // r8@36
  int v76; // r12@36
  int v77; // lr@36
  unsigned int v78; // t1@36
  int v79; // r5@39
  int v80; // r1@40
  int v81; // r2@40
  __int64 v82; // kr10_8@40
  int v83; // r8@40
  int v84; // r6@41
  int v85; // r10@41
  int v86; // r12@41
  int v87; // lr@41
  unsigned int v88; // t1@41
  int v89; // r1@42
  char *v90; // r6@46
  char *v91; // r12@46
  int v92; // r8@47
  unsigned int v93; // r3@47
  int v94; // r4@48
  int v95; // r5@48
  int v96; // r6@48
  int v97; // r7@48
  int v98; // r2@49
  int v99; // r0@49
  int v100; // r4@50
  int v101; // r5@50
  int v102; // r6@50
  int v103; // r7@50
  int v104; // r3@51
  int v105; // r5@51
  int v106; // r6@51
  int v107; // r7@51
  int v108; // r2@53
  __int64 v109; // kr18_8@53
  __int64 v110; // kr20_8@53
  int v111; // r4@54
  int v112; // r5@54
  int v113; // r7@54
  int v114; // r12@54
  unsigned int v115; // r0@54
  int v116; // r0@55
  char *v117; // r8@57
  bool v118; // zf@58
  int v119; // r1@61
  char *v120; // r7@61
  int v121; // r1@61
  char *v122; // r7@61
  int v123; // r1@61
  char *v124; // r7@61
  int v125; // r1@61
  char *v126; // r9@61
  int v127; // r1@61
  char *v128; // r0@61
  char *v129; // r6@63
  int v130; // r1@63
  char *v131; // r6@63
  int v132; // r1@63
  char *v133; // r0@63
  char *v134; // r5@63
  int *v135; // r6@64
  char *v136; // r10@64
  int v137; // r2@65
  int v138; // lr@65
  char *v139; // r3@65
  int v140; // r9@66
  int v141; // r1@67
  int v142; // r2@67
  int v143; // r6@67
  int v144; // r7@67
  char *v145; // r11@67
  int v146; // r6@68
  int v147; // r3@68
  int v148; // r10@68
  int v149; // r8@69
  int v150; // r1@69
  int v151; // r2@69
  int v152; // r4@69
  int v153; // r5@69
  int v154; // r7@69
  int v155; // r3@70
  int v156; // r4@70
  int v157; // r5@70
  int v158; // r6@70
  int v159; // r1@72
  int v160; // r2@72
  int v161; // r4@72
  char *v162; // r11@72
  int v163; // r2@72
  int v164; // r10@72
  unsigned int v165; // r8@72
  int v166; // r4@73
  int v167; // r5@73
  int v168; // r6@73
  int v169; // r7@73
  unsigned int v170; // r0@73
  int v171; // r1@74
  int v172; // r2@74
  int v173; // r3@74
  int v174; // r12@76
  int v175; // r1@77
  int v176; // r2@77
  int v177; // r3@77
  char *v178; // r10@77
  int v179; // r1@77
  int v180; // r9@77
  unsigned int v181; // r8@77
  int v182; // r0@78
  int v183; // r4@78
  int v184; // r5@78
  int v185; // r6@78
  int v186; // r7@78
  unsigned int v187; // t1@78
  int v188; // r1@79
  int v189; // r2@79
  int v190; // r3@79
  int v191; // r7@83
  char *v192; // lr@84
  char *v193; // r9@84
  int v194; // r4@85
  int v195; // r5@85
  int v196; // r6@85
  int v197; // r7@85
  char *v198; // r3@86
  int v199; // r2@86
  int v200; // r4@87
  int v201; // r5@87
  int v202; // r6@87
  int v203; // r7@87
  int v204; // r3@88
  int v205; // r4@88
  int v206; // r5@88
  int v207; // r6@88
  int v208; // r1@89
  int v209; // r2@89
  int v210; // r3@89
  unsigned int v211; // r8@89
  int v212; // r3@90
  int v213; // r0@90
  int v214; // r1@90
  int v215; // r2@90
  int v216; // r4@90
  int v217; // r5@90
  int v218; // r6@90
  int v219; // r7@90
  int v220; // r1@93
  int v221; // r2@93
  int v222; // r4@93
  char *v223; // r8@96
  bool v224; // zf@97
  int v225; // r1@100
  char *v226; // r7@100
  int v227; // r1@100
  char *v228; // r7@100
  int v229; // r1@100
  char *v230; // r7@100
  int v231; // r1@100
  char *v232; // r9@100
  int v233; // r1@100
  char *v234; // r0@100
  void **v235; // r0@102
  void *v236; // r0@102
  unsigned int *v237; // r2@106
  signed int v238; // r1@108
  int *v239; // [sp+4h] [bp-11Ch]@1
  char *v240; // [sp+8h] [bp-118h]@63
  unsigned int v241; // [sp+Ch] [bp-114h]@23
  int v242; // [sp+10h] [bp-110h]@1
  int v243; // [sp+10h] [bp-110h]@27
  int v244; // [sp+10h] [bp-110h]@64
  int v245; // [sp+14h] [bp-10Ch]@14
  int v246; // [sp+14h] [bp-10Ch]@34
  int v247; // [sp+18h] [bp-108h]@12
  int v248; // [sp+18h] [bp-108h]@34
  int v249; // [sp+18h] [bp-108h]@40
  int v250; // [sp+1Ch] [bp-104h]@4
  char *v251; // [sp+1Ch] [bp-104h]@23
  int v252; // [sp+20h] [bp-100h]@14
  char *ptr; // [sp+24h] [bp-FCh]@11
  char *ptra; // [sp+24h] [bp-FCh]@23
  int v255; // [sp+28h] [bp-F8h]@2
  int v256; // [sp+28h] [bp-F8h]@34
  int v257; // [sp+28h] [bp-F8h]@40
  void **v258; // [sp+2Ch] [bp-F4h]@23
  int v259; // [sp+30h] [bp-F0h]@103
  void **v260; // [sp+34h] [bp-ECh]@23
  void **v261; // [sp+38h] [bp-E8h]@102
  int v262; // [sp+5Ch] [bp-C4h]@102
  char v263; // [sp+E8h] [bp-38h]@27
  int v264; // [sp+ECh] [bp-34h]@67
  int v265; // [sp+F0h] [bp-30h]@67
  int v266; // [sp+F4h] [bp-2Ch]@67
  int v267; // [sp+F8h] [bp-28h]@67

  v2 = a2;
  v239 = (int *)this;
  v3 = 0;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v242 = a2;
  do
  {
    v255 = v5;
    v9 = v2 + 20 * v4;
    v10 = *(_DWORD *)(v9 + 32);
    v11 = *(_DWORD *)(v9 + 40);
    if ( v8 == v6 )
    {
      v250 = v9 + 28;
      v19 = (v8 - (signed int)v7) >> 2;
      v20 = -858993459 * v19;
      v21 = -858993459 * v19;
      if ( (char *)v8 == v7 )
        v21 = 1;
      v22 = v21 + -858993459 * v19;
      v23 = v22;
      if ( v22 > 0xCCCCCCC )
        v23 = 214748364;
      if ( v22 < v21 )
      if ( v23 )
      {
        ptr = v7;
        v24 = v3;
        if ( v23 >= 0xCCCCCCD )
          sub_21E57F4();
        v247 = v11;
        v25 = (char *)j_operator new(20 * v23);
        v7 = ptr;
        v3 = v24;
      }
      else
        v25 = 0;
      v245 = v10;
      v252 = v3;
      v26 = (int)&v25[20 * v20];
      v27 = *(_DWORD *)(v250 + 4);
      v28 = *(_DWORD *)(v250 + 8);
      v29 = *(_DWORD *)(v250 + 12);
      v30 = *(_DWORD *)(v250 + 16);
      *(_DWORD *)v26 = *(_DWORD *)v250;
      *(_DWORD *)(v26 + 4) = v27;
      *(_DWORD *)(v26 + 8) = v28;
      *(_DWORD *)(v26 + 12) = v29;
      *(_DWORD *)(v26 + 16) = v30;
      if ( v7 == (char *)v6 )
        v7 = (char *)v6;
        v17 = (int)v25;
        v31 = 0;
        do
        {
          v32 = (int)&v7[v31];
          v33 = (int)&v25[v31];
          v31 += 20;
          v34 = *(_DWORD *)(v32 + 4);
          v35 = *(_DWORD *)(v32 + 8);
          v36 = *(_DWORD *)(v32 + 12);
          v37 = *(_DWORD *)(v32 + 16);
          *(_DWORD *)v33 = *(_DWORD *)v32;
          *(_DWORD *)(v33 + 4) = v34;
          *(_DWORD *)(v33 + 8) = v35;
          *(_DWORD *)(v33 + 12) = v36;
          *(_DWORD *)(v33 + 16) = v37;
        }
        while ( v6 - (_DWORD)v7 != v31 );
        v17 = (int)&v25[v31];
      v16 = v247;
      v18 = v255;
      if ( v7 )
        j_operator delete(v7);
      v3 = v252;
      v6 = (int)&v25[20 * v23];
      v7 = v25;
      v10 = v245;
      v2 = v242;
    }
    else
      v12 = *(_DWORD *)(v9 + 32);
      v13 = *(_DWORD *)(v9 + 36);
      v14 = *(_DWORD *)(v9 + 40);
      v15 = *(_DWORD *)(v9 + 44);
      *(_DWORD *)v8 = *(_DWORD *)(v9 + 28);
      *(_DWORD *)(v8 + 4) = v12;
      *(_DWORD *)(v8 + 8) = v13;
      *(_DWORD *)(v8 + 12) = v14;
      *(_DWORD *)(v8 + 16) = v15;
      v16 = v11;
      v17 = v8;
    ++v4;
    v3 += v16;
    v5 = v18 + v10;
    v8 = v17 + 20;
  }
  while ( v4 != 106 );
  v38 = (int *)&v258;
  v241 = v17 + 20;
  v251 = (char *)v17;
  ptra = v7;
  sub_21D103C((int)&v258, 24);
  v39 = (char *)&v260;
  sub_21CBF38((char *)&v260, (int)"Total sent: ", 12);
  v40 = sub_21CC440((char *)&v260);
  sub_21CBF38(v40, (int)" (", 2);
  v41 = *(_DWORD *)(v2 + 16);
  v42 = sub_21CC440(v40);
  sub_21CBF38(v42, (int)"/", 1);
  v43 = *(_DWORD *)(v2 + 12);
  v44 = sub_21CC440(v42);
  sub_21CBF38(v44, (int)" bytes)\n", 8);
  if ( ptra != (char *)v241 )
    sub_19A5EE6((int)ptra, v241, 2 * (31 - __clz(-858993459 * ((signed int)(v241 - (_DWORD)ptra) >> 2))), 0);
    if ( (signed int)(v241 - (_DWORD)ptra) <= 320 )
      v39 = (char *)&v260;
      if ( ptra == v251 )
LABEL_57:
        v117 = ptra + 8;
          v118 = *(_DWORD *)v117 == 0;
          if ( *(_DWORD *)v117 )
            v118 = *((_DWORD *)v117 - 1) == 0;
          if ( !v118 )
          {
            v119 = *(_DWORD *)(v2 + 4 * *((_DWORD *)v117 - 2) + 6388);
            v120 = sub_21CBF38(v39, v119, *(_DWORD *)(v119 - 12));
            sub_21CBF38(v120, (int)" (", 2);
            v121 = *((_DWORD *)v117 - 2);
            v122 = sub_21CC440(v120);
            sub_21CBF38(v122, (int)"). Bytes: ", 10);
            v123 = *(_DWORD *)v117;
            v124 = sub_21CC440(v122);
            sub_21CBF38(v124, (int)". Num: ", 7);
            v125 = *((_DWORD *)v117 - 1);
            v126 = sub_21CC440(v124);
            sub_21CBF38(v126, (int)". Avg size: ", 12);
            v127 = *(_DWORD *)v117 / *((_DWORD *)v117 - 1);
            v128 = sub_21CC440(v126);
            sub_21CBF38(v128, (int)"\n", 1);
          }
          v117 += 20;
        while ( v117 - v251 != 28 );
        goto LABEL_63;
      v90 = ptra;
      v91 = &v263;
      v243 = v2;
      do
        while ( 1 )
          v92 = (int)(v90 + 20);
          v93 = *((_DWORD *)v90 + 7);
          if ( v93 <= *((_DWORD *)ptra + 2) )
            break;
          v94 = *((_DWORD *)v90 + 6);
          v95 = *((_DWORD *)v90 + 7);
          v96 = *((_DWORD *)v90 + 8);
          v97 = *(_DWORD *)(v92 + 16);
          *(_DWORD *)v91 = *(_DWORD *)v92;
          *((_DWORD *)v91 + 1) = v94;
          *((_DWORD *)v91 + 2) = v95;
          *((_DWORD *)v91 + 3) = v96;
          *((_DWORD *)v91 + 4) = v97;
          if ( v92 - (signed int)ptra >= 1 )
            v98 = v92;
            v99 = -858993459 * ((v92 - (signed int)ptra) >> 2) + 1;
            do
            {
              --v99;
              v100 = *(_DWORD *)(v98 - 16);
              v101 = *(_DWORD *)(v98 - 12);
              v102 = *(_DWORD *)(v98 - 8);
              v103 = *(_DWORD *)(v98 - 4);
              *(_DWORD *)v98 = *(_DWORD *)(v98 - 20);
              *(_DWORD *)(v98 + 4) = v100;
              *(_DWORD *)(v98 + 8) = v101;
              *(_DWORD *)(v98 + 12) = v102;
              *(_DWORD *)(v98 + 16) = v103;
              v98 -= 20;
            }
            while ( v99 > 1 );
          v104 = *((_DWORD *)v91 + 1);
          v105 = *((_DWORD *)v91 + 2);
          v106 = *((_DWORD *)v91 + 3);
          v107 = *((_DWORD *)v91 + 4);
          *(_DWORD *)ptra = *(_DWORD *)v91;
          *((_DWORD *)ptra + 1) = v104;
          *((_DWORD *)ptra + 2) = v105;
          *((_DWORD *)ptra + 3) = v106;
          *((_DWORD *)ptra + 4) = v107;
          v90 = (char *)v92;
          if ( (char *)v92 == v251 )
            goto LABEL_56;
        v108 = (int)(v90 + 20);
        v109 = *((_QWORD *)v90 + 4);
        v110 = *(_QWORD *)v92;
        if ( *((_DWORD *)v90 + 2) < v93 )
          do
            v111 = *((_DWORD *)v90 + 1);
            v112 = *((_DWORD *)v90 + 2);
            v113 = *((_DWORD *)v90 + 3);
            v114 = *((_DWORD *)v90 + 4);
            *(_DWORD *)v108 = *(_DWORD *)v90;
            *(_DWORD *)(v108 + 4) = v111;
            *(_DWORD *)(v108 + 8) = v112;
            *(_DWORD *)(v108 + 12) = v113;
            *(_DWORD *)(v108 + 16) = v114;
            v108 = (int)v90;
            v115 = *((_DWORD *)v90 - 3);
            v90 -= 20;
          while ( v115 < v93 );
        v116 = v108 + 8;
        *(_QWORD *)v108 = v110;
        *(_DWORD *)v116 = v93;
        *(_QWORD *)(v116 + 4) = v109;
        v91 = &v263;
        v90 = (char *)v92;
      while ( (char *)v92 != v251 );
      v45 = (int)(ptra + 20);
      v46 = (int)(ptra + 320);
      v47 = &v263;
      v48 = ptra;
      v49 = ptra;
          v50 = v45;
          v51 = *((_DWORD *)v48 + 7);
          if ( v51 <= *((_DWORD *)v49 + 2) )
          v52 = *(_DWORD *)(v50 + 4);
          v53 = *(_DWORD *)(v50 + 8);
          v54 = *(_DWORD *)(v50 + 12);
          v55 = *(_DWORD *)(v50 + 16);
          *(_DWORD *)v47 = *(_DWORD *)v50;
          *((_DWORD *)v47 + 1) = v52;
          *((_DWORD *)v47 + 2) = v53;
          *((_DWORD *)v47 + 3) = v54;
          *((_DWORD *)v47 + 4) = v55;
          if ( v50 - (signed int)v49 >= 1 )
            v56 = v50 - 20;
            v57 = (int)(v48 + 20);
            v58 = -858993459 * ((v50 - (signed int)v49) >> 2) + 1;
              v59 = v56;
              v60 = v57;
              --v58;
              v56 -= 20;
              v57 -= 20;
              v61 = *(_DWORD *)(v59 + 4);
              v62 = *(_DWORD *)(v59 + 8);
              v63 = *(_DWORD *)(v59 + 12);
              v64 = *(_DWORD *)(v59 + 16);
              *(_DWORD *)v60 = *(_DWORD *)v59;
              *(_DWORD *)(v60 + 4) = v61;
              *(_DWORD *)(v60 + 8) = v62;
              *(_DWORD *)(v60 + 12) = v63;
              *(_DWORD *)(v60 + 16) = v64;
            while ( v58 > 1 );
          v65 = *((_DWORD *)v47 + 1);
          v66 = *((_DWORD *)v47 + 2);
          v67 = *((_DWORD *)v47 + 3);
          v68 = *((_DWORD *)v47 + 4);
          *(_DWORD *)v49 = *(_DWORD *)v47;
          *((_DWORD *)v49 + 1) = v65;
          *((_DWORD *)v49 + 2) = v66;
          *((_DWORD *)v49 + 3) = v67;
          *((_DWORD *)v49 + 4) = v68;
          v45 = v50 + 20;
          v48 = (char *)v50;
          if ( v50 + 20 == v46 )
            goto LABEL_38;
        v69 = v49;
        v70 = v50;
        v256 = *((_DWORD *)v48 + 8);
        v248 = *((_DWORD *)v48 + 9);
        v71 = *(_QWORD *)v50;
        v246 = *(_QWORD *)v50 >> 32;
        if ( *((_DWORD *)v48 + 2) < v51 )
          v72 = v50 - 32;
          v73 = v50;
            v70 = v72 + 12;
            v74 = *(_DWORD *)(v72 + 16);
            v75 = *(_DWORD *)(v72 + 20);
            v76 = *(_DWORD *)(v72 + 24);
            v77 = *(_DWORD *)(v72 + 28);
            *(_DWORD *)v73 = *(_DWORD *)(v72 + 12);
            *(_DWORD *)(v73 + 4) = v74;
            *(_DWORD *)(v73 + 8) = v75;
            *(_DWORD *)(v73 + 12) = v76;
            *(_DWORD *)(v73 + 16) = v77;
            v73 = v72 + 12;
            v78 = *(_DWORD *)v72;
            v72 -= 20;
          while ( v78 < v51 );
        v49 = v69;
        *(_DWORD *)v70 = v71;
        v47 = &v263;
        *(_DWORD *)(v70 + 4) = v246;
        *(_DWORD *)(v70 + 8) = v51;
        v45 = v50 + 20;
        v48 = (char *)v50;
        *(_DWORD *)(v70 + 12) = v256;
        *(_DWORD *)(v70 + 16) = v248;
      while ( v50 + 20 != v46 );
LABEL_38:
      ptra = v49;
      if ( v46 != v241 )
        v79 = (int)(v49 + 288);
          v80 = v79;
          v257 = *(_DWORD *)v46;
          v81 = v46;
          v249 = *(_DWORD *)(v46 + 4);
          v82 = *(_QWORD *)(v46 + 8);
          v83 = *(_DWORD *)(v46 + 16);
          if ( *(_DWORD *)(v46 - 12) < (unsigned int)v82 )
              v84 = *(_DWORD *)(v80 + 16);
              v85 = *(_DWORD *)(v80 + 20);
              v86 = *(_DWORD *)(v80 + 24);
              v87 = *(_DWORD *)(v80 + 28);
              *(_DWORD *)v81 = *(_DWORD *)(v80 + 12);
              *(_DWORD *)(v81 + 4) = v84;
              *(_DWORD *)(v81 + 8) = v85;
              *(_DWORD *)(v81 + 12) = v86;
              *(_DWORD *)(v81 + 16) = v87;
              v81 = v80 + 12;
              v88 = *(_DWORD *)v80;
              v80 -= 20;
            while ( v88 < (unsigned int)v82 );
          v89 = v81 + 4;
          *(_DWORD *)v81 = v257;
          v79 += 20;
          *(_DWORD *)v89 = v249;
          *(_QWORD *)(v89 + 4) = v82;
          *(_DWORD *)(v81 + 16) = v83;
          v118 = v46 == (_DWORD)v251;
          v46 += 20;
        while ( !v118 );
LABEL_56:
    v39 = (char *)&v260;
    v38 = (int *)&v258;
    v2 = v243;
    if ( ptra == (char *)v241 )
      goto LABEL_63;
    goto LABEL_57;
LABEL_63:
  sub_21CBF38(v39, (int)"\nTotal received: ", 17);
  v129 = sub_21CC440(v39);
  sub_21CBF38(v129, (int)" (", 2);
  v130 = *(_DWORD *)(v2 + 24);
  v131 = sub_21CC440(v129);
  sub_21CBF38(v131, (int)"/", 1);
  v132 = *(_DWORD *)(v2 + 20);
  v133 = sub_21CC440(v131);
  sub_21CBF38(v133, (int)" bytes)\n", 8);
  v134 = v251;
  v240 = v39;
  if ( ptra == (char *)v241 )
    goto LABEL_102;
  v135 = v38;
  v136 = ptra;
  v244 = v2;
  sub_19A635C((int)ptra, v241, 2 * (31 - __clz(-858993459 * ((signed int)(v241 - (_DWORD)ptra) >> 2))), 0);
  if ( (signed int)(v241 - (_DWORD)ptra) > 320 )
    v137 = (int)(ptra + 20);
    v138 = (int)(ptra + 320);
    v139 = ptra;
    do
      while ( 1 )
        v140 = v137;
        if ( *((_DWORD *)v139 + 9) <= *((_DWORD *)v136 + 4) )
          break;
        v141 = *(_DWORD *)(v137 + 4);
        v142 = *(_DWORD *)(v137 + 8);
        v143 = *(_DWORD *)(v140 + 12);
        v144 = *(_DWORD *)(v140 + 16);
        v145 = v136;
        *(_DWORD *)&v263 = *(_DWORD *)v140;
        v264 = v141;
        v265 = v142;
        v266 = v143;
        v267 = v144;
        if ( v140 - (signed int)v136 >= 1 )
          v146 = v140 - 20;
          v147 = (int)(v139 + 20);
          v148 = -858993459 * ((v140 - (signed int)v136) >> 2) + 1;
            v149 = v146;
            v150 = v147;
            --v148;
            v146 -= 20;
            v147 -= 20;
            v151 = *(_DWORD *)(v149 + 4);
            v152 = *(_DWORD *)(v149 + 8);
            v153 = *(_DWORD *)(v149 + 12);
            v154 = *(_DWORD *)(v149 + 16);
            *(_DWORD *)v150 = *(_DWORD *)v149;
            *(_DWORD *)(v150 + 4) = v151;
            *(_DWORD *)(v150 + 8) = v152;
            *(_DWORD *)(v150 + 12) = v153;
            *(_DWORD *)(v150 + 16) = v154;
          while ( v148 > 1 );
        v136 = v145;
        v155 = v264;
        v156 = v265;
        v157 = v266;
        v158 = v267;
        *(_DWORD *)v145 = *(_DWORD *)&v263;
        *((_DWORD *)v145 + 1) = v155;
        *((_DWORD *)v145 + 2) = v156;
        *((_DWORD *)v145 + 3) = v157;
        *((_DWORD *)v145 + 4) = v158;
        v137 = v140 + 20;
        v139 = (char *)v140;
        if ( v140 + 20 == v138 )
          goto LABEL_75;
      v159 = *(_DWORD *)(v137 + 4);
      v160 = *(_DWORD *)(v137 + 8);
      v161 = *(_DWORD *)(v140 + 12);
      v162 = v136;
      *(_DWORD *)&v263 = *(_DWORD *)v140;
      v264 = v159;
      v265 = v160;
      v266 = v161;
      v163 = v140;
      v164 = v140;
      v165 = *((_DWORD *)v139 + 9);
      if ( *((_DWORD *)v139 + 4) < v165 )
          v164 = v163 - 20;
          v166 = *(_DWORD *)(v163 - 16);
          v167 = *(_DWORD *)(v163 - 12);
          v168 = *(_DWORD *)(v163 - 8);
          v169 = *(_DWORD *)(v163 - 4);
          *(_DWORD *)v163 = *(_DWORD *)(v163 - 20);
          *(_DWORD *)(v163 + 4) = v166;
          *(_DWORD *)(v163 + 8) = v167;
          *(_DWORD *)(v163 + 12) = v168;
          *(_DWORD *)(v163 + 16) = v169;
          v170 = *(_DWORD *)(v163 - 24);
          v163 -= 20;
        while ( v170 < v165 );
      v171 = v264;
      v172 = v265;
      v173 = v266;
      *(_DWORD *)v164 = *(_DWORD *)&v263;
      *(_DWORD *)(v164 + 4) = v171;
      *(_DWORD *)(v164 + 8) = v172;
      *(_DWORD *)(v164 + 12) = v173;
      *(_DWORD *)(v164 + 16) = v165;
      v137 = v140 + 20;
      v139 = (char *)v140;
      v136 = v162;
    while ( v140 + 20 != v138 );
LABEL_75:
    v2 = v244;
    v134 = v251;
    ptra = v136;
    if ( v138 != v241 )
      v174 = (int)(v136 + 296);
        v175 = *(_DWORD *)(v138 + 4);
        v176 = *(_DWORD *)(v138 + 8);
        v177 = *(_DWORD *)(v138 + 12);
        v178 = v134;
        *(_DWORD *)&v263 = *(_DWORD *)v138;
        v264 = v175;
        v265 = v176;
        v266 = v177;
        v179 = v174;
        v180 = v138;
        v181 = *(_DWORD *)(v138 + 16);
        if ( *(_DWORD *)(v138 - 4) < v181 )
            v180 = v179 + 4;
            v182 = v179 + 24;
            v183 = *(_DWORD *)(v179 + 8);
            v184 = *(_DWORD *)(v179 + 12);
            v185 = *(_DWORD *)(v179 + 16);
            v186 = *(_DWORD *)(v179 + 20);
            *(_DWORD *)v182 = *(_DWORD *)(v179 + 4);
            *(_DWORD *)(v182 + 4) = v183;
            *(_DWORD *)(v182 + 8) = v184;
            *(_DWORD *)(v182 + 12) = v185;
            *(_DWORD *)(v182 + 16) = v186;
            v187 = *(_DWORD *)v179;
            v179 -= 20;
          while ( v187 < v181 );
        v174 += 20;
        v188 = v264;
        v189 = v265;
        v190 = v266;
        v134 = v178;
        v118 = v138 == (_DWORD)v178;
        *(_DWORD *)v180 = *(_DWORD *)&v263;
        *(_DWORD *)(v180 + 4) = v188;
        *(_DWORD *)(v180 + 8) = v189;
        *(_DWORD *)(v180 + 12) = v190;
        *(_DWORD *)(v180 + 16) = v181;
        v138 += 20;
      while ( !v118 );
LABEL_95:
      goto LABEL_102;
    goto LABEL_96;
  v38 = v135;
  if ( ptra != v251 )
    v191 = (int)ptra;
      v192 = (char *)(v191 + 20);
      v193 = v134;
      if ( *(_DWORD *)(v191 + 36) <= *((_DWORD *)ptra + 4) )
        v208 = *(_DWORD *)(v191 + 24);
        v209 = *(_DWORD *)(v191 + 28);
        v210 = *(_DWORD *)(v191 + 32);
        *(_DWORD *)&v263 = *(_DWORD *)v192;
        v264 = v208;
        v265 = v209;
        v266 = v210;
        v211 = *(_DWORD *)(v191 + 36);
        if ( *(_DWORD *)(v191 + 16) >= v211 )
          v212 = v191 + 20;
        else
            v212 = v191;
            v213 = v191 + 20;
            v214 = v191;
            v215 = *(_DWORD *)v191;
            v216 = *(_DWORD *)(v191 + 4);
            v217 = *(_DWORD *)(v191 + 8);
            v218 = *(_DWORD *)(v191 + 12);
            v219 = *(_DWORD *)(v191 + 16);
            *(_DWORD *)v213 = v215;
            *(_DWORD *)(v213 + 4) = v216;
            *(_DWORD *)(v213 + 8) = v217;
            *(_DWORD *)(v213 + 12) = v218;
            *(_DWORD *)(v213 + 16) = v219;
            v191 = v214 - 20;
          while ( *(_DWORD *)(v214 - 4) < v211 );
        v220 = v264;
        v221 = v265;
        v222 = v266;
        *(_DWORD *)v212 = *(_DWORD *)&v263;
        *(_DWORD *)(v212 + 4) = v220;
        *(_DWORD *)(v212 + 8) = v221;
        *(_DWORD *)(v212 + 12) = v222;
        *(_DWORD *)(v212 + 16) = v211;
        v194 = *(_DWORD *)(v191 + 24);
        v195 = *(_DWORD *)(v191 + 28);
        v196 = *(_DWORD *)(v191 + 32);
        v197 = *(_DWORD *)(v191 + 36);
        v264 = v194;
        v265 = v195;
        v266 = v196;
        v267 = v197;
        if ( v192 - ptra >= 1 )
          v198 = v192;
          v199 = -858993459 * ((v192 - ptra) >> 2) + 1;
            --v199;
            v200 = *((_DWORD *)v198 - 4);
            v201 = *((_DWORD *)v198 - 3);
            v202 = *((_DWORD *)v198 - 2);
            v203 = *((_DWORD *)v198 - 1);
            *(_DWORD *)v198 = *((_DWORD *)v198 - 5);
            *((_DWORD *)v198 + 1) = v200;
            *((_DWORD *)v198 + 2) = v201;
            *((_DWORD *)v198 + 3) = v202;
            *((_DWORD *)v198 + 4) = v203;
            v198 -= 20;
          while ( v199 > 1 );
        v204 = v264;
        v205 = v265;
        v206 = v266;
        v207 = v267;
        *(_DWORD *)ptra = *(_DWORD *)&v263;
        *((_DWORD *)ptra + 1) = v204;
        *((_DWORD *)ptra + 2) = v205;
        *((_DWORD *)ptra + 3) = v206;
        *((_DWORD *)ptra + 4) = v207;
      v134 = v193;
      v191 = (int)v192;
    while ( v192 != v193 );
    goto LABEL_95;
LABEL_96:
  v223 = ptra + 16;
    v224 = *(_DWORD *)v223 == 0;
    if ( *(_DWORD *)v223 )
      v224 = *((_DWORD *)v223 - 1) == 0;
    if ( !v224 )
      v225 = *(_DWORD *)(v2 + 4 * *((_DWORD *)v223 - 4) + 6388);
      v226 = sub_21CBF38(v240, v225, *(_DWORD *)(v225 - 12));
      sub_21CBF38(v226, (int)" (", 2);
      v227 = *((_DWORD *)v223 - 4);
      v228 = sub_21CC440(v226);
      sub_21CBF38(v228, (int)"). Bytes: ", 10);
      v229 = *(_DWORD *)v223;
      v230 = sub_21CC440(v228);
      sub_21CBF38(v230, (int)". Num: ", 7);
      v231 = *((_DWORD *)v223 - 1);
      v232 = sub_21CC440(v230);
      sub_21CBF38(v232, (int)". Avg size: ", 12);
      v233 = *(_DWORD *)v223 / *((_DWORD *)v223 - 1);
      v234 = sub_21CC440(v232);
      sub_21CBF38(v234, (int)"\n", 1);
    v223 += 20;
  while ( v223 - v134 != 36 );
LABEL_102:
  sub_21CFED8(v239, (int)(v38 + 3));
  v235 = off_26D3F84;
  v258 = off_26D3F60;
  *(_DWORD *)((char *)*(off_26D3F60 - 3) + (_DWORD)v38) = off_26D3F80[0];
  v260 = v235;
  v261 = &off_27734E8;
  v236 = (void *)(v262 - 12);
  if ( (int *)(v262 - 12) != &dword_28898C0 )
    v237 = (unsigned int *)(v262 - 4);
    if ( &pthread_create )
      __dmb();
        v238 = __ldrex(v237);
      while ( __strex(v238 - 1, v237) );
      v238 = (*v237)--;
    if ( v238 <= 0 )
      j_j_j_j__ZdlPv_9(v236);
  v261 = &off_26D40A8;
  sub_21C802C((unsigned int **)v38 + 10);
  v258 = (void **)off_26D3F68;
  *(int *)((char *)v38 + *((_DWORD *)off_26D3F68 - 3)) = (int)off_26D3F6C;
  v259 = 0;
  sub_21B6560(v38 + 13);
  if ( ptra )
    j_operator delete(ptra);
}


void __fastcall NetworkStatistics::~NetworkStatistics(NetworkStatistics *this)
{
  NetworkStatistics *v1; // r10@1
  void *v2; // r0@1
  int v3; // r6@3
  unsigned int *v4; // r2@4
  signed int v5; // r1@6
  int v6; // r1@12
  int v7; // t1@12
  void *v8; // r0@12

  v1 = this;
  *(_DWORD *)this = &off_2719F00;
  *(_DWORD *)(*((_DWORD *)this + 1) + 40) = 0;
  v2 = (void *)*((_DWORD *)this + 1707);
  if ( v2 )
    j_operator delete(v2);
  v3 = (int)v1 + 6812;
  do
  {
    v7 = *(_DWORD *)(v3 - 4);
    v3 -= 4;
    v6 = v7;
    v8 = (void *)(v7 - 12);
    if ( (int *)(v7 - 12) != &dword_28898C0 )
    {
      v4 = (unsigned int *)(v6 - 4);
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
        j_j_j_j__ZdlPv_9(v8);
    }
  }
  while ( (NetworkStatistics *)v3 != (NetworkStatistics *)((char *)v1 + 6388) );
  j_operator delete((void *)v1);
}


char *__fastcall NetworkStatistics::getStats(NetworkStatistics *this, int a2)
{
  char *v2; // r2@1
  char *result; // r0@1

  v2 = (char *)this + 20 * a2;
  result = 0;
  if ( a2 < 106 )
    result = v2 + 4268;
  return result;
}


NetworkStatistics *__fastcall NetworkStatistics::~NetworkStatistics(NetworkStatistics *this)
{
  NetworkStatistics *v1; // r10@1
  void *v2; // r0@1
  int v3; // r6@3
  unsigned int *v4; // r2@4
  signed int v5; // r1@6
  int v6; // r1@12
  int v7; // t1@12
  void *v8; // r0@12

  v1 = this;
  *(_DWORD *)this = &off_2719F00;
  *(_DWORD *)(*((_DWORD *)this + 1) + 40) = 0;
  v2 = (void *)*((_DWORD *)this + 1707);
  if ( v2 )
    j_operator delete(v2);
  v3 = (int)v1 + 6812;
  do
  {
    v7 = *(_DWORD *)(v3 - 4);
    v3 -= 4;
    v6 = v7;
    v8 = (void *)(v7 - 12);
    if ( (int *)(v7 - 12) != &dword_28898C0 )
    {
      v4 = (unsigned int *)(v6 - 4);
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
        j_j_j_j__ZdlPv_9(v8);
    }
  }
  while ( (NetworkStatistics *)v3 != (NetworkStatistics *)((char *)v1 + 6388) );
  return v1;
}
