

int __fastcall ThrownPotionRenderer::onAppSuspended(ThrownPotionRenderer *this)
{
  ThrownPotionRenderer *v1; // r4@1

  v1 = this;
  mce::Mesh::reset((ThrownPotionRenderer *)((char *)this + 252));
  mce::Mesh::reset((ThrownPotionRenderer *)((char *)v1 + 352));
  mce::Mesh::reset((ThrownPotionRenderer *)((char *)v1 + 452));
  mce::Mesh::reset((ThrownPotionRenderer *)((char *)v1 + 552));
  mce::Mesh::reset((ThrownPotionRenderer *)((char *)v1 + 652));
  mce::Mesh::reset((ThrownPotionRenderer *)((char *)v1 + 752));
  mce::Mesh::reset((ThrownPotionRenderer *)((char *)v1 + 852));
  mce::Mesh::reset((ThrownPotionRenderer *)((char *)v1 + 952));
  mce::Mesh::reset((ThrownPotionRenderer *)((char *)v1 + 1052));
  mce::Mesh::reset((ThrownPotionRenderer *)((char *)v1 + 1152));
  mce::Mesh::reset((ThrownPotionRenderer *)((char *)v1 + 1252));
  mce::Mesh::reset((ThrownPotionRenderer *)((char *)v1 + 1352));
  mce::Mesh::reset((ThrownPotionRenderer *)((char *)v1 + 1452));
  mce::Mesh::reset((ThrownPotionRenderer *)((char *)v1 + 1552));
  mce::Mesh::reset((ThrownPotionRenderer *)((char *)v1 + 1652));
  mce::Mesh::reset((ThrownPotionRenderer *)((char *)v1 + 1752));
  mce::Mesh::reset((ThrownPotionRenderer *)((char *)v1 + 1852));
  mce::Mesh::reset((ThrownPotionRenderer *)((char *)v1 + 1952));
  mce::Mesh::reset((ThrownPotionRenderer *)((char *)v1 + 2052));
  mce::Mesh::reset((ThrownPotionRenderer *)((char *)v1 + 2152));
  mce::Mesh::reset((ThrownPotionRenderer *)((char *)v1 + 2252));
  mce::Mesh::reset((ThrownPotionRenderer *)((char *)v1 + 2352));
  mce::Mesh::reset((ThrownPotionRenderer *)((char *)v1 + 2452));
  mce::Mesh::reset((ThrownPotionRenderer *)((char *)v1 + 2552));
  mce::Mesh::reset((ThrownPotionRenderer *)((char *)v1 + 2652));
  return j_j_j__ZN3mce4Mesh5resetEv_0((ThrownPotionRenderer *)((char *)v1 + 2752));
}


signed int __fastcall ThrownPotionRenderer::isGlint(ThrownPotionRenderer *this, const Entity *a2)
{
  int v2; // r0@1
  signed int v3; // r4@2
  int v4; // r5@6
  unsigned int *v5; // r1@7
  unsigned int v6; // r0@9
  unsigned int *v7; // r6@13
  unsigned int v8; // r0@15
  Potion *v10; // [sp+0h] [bp-18h]@1
  int v11; // [sp+4h] [bp-14h]@6

  v2 = ThrownPotion::getPotionId(a2);
  Potion::getPotion((Potion *)&v10, v2);
  if ( v10 )
  {
    v3 = 0;
    if ( Potion::getMobEffectId(v10) > 0 )
      v3 = 1;
  }
  else
  v4 = v11;
  if ( v11 )
    v5 = (unsigned int *)(v11 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v6 = __ldrex(v5);
      while ( __strex(v6 - 1, v5) );
    }
    else
      v6 = (*v5)--;
    if ( v6 == 1 )
      v7 = (unsigned int *)(v4 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v8 = __ldrex(v7);
        while ( __strex(v8 - 1, v7) );
      }
      else
        v8 = (*v7)--;
      if ( v8 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
  return v3;
}


void __fastcall ThrownPotionRenderer::~ThrownPotionRenderer(ThrownPotionRenderer *this)
{
  BaseEntityRenderer *v1; // r0@1

  v1 = ThrownPotionRenderer::~ThrownPotionRenderer(this);
  j_j_j__ZdlPv_4((void *)v1);
}


void __fastcall ThrownPotionRenderer::~ThrownPotionRenderer(ThrownPotionRenderer *this)
{
  ThrownPotionRenderer::~ThrownPotionRenderer(this);
}


BaseEntityRenderer *__fastcall ThrownPotionRenderer::ThrownPotionRenderer(BaseEntityRenderer *a1, mce::TextureGroup *a2, int a3)
{
  BaseEntityRenderer *v3; // r4@1

  v3 = a1;
  ItemSpriteRenderer::ItemSpriteRenderer(a1, a2, a3, 0);
  *(_DWORD *)v3 = &off_26DC33C;
  *((_DWORD *)v3 + 34) = &off_26DC378;
  mce::Mesh::Mesh((BaseEntityRenderer *)((char *)v3 + 252));
  mce::Mesh::Mesh((BaseEntityRenderer *)((char *)v3 + 352));
  mce::Mesh::Mesh((BaseEntityRenderer *)((char *)v3 + 452));
  mce::Mesh::Mesh((BaseEntityRenderer *)((char *)v3 + 552));
  mce::Mesh::Mesh((BaseEntityRenderer *)((char *)v3 + 652));
  mce::Mesh::Mesh((BaseEntityRenderer *)((char *)v3 + 752));
  mce::Mesh::Mesh((BaseEntityRenderer *)((char *)v3 + 852));
  mce::Mesh::Mesh((BaseEntityRenderer *)((char *)v3 + 952));
  mce::Mesh::Mesh((BaseEntityRenderer *)((char *)v3 + 1052));
  mce::Mesh::Mesh((BaseEntityRenderer *)((char *)v3 + 1152));
  mce::Mesh::Mesh((BaseEntityRenderer *)((char *)v3 + 1252));
  mce::Mesh::Mesh((BaseEntityRenderer *)((char *)v3 + 1352));
  mce::Mesh::Mesh((BaseEntityRenderer *)((char *)v3 + 1452));
  mce::Mesh::Mesh((BaseEntityRenderer *)((char *)v3 + 1552));
  mce::Mesh::Mesh((BaseEntityRenderer *)((char *)v3 + 1652));
  mce::Mesh::Mesh((BaseEntityRenderer *)((char *)v3 + 1752));
  mce::Mesh::Mesh((BaseEntityRenderer *)((char *)v3 + 1852));
  mce::Mesh::Mesh((BaseEntityRenderer *)((char *)v3 + 1952));
  mce::Mesh::Mesh((BaseEntityRenderer *)((char *)v3 + 2052));
  mce::Mesh::Mesh((BaseEntityRenderer *)((char *)v3 + 2152));
  mce::Mesh::Mesh((BaseEntityRenderer *)((char *)v3 + 2252));
  mce::Mesh::Mesh((BaseEntityRenderer *)((char *)v3 + 2352));
  mce::Mesh::Mesh((BaseEntityRenderer *)((char *)v3 + 2452));
  mce::Mesh::Mesh((BaseEntityRenderer *)((char *)v3 + 2552));
  mce::Mesh::Mesh((BaseEntityRenderer *)((char *)v3 + 2652));
  mce::Mesh::Mesh((BaseEntityRenderer *)((char *)v3 + 2752));
  return v3;
}


BaseEntityRenderer *__fastcall ThrownPotionRenderer::~ThrownPotionRenderer(ThrownPotionRenderer *this)
{
  ThrownPotionRenderer *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_26DC33C;
  *((_DWORD *)this + 34) = &off_26DC378;
  mce::Mesh::~Mesh((ThrownPotionRenderer *)((char *)this + 2752));
  mce::Mesh::~Mesh((ThrownPotionRenderer *)((char *)v1 + 2652));
  mce::Mesh::~Mesh((ThrownPotionRenderer *)((char *)v1 + 2552));
  mce::Mesh::~Mesh((ThrownPotionRenderer *)((char *)v1 + 2452));
  mce::Mesh::~Mesh((ThrownPotionRenderer *)((char *)v1 + 2352));
  mce::Mesh::~Mesh((ThrownPotionRenderer *)((char *)v1 + 2252));
  mce::Mesh::~Mesh((ThrownPotionRenderer *)((char *)v1 + 2152));
  mce::Mesh::~Mesh((ThrownPotionRenderer *)((char *)v1 + 2052));
  mce::Mesh::~Mesh((ThrownPotionRenderer *)((char *)v1 + 1952));
  mce::Mesh::~Mesh((ThrownPotionRenderer *)((char *)v1 + 1852));
  mce::Mesh::~Mesh((ThrownPotionRenderer *)((char *)v1 + 1752));
  mce::Mesh::~Mesh((ThrownPotionRenderer *)((char *)v1 + 1652));
  mce::Mesh::~Mesh((ThrownPotionRenderer *)((char *)v1 + 1552));
  mce::Mesh::~Mesh((ThrownPotionRenderer *)((char *)v1 + 1452));
  mce::Mesh::~Mesh((ThrownPotionRenderer *)((char *)v1 + 1352));
  mce::Mesh::~Mesh((ThrownPotionRenderer *)((char *)v1 + 1252));
  mce::Mesh::~Mesh((ThrownPotionRenderer *)((char *)v1 + 1152));
  mce::Mesh::~Mesh((ThrownPotionRenderer *)((char *)v1 + 1052));
  mce::Mesh::~Mesh((ThrownPotionRenderer *)((char *)v1 + 952));
  mce::Mesh::~Mesh((ThrownPotionRenderer *)((char *)v1 + 852));
  mce::Mesh::~Mesh((ThrownPotionRenderer *)((char *)v1 + 752));
  mce::Mesh::~Mesh((ThrownPotionRenderer *)((char *)v1 + 652));
  mce::Mesh::~Mesh((ThrownPotionRenderer *)((char *)v1 + 552));
  mce::Mesh::~Mesh((ThrownPotionRenderer *)((char *)v1 + 452));
  mce::Mesh::~Mesh((ThrownPotionRenderer *)((char *)v1 + 352));
  mce::Mesh::~Mesh((ThrownPotionRenderer *)((char *)v1 + 252));
  return j_j_j__ZN18ItemSpriteRendererD2Ev(v1);
}


Potion *__fastcall ThrownPotionRenderer::render(ItemSpriteRenderer *a1, BaseEntityRenderContext *a2, int a3)
{
  Entity *v3; // r5@1
  int v4; // r9@1
  ItemSpriteRenderer *v6; // r11@1
  int v8; // r0@1
  Potion *result; // r0@1
  int v10; // r6@2
  int v11; // r7@2
  unsigned int *v12; // r0@4
  unsigned int v13; // r1@6
  unsigned int *v14; // r1@10
  unsigned int v15; // r0@12
  unsigned int *v16; // r4@16
  unsigned int v17; // r0@18
  unsigned int *v18; // r1@25
  unsigned int v19; // r0@27
  unsigned int *v20; // r4@31
  unsigned int v21; // r0@33
  mce::Mesh *v22; // r4@39
  int v27; // r4@42
  unsigned int *v28; // r1@43
  unsigned int *v29; // r5@49
  int v30; // [sp+4h] [bp-3Ch]@0
  float v31; // [sp+8h] [bp-38h]@0
  Potion *v32; // [sp+Ch] [bp-34h]@2
  int v33; // [sp+10h] [bp-30h]@2
  Potion *v34; // [sp+14h] [bp-2Ch]@1
  int v35; // [sp+18h] [bp-28h]@2

  v3 = *(Entity **)a3;
  v4 = *(_DWORD *)(a3 + 4);
  _R10 = *(_DWORD *)(a3 + 8);
  v6 = a1;
  _R8 = a2;
  v8 = ThrownPotion::getPotionId(*(ThrownPotion **)a3);
  Potion::getPotion((Potion *)&v34, v8);
  result = v34;
  if ( v34 )
    goto LABEL_58;
  Potion::getPotion((Potion *)&v32, 0);
  v34 = v32;
  v10 = v35;
  v11 = v33;
  if ( v33 != v35 )
  {
    if ( v33 )
    {
      v12 = (unsigned int *)(v33 + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v13 = __ldrex(v12);
        while ( __strex(v13 + 1, v12) );
        v10 = v35;
      }
      else
        ++*v12;
    }
    if ( v10 )
      v14 = (unsigned int *)(v10 + 4);
          v15 = __ldrex(v14);
        while ( __strex(v15 - 1, v14) );
        v15 = (*v14)--;
      if ( v15 == 1 )
        v16 = (unsigned int *)(v10 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 8))(v10);
        if ( &pthread_create )
        {
          __dmb();
          do
            v17 = __ldrex(v16);
          while ( __strex(v17 - 1, v16) );
        }
        else
          v17 = (*v16)--;
        if ( v17 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 12))(v10);
    v35 = v11;
    v11 = v33;
  }
  if ( v11 )
    v18 = (unsigned int *)(v11 + 4);
    if ( &pthread_create )
      __dmb();
      do
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
    else
      v19 = (*v18)--;
    if ( v19 == 1 )
      v20 = (unsigned int *)(v11 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 8))(v11);
          v21 = __ldrex(v20);
        while ( __strex(v21 - 1, v20) );
        v21 = (*v20)--;
      if ( v21 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 12))(v11);
LABEL_58:
    v22 = (ItemSpriteRenderer *)((char *)v6 + 100 * Potion::getMobEffectId(result) + 252);
    if ( !mce::Mesh::isValid(v22) )
      ItemSpriteRenderer::_buildQuad(v6, _R8, v3, v22);
    __asm
      VLDR            S0, [R10,#4]
      VLDR            S2, [R8,#4]
      VSTR            S0, [SP,#0x40+var_3C]
      VSTR            S2, [SP,#0x40+var_38]
    result = (Potion *)ItemSpriteRenderer::_renderQuad((int)v6, _R8, (int)v3, (int)v22, v4, v30, v31);
  v27 = v35;
  if ( v35 )
    v28 = (unsigned int *)(v35 + 4);
        result = (Potion *)__ldrex(v28);
      while ( __strex((unsigned int)result - 1, v28) );
      result = (Potion *)(*v28)--;
    if ( result == (Potion *)1 )
      v29 = (unsigned int *)(v27 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v27 + 8))(v27);
          result = (Potion *)__ldrex(v29);
        while ( __strex((unsigned int)result - 1, v29) );
        result = (Potion *)(*v29)--;
      if ( result == (Potion *)1 )
        result = (Potion *)(*(int (__fastcall **)(int))(*(_DWORD *)v27 + 12))(v27);
  return result;
}


int __fastcall ThrownPotionRenderer::getIcon(ThrownPotionRenderer *this, Entity *a2)
{
  int v2; // r4@1
  int (__fastcall *v3)(int, int, _DWORD, _DWORD); // r5@1
  int v4; // r0@1

  v2 = *((_DWORD *)this + 36);
  v3 = *(int (__fastcall **)(int, int, _DWORD, _DWORD))(*(_DWORD *)v2 + 248);
  v4 = ThrownPotion::getPotionId(a2);
  return v3(v2, v4, 0, 0);
}
