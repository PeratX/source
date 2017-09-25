

void __fastcall DanceComponent::~DanceComponent(DanceComponent *this)
{
  DanceComponent::~DanceComponent(this);
}


LevelListener *__fastcall DanceComponent::~DanceComponent(DanceComponent *this)
{
  LevelListener *v1; // r4@1
  Level *v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_26F0E9C;
  v2 = (Level *)Entity::getLevel(*((Entity **)this + 1));
  Level::removeListener(v2, v1);
  return v1;
}


void __fastcall DanceComponent::~DanceComponent(DanceComponent *this)
{
  LevelListener *v1; // r4@1
  Level *v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_26F0E9C;
  v2 = (Level *)Entity::getLevel(*((Entity **)this + 1));
  Level::removeListener(v2, v1);
  j_j_j__ZdlPv_6((void *)v1);
}


LevelListener *__fastcall DanceComponent::DanceComponent(int a1, Entity *a2, int a3)
{
  LevelListener *v3; // r4@1
  Level *v4; // r0@1

  v3 = (LevelListener *)a1;
  *(_DWORD *)a1 = &off_26F0E9C;
  *(_DWORD *)(a1 + 4) = a2;
  *(_DWORD *)(a1 + 8) = a3;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 20) = 0;
  v4 = (Level *)Entity::getLevel(a2);
  Level::addListener(v4, v3);
  return v3;
}


Entity *__fastcall DanceComponent::tick(DanceComponent *this)
{
  Entity *result; // r0@1

  _R1 = this;
  result = (Entity *)*((_DWORD *)this + 1);
  __asm
  {
    VLDR            S2, [R1,#0xC]
    VLDR            S4, [R1,#0x10]
    VLDR            S8, [R0,#0x48]
    VLDR            S10, [R0,#0x4C]
    VSUB.F32        S2, S2, S8
    VLDR            S6, [R1,#0x14]
    VSUB.F32        S4, S4, S10
    VLDR            S12, [R0,#0x50]
    VLDR            S0, [R1,#8]
    VSUB.F32        S6, S6, S12
    VMUL.F32        S2, S2, S2
    VMUL.F32        S4, S4, S4
    VMUL.F32        S6, S6, S6
    VADD.F32        S2, S4, S2
    VADD.F32        S2, S2, S6
    VCMPE.F32       S2, S0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    result = (Entity *)j_j_j__ZN6Entity10setDancingEb(result, 0);
  return result;
}


Entity *__fastcall DanceComponent::levelSoundEvent(int a1, int a2, int a3)
{
  Entity *result; // r0@1
  Level *v10; // r0@4
  MinecraftEventing *v11; // r5@4
  int v12; // r0@4
  int v13; // r6@4
  int v14; // r7@4
  unsigned __int8 v15; // r3@4

  _R4 = a1;
  _R5 = a3;
  result = *(Entity **)(a1 + 4);
  __asm
  {
    VLDR            S0, [R5]
    VLDR            S2, [R5,#4]
    VLDR            S6, [R0,#0x48]
    VLDR            S8, [R0,#0x4C]
    VSUB.F32        S0, S0, S6
    VLDR            S4, [R5,#8]
    VSUB.F32        S2, S2, S8
    VLDR            S10, [R0,#0x50]
    VSUB.F32        S4, S4, S10
    VMUL.F32        S0, S0, S0
    VMUL.F32        S2, S2, S2
    VMUL.F32        S4, S4, S4
    VADD.F32        S0, S2, S0
    VLDR            S2, [R4,#8]
    VADD.F32        S0, S0, S4
    VCMPE.F32       S0, S2
    VMRS            APSR_nzcv, FPSCR
  }
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    if ( (unsigned __int8)(a2 - 90) > 0xBu )
    {
      if ( a2 == 102 )
        result = (Entity *)j_j_j__ZN6Entity10setDancingEb(result, 0);
    }
    else
      Entity::setDancing(result, 1);
      *(_DWORD *)(_R4 + 12) = *(_DWORD *)_R5;
      *(_DWORD *)(_R4 + 16) = *(_DWORD *)(_R5 + 4);
      *(_DWORD *)(_R4 + 20) = *(_DWORD *)(_R5 + 8);
      v10 = (Level *)Entity::getLevel(*(Entity **)(_R4 + 4));
      v11 = (MinecraftEventing *)Level::getEventing(v10);
      v12 = (*(int (**)(void))(**(_DWORD **)(_R4 + 4) + 488))();
      v13 = EntityClassTree::getEntityTypeIdLegacy(v12);
      v14 = Entity::getVariant(*(Entity **)(_R4 + 4));
      v15 = Entity::getColor(*(Entity **)(_R4 + 4));
      result = (Entity *)j_j_j__ZN17MinecraftEventing21fireEventEntityDancedEiih(v11, v13, v14, v15);
  return result;
}
