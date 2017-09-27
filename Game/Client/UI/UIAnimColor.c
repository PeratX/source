

signed int __fastcall UIAnimColor::tick(UIAnimColor *this, UIControl *a2, float a3)
{
  UIControl *v5; // r5@1
  char v6; // r0@1
  int v7; // r7@4
  SpriteComponent *v8; // r9@5
  int v17; // r0@16
  signed int result; // r0@16
  float v19; // [sp+0h] [bp-58h]@16
  int v20; // [sp+Ch] [bp-4Ch]@16

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
    v8 = *(SpriteComponent **)(*((_DWORD *)v5 + 27) + 4 * UIControl::_getComponentIndex(v5, v7));
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
        goto LABEL_25;
      __asm { VMOV            R6, S16 }
      _R8 = (*((int (__fastcall **)(_DWORD, _DWORD, _DWORD, _DWORD))_R4 + 6))(
              (char *)_R4 + 12,
              *((_DWORD *)_R4 + 13),
              *((_DWORD *)_R4 + 17),
              _R6);
      if ( !*((_DWORD *)_R4 + 5)
        || (_R10 = (*((int (__fastcall **)(_DWORD, _DWORD, _DWORD, _DWORD))_R4 + 6))(
                     (char *)_R4 + 12,
                     *((_DWORD *)_R4 + 14),
                     *((_DWORD *)_R4 + 18),
                     _R6),
            !*((_DWORD *)_R4 + 5))
        || (_R0 = (*((int (__fastcall **)(_DWORD, _DWORD, _DWORD, _DWORD))_R4 + 6))(
                    (char *)_R4 + 12,
                    *((_DWORD *)_R4 + 15),
                    *((_DWORD *)_R4 + 19),
                    _R6),
            !*((_DWORD *)_R4 + 5)) )
LABEL_25:
        sub_119C8E4();
        VMOV            S24, R0
        VMOV            S20, R8
        VMOV            S22, R10
      v17 = (*((int (__fastcall **)(_DWORD, _DWORD, _DWORD, _DWORD))_R4 + 6))(
              *((_DWORD *)_R4 + 16),
              *((_DWORD *)_R4 + 20),
        VSTR            S20, [SP,#0x58+var_58]
        VSTR            S22, [SP,#0x58+var_54]
        VSTR            S24, [SP,#0x58+var_50]
      v20 = v17;
      SpriteComponent::setColor(v8, (const Color *)&v19);
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


void __fastcall UIAnimColor::~UIAnimColor(UIAnimColor *this)
{
  UIAnimColor::~UIAnimColor(this);
}


void __fastcall UIAnimColor::~UIAnimColor(UIAnimColor *this)
{
  UIAnimColor *v1; // r5@1
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


int __fastcall UIAnimColor::clone(UIAnimColor *this, int a2)
{
  UIAnimColor *v2; // r7@1
  int v3; // r6@1
  _DWORD *v4; // r5@1
  int v5; // r1@1
  int v6; // r0@1
  int result; // r0@1
  int v8; // r2@1
  int v9; // r3@1
  int v10; // r4@1
  int v11; // r6@1
  int v12; // r1@1
  int v13; // r3@1
  int v14; // r4@1
  int v15; // r6@1

  v2 = this;
  v3 = a2;
  v4 = operator new(0x54u);
  UIAnim::UIAnim((int)v4, v3);
  *v4 = &off_26DFC5C;
  v5 = (int)(v4 + 13);
  v6 = v3 + 52;
  v8 = *(_DWORD *)(v3 + 52);
  v9 = *(_DWORD *)(v3 + 56);
  v10 = *(_DWORD *)(v3 + 60);
  v11 = *(_DWORD *)(v3 + 64);
  result = v6 + 16;
  *(_DWORD *)v5 = v8;
  *(_DWORD *)(v5 + 4) = v9;
  *(_DWORD *)(v5 + 8) = v10;
  *(_DWORD *)(v5 + 12) = v11;
  v12 = (int)(v4 + 17);
  v13 = *(_DWORD *)(result + 4);
  v14 = *(_DWORD *)(result + 8);
  v15 = *(_DWORD *)(result + 12);
  *(_DWORD *)v12 = *(_DWORD *)result;
  *(_DWORD *)(v12 + 4) = v13;
  *(_DWORD *)(v12 + 8) = v14;
  *(_DWORD *)(v12 + 12) = v15;
  *(_DWORD *)v2 = v4;
  return result;
}


int __fastcall UIAnimColor::UIAnimColor(int a1, int a2, int a3, unsigned __int64 *a4)
{
  int v4; // r7@1
  int v5; // r4@1
  int v6; // r12@1
  __int64 v7; // r2@1
  int v8; // r5@1
  int v9; // r12@1
  __int64 v10; // kr00_8@1
  int v11; // r0@1
  int v12; // r0@1
  int v13; // r2@1
  int v14; // r3@1
  int v15; // r5@1
  void *v16; // r0@1
  int v17; // r0@2
  int v18; // r2@2
  int v19; // r3@2
  int v20; // r7@2
  void *v21; // r0@2
  unsigned int *v23; // r2@4
  signed int v24; // r1@6
  unsigned int *v25; // r2@8
  signed int v26; // r1@10
  int v27; // [sp+Ch] [bp-44h]@2
  char v28; // [sp+10h] [bp-40h]@2
  int v29; // [sp+14h] [bp-3Ch]@2
  int v30; // [sp+18h] [bp-38h]@2
  int v31; // [sp+1Ch] [bp-34h]@2
  int v32; // [sp+24h] [bp-2Ch]@1
  char v33; // [sp+28h] [bp-28h]@1
  int v34; // [sp+2Ch] [bp-24h]@1
  int v35; // [sp+30h] [bp-20h]@1
  int v36; // [sp+34h] [bp-1Ch]@1

  v4 = a3;
  v5 = a1;
  UIAnim::UIAnim(a1, 2, a3, a3, a4);
  v6 = v5 + 52;
  *(_DWORD *)v5 = &off_26DFC5C;
  v7 = *(_QWORD *)&qword_283E614;
  v8 = unk_283E61C;
  *(_DWORD *)v6 = Color::WHITE;
  *(_QWORD *)(v6 + 4) = v7;
  *(_DWORD *)(v6 + 12) = v8;
  v9 = v5 + 68;
  v10 = *(_QWORD *)&qword_283E614;
  v11 = unk_283E61C;
  *(_DWORD *)v9 = Color::WHITE;
  *(_QWORD *)(v9 + 4) = v10;
  *(_DWORD *)(v5 + 80) = v11;
  sub_119C884((void **)&v32, "from");
  UIResolvedDef::getAsColor((int)&v33, v4, (int **)&v32, (int)&Color::WHITE);
  v12 = v5 + 52;
  v13 = v34;
  v14 = v35;
  v15 = v36;
  *(_DWORD *)v12 = *(_DWORD *)&v33;
  *(_DWORD *)(v12 + 4) = v13;
  *(_DWORD *)(v12 + 8) = v14;
  *(_DWORD *)(v12 + 12) = v15;
  v16 = (void *)(v32 - 12);
  if ( (int *)(v32 - 12) != &dword_28898C0 )
  {
    v23 = (unsigned int *)(v32 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
    }
    else
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v16);
  }
  sub_119C884((void **)&v27, "to");
  UIResolvedDef::getAsColor((int)&v28, v4, (int **)&v27, (int)&Color::WHITE);
  v17 = v5 + 68;
  v18 = v29;
  v19 = v30;
  v20 = v31;
  *(_DWORD *)v17 = *(_DWORD *)&v28;
  *(_DWORD *)(v17 + 4) = v18;
  *(_DWORD *)(v17 + 8) = v19;
  *(_DWORD *)(v17 + 12) = v20;
  v21 = (void *)(v27 - 12);
  if ( (int *)(v27 - 12) != &dword_28898C0 )
    v25 = (unsigned int *)(v27 - 4);
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v21);
  return v5;
}


SpriteComponent *__fastcall UIAnimColor::_reset(UIAnimColor *this, UIControl *a2)
{
  UIAnimColor *v2; // r4@1
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
      result = (SpriteComponent *)j_j_j__ZN15SpriteComponent8setColorERK5Color(result, (UIAnimColor *)((char *)v2 + 52));
  return result;
}
