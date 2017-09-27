

int __fastcall UIAnimFlipbook::clone(UIAnimFlipbook *this, int a2)
{
  UIAnimFlipbook *v2; // r8@1
  int v3; // r6@1
  char *v4; // r5@1
  int v5; // r1@1
  int v6; // r0@1
  int v7; // r2@1
  int v8; // r3@1
  int v9; // r4@1
  int v10; // r6@1
  int v11; // r7@1
  int result; // r0@1

  v2 = this;
  v3 = a2;
  v4 = (char *)operator new(0x4Cu);
  UIAnim::UIAnim((int)v4, v3);
  *(_DWORD *)v4 = &off_26DFC84;
  v5 = (int)(v4 + 52);
  v6 = v3 + 52;
  v7 = *(_DWORD *)(v3 + 52);
  v8 = *(_DWORD *)(v3 + 56);
  v9 = *(_DWORD *)(v3 + 60);
  v10 = *(_DWORD *)(v3 + 64);
  v11 = *(_DWORD *)(v6 + 16);
  *(_DWORD *)v5 = v7;
  *(_DWORD *)(v5 + 4) = v8;
  *(_DWORD *)(v5 + 8) = v9;
  *(_DWORD *)(v5 + 12) = v10;
  *(_DWORD *)(v5 + 16) = v11;
  result = *(_WORD *)(v6 + 20);
  *((_WORD *)v4 + 36) = result;
  *(_DWORD *)v2 = v4;
  return result;
}


void __fastcall UIAnimFlipbook::~UIAnimFlipbook(UIAnimFlipbook *this)
{
  UIAnimFlipbook *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  void (*v6)(void); // r3@3
  unsigned int *v7; // r2@6
  signed int v8; // r1@8
  unsigned int *v9; // r2@10
  signed int v10; // r1@12

  v1 = this;
  *(_DWORD *)this = &off_26DFBE4;
  v2 = *((_DWORD *)this + 12);
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
      j_j_j_j_j__ZdlPv_9_1(v3);
  }
  v4 = *((_DWORD *)v1 + 11);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v9 = (unsigned int *)(v4 - 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v5);
  v6 = (void (*)(void))*((_DWORD *)v1 + 5);
  if ( v6 )
    v6();
  operator delete((void *)v1);
}


void __fastcall UIAnimFlipbook::~UIAnimFlipbook(UIAnimFlipbook *this)
{
  UIAnimFlipbook::~UIAnimFlipbook(this);
}


int __fastcall UIAnimFlipbook::_reset(UIAnimFlipbook *this, UIControl *a2)
{
  UIControl *v3; // r5@1
  signed int v4; // r1@1
  char v5; // r0@3
  int v6; // r6@6
  int result; // r0@6
  float v12; // [sp+0h] [bp-18h]@8
  int v13; // [sp+4h] [bp-14h]@8

  _R4 = this;
  v3 = a2;
  v4 = 0;
  if ( *((_WORD *)this + 17) != 0xFFFF )
    v4 = 1;
  *((_DWORD *)this + 7) = v4;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 13) = 0;
  *((_DWORD *)this + 14) = 0;
  v5 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,SpriteComponent>(void)::id;
  __dmb();
  if ( !(v5 & 1)
    && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,SpriteComponent>(void)::id) )
  {
    type_id<UIComponent,SpriteComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
    j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,SpriteComponent>(void)::id);
  }
  v6 = type_id<UIComponent,SpriteComponent>(void)::id[0];
  result = UIControl::_hasComponent(v3, type_id<UIComponent,SpriteComponent>(void)::id[0]);
  if ( result == 1 )
    result = *(_DWORD *)(*((_DWORD *)v3 + 27) + 4 * UIControl::_getComponentIndex(v3, v6));
    if ( result )
    {
      __asm
      {
        VLDR            S0, [R4,#0x38]
        VLDR            S2, [R4,#0x44]
        VMUL.F32        S0, S0, S2
        VSTR            S0, [SP,#0x18+var_18]
      }
      v13 = 0;
      result = SpriteComponent::setUV(result, (int)&v12);
    }
  return result;
}


int __fastcall UIAnimFlipbook::UIAnimFlipbook(int a1, int a2, int a3, unsigned __int64 *a4)
{
  int v4; // r5@1
  int v5; // r6@1
  int v6; // r12@1
  void *v12; // r0@1
  void *v13; // r0@2
  void *v15; // r0@3
  void *v16; // r0@4
  unsigned int *v18; // r2@6
  signed int v19; // r1@8
  unsigned int *v20; // r2@10
  signed int v21; // r1@12
  unsigned int *v22; // r2@14
  signed int v23; // r1@16
  unsigned int *v24; // r2@18
  signed int v25; // r1@20
  int v26; // [sp+8h] [bp-30h]@4
  int v27; // [sp+10h] [bp-28h]@3
  int v28; // [sp+18h] [bp-20h]@2
  int v29; // [sp+20h] [bp-18h]@1

  v4 = a3;
  v5 = a1;
  UIAnim::UIAnim(a1, 3, a3, a3, a4);
  v6 = v5 + 60;
  *(_DWORD *)v5 = &off_26DFC84;
  *(_DWORD *)(v5 + 52) = 0;
  *(_DWORD *)(v5 + 56) = 0;
  *(_DWORD *)v6 = 0;
  *(_DWORD *)(v6 + 4) = 1;
  *(_DWORD *)(v6 + 8) = 1065353216;
  *(_WORD *)(v5 + 72) = 0;
  sub_119C884((void **)&v29, "fps");
  _R0 = UIResolvedDef::getAsFloat(v4, (int **)&v29, 0);
  __asm
  {
    VMOV            S0, R0
    VSTR            S0, [R6,#0x3C]
  }
  v12 = (void *)(v29 - 12);
  if ( (int *)(v29 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v29 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
    }
    else
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v12);
  sub_119C884((void **)&v28, "frame_count");
  *(_DWORD *)(v5 + 64) = UIResolvedDef::getAsInt(v4, (int **)&v28, 1);
  v13 = (void *)(v28 - 12);
  if ( (int *)(v28 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v28 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v13);
  sub_119C884((void **)&v27, "frame_step");
  _R0 = UIResolvedDef::getAsFloat(v4, (int **)&v27, 1065353216);
    VSTR            S0, [R6,#0x44]
  v15 = (void *)(v27 - 12);
  if ( (int *)(v27 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v27 - 4);
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v15);
  sub_119C884((void **)&v26, "reversible");
  *(_BYTE *)(v5 + 73) = UIResolvedDef::getAsBool(v4, (int **)&v26, 0);
  v16 = (void *)(v26 - 12);
  if ( (int *)(v26 - 12) != &dword_28898C0 )
    v24 = (unsigned int *)(v26 - 4);
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v16);
  return v5;
}


signed int __fastcall UIAnimFlipbook::tick(UIAnimFlipbook *this, UIControl *a2, float a3)
{
  UIControl *v5; // r6@1
  char v6; // r0@1
  int v7; // r7@4
  int v8; // r0@5
  signed int result; // r0@11
  float v14; // [sp+4h] [bp-1Ch]@15
  int v15; // [sp+8h] [bp-18h]@15

  _R4 = this;
  _R5 = a3;
  v5 = a2;
  v6 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,SpriteComponent>(void)::id;
  __dmb();
  if ( !(v6 & 1)
    && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,SpriteComponent>(void)::id) )
  {
    type_id<UIComponent,SpriteComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
    j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,SpriteComponent>(void)::id);
  }
  v7 = type_id<UIComponent,SpriteComponent>(void)::id[0];
  if ( UIControl::_hasComponent(v5, type_id<UIComponent,SpriteComponent>(void)::id[0]) == 1
    && (v8 = *(_DWORD *)(*((_DWORD *)v5 + 27) + 4 * UIControl::_getComponentIndex(v5, v7))) != 0 )
    __asm
    {
      VLDR            S2, =0.1
      VMOV.F32        S0, #1.0
      VLDR            S8, [R4,#0x3C]
      VMOV            S4, R5
      VLDR            S6, [R4,#0x34]
      VCMPE.F32       S8, S2
      VMRS            APSR_nzcv, FPSCR
      VADD.F32        S4, S6, S4
    }
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      __asm { VMOVGT.F32      S2, S8 }
      VSTR            S4, [R4,#0x34]
      VDIV.F32        S2, S0, S2
      VCMPE.F32       S4, S2
    if ( _NF ^ _VF )
      __asm { VLDR            S0, [R4,#0x38] }
    else
      __asm
      {
        VSUB.F32        S2, S4, S2
        VSTR            S2, [R4,#0x34]
        VLDR            S2, [R4,#0x38]
        VADD.F32        S0, S2, S0
        VSTR            S0, [R4,#0x38]
        VLDR            S2, [R4,#0x40]
        VCVT.F32.S32    S2, S2
        VCMPE.F32       S0, S2
        VMRS            APSR_nzcv, FPSCR
      }
      if ( !(_NF ^ _VF) )
        __asm { VLDR            S0, =0.0 }
        *((_DWORD *)_R4 + 14) = 0;
        if ( *((_BYTE *)_R4 + 73) )
          *((_BYTE *)_R4 + 72) ^= 1u;
    v14 = 0.0;
    v15 = 0;
    __asm { VLDR            S2, [R4,#0x44] }
    if ( *((_BYTE *)_R4 + 72) )
        VMOVNE.F32      S4, #-1.0
        VLDRNE          S6, [R4,#0x40]
        VCVTNE.F32.S32  S6, S6
        VSUBNE.F32      S0, S4, S0
        VADDNE.F32      S0, S0, S6
      VMUL.F32        S0, S2, S0
      VSTR            S0, [SP,#0x20+var_1C]
    SpriteComponent::setUV(v8, (int)&v14);
    result = 1;
  else
    result = 0;
  return result;
}


const char *__fastcall UIAnimFlipbook::getInitialValueKey(UIAnimFlipbook *this)
{
  return "initial_uv";
}
