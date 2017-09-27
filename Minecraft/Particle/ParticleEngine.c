

int __fastcall ParticleEngine::addCustomParticle(int result, int *a2)
{
  int *v2; // r2@1
  int v3; // r12@3

  v2 = *(int **)(result + 1928);
  if ( v2 == *(int **)(result + 1932) )
  {
    result = (int)j_j_j__ZNSt6vectorISt10unique_ptrI14CustomParticleSt14default_deleteIS1_EESaIS4_EE19_M_emplace_back_auxIJS4_EEEvDpOT_(
                    (_QWORD *)(result + 1924),
                    a2);
  }
  else
    v3 = *a2;
    *a2 = 0;
    *v2 = v3;
    *(_DWORD *)(result + 1928) += 4;
  return result;
}


int __fastcall ParticleEngine::clear(ParticleEngine *this)
{
  ParticleEngine *v1; // r8@1
  int v2; // r4@1
  int v3; // r5@1
  int v4; // r7@2
  int v5; // r10@6
  int i; // r4@7
  __int64 v7; // kr00_8@10
  int v8; // r5@10
  ParticleEngine *v9; // r6@16
  __int64 v10; // kr08_8@17
  int v11; // r7@17

  v1 = this;
  v2 = *((_DWORD *)this + 484);
  v3 = *((_DWORD *)this + 485);
  if ( v3 != v2 )
  {
    v4 = *((_DWORD *)this + 484);
    do
    {
      if ( *(_DWORD *)v4 )
        (*(void (**)(void))(**(_DWORD **)v4 + 12))();
      *(_DWORD *)v4 = 0;
      v4 += 4;
    }
    while ( v3 != v4 );
  }
  v5 = (int)v1 + 580;
  *((_DWORD *)v1 + 485) = v2;
  do
    for ( i = *(_DWORD *)(v5 + 8); i; i = *(_DWORD *)i )
      v7 = *(_QWORD *)(i + 8);
      v8 = *(_QWORD *)(i + 8);
      if ( HIDWORD(v7) != (_DWORD)v7 )
      {
        do
        {
          if ( *(_DWORD *)v8 )
            (*(void (**)(void))(**(_DWORD **)v8 + 12))();
          *(_DWORD *)v8 = 0;
          v8 += 4;
        }
        while ( HIDWORD(v7) != v8 );
      }
      *(_DWORD *)(i + 12) = v7;
    v5 += 28;
  while ( (ParticleEngine *)v5 != (ParticleEngine *)((char *)v1 + 1924) );
  v9 = v1;
    v10 = *(_QWORD *)v9;
    v11 = *(_QWORD *)v9;
    if ( HIDWORD(v10) != (_DWORD)v10 )
      do
        if ( *(_DWORD *)v11 )
          (*(void (**)(void))(**(_DWORD **)v11 + 12))();
        *(_DWORD *)v11 = 0;
        v11 += 4;
      while ( HIDWORD(v10) != v11 );
    *((_DWORD *)v9 + 1) = v10;
    v9 = (ParticleEngine *)((char *)v9 + 12);
  while ( v9 != (ParticleEngine *)((char *)v1 + 576) );
  return _aeabi_memclr4((char *)v1 + 4696, 192);
}


char *__fastcall ParticleEngine::_putBackInIdlePool(int a1, int *a2)
{
  int v2; // r12@1
  int v3; // r0@1
  int v4; // r3@1
  int *v5; // lr@1
  char *result; // r0@2

  v2 = *a2;
  v3 = a1 + 12 * *(_DWORD *)(*a2 + 100);
  v4 = v3 + 4;
  v5 = *(int **)(v3 + 4);
  if ( v5 == *(int **)(v3 + 8) )
  {
    result = j_j_j__ZNSt6vectorISt10unique_ptrI8ParticleSt14default_deleteIS1_EESaIS4_EE19_M_emplace_back_auxIJS4_EEEvDpOT_(
               (_QWORD *)v3,
               a2);
  }
  else
    *a2 = 0;
    *v5 = v2;
    result = (char *)(*(_DWORD *)v4 + 4);
    *(_DWORD *)v4 = result;
  return result;
}


_DWORD *__fastcall ParticleEngine::countParticles(ParticleEngine *this, int a2)
{
  int v2; // r6@1
  int *v3; // r5@1
  int v4; // r2@1
  int i; // r1@1
  int j; // r0@3
  int k; // r0@5
  void **v8; // r0@7
  void *v9; // r0@7
  unsigned int *v11; // r2@9
  signed int v12; // r1@11
  void **v13; // [sp+0h] [bp-D0h]@1
  int v14; // [sp+4h] [bp-CCh]@8
  void **v15; // [sp+8h] [bp-C8h]@7
  void **v16; // [sp+Ch] [bp-C4h]@7
  int v17; // [sp+28h] [bp-A8h]@8
  int v18; // [sp+30h] [bp-A0h]@7
  int v19; // [sp+34h] [bp-9Ch]@8

  v2 = a2;
  v3 = (int *)this;
  sub_119CB58((int)&v13, 24);
  v4 = *(_DWORD *)(v2 + 588);
  for ( i = 0; v4; v4 = *(_DWORD *)v4 )
    i += (signed int)((*(_QWORD *)(v4 + 8) >> 32) - *(_QWORD *)(v4 + 8)) >> 2;
  for ( j = *(_DWORD *)(v2 + 616); j; j = *(_DWORD *)j )
    i += (signed int)((*(_QWORD *)(j + 8) >> 32) - *(_QWORD *)(j + 8)) >> 2;
  for ( k = *(_DWORD *)(v2 + 644); k; k = *(_DWORD *)k )
    i += (signed int)((*(_QWORD *)(k + 8) >> 32) - *(_QWORD *)(k + 8)) >> 2;
  sub_119C914((int)&v15, i);
  sub_119D48C(v3, (int)&v16);
  v8 = off_26D3F84;
  v13 = off_26D3F60;
  *(_DWORD *)((char *)*(off_26D3F60 - 3) + (_DWORD)&v13) = off_26D3F80[0];
  v15 = v8;
  v16 = &off_27734E8;
  v9 = (void *)(v18 - 12);
  if ( (int *)(v18 - 12) != &dword_28898C0 )
  {
    v11 = (unsigned int *)(v18 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
    }
    else
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v9);
  }
  v16 = &off_26D40A8;
  sub_119C954((unsigned int **)&v17);
  v13 = (void **)off_26D3F68;
  *(void ***)((char *)&v13 + *((_DWORD *)off_26D3F68 - 3)) = (void **)off_26D3F6C;
  v14 = 0;
  return sub_119C964(&v19);
}


int __fastcall ParticleEngine::_get(_DWORD *a1, int a2, int a3)
{
  _DWORD *v3; // r4@1
  int v4; // r0@1
  int v5; // r2@1
  int v6; // r0@1
  int **v7; // r0@1
  int v8; // r1@1
  int v9; // t1@1
  int v10; // r5@2
  int *v11; // r7@2
  int result; // r0@2

  v3 = a1;
  v4 = 3 * a3;
  v5 = *(_DWORD *)(a2 + 12 * a3);
  v6 = a2 + 4 * v4;
  v9 = *(_DWORD *)(v6 + 4);
  v7 = (int **)(v6 + 4);
  v8 = v9;
  if ( v5 == v9 )
  {
    result = 0;
    *v3 = 0;
  }
  else
    v10 = *(_DWORD *)(v8 - 4);
    *(_DWORD *)(v8 - 4) = 0;
    v11 = *v7 - 1;
    *v7 = v11;
    result = *v11;
    if ( *v11 )
      result = (*(int (**)(void))(*(_DWORD *)result + 12))();
    *v11 = 0;
    *v3 = v10;
  return result;
}


int __fastcall ParticleEngine::ParticleEngine(double a1, int a2, int a3, int a4)
{
  int v4; // r9@1
  int v5; // r5@1
  int v6; // r10@1
  int v7; // r8@2
  int v8; // r6@4
  void *v9; // r7@4
  int v10; // r6@6
  unsigned int v11; // r0@6
  int v12; // r11@6
  signed int v13; // r1@6
  int v14; // r0@9
  int v15; // r2@9
  int v16; // r4@9
  void *v17; // r0@10
  void *v18; // r0@11
  void *v19; // r0@12
  int v20; // r8@13
  int v21; // r7@13
  int v22; // r6@14
  int i; // r7@19
  __int64 v24; // kr00_8@22
  int v25; // r6@22
  int v26; // r7@28
  __int64 v27; // kr08_8@29
  int v28; // r6@29
  unsigned int *v30; // r2@35
  signed int v31; // r1@37
  unsigned int *v32; // r2@39
  signed int v33; // r1@41
  unsigned int *v34; // r2@43
  signed int v35; // r1@45
  int v36; // [sp+8h] [bp-48h]@1
  int v37; // [sp+Ch] [bp-44h]@1
  int v38; // [sp+14h] [bp-3Ch]@12
  int v39; // [sp+1Ch] [bp-34h]@11
  int v40; // [sp+24h] [bp-2Ch]@10

  v4 = LODWORD(a1);
  v5 = LODWORD(a1) + 576;
  v6 = 0;
  *(_DWORD *)(LODWORD(a1) + 8) = 0;
  *(_DWORD *)(LODWORD(a1) + 12) = 0;
  *(_DWORD *)LODWORD(a1) = 0;
  *(_DWORD *)(LODWORD(a1) + 4) = 0;
  *(_DWORD *)(LODWORD(a1) + 16) = 0;
  *(_DWORD *)(LODWORD(a1) + 20) = 0;
  *(_DWORD *)(LODWORD(a1) + 24) = 0;
  *(_DWORD *)(LODWORD(a1) + 28) = 0;
  *(_DWORD *)(LODWORD(a1) + 32) = 0;
  *(_DWORD *)(LODWORD(a1) + 36) = 0;
  *(_DWORD *)(LODWORD(a1) + 40) = 0;
  *(_DWORD *)(LODWORD(a1) + 44) = 0;
  *(_DWORD *)(LODWORD(a1) + 48) = 0;
  *(_DWORD *)(LODWORD(a1) + 52) = 0;
  *(_DWORD *)(LODWORD(a1) + 56) = 0;
  *(_DWORD *)(LODWORD(a1) + 60) = 0;
  *(_DWORD *)(LODWORD(a1) + 64) = 0;
  *(_DWORD *)(LODWORD(a1) + 68) = 0;
  *(_DWORD *)(LODWORD(a1) + 72) = 0;
  *(_DWORD *)(LODWORD(a1) + 76) = 0;
  *(_DWORD *)(LODWORD(a1) + 80) = 0;
  *(_DWORD *)(LODWORD(a1) + 84) = 0;
  *(_DWORD *)(LODWORD(a1) + 88) = 0;
  *(_DWORD *)(LODWORD(a1) + 92) = 0;
  *(_DWORD *)(LODWORD(a1) + 96) = 0;
  *(_DWORD *)(LODWORD(a1) + 100) = 0;
  *(_DWORD *)(LODWORD(a1) + 104) = 0;
  *(_DWORD *)(LODWORD(a1) + 108) = 0;
  *(_DWORD *)(LODWORD(a1) + 112) = 0;
  *(_DWORD *)(LODWORD(a1) + 116) = 0;
  *(_DWORD *)(LODWORD(a1) + 120) = 0;
  *(_DWORD *)(LODWORD(a1) + 124) = 0;
  *(_DWORD *)(LODWORD(a1) + 128) = 0;
  *(_DWORD *)(LODWORD(a1) + 132) = 0;
  *(_DWORD *)(LODWORD(a1) + 136) = 0;
  *(_DWORD *)(LODWORD(a1) + 140) = 0;
  *(_DWORD *)(LODWORD(a1) + 144) = 0;
  *(_DWORD *)(LODWORD(a1) + 148) = 0;
  *(_DWORD *)(LODWORD(a1) + 152) = 0;
  *(_DWORD *)(LODWORD(a1) + 156) = 0;
  *(_DWORD *)(LODWORD(a1) + 160) = 0;
  *(_DWORD *)(LODWORD(a1) + 164) = 0;
  *(_DWORD *)(LODWORD(a1) + 168) = 0;
  *(_DWORD *)(LODWORD(a1) + 172) = 0;
  *(_DWORD *)(LODWORD(a1) + 176) = 0;
  *(_DWORD *)(LODWORD(a1) + 180) = 0;
  *(_DWORD *)(LODWORD(a1) + 184) = 0;
  *(_DWORD *)(LODWORD(a1) + 188) = 0;
  *(_DWORD *)(LODWORD(a1) + 192) = 0;
  *(_DWORD *)(LODWORD(a1) + 196) = 0;
  *(_DWORD *)(LODWORD(a1) + 200) = 0;
  *(_DWORD *)(LODWORD(a1) + 204) = 0;
  *(_DWORD *)(LODWORD(a1) + 208) = 0;
  *(_DWORD *)(LODWORD(a1) + 212) = 0;
  *(_DWORD *)(LODWORD(a1) + 216) = 0;
  *(_DWORD *)(LODWORD(a1) + 220) = 0;
  *(_DWORD *)(LODWORD(a1) + 224) = 0;
  *(_DWORD *)(LODWORD(a1) + 228) = 0;
  *(_DWORD *)(LODWORD(a1) + 232) = 0;
  *(_DWORD *)(LODWORD(a1) + 236) = 0;
  *(_DWORD *)(LODWORD(a1) + 240) = 0;
  *(_DWORD *)(LODWORD(a1) + 244) = 0;
  *(_DWORD *)(LODWORD(a1) + 248) = 0;
  *(_DWORD *)(LODWORD(a1) + 252) = 0;
  *(_DWORD *)(LODWORD(a1) + 256) = 0;
  *(_DWORD *)(LODWORD(a1) + 260) = 0;
  *(_DWORD *)(LODWORD(a1) + 264) = 0;
  *(_DWORD *)(LODWORD(a1) + 268) = 0;
  *(_DWORD *)(LODWORD(a1) + 272) = 0;
  *(_DWORD *)(LODWORD(a1) + 276) = 0;
  *(_DWORD *)(LODWORD(a1) + 280) = 0;
  *(_DWORD *)(LODWORD(a1) + 284) = 0;
  *(_DWORD *)(LODWORD(a1) + 288) = 0;
  *(_DWORD *)(LODWORD(a1) + 292) = 0;
  *(_DWORD *)(LODWORD(a1) + 296) = 0;
  *(_DWORD *)(LODWORD(a1) + 300) = 0;
  *(_DWORD *)(LODWORD(a1) + 304) = 0;
  *(_DWORD *)(LODWORD(a1) + 308) = 0;
  *(_DWORD *)(LODWORD(a1) + 312) = 0;
  *(_DWORD *)(LODWORD(a1) + 316) = 0;
  *(_DWORD *)(LODWORD(a1) + 320) = 0;
  *(_DWORD *)(LODWORD(a1) + 324) = 0;
  *(_DWORD *)(LODWORD(a1) + 328) = 0;
  *(_DWORD *)(LODWORD(a1) + 332) = 0;
  *(_DWORD *)(LODWORD(a1) + 336) = 0;
  *(_DWORD *)(LODWORD(a1) + 340) = 0;
  *(_DWORD *)(LODWORD(a1) + 344) = 0;
  *(_DWORD *)(LODWORD(a1) + 348) = 0;
  *(_DWORD *)(LODWORD(a1) + 352) = 0;
  *(_DWORD *)(LODWORD(a1) + 356) = 0;
  *(_DWORD *)(LODWORD(a1) + 360) = 0;
  *(_DWORD *)(LODWORD(a1) + 364) = 0;
  *(_DWORD *)(LODWORD(a1) + 368) = 0;
  *(_DWORD *)(LODWORD(a1) + 372) = 0;
  *(_DWORD *)(LODWORD(a1) + 376) = 0;
  *(_DWORD *)(LODWORD(a1) + 380) = 0;
  *(_DWORD *)(LODWORD(a1) + 384) = 0;
  *(_DWORD *)(LODWORD(a1) + 388) = 0;
  *(_DWORD *)(LODWORD(a1) + 392) = 0;
  *(_DWORD *)(LODWORD(a1) + 396) = 0;
  *(_DWORD *)(LODWORD(a1) + 400) = 0;
  *(_DWORD *)(LODWORD(a1) + 404) = 0;
  *(_DWORD *)(LODWORD(a1) + 408) = 0;
  *(_DWORD *)(LODWORD(a1) + 412) = 0;
  *(_DWORD *)(LODWORD(a1) + 416) = 0;
  *(_DWORD *)(LODWORD(a1) + 420) = 0;
  *(_DWORD *)(LODWORD(a1) + 424) = 0;
  *(_DWORD *)(LODWORD(a1) + 428) = 0;
  *(_DWORD *)(LODWORD(a1) + 432) = 0;
  *(_DWORD *)(LODWORD(a1) + 436) = 0;
  *(_DWORD *)(LODWORD(a1) + 440) = 0;
  *(_DWORD *)(LODWORD(a1) + 444) = 0;
  *(_DWORD *)(LODWORD(a1) + 448) = 0;
  *(_DWORD *)(LODWORD(a1) + 452) = 0;
  *(_DWORD *)(LODWORD(a1) + 456) = 0;
  *(_DWORD *)(LODWORD(a1) + 460) = 0;
  *(_DWORD *)(LODWORD(a1) + 464) = 0;
  *(_DWORD *)(LODWORD(a1) + 468) = 0;
  *(_DWORD *)(LODWORD(a1) + 472) = 0;
  *(_DWORD *)(LODWORD(a1) + 476) = 0;
  *(_DWORD *)(LODWORD(a1) + 480) = 0;
  *(_DWORD *)(LODWORD(a1) + 484) = 0;
  *(_DWORD *)(LODWORD(a1) + 488) = 0;
  *(_DWORD *)(LODWORD(a1) + 492) = 0;
  *(_DWORD *)(LODWORD(a1) + 496) = 0;
  *(_DWORD *)(LODWORD(a1) + 500) = 0;
  *(_DWORD *)(LODWORD(a1) + 504) = 0;
  *(_DWORD *)(LODWORD(a1) + 508) = 0;
  *(_DWORD *)(LODWORD(a1) + 512) = 0;
  *(_DWORD *)(LODWORD(a1) + 516) = 0;
  *(_DWORD *)(LODWORD(a1) + 520) = 0;
  *(_DWORD *)(LODWORD(a1) + 524) = 0;
  *(_DWORD *)(LODWORD(a1) + 528) = 0;
  *(_DWORD *)(LODWORD(a1) + 532) = 0;
  *(_DWORD *)(LODWORD(a1) + 536) = 0;
  *(_DWORD *)(LODWORD(a1) + 540) = 0;
  *(_DWORD *)(LODWORD(a1) + 576) = a2;
  *(_DWORD *)(LODWORD(a1) + 544) = 0;
  *(_DWORD *)(LODWORD(a1) + 548) = 0;
  *(_DWORD *)(LODWORD(a1) + 552) = 0;
  *(_DWORD *)(LODWORD(a1) + 556) = 0;
  *(_DWORD *)(LODWORD(a1) + 560) = 0;
  *(_DWORD *)(LODWORD(a1) + 564) = 0;
  *(_DWORD *)(LODWORD(a1) + 568) = 0;
  *(_DWORD *)(LODWORD(a1) + 572) = 0;
  v36 = LODWORD(a1) + 1924;
  v37 = LODWORD(a1) + 580;
  do
  {
    v7 = v4 + v6;
    *(_DWORD *)(v7 + 588) = 0;
    *(_DWORD *)(v7 + 592) = 0;
    *(_DWORD *)(v7 + 596) = 1065353216;
    *(_DWORD *)(v7 + 600) = 0;
    LODWORD(a1) = v4 + v6 + 596;
    LODWORD(a1) = sub_119C844(a1);
    *(_DWORD *)(v7 + 584) = LODWORD(a1);
    if ( LODWORD(a1) == 1 )
    {
      *(_DWORD *)(v7 + 604) = 0;
      v9 = (void *)(v7 + 604);
    }
    else
      if ( LODWORD(a1) >= 0x40000000 )
        sub_119C874();
      v8 = 4 * LODWORD(a1);
      v9 = operator new(4 * LODWORD(a1));
      _aeabi_memclr4(v9, v8);
    v6 += 28;
    *(_DWORD *)(v7 + 580) = v9;
  }
  while ( v6 != 1344 );
  v10 = 0;
  *(_DWORD *)(v4 + 1924) = 0;
  *(_DWORD *)(v4 + 1928) = 0;
  *(_DWORD *)(v4 + 1932) = 0;
  *(_DWORD *)(v4 + 1936) = 0;
  *(_DWORD *)(v4 + 1940) = 0;
  *(_DWORD *)(v4 + 1944) = 0;
  *(_DWORD *)(v4 + 1948) = a4;
  v11 = sub_119D73C((int)&Random::mRandomDevice);
  v12 = v37;
  *(_DWORD *)(v4 + 1952) = v11;
  *(_DWORD *)(v4 + 4452) = 625;
  v13 = 1;
  *(_BYTE *)(v4 + 4456) = 0;
  *(_DWORD *)(v4 + 4460) = 0;
  *(_DWORD *)(v4 + 1956) = v11;
    v14 = v11 ^ (v11 >> 30);
    v15 = v4 + 4 * v10;
    v16 = v10++ + 1812433253 * v14;
    v11 = v13++ + 1812433253 * v14;
    *(_DWORD *)(v15 + 1960) = v16 + 1;
  while ( v10 != 397 );
  *(_DWORD *)(v4 + 4452) = 624;
  *(_DWORD *)(v4 + 4464) = 398;
  sub_119C884((void **)&v40, "particles_opaque");
  mce::MaterialPtr::MaterialPtr(
    (mce::MaterialPtr *)(v4 + 4468),
    (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::common,
    &v40);
  v17 = (void *)(v40 - 12);
  if ( (int *)(v40 - 12) != &dword_28898C0 )
    v30 = (unsigned int *)(v40 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v31 = __ldrex(v30);
      while ( __strex(v31 - 1, v30) );
      v31 = (*v30)--;
    if ( v31 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v17);
  sub_119C884((void **)&v39, "particles_alpha");
    (mce::MaterialPtr *)(v4 + 4480),
    &v39);
  v18 = (void *)(v39 - 12);
  if ( (int *)(v39 - 12) != &dword_28898C0 )
    v32 = (unsigned int *)(v39 - 4);
        v33 = __ldrex(v32);
      while ( __strex(v33 - 1, v32) );
      v33 = (*v32)--;
    if ( v33 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v18);
  sub_119C884((void **)&v38, "particles_blend");
    (mce::MaterialPtr *)(v4 + 4492),
    &v38);
  v19 = (void *)(v38 - 12);
  if ( (int *)(v38 - 12) != &dword_28898C0 )
    v34 = (unsigned int *)(v38 - 4);
        v35 = __ldrex(v34);
      while ( __strex(v35 - 1, v34) );
      v35 = (*v34)--;
    if ( v35 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v19);
  *(_DWORD *)(v4 + 4524) = 24;
  *(_DWORD *)(v4 + 4520) = 24;
  *(_DWORD *)(v4 + 4540) = 24;
  *(_DWORD *)(v4 + 4576) = 128;
  *(_DWORD *)(v4 + 4620) = 40;
  *(_DWORD *)(v4 + 4688) = 3000;
  v20 = *(_DWORD *)(v4 + 1936);
  v21 = *(_DWORD *)(v4 + 1940);
  if ( v21 != v20 )
    v22 = *(_DWORD *)(v4 + 1936);
    do
      if ( *(_DWORD *)v22 )
        (*(void (**)(void))(**(_DWORD **)v22 + 12))();
      *(_DWORD *)v22 = 0;
      v22 += 4;
    while ( v21 != v22 );
  *(_DWORD *)(v4 + 1940) = v20;
    for ( i = *(_DWORD *)(v12 + 8); i; i = *(_DWORD *)i )
      v24 = *(_QWORD *)(i + 8);
      v25 = *(_QWORD *)(i + 8);
      if ( HIDWORD(v24) != (_DWORD)v24 )
      {
        do
        {
          if ( *(_DWORD *)v25 )
            (*(void (**)(void))(**(_DWORD **)v25 + 12))();
          *(_DWORD *)v25 = 0;
          v25 += 4;
        }
        while ( HIDWORD(v24) != v25 );
      }
      *(_DWORD *)(i + 12) = v24;
    v12 += 28;
  while ( v12 != v36 );
  v26 = v4;
    v27 = *(_QWORD *)v26;
    v28 = *(_QWORD *)v26;
    if ( HIDWORD(v27) != (_DWORD)v27 )
        if ( *(_DWORD *)v28 )
          (*(void (**)(void))(**(_DWORD **)v28 + 12))();
        *(_DWORD *)v28 = 0;
        v28 += 4;
      while ( HIDWORD(v27) != v28 );
    *(_DWORD *)(v26 + 4) = v27;
    v26 += 12;
  while ( v26 != v5 );
  _aeabi_memclr4(v4 + 4696, 192);
  return v4;
}


ParticleEngine *__fastcall ParticleEngine::renderBlended(ParticleEngine *this, BaseEntityRenderContext *a2, const Vec3 *a3, const Vec3 *a4, float a5, float a6)
{
  ParticleEngine *v10; // r5@1
  const Vec3 *v11; // r10@1
  const Vec3 *v12; // r4@1
  int v13; // r0@1
  int v14; // r5@1
  Tessellator *v15; // r7@2
  __int64 v16; // r0@3
  unsigned int v17; // r9@4
  int v18; // r4@4
  __int64 v19; // r0@4
  ParticleEngine *result; // r0@9
  int *v21; // r5@9
  int *v22; // r6@9
  int v24; // t1@11
  int v25; // [sp+0h] [bp-58h]@0
  ParticleEngine *v26; // [sp+8h] [bp-50h]@1
  int v27; // [sp+10h] [bp-48h]@1
  Tessellator *v28; // [sp+14h] [bp-44h]@2

  __asm { VLDR            S0, [SP,#0x58+arg_4] }
  v10 = this;
  v11 = a4;
  v12 = a3;
  v26 = this;
  __asm { VMUL.F32        S16, S0, S0 }
  v13 = BaseEntityRenderContext::getScreenContext(a2);
  __asm { VSTR            S16, [SP,#0x58+var_58] }
  ParticleRenderContext::ParticleRenderContext(COERCE_FLOAT(&v27), v13, (int)v11, (int)v12, v25);
  v14 = *((_DWORD *)v10 + 161);
  if ( v14 )
  {
    v15 = v28;
    do
    {
      v16 = *(_QWORD *)(v14 + 8);
      if ( (_DWORD)v16 != HIDWORD(v16) )
      {
        v17 = 0;
        Tessellator::begin(v15, HIDWORD(v16) - v16, 0);
        v18 = (*(int (**)(void))(***(_DWORD ***)(v14 + 8) + 24))();
        v19 = *(_QWORD *)(v14 + 8);
        if ( HIDWORD(v19) != (_DWORD)v19 )
        {
          do
          {
            (*(void (**)(void))(**(_DWORD **)(v19 + 4 * v17++) + 20))();
            if ( v17 > 0x3FFE )
              break;
            v19 = *(_QWORD *)(v14 + 8);
          }
          while ( v17 < (HIDWORD(v19) - (signed int)v19) >> 2 );
        }
        Tessellator::draw((char *)v15, v27, (int)v26 + 4492, v18);
      }
      v14 = *(_DWORD *)v14;
    }
    while ( v14 );
  }
  result = v26;
  v21 = (int *)*((_DWORD *)v26 + 481);
  v22 = (int *)*((_DWORD *)v26 + 482);
  if ( v21 != v22 )
    __asm { VMOV            R4, S16 }
      v24 = *v21;
      ++v21;
      result = (ParticleEngine *)(*(int (**)(void))(*(_DWORD *)v24 + 12))();
    while ( v22 != v21 );
  return result;
}


Particle *__fastcall ParticleEngine::instance(int a1, int a2, const Vec3 *a3, const Vec3 *a4, int a5, const CompoundTag *a6)
{
  int v6; // r6@1
  int v7; // r4@1
  int v8; // r0@1
  const Vec3 *v9; // r9@1
  const Vec3 *v10; // r8@1
  unsigned int v11; // r1@1
  bool v12; // cf@1
  bool v13; // zf@1
  unsigned int v14; // r0@2
  int v15; // r0@4
  int *v16; // r0@4
  int v17; // r1@4
  int v18; // t1@4
  Particle *v19; // r5@5
  int v20; // r7@5
  int *v21; // r7@7
  Particle *result; // r0@9
  Particle **v23; // r0@12
  Particle *v24; // [sp+8h] [bp-28h]@11
  Particle *v25; // [sp+Ch] [bp-24h]@7

  v6 = a2;
  v7 = a1;
  v8 = a1 + 4 * a2;
  v9 = a3;
  v10 = a4;
  v11 = *(_DWORD *)(v8 + 4504);
  v12 = 1;
  v13 = v11 == 0;
  if ( v11 )
  {
    v14 = *(_DWORD *)(v8 + 4696);
    v12 = v14 >= v11;
    v13 = v14 == v11;
  }
  if ( !v13 && v12 )
    return 0;
  v15 = v7 + 12 * v6;
  v18 = *(_DWORD *)(v15 + 4);
  v16 = (int *)(v15 + 4);
  v17 = v18;
  if ( *(_DWORD *)(v7 + 12 * v6) == v18 )
    v21 = (int *)&v25;
    v25 = 0;
  else
    v19 = *(Particle **)(v17 - 4);
    *(_DWORD *)(v17 - 4) = 0;
    v20 = *v16 - 4;
    *v16 = v20;
    if ( *(_DWORD *)v20 )
      (*(void (**)(void))(**(_DWORD **)v20 + 12))();
    *(_DWORD *)v20 = 0;
    v25 = v19;
    if ( v19 )
      goto LABEL_12;
  ParticleEngine::_create(&v24, v7, v6);
  v19 = v24;
  result = 0;
  v25 = v24;
  v24 = 0;
  if ( v25 )
LABEL_12:
    Particle::_init(v19, v9, v10, a5, (ParticleEngine *)v7, a6);
    v23 = *(Particle ***)(v7 + 1940);
    if ( v23 == *(Particle ***)(v7 + 1944) )
    {
      std::vector<std::unique_ptr<Particle,std::default_delete<Particle>>,std::allocator<std::unique_ptr<Particle,std::default_delete<Particle>>>>::_M_emplace_back_aux<std::unique_ptr<Particle,std::default_delete<Particle>>>(
        (_QWORD *)(v7 + 1936),
        (int *)&v25);
      if ( *v21 )
        (*(void (**)(void))(*(_DWORD *)*v21 + 12))();
    }
    else
      *v21 = 0;
      *v23 = v19;
      *(_DWORD *)(v7 + 1940) = v23 + 1;
    result = v19;
  *v21 = 0;
  return result;
}


void __fastcall ParticleEngine::renderParticleLayer(int a1, int a2, int a3, int a4)
{
  int v4; // r4@1
  int v5; // r8@1
  int *v6; // r5@1
  Tessellator *v7; // r9@2
  __int64 v8; // r0@3
  unsigned int v9; // r7@4
  int v10; // r10@4
  __int64 v11; // r0@4

  v4 = *(_DWORD *)(a3 + 8);
  v5 = a4;
  v6 = (int *)a2;
  if ( v4 )
  {
    v7 = *(Tessellator **)(a2 + 4);
    do
    {
      v8 = *(_QWORD *)(v4 + 8);
      if ( (_DWORD)v8 != HIDWORD(v8) )
      {
        v9 = 0;
        Tessellator::begin(v7, HIDWORD(v8) - v8, 0);
        v10 = (*(int (**)(void))(***(_DWORD ***)(v4 + 8) + 24))();
        v11 = *(_QWORD *)(v4 + 8);
        if ( HIDWORD(v11) != (_DWORD)v11 )
        {
          do
          {
            (*(void (**)(void))(**(_DWORD **)(v11 + 4 * v9++) + 20))();
            if ( v9 > 0x3FFE )
              break;
            v11 = *(_QWORD *)(v4 + 8);
          }
          while ( v9 < (HIDWORD(v11) - (signed int)v11) >> 2 );
        }
        Tessellator::draw((char *)v7, *v6, v5, v10);
      }
      v4 = *(_DWORD *)v4;
    }
    while ( v4 );
  }
}


ParticleEngine *__fastcall ParticleEngine::~ParticleEngine(ParticleEngine *this)
{
  ParticleEngine *v1; // r9@1
  int v2; // r4@1
  int v3; // r5@1
  int v4; // r7@2
  int v5; // r8@6
  int v6; // r11@6
  int i; // r4@7
  int v8; // r6@10
  int v9; // r7@10
  int j; // r10@10
  int v11; // r10@16
  ParticleEngine *v12; // r5@16
  __int64 v13; // kr08_8@17
  int v14; // r6@17
  char *v15; // r5@22
  char *v16; // r4@22
  char *v17; // r5@29
  char *v18; // r4@29
  int v19; // r5@36
  int v20; // r4@37
  char *v21; // r6@37
  char *v22; // r8@37
  int v23; // r4@45
  void *v24; // r0@45
  char *v25; // r5@49
  char *v26; // t1@49
  char *v27; // r6@49

  v1 = this;
  v2 = *((_DWORD *)this + 484);
  v3 = *((_DWORD *)this + 485);
  if ( v3 != v2 )
  {
    v4 = *((_DWORD *)this + 484);
    do
    {
      if ( *(_DWORD *)v4 )
        (*(void (**)(void))(**(_DWORD **)v4 + 12))();
      *(_DWORD *)v4 = 0;
      v4 += 4;
    }
    while ( v3 != v4 );
  }
  v5 = (int)v1 + 580;
  v6 = (int)v1 + 1924;
  *((_DWORD *)v1 + 485) = v2;
  do
    for ( i = *(_DWORD *)(v5 + 8); i; i = *(_DWORD *)i )
      v8 = *(_QWORD *)(i + 8) >> 32;
      v9 = *(_QWORD *)(i + 8);
      for ( j = *(_QWORD *)(i + 8); v8 != v9; v9 += 4 )
      {
        if ( *(_DWORD *)v9 )
          (*(void (**)(void))(**(_DWORD **)v9 + 12))();
        *(_DWORD *)v9 = 0;
      }
      *(_DWORD *)(i + 12) = j;
    v5 += 28;
  while ( v5 != v6 );
  v11 = (int)v1 + 576;
  v12 = v1;
    v13 = *(_QWORD *)v12;
    v14 = *(_QWORD *)v12;
    if ( HIDWORD(v13) != (_DWORD)v13 )
      do
        if ( *(_DWORD *)v14 )
          (*(void (**)(void))(**(_DWORD **)v14 + 12))();
        *(_DWORD *)v14 = 0;
        v14 += 4;
      while ( HIDWORD(v13) != v14 );
    *((_DWORD *)v12 + 1) = v13;
    v12 = (ParticleEngine *)((char *)v12 + 12);
  while ( v12 != (ParticleEngine *)v11 );
  _aeabi_memclr4((char *)v1 + 4696, 192);
  mce::MaterialPtr::~MaterialPtr((ParticleEngine *)((char *)v1 + 4492));
  mce::MaterialPtr::~MaterialPtr((ParticleEngine *)((char *)v1 + 4480));
  mce::MaterialPtr::~MaterialPtr((ParticleEngine *)((char *)v1 + 4468));
  v15 = (char *)*((_DWORD *)v1 + 484);
  v16 = (char *)*((_DWORD *)v1 + 485);
  if ( v15 != v16 )
      if ( *(_DWORD *)v15 )
        (*(void (**)(void))(**(_DWORD **)v15 + 12))();
      *(_DWORD *)v15 = 0;
      v15 += 4;
    while ( v16 != v15 );
    v15 = (char *)*((_DWORD *)v1 + 484);
  if ( v15 )
    operator delete(v15);
  v17 = (char *)*((_DWORD *)v1 + 481);
  v18 = (char *)*((_DWORD *)v1 + 482);
  if ( v17 != v18 )
      if ( *(_DWORD *)v17 )
        (*(void (**)(void))(**(_DWORD **)v17 + 4))();
      *(_DWORD *)v17 = 0;
      v17 += 4;
    while ( v18 != v17 );
    v17 = (char *)*((_DWORD *)v1 + 481);
  if ( v17 )
    operator delete(v17);
    v19 = *(_DWORD *)(v6 - 20);
    if ( v19 )
        v20 = *(_DWORD *)v19;
        v22 = (char *)(*(_QWORD *)(v19 + 8) >> 32);
        v21 = (char *)*(_QWORD *)(v19 + 8);
        if ( v21 != v22 )
        {
          do
          {
            if ( *(_DWORD *)v21 )
              (*(void (**)(void))(**(_DWORD **)v21 + 12))();
            *(_DWORD *)v21 = 0;
            v21 += 4;
          }
          while ( v22 != v21 );
          v21 = *(char **)(v19 + 8);
        }
        if ( v21 )
          operator delete(v21);
        operator delete((void *)v19);
        v19 = v20;
      while ( v20 );
    v23 = v6 - 28;
    _aeabi_memclr4(*(_QWORD *)(v6 - 28), 4 * (*(_QWORD *)(v6 - 28) >> 32));
    *(_DWORD *)(v6 - 20) = 0;
    *(_DWORD *)(v6 - 16) = 0;
    v24 = *(void **)(v6 - 28);
    if ( v24 && (void *)(v6 - 4) != v24 )
      operator delete(v24);
    v6 -= 28;
  while ( (ParticleEngine *)v23 != (ParticleEngine *)((char *)v1 + 580) );
    v26 = *(char **)(v11 - 12);
    v11 -= 12;
    v25 = v26;
    v27 = *(char **)(v11 + 4);
    if ( v26 != v27 )
        if ( *(_DWORD *)v25 )
          (*(void (**)(void))(**(_DWORD **)v25 + 12))();
        *(_DWORD *)v25 = 0;
        v25 += 4;
      while ( v27 != v25 );
      v25 = *(char **)v11;
    if ( v25 )
      operator delete(v25);
  while ( (ParticleEngine *)v11 != v1 );
  return v1;
}


int __fastcall ParticleEngine::createTrackingEmitter(int a1, Entity *a2, int a3)
{
  Entity *v3; // r5@1
  int v4; // r6@1
  int v5; // r4@1
  const Vec3 *v6; // r0@1
  int result; // r0@1

  v3 = a2;
  v4 = a1;
  v5 = a3;
  v6 = (const Vec3 *)(*(int (__fastcall **)(Entity *))(*(_DWORD *)a2 + 52))(a2);
  result = (int)ParticleEngine::instance(v4, 35, v6, (const Vec3 *)&Vec3::ZERO, 0, 0);
  if ( result )
    result = j_j_j__ZN15TrackingEmitter5setupER6Entity12ParticleType(result, v3, v5);
  return result;
}


_DWORD *__fastcall ParticleEngine::_create(_DWORD *a1, int a2, int a3)
{
  _DWORD *v3; // r4@1
  int v4; // r6@1
  Entity *v5; // r0@1
  int v6; // r5@2
  _DWORD *v7; // r7@3
  _DWORD *result; // r0@3
  _DWORD *v9; // r6@9
  void **v10; // r0@15
  int v11; // r7@18
  void **v12; // r0@18
  void **v13; // r0@19

  v3 = a1;
  v4 = a3;
  v5 = (Entity *)Level::getPrimaryLocalPlayer(*(Level **)(a2 + 576));
  if ( v5 )
  {
    v6 = Entity::getRegion(v5);
    switch ( v4 )
    {
      case 4:
      case 9:
        v7 = operator new(0xD8u);
        Particle::Particle((int)v7, v6, v4);
        *v7 = &off_26D9B7C;
        v7[53] = 0;
        result = (_DWORD *)1;
        goto LABEL_6;
      default:
        goto def_E67F20;
      case 5:
      case 6:
        v7 = operator new(0xD4u);
        *v7 = &off_26D9BAC;
        result = 0;
LABEL_6:
        *((_BYTE *)v7 + 180) = (_BYTE)result;
        goto LABEL_8;
      case 26:
      case 27:
        result = (_DWORD *)SpellParticle::SpellParticle((int)v7, v6, v4);
LABEL_8:
        *v3 = v7;
        return result;
      case 41:
        v9 = operator new(0xDCu);
        result = (_DWORD *)DragonBreathParticle::DragonBreathParticle((int)v9, v6, 41);
        break;
      case 40:
        v9 = operator new(0xF4u);
        result = (_DWORD *)EndRodParticle::EndRodParticle((int)v9, v6, 40);
      case 37:
        v9 = operator new(0xD8u);
        result = (_DWORD *)SpellParticle::SpellParticle((int)v9, v6, 37);
      case 46:
        result = (_DWORD *)FireworksSparkParticle::FireworksSparkParticle((int)v9, v6, 46);
      case 22:
        v9 = operator new(0xD4u);
        result = (_DWORD *)WaterWakeParticle::WaterWakeParticle((int)v9, v6, 22);
      case 34:
        v9 = operator new(0xE4u);
        result = (_DWORD *)EnchantingTableParticle::EnchantingTableParticle((int)v9, v6, 34);
      case 24:
        Particle::Particle((int)v9, v6, 24);
        v10 = &`vtable for'DripParticle;
        goto LABEL_23;
      case 29:
        Particle::Particle((int)v9, v6, 29);
        *v9 = &off_26D9D5C;
        v9[53] = 0;
        v9[54] = 0;
        goto LABEL_28;
      case 42:
        Particle::Particle((int)v9, v6, 42);
        *v9 = &off_26D9BAC;
      case 13:
        v11 = Item::mSnowBall;
        Particle::Particle((int)v9, v6, 13);
        v12 = &`vtable for'BreakingItemParticle;
        goto LABEL_36;
      case 12:
        Particle::Particle((int)v9, v6, 12);
        v13 = &`vtable for'BreakingItemParticle;
        goto LABEL_46;
      case 30:
        v11 = Item::mSlimeBall;
        Particle::Particle((int)v9, v6, 30);
      case 32:
        result = (_DWORD *)AngryVillagerParticle::AngryVillagerParticle((int)v9, v6, 32);
      case 23:
        Particle::Particle((int)v9, v6, 23);
LABEL_23:
        *v9 = (char *)*v10 + 8;
        v9[26] = 0;
      case 20:
        result = (_DWORD *)PortalParticle::PortalParticle((int)v9, v6, 20);
      case 43:
        Particle::Particle((int)v9, v6, 43);
        *v9 = &off_26D9DEC;
        v9[53] = 176;
        *((_BYTE *)v9 + 180) = 1;
        *((_BYTE *)v9 + 108) = 1;
        result = (_DWORD *)-1119040307;
        v9[16] = -1119040307;
      case 10:
        Particle::Particle((int)v9, v6, 10);
        *v9 = &off_26D9C3C;
      case 25:
        Particle::Particle((int)v9, v6, 25);
        *v9 = &off_26D9CFC;
        *((_QWORD *)v9 + 27) = 32LL;
        *((_BYTE *)v9 + 224) = 1;
LABEL_28:
        *((_BYTE *)v9 + 180) = (_BYTE)result;
      case 8:
        result = (_DWORD *)LavaParticle::LavaParticle((int)v9, v6, 8);
      case 15:
        result = HugeExplosionSeedParticle::HugeExplosionSeedParticle((int)v9, v6, 15);
      case 31:
        result = RainSplashParticle::RainSplashParticle((int)v9, v6, 31);
      case 16:
        v9 = operator new(0xF0u);
        result = (_DWORD *)MobFlameParticle::MobFlameParticle((int)v9, v6, 16);
      case 2:
        result = (_DWORD *)CritParticle::CritParticle((int)v9, v6, 2);
      case 47:
        result = FireworksOverlayParticle::FireworksOverlayParticle((int)v9, v6, 47);
      case 38:
        v11 = Item::mCarrot;
        Particle::Particle((int)v9, v6, 38);
LABEL_36:
        result = (char *)*v12 + 8;
        *v9 = result;
        v9[53] = v11;
      case 1:
        Particle::Particle((int)v9, v6, 1);
        *v9 = &off_26D9B1C;
        v9[17] = 1065353216;
        v9[18] = 1065353216;
        v9[19] = 1065353216;
        result = (_DWORD *)Particle::setSize((Particle *)v9, 0.02);
      case 18:
        v9 = operator new(0xFCu);
        result = (_DWORD *)TerrainParticle::TerrainParticle((int)v9, v6, 18);
      case 3:
        result = (_DWORD *)BlockForceFieldParticle::BlockForceFieldParticle((int)v9, v6, 3);
      case 35:
        v9 = operator new(0xE8u);
        result = (_DWORD *)TrackingEmitter::TrackingEmitter((int)v9, v6, 35);
      case 11:
        Particle::Particle((int)v9, v6, 11);
        *v9 = &off_26D9C6C;
        v9[56] = 32;
      case 17:
        result = (_DWORD *)HeartParticle::HeartParticle((int)v9, v6, 17);
      case 7:
        result = (_DWORD *)FlameParticle::FlameParticle((int)v9, v6, 7);
      case 14:
        result = (_DWORD *)HugeExplosionParticle::HugeExplosionParticle((int)v9, v6, 14);
      case 44:
        Particle::Particle((int)v9, v6, 44);
LABEL_46:
        *v9 = (char *)*v13 + 8;
      case 21:
        result = SplashParticle::SplashParticle((int)v9, v6, 21);
      case 19:
        result = (_DWORD *)SuspendedTownParticle::SuspendedTownParticle((int)v9, v6, 19);
      case 28:
        result = (_DWORD *)SpellParticle::SpellParticle((int)v9, v6, 28);
      case 36:
        result = (_DWORD *)NoteParticle::NoteParticle((int)v9, v6, 36);
      case 33:
        result = (_DWORD *)HappyVillagerParticle::HappyVillagerParticle((int)v9, v6, 33);
      case 45:
        result = (_DWORD *)FireworksStarter::FireworksStarter((int)v9, v6, 45);
    }
    *v3 = v9;
  }
  else
def_E67F20:
    result = 0;
    *v3 = 0;
  return result;
}


int __fastcall ParticleEngine::crack(ParticleEngine *this, const FullBlock *a2, const BlockPos *a3, int a4)
{
  const FullBlock *v4; // r10@1
  ParticleEngine *v5; // r8@1
  int result; // r0@1
  int v7; // r11@1
  int v9; // r6@2
  int v18; // r1@12
  Level *v19; // r0@13
  int v20; // [sp+4h] [bp-8Ch]@13
  int v21; // [sp+8h] [bp-88h]@13
  int v22; // [sp+Ch] [bp-84h]@13
  float v23; // [sp+10h] [bp-80h]@2
  float v26; // [sp+1Ch] [bp-74h]@2
  float v29; // [sp+28h] [bp-68h]@13
  char v30; // [sp+34h] [bp-5Ch]@2

  v4 = a2;
  v5 = this;
  result = *(_BYTE *)a2;
  v7 = a4;
  _R9 = a3;
  if ( *(_BYTE *)a2 )
  {
    v9 = Block::mBlocks[result];
    AABB::AABB((AABB *)&v30);
    _R6 = (*(int (__fastcall **)(int, _DWORD, char *, _DWORD))(*(_DWORD *)v9 + 420))(v9, *((_BYTE *)v4 + 1), &v30, 0);
    _R5 = Random::_genRandInt32((ParticleEngine *)((char *)v5 + 1952));
    _R7 = Random::_genRandInt32((ParticleEngine *)((char *)v5 + 1952));
    _R4 = Random::_genRandInt32((ParticleEngine *)((char *)v5 + 1952));
    AABB::getBounds((AABB *)&v26, _R6);
    __asm
    {
      VLDR            S16, [SP,#0x90+var_74]
      VLDR            S18, [SP,#0x90+var_70]
      VLDR            S20, [SP,#0x90+var_6C]
    }
    Vec3::Vec3((int)&v23, (int)_R9);
      VMOV            S0, R5
      VLDR            D1, =2.32830644e-10
      VMOV            S4, R7
      VLDR            S8, =-0.2
      VMOV            S6, R4
      VCVT.F64.U32    D0, S0
      VCVT.F64.U32    D2, S4
      VCVT.F64.U32    D3, S6
      VMUL.F64        D0, D0, D1
      VMUL.F64        D2, D2, D1
      VMUL.F64        D1, D3, D1
      VADD.F32        S6, S16, S8
      VLDR            S12, [SP,#0x90+var_78]
      VCVT.F32.F64    S0, D0
      VADD.F32        S10, S18, S8
      VCVT.F32.F64    S4, D2
      VADD.F32        S8, S20, S8
      VCVT.F32.F64    S2, D1
      VMUL.F32        S6, S6, S0
      VLDR            S0, =0.1
      VMUL.F32        S4, S10, S4
      VLDR            S10, [SP,#0x90+var_7C]
      VMUL.F32        S2, S8, S2
      VLDR            S8, [SP,#0x90+var_80]
      VADD.F32        S6, S6, S0
      VADD.F32        S4, S4, S0
      VADD.F32        S2, S2, S0
      VADD.F32        S6, S6, S8
      VLDR            S8, [R6]
      VADD.F32        S4, S4, S10
      VLDR            S10, [R6,#4]
      VADD.F32        S2, S2, S12
      VLDR            S12, [R6,#8]
      VSTR            S6, [SP,#0x90+var_68]
      VSTR            S4, [SP,#0x90+var_64]
      VSTR            S2, [SP,#0x90+var_60]
    switch ( v7 )
      case 0:
        __asm
        {
          VLDR            S0, =-0.1; jumptable 00E68CEE case 0
          VLDR            S2, [R6,#4]
        }
        goto LABEL_5;
      case 1:
        __asm { VLDR            S2, [R6,#0x10]; jumptable 00E68CEE case 1 }
LABEL_5:
          VLDR            S4, [R9,#4]
          VADD.F32        S0, S2, S0
          VCVT.F32.S32    S2, S4
          VADD.F32        S0, S0, S2
          VSTR            S0, [SP,#0x90+var_64]
        break;
      case 2:
          VLDR            S0, =-0.1; jumptable 00E68CEE case 2
          VLDR            S2, [R6,#8]
        goto LABEL_8;
      case 3:
        __asm { VLDR            S2, [R6,#0x14]; jumptable 00E68CEE case 3 }
LABEL_8:
          VLDR            S4, [R9,#8]
          VSTR            S0, [SP,#0x90+var_60]
      case 4:
          VLDR            S0, =-0.1; jumptable 00E68CEE case 4
          VLDR            S2, [R6]
        goto LABEL_11;
      case 5:
        __asm { VLDR            S2, [R6,#0xC]; jumptable 00E68CEE case 5 }
LABEL_11:
          VLDR            S4, [R9]
          VSTR            S0, [SP,#0x90+var_68]
      default:
    v18 = *(_BYTE *)v4;
    result = *(_BYTE *)(Block::mSkull + 4);
    if ( v18 != result )
      v19 = (Level *)*((_DWORD *)v5 + 144);
      v20 = 0;
      v21 = 0;
      v22 = 0;
      result = Level::addTerrainParticle(
                 v19,
                 (const Vec3 *)&v29,
                 (const Vec3 *)&v20,
                 v18 | (*((_BYTE *)v4 + 1) << 8),
                 _R9);
      if ( result )
        result = Particle::setPower((Particle *)result, 0.2);
  }
  return result;
}


signed int __fastcall ParticleEngine::tick(ParticleEngine *this)
{
  ParticleEngine *v1; // r4@1
  int *v2; // r8@1
  int v3; // r0@2
  int v4; // r1@2
  int v5; // r10@2
  mce::TexturePtr *v6; // r0@2
  unsigned int v7; // r0@2
  __int64 v8; // kr00_8@2
  unsigned int v9; // r6@2
  int v10; // r7@2
  int v11; // r0@2
  int v12; // r11@3
  bool v13; // zf@8
  _DWORD *v14; // r0@12
  int *v15; // r1@13 OVERLAPPED
  int *v16; // r2@13
  int v17; // r2@14
  int *v18; // r5@17
  int *v19; // r7@18
  int v20; // r1@22
  int v21; // r8@23
  __int64 v22; // r0@26
  unsigned int v23; // r9@27
  int v24; // r6@28
  int v25; // r0@28
  int v26; // r0@29
  int v27; // r1@29
  int v28; // r2@29
  int v29; // r2@29
  int *v30; // r3@29
  int *v31; // t1@29
  int v32; // r6@33
  __int64 v33; // r0@33
  signed int v34; // r2@34
  int v35; // r10@35
  int v36; // r1@36
  int v37; // r0@36
  _DWORD *v38; // r6@40
  int v39; // r0@40
  int v40; // r6@46
  signed int result; // r0@46
  unsigned int v42; // r7@47
  int v43; // r1@49
  int v44; // r6@49
  int v45; // r0@49
  signed int v46; // r2@50
  int v47; // r5@51
  int v48; // r1@52
  int v49; // r0@52
  _DWORD *v50; // r5@56
  int v51; // r0@56
  int *v52; // [sp+4h] [bp-2Ch]@1
  int v53; // [sp+4h] [bp-2Ch]@23
  int v54; // [sp+8h] [bp-28h]@29

  v1 = this;
  v2 = (int *)*((_DWORD *)this + 484);
  v52 = (int *)*((_DWORD *)this + 485);
  if ( v2 != v52 )
  {
    do
    {
      v3 = *v2;
      v4 = (int)v1 + 4 * *(_DWORD *)(*v2 + 100);
      ++*(_DWORD *)(v4 + 4696);
      v5 = (int)v1 + 28 * *(_DWORD *)(v3 + 104);
      v6 = (mce::TexturePtr *)(*(int (**)(void))(*(_DWORD *)v3 + 24))();
      v7 = mce::TexturePtr::get(v6);
      v8 = *(_QWORD *)(v5 + 580);
      v9 = v7;
      v10 = v7 % (unsigned int)(*(_QWORD *)(v5 + 580) >> 32);
      v11 = *(_DWORD *)(v8 + 4 * v10);
      if ( !v11 )
        goto LABEL_12;
      v12 = *(_DWORD *)v11;
      while ( v9 != *(_DWORD *)(v12 + 4) )
      {
        if ( *(_DWORD *)v12 )
        {
          v11 = v12;
          v12 = *(_DWORD *)v12;
          if ( *(_DWORD *)(v8 + 4) % HIDWORD(v8) == v10 )
            continue;
        }
      }
      v13 = v11 == 0;
      if ( v11 )
        v11 = *(_DWORD *)v11;
        v13 = v11 == 0;
      if ( v13 )
LABEL_12:
        v14 = operator new(0x14u);
        *v14 = 0;
        v14[1] = v9;
        v14[2] = 0;
        v14[3] = 0;
        v14[4] = 0;
        v11 = std::_Hashtable<mce::Texture const*,std::pair<mce::Texture const* const,std::vector<std::unique_ptr<Particle,std::default_delete<Particle>>,std::allocator<std::unique_ptr<Particle,std::default_delete<Particle>>>>>,std::allocator<std::pair<mce::Texture const* const,std::vector<std::unique_ptr<Particle,std::default_delete<Particle>>,std::allocator<std::unique_ptr<Particle,std::default_delete<Particle>>>>>>,std::__detail::_Select1st,std::equal_to<mce::Texture const*>,std::hash<mce::Texture const*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::_M_insert_unique_node(
                v5 + 580,
                v10,
                v9,
                (int)v14);
      *(_QWORD *)&v15 = *(_QWORD *)(v11 + 12);
      if ( v15 == v16 )
        std::vector<std::unique_ptr<Particle,std::default_delete<Particle>>,std::allocator<std::unique_ptr<Particle,std::default_delete<Particle>>>>::_M_emplace_back_aux<std::unique_ptr<Particle,std::default_delete<Particle>>>(
          (_QWORD *)(v11 + 8),
          v2);
      else
        v17 = *v2;
        *v2 = 0;
        *v15 = v17;
        *(_DWORD *)(v11 + 12) += 4;
      ++v2;
    }
    while ( v2 != v52 );
    v2 = (int *)*((_DWORD *)v1 + 484);
    v18 = (int *)*((_DWORD *)v1 + 485);
    if ( v18 != v2 )
      v19 = (int *)*((_DWORD *)v1 + 484);
      do
        if ( *v19 )
          (*(void (**)(void))(*(_DWORD *)*v19 + 12))();
        *v19 = 0;
        ++v19;
      while ( v18 != v19 );
  }
  v20 = (int)v1 + 580;
  *((_DWORD *)v1 + 485) = v2;
  do
    v21 = *(_DWORD *)(v20 + 8);
    v53 = v20;
    while ( v21 )
      v22 = *(_QWORD *)(v21 + 8);
      if ( HIDWORD(v22) != (_DWORD)v22 )
        v23 = 0;
        do
          v24 = *(_DWORD *)(v22 + 4 * v23);
          (*(void (__fastcall **)(_DWORD))(*(_DWORD *)v24 + 16))(*(_DWORD *)(v22 + 4 * v23));
          ++*(_DWORD *)(v24 + 56);
          v25 = *(_DWORD *)(v24 + 52);
          *(_DWORD *)(v24 + 52) = v25 + 1;
          if ( v25 >= *(_DWORD *)(v24 + 8) )
          {
            --*((_DWORD *)v1 + *(_DWORD *)(v24 + 100) + 1174);
            v26 = *(_DWORD *)(v21 + 8);
            v27 = *(_DWORD *)(v26 + 4 * v23);
            *(_DWORD *)(v26 + 4 * v23) = 0;
            v54 = v27;
            v28 = (int)v1 + 12 * *(_DWORD *)(v27 + 100);
            v31 = *(int **)(v28 + 4);
            v29 = v28 + 4;
            v30 = v31;
            if ( v31 == *(int **)(v29 + 4) )
            {
              std::vector<std::unique_ptr<Particle,std::default_delete<Particle>>,std::allocator<std::unique_ptr<Particle,std::default_delete<Particle>>>>::_M_emplace_back_aux<std::unique_ptr<Particle,std::default_delete<Particle>>>(
                (ParticleEngine *)((char *)v1 + 12 * *(_DWORD *)(v27 + 100)),
                &v54);
              if ( v54 )
                (*(void (**)(void))(*(_DWORD *)v54 + 12))();
            }
            else
              v54 = 0;
              *v30 = v27;
              *(_DWORD *)v29 = v30 + 1;
            v54 = 0;
            v33 = *(_QWORD *)(v21 + 8);
            v32 = v33 + 4 * v23;
            LODWORD(v33) = v32 + 4;
            if ( v32 + 4 != HIDWORD(v33) )
              v34 = HIDWORD(v33) - v33;
              LODWORD(v33) = HIDWORD(v33);
              if ( v34 >= 1 )
              {
                v35 = (v34 >> 2) + 1;
                do
                {
                  v36 = *(_DWORD *)(v32 + 4);
                  *(_DWORD *)(v32 + 4) = 0;
                  v37 = *(_DWORD *)v32;
                  *(_DWORD *)v32 = v36;
                  if ( v37 )
                    (*(void (**)(void))(*(_DWORD *)v37 + 12))();
                  --v35;
                  v32 += 4;
                }
                while ( v35 > 1 );
                LODWORD(v33) = *(_DWORD *)(v21 + 12);
              }
            v38 = (_DWORD *)(v33 - 4);
            *(_DWORD *)(v21 + 12) = v33 - 4;
            v39 = *(_DWORD *)(v33 - 4);
            if ( v39 )
              (*(void (**)(void))(*(_DWORD *)v39 + 12))();
            --v23;
            *v38 = 0;
          }
          v22 = *(_QWORD *)(v21 + 8);
          ++v23;
        while ( v23 < (HIDWORD(v22) - (signed int)v22) >> 2 );
      v21 = *(_DWORD *)v21;
    v20 = v53 + 28;
  while ( (ParticleEngine *)(v53 + 28) != (ParticleEngine *)((char *)v1 + 1924) );
  v40 = *((_DWORD *)v1 + 481);
  result = *((_DWORD *)v1 + 482);
  if ( result != v40 )
    v42 = 0;
      (*(void (**)(void))(**(_DWORD **)(v40 + 4 * v42) + 8))();
      if ( (*(int (**)(void))(**(_DWORD **)(v40 + 4 * v42) + 16))() == 1 )
        v43 = *((_DWORD *)v1 + 482);
        v44 = *((_DWORD *)v1 + 481) + 4 * v42;
        v45 = v44 + 4;
        if ( v44 + 4 != v43 )
          v46 = v43 - v45;
          v45 = *((_DWORD *)v1 + 482);
          if ( v46 >= 1 )
            v47 = (v46 >> 2) + 1;
            do
              v48 = *(_DWORD *)(v44 + 4);
              *(_DWORD *)(v44 + 4) = 0;
              v49 = *(_DWORD *)v44;
              *(_DWORD *)v44 = v48;
              if ( v49 )
                (*(void (**)(void))(*(_DWORD *)v49 + 4))();
              --v47;
              v44 += 4;
            while ( v47 > 1 );
            v45 = *((_DWORD *)v1 + 482);
        v50 = (_DWORD *)(v45 - 4);
        *((_DWORD *)v1 + 482) = v45 - 4;
        v51 = *(_DWORD *)(v45 - 4);
        if ( v51 )
          (*(void (**)(void))(*(_DWORD *)v51 + 4))();
        --v42;
        *v50 = 0;
      v40 = *((_DWORD *)v1 + 481);
      ++v42;
      result = *((_DWORD *)v1 + 482) - v40;
    while ( v42 < result >> 2 );
  return result;
}


int __fastcall ParticleEngine::render(int a1, float a2, int a3, int a4, int a5, int a6)
{
  int v10; // r8@1
  __int64 v11; // r0@1
  int v12; // r6@1
  Tessellator *v13; // r10@1
  unsigned int v14; // r5@3
  int v15; // r11@3
  __int64 v16; // r0@3
  int v17; // r5@9
  int v18; // r8@10
  unsigned int v19; // r7@12
  int v20; // r9@12
  __int64 v21; // r0@12
  int v23; // [sp+0h] [bp-40h]@0
  int v24; // [sp+4h] [bp-3Ch]@1
  Tessellator *v25; // [sp+8h] [bp-38h]@1

  __asm { VLDR            S0, [SP,#0x40+arg_4] }
  v10 = a1;
  __asm
  {
    VMUL.F32        S0, S0, S0
    VSTR            S0, [SP,#0x40+var_40]
  }
  LODWORD(v11) = ParticleRenderContext::ParticleRenderContext(COERCE_FLOAT(&v24), SLODWORD(a2), a4, a3, v23);
  v12 = *(_DWORD *)(v10 + 588);
  v13 = v25;
  if ( v12 )
    do
    {
      v11 = *(_QWORD *)(v12 + 8);
      if ( (_DWORD)v11 != HIDWORD(v11) )
      {
        v14 = 0;
        Tessellator::begin(v13, HIDWORD(v11) - v11, 0);
        v15 = (*(int (**)(void))(***(_DWORD ***)(v12 + 8) + 24))();
        v16 = *(_QWORD *)(v12 + 8);
        if ( HIDWORD(v16) != (_DWORD)v16 )
        {
          do
          {
            (*(void (**)(void))(**(_DWORD **)(v16 + 4 * v14++) + 20))();
            if ( v14 > 0x3FFE )
              break;
            v16 = *(_QWORD *)(v12 + 8);
          }
          while ( v14 < (HIDWORD(v16) - (signed int)v16) >> 2 );
        }
        LODWORD(v11) = Tessellator::draw((char *)v13, v24, v10 + 4468, v15);
      }
      v12 = *(_DWORD *)v12;
    }
    while ( v12 );
    v13 = v25;
  v17 = *(_DWORD *)(v10 + 616);
  if ( v17 )
    v18 = v10 + 4480;
      v11 = *(_QWORD *)(v17 + 8);
        v19 = 0;
        v20 = (*(int (**)(void))(***(_DWORD ***)(v17 + 8) + 24))();
        v21 = *(_QWORD *)(v17 + 8);
        if ( HIDWORD(v21) != (_DWORD)v21 )
            (*(void (**)(void))(**(_DWORD **)(v21 + 4 * v19++) + 20))();
            if ( v19 > 0x3FFE )
            v21 = *(_QWORD *)(v17 + 8);
          while ( v19 < (HIDWORD(v21) - (signed int)v21) >> 2 );
        LODWORD(v11) = Tessellator::draw((char *)v13, v24, v18, v20);
      v17 = *(_DWORD *)v17;
    while ( v17 );
  return v11;
}


ParticleEngine *__fastcall ParticleEngine::renderBlended(int a1, BaseEntityRenderContext *this, int a3, int a4, int a5, float a6)
{
  return ParticleEngine::renderBlended(
           (ParticleEngine *)a1,
           this,
           (const Vec3 *)a3,
           (const Vec3 *)a4,
           *(float *)&a5,
           a6);
}
