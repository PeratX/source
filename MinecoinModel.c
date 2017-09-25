

const void **__fastcall MinecoinModel::getPrice(MinecoinModel *this)
{
  Offer *v1; // r0@1
  const void **result; // r0@2

  v1 = (Offer *)*((_DWORD *)this + 1);
  if ( v1 )
    result = Offer::getPrice(v1);
  else
    result = &Util::EMPTY_STRING;
  return result;
}


void __fastcall MinecoinModel::setKeyartLocation(int a1, int *a2)
{
  MinecoinModel::setKeyartLocation(a1, a2);
}


void __fastcall MinecoinModel::~MinecoinModel(MinecoinModel *this)
{
  MinecoinModel *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  unsigned int *v6; // r2@4
  signed int v7; // r1@6
  unsigned int *v8; // r2@8
  signed int v9; // r1@10

  v1 = this;
  *(_DWORD *)this = &off_26D8068;
  v2 = *((_DWORD *)this + 4);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v6 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v7 = __ldrex(v6);
      while ( __strex(v7 - 1, v6) );
    }
    else
      v7 = (*v6)--;
    if ( v7 <= 0 )
      j_j_j_j_j__ZdlPv_9(v3);
  }
  v4 = *((_DWORD *)v1 + 2);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v8 = (unsigned int *)(v4 - 4);
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
      v9 = (*v8)--;
    if ( v9 <= 0 )
      j_j_j_j_j__ZdlPv_9(v5);
  operator delete((void *)v1);
}


    if ( v3 >= MinecoinModel::getCoinCount((MinecoinModel *)v2) )
{
    *(_DWORD *)(v1 + 4) = *(_DWORD *)(v2 + 4);
    EntityInteraction::setInteractText((int *)(v1 + 8), (int *)(v2 + 8));
    *(_DWORD *)(v1 + 12) = *(_DWORD *)(v2 + 12);
    EntityInteraction::setInteractText((int *)(v1 + 16), (int *)(v2 + 16));
    *(_DWORD *)(v1 + 20) = *(_DWORD *)(v2 + 20);
    v1 = v2;
    v2 -= 24;
  }
  *(_DWORD *)(v1 + 4) = v6;
  EntityInteraction::setInteractText((int *)(v1 + 8), &v7);
  *(_DWORD *)(v1 + 12) = v8;
  EntityInteraction::setInteractText((int *)(v1 + 16), &v9);
  *(_DWORD *)(v1 + 20) = v10;
  return MinecoinModel::~MinecoinModel((MinecoinModel *)&v5);
}


int __fastcall MinecoinModel::setCoinCount(int result, unsigned int a2)
{
  *(_DWORD *)(result + 12) = a2;
  return result;
}


void __fastcall MinecoinModel::~MinecoinModel(MinecoinModel *this)
{
  MinecoinModel::~MinecoinModel(this);
}


char *__fastcall MinecoinModel::getProductId(MinecoinModel *this)
{
  return (char *)this + 8;
}


    if ( v16 >= MinecoinModel::getCoinCount(v15) )
{
      v19 = MinecoinModel::getCoinCount((MinecoinModel *)((char *)v6 + 24));
      if ( v19 < MinecoinModel::getCoinCount((MinecoinModel *)(v5 - 24)) )
        goto LABEL_9;
      v22 = MinecoinModel::getCoinCount(v15);
      if ( v22 < MinecoinModel::getCoinCount((MinecoinModel *)(v5 - 24)) )
      {
LABEL_11:
        v20 = (int)v6;
        v21 = v5 - 24;
        goto LABEL_13;
      }
    }
    else
    {
      v17 = MinecoinModel::getCoinCount(v15);
      if ( v17 >= MinecoinModel::getCoinCount((MinecoinModel *)(v5 - 24)) )
        v18 = MinecoinModel::getCoinCount((MinecoinModel *)((char *)v6 + 24));
        if ( v18 < MinecoinModel::getCoinCount((MinecoinModel *)(v5 - 24)) )
          goto LABEL_11;
LABEL_9:
        v21 = (int)v6 + 24;
LABEL_13:
        std::swap<MinecoinModel>(v20, v21);
        v23 = (MinecoinModel *)v5;
        for ( i = (MinecoinModel *)((char *)v6 + 24); ; i = (MinecoinModel *)((char *)i + 24) )
        {
          v25 = MinecoinModel::getCoinCount(i);
          if ( v25 >= MinecoinModel::getCoinCount(v6) )
          {
            do
            {
              v23 = (MinecoinModel *)((char *)v23 - 24);
              v26 = MinecoinModel::getCoinCount(v6);
            }
            while ( v26 < MinecoinModel::getCoinCount(v23) );
            if ( i >= v23 )
              v4 = v4 & 0xFFFFFF00 | v31;
              result = sub_CDAFC8(i, v5, v8, v4);
              _R5 = i - v6;
              v5 = (int)i;
              if ( i - v6 <= 384 )
                return result;
              goto LABEL_3;
            std::swap<MinecoinModel>((int)i, (int)v23);
          }
        }
    v20 = (int)v6;
    v21 = (int)v15;
    goto LABEL_13;
  }
  v29 = -1431655765 * (_R5 >> 3);
  v27 = (v29 - 2) / 2;
  v28 = (int *)((char *)v6 + 24 * v27 + 20);
  v30 = (unsigned int)&`vtable for'MinecoinModel;
  do
  {
    v38 = &off_26D8068;
    v39 = *(v28 - 4);
    sub_DA73B4(&v40, v28 - 3);
    v41 = *(v28 - 2);
    sub_DA73B4(&v42, v28 - 1);
    v43 = *v28;
    v32 = &off_26D8068;
    v33 = v39;
    sub_DA73B4(&v34, &v40);
    v35 = v41;
    sub_DA73B4(&v36, &v42);
    v37 = v43;
    v30 = v30 & 0xFFFFFF00 | v31;
    sub_CDB414((int)v6, v27, __PAIR__(&v32, v29));
    MinecoinModel::~MinecoinModel((MinecoinModel *)&v32);
    result = MinecoinModel::~MinecoinModel((MinecoinModel *)&v38);
    --v27;
    v28 -= 6;
  while ( v27 != -1 );
  if ( _R5 >= 25 )
    do
      v5 -= 24;
      _R5 = _R5 & 0xFFFFFF00 | v31;
      sub_CDB28C((int)v6, v5, v5);
      result = (MinecoinModel *)(v5 - (_DWORD)v6);
    while ( v5 - (signed int)v6 > 24 );
  return result;
}


MinecoinModel *__fastcall MinecoinModel::~MinecoinModel(MinecoinModel *this)
{
  MinecoinModel *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  unsigned int *v7; // r2@4
  signed int v8; // r1@6
  unsigned int *v9; // r2@8
  signed int v10; // r1@10

  v1 = this;
  *(_DWORD *)this = &off_26D8068;
  v2 = *((_DWORD *)this + 4);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v7 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
    }
    else
      v8 = (*v7)--;
    if ( v8 <= 0 )
      j_j_j_j_j__ZdlPv_9(v3);
  }
  v4 = *((_DWORD *)v1 + 2);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v9 = (unsigned int *)(v4 - 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j_j__ZdlPv_9(v5);
  return v1;
}


void __fastcall MinecoinModel::setKeyartLocation(int a1, int *a2)
{
  int v2; // r4@1
  char *v3; // r0@1
  char *v4; // r0@2
  unsigned int *v5; // r2@4
  signed int v6; // r1@6
  unsigned int *v7; // r2@8
  signed int v8; // r1@10
  char *v9; // [sp+0h] [bp-20h]@1
  char *v10; // [sp+4h] [bp-1Ch]@1
  int v11; // [sp+8h] [bp-18h]@1

  v2 = a1;
  sub_DA73B4((int *)&v9, a2);
  v10 = v9;
  v9 = (char *)&unk_28898CC;
  v11 = 2;
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)(v2 + 16),
    (int *)&v10);
  *(_DWORD *)(v2 + 20) = v11;
  v3 = v10 - 12;
  if ( (int *)(v10 - 12) != &dword_28898C0 )
  {
    v5 = (unsigned int *)(v10 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v6 = __ldrex(v5);
      while ( __strex(v6 - 1, v5) );
    }
    else
      v6 = (*v5)--;
    if ( v6 <= 0 )
      j_j_j_j_j__ZdlPv_9(v3);
  }
  v4 = v9 - 12;
  if ( (int *)(v9 - 12) != &dword_28898C0 )
    v7 = (unsigned int *)(v9 - 4);
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
      v8 = (*v7)--;
    if ( v8 <= 0 )
      j_j_j_j_j__ZdlPv_9(v4);
}


int __fastcall MinecoinModel::MinecoinModel(int result)
{
  *(_DWORD *)result = &off_26D8068;
  *(_DWORD *)(result + 4) = 0;
  *(_QWORD *)(result + 8) = (unsigned int)&unk_28898CC;
  *(_QWORD *)(result + 16) = (unsigned int)&unk_28898CC;
  return result;
}


int __fastcall MinecoinModel::MinecoinModel(__int64 a1, int *a2, int a3)
{
  int v3; // r5@1
  int v4; // r4@1
  int result; // r0@1

  v3 = a1;
  v4 = a3;
  LODWORD(a1) = &off_26D8068;
  *(_QWORD *)v3 = a1;
  sub_DA73B4((int *)(v3 + 8), a2);
  *(_DWORD *)(v3 + 12) = v4;
  *(_DWORD *)(v3 + 16) = &unk_28898CC;
  result = v3;
  *(_DWORD *)(v3 + 20) = 0;
  return result;
}


      if ( v7 < MinecoinModel::getCoinCount((MinecoinModel *)(v3 + 24 * (2 * v6 | 1))) )
{
      v8 = v3 + 24 * v4;
      v9 = v3 + 24 * v6;
      *(_DWORD *)(v9 + 4) = *(_DWORD *)(v8 + 4);
      EntityInteraction::setInteractText((int *)(v9 + 8), (int *)(v8 + 8));
      *(_DWORD *)(v9 + 12) = *(_DWORD *)(v8 + 12);
      EntityInteraction::setInteractText((int *)(v9 + 16), (int *)(v8 + 16));
      *(_DWORD *)(v9 + 20) = *(_DWORD *)(v8 + 20);
      v6 = v4;
    }
    while ( v4 < v5 );
  }
  if ( !(v18 & 1) && v4 == ((signed int)v18 - 2) / 2 )
  {
    v10 = v3 + 24 * v4;
    v4 = 2 * v4 | 1;
    v11 = v3 + 24 * v4;
    *(_DWORD *)(v10 + 4) = *(_DWORD *)(v11 + 4);
    EntityInteraction::setInteractText((int *)(v10 + 8), (int *)(v11 + 8));
    *(_DWORD *)(v10 + 12) = *(_DWORD *)(v11 + 12);
    EntityInteraction::setInteractText((int *)(v10 + 16), (int *)(v11 + 16));
    *(_DWORD *)(v10 + 20) = *(_DWORD *)(v11 + 20);
  v21 = &off_26D8068;
  v22 = *(_DWORD *)(HIDWORD(v18) + 4);
  sub_DA73B4(&v23, (int *)(HIDWORD(v18) + 8));
  v24 = *(_DWORD *)(HIDWORD(v18) + 12);
  LODWORD(v18) = sub_DA73B4(&v25, (int *)(HIDWORD(v18) + 16));
  v26 = *(_DWORD *)(HIDWORD(v18) + 20);
  if ( v4 <= v20 )
    v12 = v4;
  else
    while ( 1 )
    {
      v12 = (v4 - 1) / 2;
      v13 = v3 + 24 * v12;
      v14 = MinecoinModel::getCoinCount((MinecoinModel *)(v3 + 24 * v12));
      if ( v14 >= MinecoinModel::getCoinCount((MinecoinModel *)&v21) )
        break;
      v15 = v3 + 24 * v4;
      *(_DWORD *)(v15 + 4) = *(_DWORD *)(v13 + 4);
      EntityInteraction::setInteractText((int *)(v15 + 8), (int *)(v13 + 8));
      *(_DWORD *)(v15 + 12) = *(_DWORD *)(v13 + 12);
      EntityInteraction::setInteractText((int *)(v15 + 16), (int *)(v13 + 16));
      v4 = (v4 - 1) / 2;
      *(_DWORD *)(v15 + 20) = *(_DWORD *)(v13 + 20);
      if ( v12 <= v20 )
        goto LABEL_15;
LABEL_15:
  v16 = v3 + 24 * v12;
  *(_DWORD *)(v16 + 4) = v22;
  EntityInteraction::setInteractText((int *)(v16 + 8), &v23);
  *(_DWORD *)(v16 + 12) = v24;
  EntityInteraction::setInteractText((int *)(v16 + 16), v19);
  *(_DWORD *)(v16 + 20) = v26;
  return MinecoinModel::~MinecoinModel((MinecoinModel *)&v21);
}


signed int __fastcall MinecoinModel::isAvailableForPurchase(MinecoinModel *this)
{
  Offer *v1; // r0@1
  signed int result; // r0@2

  v1 = (Offer *)*((_DWORD *)this + 1);
  if ( v1 )
    result = Offer::isAvailableForPurchase(v1);
  else
    result = 0;
  return result;
}


int *__fastcall MinecoinModel::getSku(MinecoinModel *this, int a2)
{
  int *v2; // r4@1
  Offer *v3; // r0@1
  int *v4; // r1@2

  v2 = (int *)this;
  v3 = *(Offer **)(a2 + 4);
  if ( v3 )
    v4 = (int *)Offer::getProductSku(v3);
  else
    v4 = (int *)&Util::EMPTY_STRING;
  return sub_DA73B4(v2, v4);
}


      if ( v8 >= MinecoinModel::getCoinCount(v2) )
{
        v14 = (void **)((unsigned int)v14 & 0xFFFFFF00);
        sub_CDB8AC((int)v7);
      }
      else
      {
        v19 = &off_26D8068;
        v20 = *((_DWORD *)v4 + 7);
        sub_DA73B4(v6, (int *)v4 + 8);
        v22 = *((_DWORD *)v4 + 9);
        sub_DA73B4(v5, (int *)v4 + 10);
        v24 = *((_DWORD *)v4 + 11);
        if ( v7 - v2 >= 1 )
        {
          v9 = (int)v7 - 12;
          v10 = 0;
          v11 = -1431655765 * ((v7 - v2) >> 3) + 1;
          do
          {
            v12 = (int)v7 + v10;
            v13 = (int)v4 + v10;
            *(_DWORD *)((char *)v4 + v10 + 28) = *(_DWORD *)((char *)v7 + v10 - 20);
            EntityInteraction::setInteractText((int *)((char *)v4 + v10 + 32), (int *)(v9 + v10 - 4));
            *(_DWORD *)(v13 + 36) = *(_DWORD *)((char *)v7 + v10 - 12);
            EntityInteraction::setInteractText((int *)((char *)v4 + v10 + 40), (int *)(v9 + v10 + 4));
            --v11;
            v10 -= 24;
            *(_DWORD *)(v13 + 44) = *(_DWORD *)(v12 - 4);
          }
          while ( v11 > 1 );
        }
        v2 = v17;
        *((_DWORD *)v17 + 1) = v20;
        v6 = &v21;
        EntityInteraction::setInteractText(v16, &v21);
        v5 = &v23;
        *((_DWORD *)v17 + 3) = v22;
        EntityInteraction::setInteractText(v15, &v23);
        *((_DWORD *)v17 + 5) = v24;
        MinecoinModel::~MinecoinModel((MinecoinModel *)&v19);
      result = (MinecoinModel *)((char *)v7 + 24);
      v4 = v7;
    }
    while ( (MinecoinModel *)((char *)v7 + 24) != v18 );
  }
  return result;
}


char *__fastcall MinecoinModel::getKeyArtLocation(MinecoinModel *this)
{
  return (char *)this + 16;
}
