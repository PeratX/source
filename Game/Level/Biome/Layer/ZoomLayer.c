

void __fastcall ZoomLayer::~ZoomLayer(ZoomLayer *this)
{
  ZoomLayer::~ZoomLayer(this);
}


int __fastcall ZoomLayer::ZoomLayer(int a1, unsigned int a2, int a3)
{
  int v3; // r6@1
  int v4; // r4@1
  int v5; // r5@1
  int v6; // r6@1
  unsigned int *v7; // r0@3
  unsigned int v8; // r1@5
  unsigned int *v9; // r1@9
  unsigned int v10; // r0@11
  unsigned int *v11; // r7@15
  unsigned int v12; // r0@17

  v3 = a3;
  v4 = a1;
  j_Layer::Layer(a1, a2);
  *(_DWORD *)v4 = &off_2724B3C;
  *(_DWORD *)(v4 + 40) = *(_DWORD *)v3;
  v5 = *(_DWORD *)(v4 + 44);
  v6 = *(_DWORD *)(v3 + 4);
  if ( v6 != v5 )
  {
    if ( v6 )
    {
      v7 = (unsigned int *)(v6 + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v8 = __ldrex(v7);
        while ( __strex(v8 + 1, v7) );
        v5 = *(_DWORD *)(v4 + 44);
      }
      else
        ++*v7;
    }
    if ( v5 )
      v9 = (unsigned int *)(v5 + 4);
          v10 = __ldrex(v9);
        while ( __strex(v10 - 1, v9) );
        v10 = (*v9)--;
      if ( v10 == 1 )
        v11 = (unsigned int *)(v5 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 8))(v5);
        if ( &pthread_create )
        {
          __dmb();
          do
            v12 = __ldrex(v11);
          while ( __strex(v12 - 1, v11) );
        }
        else
          v12 = (*v11)--;
        if ( v12 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 12))(v5);
    *(_DWORD *)(v4 + 44) = v6;
  }
  return v4;
}


int __fastcall ZoomLayer::fillArea(ZoomLayer *this, LayerData *a2, int a3, int a4, int a5, int a6)
{
  LayerData *v6; // r11@1
  int v7; // r6@1
  int v8; // r5@3
  int v9; // r7@3
  int v10; // r9@3
  int v11; // r0@3
  int v12; // r6@3
  int v13; // r2@4
  int v14; // r11@4
  int v15; // r8@4
  int v16; // r1@4
  int v17; // r0@4
  int v18; // r6@4
  int v19; // r7@4
  int v20; // r0@4
  int v21; // ST68_4@5
  int v22; // ST60_4@5
  int v23; // r4@5
  int v24; // ST64_4@5
  int v25; // r1@5
  int v26; // r7@7
  int v27; // r4@8
  int v28; // r8@8
  int v29; // r6@8
  int v30; // r5@8
  char v32; // [sp+14h] [bp-108Ch]@1
  char v33; // [sp+18h] [bp-1088h]@1
  int v34; // [sp+1Ch] [bp-1084h]@1
  int v35; // [sp+28h] [bp-1078h]@3
  ZoomLayer *v36; // [sp+30h] [bp-1070h]@1
  int v37; // [sp+38h] [bp-1068h]@1
  int v38; // [sp+3Ch] [bp-1064h]@1
  int v39; // [sp+40h] [bp-1060h]@4
  int v40; // [sp+44h] [bp-105Ch]@4
  int v41; // [sp+48h] [bp-1058h]@4
  int v42; // [sp+4Ch] [bp-1054h]@4
  char *v43; // [sp+50h] [bp-1050h]@3
  int v44; // [sp+58h] [bp-1048h]@4
  LayerData *v45; // [sp+5Ch] [bp-1044h]@1
  int v46; // [sp+6Ch] [bp-1034h]@5
  int v47; // [sp+70h] [bp-1030h]@5
  int v48; // [sp+74h] [bp-102Ch]@5
  int v49; // [sp+78h] [bp-1028h]@5
  char v50[3972]; // [sp+7Ch] [bp-1024h]@3

  v32 = a4;
  v33 = a3;
  v36 = this;
  v6 = a2;
  v7 = a3 >> 1;
  v45 = a2;
  v38 = (a5 >> 1) + 2;
  v37 = a4 >> 1;
  (*(void (__cdecl **)(_DWORD, LayerData *))(**((_DWORD **)this + 10) + 12))(*((_DWORD *)this + 10), a2);
  v34 = a5 >> 1;
  if ( a6 >> 1 != -1 && v34 >= 0 )
  {
    v8 = 0;
    v9 = 0;
    v43 = &v50[8 * v34];
    v10 = 4 * v34;
    v11 = 2 * v7;
    v12 = 0;
    v35 = v11;
    do
    {
      v41 = v9;
      v42 = v8;
      v13 = *(_DWORD *)v6;
      v14 = v9;
      v39 = v12 + 1;
      v40 = v12 + 1;
      v15 = *(_DWORD *)(v13 + 4 * v12 * v38);
      v16 = *(_DWORD *)(v13 + 4 * v38 * (v12 + 1));
      v17 = v37 + v12;
      v18 = v35;
      v19 = v16;
      v44 = 2 * v17;
      v20 = v34 + 1;
      do
      {
        v21 = v20;
        v22 = v19;
        j_Layer::initRandom(v36, v44, v18, v44);
        v23 = *(_DWORD *)(*(_DWORD *)v45 + 4 * v8 + 4);
        v24 = *(_DWORD *)(*(_DWORD *)v45 + v10 + 4 * v8 + 12);
        *(_DWORD *)&v50[v14] = v15;
        v48 = v15;
        v49 = v19;
        *(_DWORD *)&v43[v14 + 8] = j_Layer::_random(v36, &v48, 2);
        v46 = v15;
        v47 = v23;
        v19 = v24;
        *(_DWORD *)&v50[v14 + 4] = j_Layer::_random(v36, &v46, 2);
        v25 = v15;
        v15 = v23;
        *(_DWORD *)&v43[v14 + 12] = (*(int (__fastcall **)(ZoomLayer *, int, int, int))(*(_DWORD *)v36 + 16))(
                                      v36,
                                      v25,
                                      v23,
                                      v22);
        v18 += 2;
        ++v8;
        v10 = 4 * v34;
        v14 += 8;
        v20 = v21 - 1;
      }
      while ( v21 != 1 );
      v8 = v42 + v34 + 2;
      v6 = v45;
      v12 = v40;
      v9 = v41 + 16 * v34 + 16;
    }
    while ( v39 != (a6 >> 1) + 1 );
  }
  v26 = a6;
  if ( a6 )
    v27 = 0;
    v28 = 2 * v34 + 2;
    v29 = v28 * (v32 & 1);
    v30 = 4 * a5;
      j___aeabi_memcpy4_0(*((_DWORD *)v6 + 1) + v27, (int)&v50[4 * (v29 | v33 & 1)], v30);
      v27 += v30;
      v29 += v28;
      --v26;
    while ( v26 );
  return j_LayerData::swap(v6);
}


int __fastcall ZoomLayer::zoom(unsigned __int64 *a1, int a2, int a3, int a4)
{
  unsigned __int64 *v4; // r4@1
  int v5; // r0@1
  unsigned int *v6; // r0@2
  unsigned int v7; // r2@4
  int result; // r0@7
  int v9; // r6@8
  int v10; // r9@8
  __int64 v11; // r0@9
  int v12; // r10@9
  unsigned int *v13; // r1@10
  unsigned int v14; // r0@12
  unsigned int *v15; // r7@16
  unsigned int v16; // r0@18
  int v17; // r5@23
  unsigned int *v18; // r1@24
  unsigned int v19; // r0@26
  unsigned int *v20; // r7@30
  unsigned int v21; // r0@32
  int v22; // [sp+0h] [bp-38h]@1
  int v23; // [sp+4h] [bp-34h]@9
  char v24; // [sp+8h] [bp-30h]@9
  int v25; // [sp+Ch] [bp-2Ch]@9
  char v26; // [sp+10h] [bp-28h]@9

  v4 = a1;
  *(_DWORD *)a1 = *(_DWORD *)a3;
  v5 = *(_DWORD *)(a3 + 4);
  v22 = a4;
  *((_DWORD *)v4 + 1) = v5;
  if ( v5 )
  {
    v6 = (unsigned int *)(v5 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v7 = __ldrex(v6);
      while ( __strex(v7 + 1, v6) );
    }
    else
      ++*v6;
  }
  result = a4;
  if ( a4 )
    v9 = a2 + 1;
    v10 = 0;
    do
      v23 = v9;
      j_std::__shared_ptr<ZoomLayer,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<ZoomLayer>,unsigned int,std::shared_ptr<Layer> &>(
        (int)&v24,
        (int)&v26,
        (unsigned int *)&v23,
        v4);
      v11 = *(_QWORD *)&v24;
      *(_DWORD *)&v24 = 0;
      v25 = 0;
      *(_DWORD *)v4 = v11;
      v12 = *((_DWORD *)v4 + 1);
      *((_DWORD *)v4 + 1) = HIDWORD(v11);
      if ( v12 )
      {
        v13 = (unsigned int *)(v12 + 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v14 = __ldrex(v13);
          while ( __strex(v14 - 1, v13) );
        }
        else
          v14 = (*v13)--;
        if ( v14 == 1 )
          v15 = (unsigned int *)(v12 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 8))(v12);
          if ( &pthread_create )
          {
            __dmb();
            do
              v16 = __ldrex(v15);
            while ( __strex(v16 - 1, v15) );
          }
          else
            v16 = (*v15)--;
          if ( v16 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 12))(v12);
      }
      v17 = v25;
      if ( v25 )
        v18 = (unsigned int *)(v25 + 4);
            v19 = __ldrex(v18);
          while ( __strex(v19 - 1, v18) );
          v19 = (*v18)--;
        if ( v19 == 1 )
          v20 = (unsigned int *)(v17 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v17 + 8))(v17);
              v21 = __ldrex(v20);
            while ( __strex(v21 - 1, v20) );
            v21 = (*v20)--;
          if ( v21 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v17 + 12))(v17);
      ++v10;
      result = v22;
    while ( v10 != v22 );
  return result;
}


void __fastcall ZoomLayer::~ZoomLayer(ZoomLayer *this)
{
  Layer *v1; // r0@1

  v1 = j_Layer::~Layer(this);
  j_j_j__ZdlPv_7((void *)v1);
}
