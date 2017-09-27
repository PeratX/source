

signed int __fastcall CaveSpider::getEntityTypeId(CaveSpider *this)
{
  return 265000;
}


void __fastcall CaveSpider::~CaveSpider(CaveSpider *this)
{
  CaveSpider::~CaveSpider(this);
}


void __fastcall CaveSpider::getDebugText(float a1, int a2)
{
  CaveSpider::getDebugText(a1, a2);
}


signed int __fastcall CaveSpider::getSpiderType(CaveSpider *this)
{
  return 1;
}


signed int __fastcall CaveSpider::getModelScale(CaveSpider *this)
{
  return 1060320051;
}


void __fastcall CaveSpider::~CaveSpider(CaveSpider *this)
{
  Entity *v1; // r0@1

  v1 = Mob::~Mob(this);
  j_j_j__ZdlPv_6((void *)v1);
}


void __fastcall CaveSpider::getDebugText(float a1, int a2)
{
  int v2; // r4@1
  float v3; // r5@1
  const void **v10; // r0@4
  void *v11; // r1@4
  __int64 v12; // kr00_8@4
  char *v13; // r1@5
  char *v14; // r0@7
  void *v15; // r0@8
  unsigned int *v16; // r2@10
  signed int v17; // r1@12
  unsigned int *v18; // r2@14
  signed int v19; // r1@16
  int v20; // [sp+0h] [bp-28h]@4
  char *v21; // [sp+4h] [bp-24h]@4

  v2 = a2;
  v3 = a1;
  Entity::getDebugText(a1, a2);
  _R0 = *(_DWORD *)(*(_DWORD *)(LODWORD(v3) + 48) + 88);
  if ( _R0 )
  {
    __asm
    {
      VLDR            S0, [R0,#0x10]
      VCVTR.S32.F32   S0, S0
      VMOV            R1, S0
    }
  }
  else
    _R1 = 0;
  Util::toString<int,(void *)0,(void *)0>((void **)&v20, _R1);
  v10 = sub_21E82D8((const void **)&v20, 0, (unsigned int)"PoisonTime: ", (_BYTE *)0xC);
  v11 = (void *)*v10;
  v21 = (char *)*v10;
  *v10 = &unk_28898CC;
  v12 = *(_QWORD *)(v2 + 4);
  if ( (_DWORD)v12 == HIDWORD(v12) )
    std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string>((unsigned __int64 *)v2, &v21);
    v13 = v21;
    *(_DWORD *)v12 = v11;
    v13 = (char *)&unk_28898CC;
    v21 = (char *)&unk_28898CC;
    *(_DWORD *)(v2 + 4) = v12 + 4;
  v14 = v13 - 12;
  if ( (int *)(v13 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v13 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
    else
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  v15 = (void *)(v20 - 12);
  if ( (int *)(v20 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v20 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
}


int __fastcall CaveSpider::CaveSpider(int a1, int a2, int *a3)
{
  int result; // r0@1

  result = Monster::Monster(a1, a2, a3);
  *(_DWORD *)(result + 248) = 22;
  *(_DWORD *)(result + 172) |= 0x2000u;
  *(_DWORD *)result = &off_26FA5B0;
  return result;
}
