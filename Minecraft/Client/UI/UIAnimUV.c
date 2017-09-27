

signed int __fastcall UIAnimUV::tick(UIAnimUV *this, UIControl *a2, float a3)
{
  UIControl *v5; // r5@1
  char v6; // r0@1
  int v7; // r7@4
  int v8; // r8@5
  int v15; // r0@14
  signed int result; // r0@14
  float v17; // [sp+0h] [bp-38h]@14
  int v18; // [sp+4h] [bp-34h]@14

  _R4 = this;
  _R6 = a3;
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
  if ( UIControl::_hasComponent(v5, type_id<UIComponent,SpriteComponent>(void)::id[0]) == 1 )
    v8 = *(_DWORD *)(*((_DWORD *)v5 + 27) + 4 * UIControl::_getComponentIndex(v5, v7));
    if ( v8 )
    {
      __asm
      {
        VMOV            S0, R6
        VLDR            S2, [R4,#8]
        VMOV.F32        S18, #1.0
        VLDR            S16, =0.0
        VADD.F32        S0, S2, S0
        VLDR            S2, =0.01
        VSTR            S0, [R4,#8]
        VLDR            S4, [R4,#0x28]
        VCMPE.F32       S4, S2
        VMRS            APSR_nzcv, FPSCR
      }
      if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        __asm { VMOVGT.F32      S2, S4 }
        VDIV.F32        S0, S0, S2
        VCMPE.F32       S0, #0.0
        VCMPE.F32       S0, S18
        __asm { VMOVGT.F32      S16, S0 }
      __asm { VMRS            APSR_nzcv, FPSCR }
        __asm { VMOVGT.F32      S16, S18 }
      if ( !*((_DWORD *)_R4 + 5) )
        goto LABEL_23;
      __asm { VMOV            R6, S16 }
      _R0 = (*((int (__fastcall **)(_DWORD, _DWORD, _DWORD, _DWORD))_R4 + 6))(
              (char *)_R4 + 12,
              *((_DWORD *)_R4 + 13),
              *((_DWORD *)_R4 + 15),
              _R6);
LABEL_23:
        sub_119C8E4();
      __asm { VMOV            S20, R0 }
      v15 = (*((int (__fastcall **)(_DWORD, _DWORD, _DWORD, _DWORD))_R4 + 6))(
              *((_DWORD *)_R4 + 14),
              *((_DWORD *)_R4 + 16),
      __asm { VSTR            S20, [SP,#0x38+var_38] }
      v18 = v15;
      SpriteComponent::setUV(v8, (int)&v17);
      __asm { VCMPE.F32       S16, S18 }
      result = 0;
      if ( _NF ^ _VF )
        result = 1;
    }
    else
  else
    result = 0;
  return result;
}


void __fastcall UIAnimUV::~UIAnimUV(UIAnimUV *this)
{
  UIAnimUV::~UIAnimUV(this);
}


int __fastcall UIAnimUV::clone(UIAnimUV *this, int a2)
{
  UIAnimUV *v2; // r4@1
  int v3; // r5@1
  _DWORD *v4; // r6@1
  int result; // r0@1

  v2 = this;
  v3 = a2;
  v4 = operator new(0x44u);
  UIAnim::UIAnim((int)v4, v3);
  *v4 = &off_26DFCD4;
  v4[13] = *(_DWORD *)(v3 + 52);
  v4[14] = *(_DWORD *)(v3 + 56);
  v4[15] = *(_DWORD *)(v3 + 60);
  result = *(_DWORD *)(v3 + 64);
  v4[16] = result;
  *(_DWORD *)v2 = v4;
  return result;
}


void __fastcall UIAnimUV::~UIAnimUV(UIAnimUV *this)
{
  UIAnimUV *v1; // r5@1
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


int __fastcall UIAnimUV::UIAnimUV(int a1, int a2, int a3, unsigned __int64 *a4)
{
  int v4; // r5@1
  int v5; // r4@1
  void *v6; // r0@1
  void *v7; // r0@2
  unsigned int *v9; // r2@4
  signed int v10; // r1@6
  unsigned int *v11; // r2@8
  signed int v12; // r1@10
  int v13; // [sp+4h] [bp-44h]@2
  int v14; // [sp+8h] [bp-40h]@2
  int v15; // [sp+10h] [bp-38h]@2
  int v16; // [sp+14h] [bp-34h]@2
  int v17; // [sp+18h] [bp-30h]@2
  int v18; // [sp+1Ch] [bp-2Ch]@1
  int v19; // [sp+20h] [bp-28h]@1
  int v20; // [sp+28h] [bp-20h]@1
  int v21; // [sp+2Ch] [bp-1Ch]@1
  int v22; // [sp+30h] [bp-18h]@1

  v4 = a3;
  v5 = a1;
  UIAnim::UIAnim(a1, 6, a3, a3, a4);
  *(_DWORD *)v5 = &off_26DFCD4;
  *(_DWORD *)(v5 + 52) = 0;
  *(_DWORD *)(v5 + 56) = 0;
  *(_DWORD *)(v5 + 60) = 0;
  *(_DWORD *)(v5 + 64) = 0;
  sub_119C884((void **)&v20, "from");
  v18 = 0;
  v19 = 0;
  UIResolvedDef::getAsUV((int)&v21, v4, (int **)&v20, (int)&v18);
  *(_DWORD *)(v5 + 52) = v21;
  *(_DWORD *)(v5 + 56) = v22;
  v6 = (void *)(v20 - 12);
  if ( (int *)(v20 - 12) != &dword_28898C0 )
  {
    v9 = (unsigned int *)(v20 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
    }
    else
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v6);
  }
  sub_119C884((void **)&v15, "to");
  v13 = 0;
  v14 = 0;
  UIResolvedDef::getAsUV((int)&v16, v4, (int **)&v15, (int)&v13);
  *(_DWORD *)(v5 + 60) = v16;
  *(_DWORD *)(v5 + 64) = v17;
  v7 = (void *)(v15 - 12);
  if ( (int *)(v15 - 12) != &dword_28898C0 )
    v11 = (unsigned int *)(v15 - 4);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v7);
  return v5;
}


int __fastcall UIAnimUV::_reset(UIAnimUV *this, UIControl *a2)
{
  UIAnimUV *v2; // r4@1
  UIControl *v3; // r5@1
  signed int v4; // r1@1
  char v5; // r0@3
  int v6; // r6@6
  int result; // r0@6

  v2 = this;
  v3 = a2;
  v4 = 0;
  if ( *((_WORD *)this + 17) != 0xFFFF )
    v4 = 1;
  *((_DWORD *)this + 7) = v4;
  *((_DWORD *)this + 2) = 0;
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
      result = j_j_j__ZN15SpriteComponent5setUVERKN3glm6detail5tvec2IfEE(result, (int)v2 + 52);
  return result;
}
