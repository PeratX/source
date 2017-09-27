

const void **__fastcall CoalItem::buildDescriptionId(CoalItem *this, const ItemInstance *a2, ItemInstance *a3)
{
  int *v3; // r5@1
  __int16 v4; // r4@1
  const void **result; // r0@2

  v3 = (int *)this;
  v4 = ItemInstance::getAuxValue(a3);
  sub_21E8AF4(v3, (int *)&Item::ICON_DESCRIPTION_PREFIX);
  if ( v4 == 1 )
    result = sub_21E7408((const void **)v3, "charcoal.name", 0xDu);
  else
    result = sub_21E7408((const void **)v3, "coal.name", 9u);
  return result;
}


char *__fastcall CoalItem::getIcon(CoalItem *this, int a2, int a3, bool a4)
{
  char *result; // r0@2

  if ( a2 == 1 )
    result = (char *)this + 116;
  else
    result = (char *)*((_DWORD *)this + 15);
  return result;
}


Item *__fastcall CoalItem::~CoalItem(CoalItem *this)
{
  Item *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v5; // r12@3
  signed int v6; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_2701BB0;
  v2 = *((_DWORD *)this + 35);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v5 = (unsigned int *)(v2 - 4);
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
      j_j_j_j__ZdlPv_9(v3);
  }
  Item::~Item(v1);
  return v1;
}


int __fastcall CoalItem::setIcon(int a1, int **a2, int a3)
{
  int v3; // r8@1
  int v4; // r0@1
  int v5; // r3@1
  int v6; // r4@1
  int v7; // r5@1
  int v8; // r6@1
  int v9; // r7@1
  void *v10; // r0@1
  void *v11; // r0@2
  unsigned int *v13; // r2@4
  signed int v14; // r1@6
  unsigned int *v15; // r2@8
  signed int v16; // r1@10
  int v17; // [sp+4h] [bp-44h]@1
  char v18; // [sp+8h] [bp-40h]@1
  int v19; // [sp+Ch] [bp-3Ch]@1
  int v20; // [sp+10h] [bp-38h]@1
  int v21; // [sp+14h] [bp-34h]@1
  int v22; // [sp+18h] [bp-30h]@1
  int v23; // [sp+1Ch] [bp-2Ch]@1
  int v24; // [sp+20h] [bp-28h]@1
  int v25; // [sp+24h] [bp-24h]@1

  v3 = a1;
  Item::setIcon(a1, a2, a3);
  sub_21E94B4((void **)&v17, "charcoal");
  Item::getTextureUVCoordinateSet((TextureUVCoordinateSet *)&v18, (int **)&v17, 0);
  v4 = v3 + 116;
  v5 = v19;
  v6 = v20;
  v7 = v21;
  v8 = v22;
  v9 = v23;
  *(_DWORD *)v4 = *(_DWORD *)&v18;
  *(_DWORD *)(v4 + 4) = v5;
  *(_DWORD *)(v4 + 8) = v6;
  *(_DWORD *)(v4 + 12) = v7;
  *(_DWORD *)(v4 + 16) = v8;
  *(_DWORD *)(v4 + 20) = v9;
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)(v3 + 140),
    &v24);
  *(_DWORD *)(v3 + 144) = v25;
  v10 = (void *)(v24 - 12);
  if ( (int *)(v24 - 12) != &dword_28898C0 )
  {
    v13 = (unsigned int *)(v24 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
    }
    else
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  }
  v11 = (void *)(v17 - 12);
  if ( (int *)(v17 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v17 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  return v3;
}


int __fastcall CoalItem::CoalItem(int a1, const void **a2, __int16 a3)
{
  int v3; // r4@1

  v3 = a1;
  Item::Item(a1, a2, a3);
  *(_DWORD *)v3 = &off_2701BB0;
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 116));
  (*(void (__fastcall **)(int, signed int))(*(_DWORD *)v3 + 24))(v3, 1);
  (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)v3 + 28))(v3, 0);
  return v3;
}


void __fastcall CoalItem::~CoalItem(CoalItem *this)
{
  Item *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v4; // r12@3
  signed int v5; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_2701BB0;
  v2 = *((_DWORD *)this + 35);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v4 = (unsigned int *)(v2 - 4);
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
  Item::~Item(v1);
  operator delete((void *)v1);
}


void __fastcall CoalItem::~CoalItem(CoalItem *this)
{
  CoalItem::~CoalItem(this);
}
