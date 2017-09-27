

__int64 __fastcall UIAnimClip::clone(UIAnimClip *this, int a2)
{
  UIAnimClip *v2; // r4@1
  int v3; // r6@1
  void *v4; // r5@1
  __int64 result; // r0@1

  v2 = this;
  v3 = a2;
  v4 = operator new(0x3Cu);
  UIAnim::UIAnim((int)v4, v3);
  *(_DWORD *)v4 = &off_26DFC34;
  result = *(_QWORD *)(v3 + 52);
  *(_QWORD *)((char *)v4 + 52) = result;
  *(_DWORD *)v2 = v4;
  return result;
}


void __fastcall UIAnimClip::~UIAnimClip(UIAnimClip *this)
{
  UIAnimClip::~UIAnimClip(this);
}


int __fastcall UIAnimClip::UIAnimClip(int a1, int a2, int a3, unsigned __int64 *a4)
{
  int v4; // r5@1
  int v5; // r6@1
  void *v11; // r0@1
  void *v13; // r0@2
  unsigned int *v15; // r2@4
  signed int v16; // r1@6
  unsigned int *v17; // r2@8
  signed int v18; // r1@10
  int v19; // [sp+8h] [bp-20h]@2
  int v20; // [sp+10h] [bp-18h]@1

  v4 = a3;
  v5 = a1;
  UIAnim::UIAnim(a1, 1, a3, a3, a4);
  *(_DWORD *)v5 = &off_26DFC34;
  *(_DWORD *)(v5 + 52) = 0;
  *(_DWORD *)(v5 + 56) = 0;
  sub_119C884((void **)&v20, "from");
  _R0 = UIResolvedDef::getAsFloat(v4, (int **)&v20, 1065353216);
  __asm
  {
    VMOV            S0, R0
    VSTR            S0, [R6,#0x34]
  }
  v11 = (void *)(v20 - 12);
  if ( (int *)(v20 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v20 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
    }
    else
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v11);
  sub_119C884((void **)&v19, "to");
  _R0 = UIResolvedDef::getAsFloat(v4, (int **)&v19, 1065353216);
    VSTR            S0, [R6,#0x38]
  v13 = (void *)(v19 - 12);
  if ( (int *)(v19 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v19 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v13);
  return v5;
}


signed int __fastcall UIAnimClip::tick(UIAnimClip *this, UIControl *a2, float a3)
{
  UIControl *v5; // r6@1
  char v6; // r0@1
  int v7; // r7@4
  SpriteComponent *v8; // r6@5
  float v14; // r0@13
  signed int result; // r0@13

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
  if ( UIControl::_hasComponent(v5, type_id<UIComponent,SpriteComponent>(void)::id[0]) == 1 )
    v8 = *(SpriteComponent **)(*((_DWORD *)v5 + 27) + 4 * UIControl::_getComponentIndex(v5, v7));
    if ( v8 )
    {
      __asm
      {
        VMOV            S0, R5
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
        sub_119C8E4();
      __asm { VMOV            R3, S16 }
      v14 = COERCE_FLOAT((*((int (__fastcall **)(_DWORD, _DWORD, _DWORD, _DWORD))_R4 + 6))((char *)_R4 + 12, *(_QWORD *)((char *)_R4 + 52), *(_QWORD *)((char *)_R4 + 52) >> 32, _R3));
      SpriteComponent::setClipRatio(v8, v14);
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


SpriteComponent *__fastcall UIAnimClip::_reset(UIAnimClip *this, UIControl *a2)
{
  UIAnimClip *v2; // r4@1
  UIControl *v3; // r5@1
  signed int v4; // r1@1
  char v5; // r0@3
  int v6; // r6@6
  SpriteComponent *result; // r0@6

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
  result = (SpriteComponent *)UIControl::_hasComponent(v3, type_id<UIComponent,SpriteComponent>(void)::id[0]);
  if ( result == (SpriteComponent *)1 )
    result = *(SpriteComponent **)(*((_DWORD *)v3 + 27) + 4 * UIControl::_getComponentIndex(v3, v6));
    if ( result )
      result = (SpriteComponent *)j_j_j__ZN15SpriteComponent12setClipRatioEf(result, *((float *)v2 + 13));
  return result;
}


void __fastcall UIAnimClip::~UIAnimClip(UIAnimClip *this)
{
  UIAnimClip *v1; // r5@1
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
