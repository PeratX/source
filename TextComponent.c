

unsigned int __fastcall TextComponent::_getTextHash(int a1, int **a2, int a3, int a4)
{
  int v4; // r4@1
  unsigned int v6; // r5@1
  signed int v11; // r0@3
  unsigned int v12; // r0@5
  float v14; // [sp+0h] [bp-18h]@2
  float v15; // [sp+4h] [bp-14h]@5

  v4 = a4;
  _R6 = a3;
  v6 = sub_DA7754(*a2, *(*a2 - 3), -955291385);
  __asm
  {
    VLDR            S0, [R6]
    VCMPE.F32       S0, #0.0
    VSTR            S0, [SP,#0x18+var_18]
    VMRS            APSR_nzcv, FPSCR
  }
  if ( _ZF || !(unsigned __int16)sub_DA7754((int *)&v14, 4u, -955291385) )
    __asm
    {
      VLDR            S0, [R6,#4]
      VCMPE.F32       S0, #0.0
      VSTR            S0, [SP,#0x18+var_14]
      VMRS            APSR_nzcv, FPSCR
    }
    if ( _ZF )
      v12 = 0;
    else
      v12 = sub_DA7754((int *)&v15, 4u, -955291385);
    v11 = v12 != 0;
  else
    v11 = 1;
  if ( v4 )
    v6 ^= 1u;
  if ( v11 )
  return v6;
}


char *__fastcall TextComponent::getText(TextComponent *this)
{
  return (char *)this + 120;
}


const void **__fastcall TextComponent::reset(TextComponent *this)
{
  TextComponent *v1; // r4@1

  v1 = this;
  *((_BYTE *)this + 112) = 1;
  sub_DA78A4((void **)this + 29, (char *)&unk_257BC67, 0);
  return sub_DA8660((void **)v1 + 30, (char *)&unk_257BC67, 0);
}


int __fastcall TextComponent::update(TextComponent *this, UIMeasureStrategy *a2)
{
  UIMeasureStrategy *v2; // r6@1
  UIControl *v4; // r0@1
  UIControl *v5; // r0@2
  int *v7; // r0@2
  signed int v8; // r5@3
  unsigned int v9; // r0@5
  char v16; // r7@8
  Font *v18; // r0@13
  char v19; // r3@17
  int v21; // r7@17
  unsigned int v22; // r5@17
  bool v23; // r0@17
  __int64 v24; // r2@19
  signed int v25; // r0@24
  signed int v26; // r1@24
  signed int v27; // r0@28
  UIControl *v28; // r0@33
  __int64 v30; // r0@38
  void *v31; // r0@40
  void *v32; // r0@41
  void *v33; // r0@43
  unsigned int *v35; // r2@47
  signed int v36; // r1@49
  unsigned int *v37; // r2@55
  signed int v38; // r1@57
  unsigned int *v39; // r2@59
  signed int v40; // r1@61
  char v41; // [sp+8h] [bp-A0h]@0
  int v42; // [sp+14h] [bp-94h]@21
  int v43; // [sp+18h] [bp-90h]@23
  int v44; // [sp+1Ch] [bp-8Ch]@23
  void *ptr; // [sp+20h] [bp-88h]@38
  int v46; // [sp+2Ch] [bp-7Ch]@38
  char v47; // [sp+30h] [bp-78h]@21
  char v48; // [sp+38h] [bp-70h]@19
  float v49; // [sp+44h] [bp-64h]@8
  int v51; // [sp+4Ch] [bp-5Ch]@8
  int v52; // [sp+50h] [bp-58h]@8
  int v53; // [sp+54h] [bp-54h]@5
  int v54; // [sp+58h] [bp-50h]@2

  v2 = a2;
  _R4 = this;
  v4 = (UIControl *)UIComponent::getOwner(this);
  if ( UIControl::getVisible(v4) != 1 )
  {
    LOBYTE(_R4) = 0;
    return (unsigned __int8)_R4 & 1;
  }
  v5 = (UIControl *)UIComponent::getOwner(_R4);
  _R11 = UIControl::getSize(v5);
  TextComponent::_updateCachedText(_R4);
  v7 = sub_DA73B4(&v54, (int *)_R4 + 30);
  if ( TextComponent::_getTextHash((int)v7, (int **)v7, (int)_R11, (*((_BYTE *)_R4 + 80) & 2u) >> 1) != *((_DWORD *)_R4 + 24) )
    (*(void (__fastcall **)(int *, UIMeasureStrategy *, int *))(*(_DWORD *)v2 + 20))(&v53, v2, &v54);
    v9 = *((_DWORD *)_R4 + 16);
    if ( v9 > 3 )
    {
      __asm { VLDR            S20, =0.0 }
    }
    else
      _R0 = (char *)&unk_261097C + 4 * v9;
      __asm { VLDR            S20, [R0] }
    _R9 = *(_DWORD *)_R11;
    v16 = *((_BYTE *)_R4 + 80);
    __asm { VLDR            S22, [R4,#0x44] }
    v51 = *(_DWORD *)_R11;
    _R10 = *((_DWORD *)_R11 + 1);
    v52 = *((_DWORD *)_R11 + 1);
    TextComponent::_generateTextMaxSize((TextComponent *)&v49, _R4);
    __asm
      VLDR            S18, [SP,#0xA8+var_64]
      VLDR            S16, =1.1921e-7
      VCMPE.F32       S18, S16
      VMRS            APSR_nzcv, FPSCR
    if ( _NF ^ _VF )
      __asm
      {
        VLDR            S0, [SP,#0xA8+var_60]
        VCMPE.F32       S0, S16
        VMRS            APSR_nzcv, FPSCR
      }
      if ( _NF ^ _VF )
        LOBYTE(_R4) = 0;
LABEL_41:
        v32 = (void *)(v53 - 12);
        if ( (int *)(v53 - 12) != &dword_28898C0 )
        {
          v37 = (unsigned int *)(v53 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v38 = __ldrex(v37);
            while ( __strex(v38 - 1, v37) );
          }
          else
            v38 = (*v37)--;
          if ( v38 <= 0 )
            j_j_j_j_j__ZdlPv_9(v32);
        }
        v8 = 0;
        goto LABEL_43;
    v18 = (Font *)*((_DWORD *)_R4 + 4);
    *((_DWORD *)_R4 + 3) = v18;
    if ( *((_DWORD *)_R4 + 5) && Font::isMsdf(v18) == 1 && !Font::supportsString(*((_DWORD *)_R4 + 3), &v53) )
      *((_DWORD *)_R4 + 3) = *((_DWORD *)_R4 + 5);
    __asm { VMUL.F32        S0, S22, S20 }
    v19 = *((_BYTE *)_R4 + 80);
    __asm { VMOV            R1, S0 }
    v21 = v16 & 2;
    v22 = v19 & 0x10;
    v23 = v21;
    if ( v21 )
      v23 = 1;
    HIDWORD(v24) = v19 & 1;
    LODWORD(v24) = *((_DWORD *)_R4 + 18);
    TextMeasureData::TextMeasureData((TextMeasureData *)&v48, _R1, v24, v23, v22 >> 4, v41);
      LOBYTE(v21) = 1;
    CaretMeasureData::CaretMeasureData((CaretMeasureData *)&v47, *((_DWORD *)_R4 + 23), v21);
      VLDR            S0, [SP,#0xA8+var_60]
      VCVTR.S32.F32   S0, S0
      VCVTR.S32.F32   S2, S18
      VSTR            S0, [SP,#0xA8+var_A4]
      VSTR            S2, [SP,#0xA8+var_A8]
    (*(void (__fastcall **)(int *, UIMeasureStrategy *, _DWORD, int *))(*(_DWORD *)v2 + 8))(
      &v42,
      v2,
      *((_DWORD *)_R4 + 3),
      &v53);
    if ( TextComponent::_hasDefaultWidthSizing(_R4) != 1 || TextComponent::_hasDefaultHeightSizing(_R4) != 1 )
      v25 = TextComponent::_hasDefaultWidthSizing(_R4);
      __asm { VLDR            S0, [R11,#4] }
      v26 = 0;
        VMOV            S18, R10
      if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        v26 = 1;
      if ( (v25 & v26) == 1 )
        _R9 = v43;
        v51 = v43;
        __asm { VMOV            S20, R9 }
LABEL_32:
        if ( TextComponent::_hasMinSize(_R4) == 1 )
          v28 = (UIControl *)UIComponent::getOwner(_R4);
          _R0 = UIControl::getMinSize(v28);
          __asm
            VLDR            S2, [R0,#4]
            VLDR            S0, [R0]
            VCMPE.F32       S18, S2
            VMRS            APSR_nzcv, FPSCR
            VCMPE.F32       S20, S0
          if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
            __asm { VMOVGT.F32      S2, S18 }
            VMOV            R10, S2
            __asm { VMOVGT.F32      S0, S20 }
            VMOV            R9, S0
            VSTR            S0, [SP,#0xA8+var_5C]
            VSTR            S2, [SP,#0xA8+var_58]
        EntityInteraction::setInteractText((int *)_R4 + 25, &v42);
        *((_QWORD *)_R4 + 13) = *(_QWORD *)&_R9;
        LODWORD(v30) = (char *)_R4 + 132;
        std::vector<int,std::allocator<int>>::operator=(v30);
        *((_DWORD *)_R4 + 36) = v46;
        *((_DWORD *)_R4 + 24) = TextComponent::_getTextHash(
                                  *((_BYTE *)_R4 + 80) & 2,
                                  (int **)&v54,
                                  (int)&v51,
                                  (*((_BYTE *)_R4 + 80) & 2u) >> 1);
        LOBYTE(_R4) = TextComponent::_updateLayoutSize(_R4);
        if ( ptr )
          operator delete(ptr);
        v31 = (void *)(v42 - 12);
        if ( (int *)(v42 - 12) != &dword_28898C0 )
          v39 = (unsigned int *)(v42 - 4);
              v40 = __ldrex(v39);
            while ( __strex(v40 - 1, v39) );
            v40 = (*v39)--;
          if ( v40 <= 0 )
            j_j_j_j_j__ZdlPv_9(v31);
        goto LABEL_41;
      v27 = TextComponent::_hasDefaultHeightSizing(_R4);
      __asm { VMOV            S20, R9 }
      if ( v27 != 1 )
        goto LABEL_32;
        VLDR            S0, [R11]
      if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
      _R10 = v44;
      _R9 = v43;
      v51 = v43;
    __asm { VMOV            S18, R10 }
    v52 = _R10;
    goto LABEL_32;
  v8 = 1;
LABEL_43:
  v33 = (void *)(v54 - 12);
  if ( (int *)(v54 - 12) != &dword_28898C0 )
    v35 = (unsigned int *)(v54 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v36 = __ldrex(v35);
      while ( __strex(v36 - 1, v35) );
      v36 = (*v35)--;
    if ( v36 <= 0 )
      j_j_j_j_j__ZdlPv_9(v33);
  if ( v8 )
  return (unsigned __int8)_R4 & 1;
}


int __fastcall TextComponent::setLocalize(int result, int a2)
{
  unsigned int v2; // r2@1

  v2 = *(_BYTE *)(result + 80);
  if ( a2 != ((v2 >> 2) & 1) )
  {
    *(_BYTE *)(result + 80) = v2 & 0xFB | 4 * a2;
    *(_BYTE *)(result + 112) = 1;
  }
  return result;
}


unsigned int __fastcall TextComponent::getHideHyphen(TextComponent *this)
{
  return (*((_BYTE *)this + 80) & 0x10u) >> 4;
}


void __fastcall TextComponent::_getMeasuredText(int *a1, int a2, int a3)
{
  TextComponent::_getMeasuredText(a1, a2, a3);
}


int __fastcall TextComponent::setAlignment(int result, int a2)
{
  *(_DWORD *)(result + 76) = a2;
  return result;
}


int __fastcall TextComponent::setText(UIComponent *this, const void **a2)
{
  UIComponent *v2; // r4@1
  const void **v3; // r5@1
  _BYTE *v4; // r0@1
  const void **v5; // r6@1
  UIControl *v6; // r0@4
  int v7; // r0@4
  int result; // r0@6

  v2 = this;
  v3 = a2;
  v5 = (const void **)((char *)this + 84);
  v4 = (_BYTE *)*((_DWORD *)this + 21);
  if ( *((_DWORD *)v4 - 1) >= 0 )
  {
    sub_DA73C4(v5);
    v4 = *v5;
  }
  if ( *v4 == 35 )
    v6 = (UIControl *)UIComponent::getOwner(v2);
    v7 = UIControl::getPropertyBag(v6);
    UIPropertyBag::set<std::string>(v7, *(_DWORD *)(*((_DWORD *)v2 + 21) - 12), *((const char **)v2 + 21), v3);
  else
    EntityInteraction::setInteractText((int *)v5, (int *)v3);
  result = 1;
  *((_BYTE *)v2 + 112) = 1;
  return result;
}


void __fastcall TextComponent::render(UIComponent *a1, int a2)
{
  TextComponent::render(a1, a2);
}


int __fastcall TextComponent::setPrimaryFont(int result, Font *a2)
{
  *(_DWORD *)(result + 12) = a2;
  *(_DWORD *)(result + 16) = a2;
  return result;
}


void __fastcall TextComponent::calculateUpdatedText(TextComponent *this, int a2)
{
  int v2; // r5@1
  int *v3; // r4@1
  _BYTE *v4; // r0@1
  const void **v5; // r6@1
  UIControl *v6; // r0@5
  int v7; // r7@5
  const char *v8; // r6@5
  Json::Value *v9; // r7@5
  Json::Value *v10; // r6@7
  char *v11; // r1@8
  char *v12; // r0@13
  char *v13; // r1@15
  char *v14; // r0@17
  unsigned int *v15; // r2@19
  signed int v16; // r1@21
  unsigned int *v17; // r2@23
  signed int v18; // r1@25
  char *v19; // [sp+8h] [bp-30h]@5
  char *v20; // [sp+Ch] [bp-2Ch]@8
  char v21; // [sp+1Ch] [bp-1Ch]@8

  v2 = a2;
  v3 = (int *)this;
  v5 = (const void **)(a2 + 84);
  v4 = *(_BYTE **)(a2 + 84);
  if ( !*((_DWORD *)v4 - 3) )
    goto LABEL_36;
  if ( *((_DWORD *)v4 - 1) >= 0 )
  {
    sub_DA73C4(v5);
    v4 = *v5;
  }
  if ( *v4 == 35 )
    v6 = (UIControl *)UIComponent::getOwner((UIComponent *)v2);
    v7 = UIControl::getPropertyBag(v6);
    v8 = *(const char **)(v2 + 84);
    sub_DA7364((void **)&v19, (const char *)&unk_257BC67);
    v9 = (Json::Value *)(v7 + 8);
    if ( Json::Value::isNull(v9)
      || Json::Value::isObject(v9) != 1
      || (v10 = (Json::Value *)Json::Value::operator[]((int)v9, v8), Json::Value::isString(v10) != 1) )
    {
      v20 = v19;
      v11 = (char *)&unk_28898CC;
      v19 = (char *)&unk_28898CC;
    }
    else
      jsonValConversion<std::string>::as((int *)&v20, (int)&v21, (int)v10);
      v11 = v19;
    v12 = v11 - 12;
    if ( (int *)(v11 - 12) != &dword_28898C0 )
      v15 = (unsigned int *)(v11 - 4);
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
        j_j_j_j_j__ZdlPv_9(v12);
    if ( *(_BYTE *)(v2 + 80) & 4 )
      I18n::get(v3, (int **)&v20);
      v13 = v20;
      *v3 = (int)v20;
      v13 = (char *)&unk_28898CC;
      v20 = (char *)&unk_28898CC;
    v14 = v13 - 12;
    if ( (int *)(v13 - 12) != &dword_28898C0 )
      v17 = (unsigned int *)(v13 - 4);
          v18 = __ldrex(v17);
        while ( __strex(v18 - 1, v17) );
        v18 = (*v17)--;
      if ( v18 <= 0 )
        j_j_j_j_j__ZdlPv_9(v14);
  else
LABEL_36:
      I18n::get(v3, (int **)v5);
      sub_DA73B4(v3, (int *)v5);
}


signed int __fastcall TextComponent::_hasDefaultHeightSizing(TextComponent *this)
{
  int v1; // r4@1
  char v2; // r0@1
  int v3; // r5@4
  int v4; // r0@5
  signed int result; // r0@6

  v1 = UIComponent::getOwner(this);
  v2 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id;
  __dmb();
  if ( !(v2 & 1)
    && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id) )
  {
    type_id<UIComponent,LayoutComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
    j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id);
  }
  v3 = type_id<UIComponent,LayoutComponent>(void)::id[0];
  if ( UIControl::_hasComponent((UIControl *)v1, type_id<UIComponent,LayoutComponent>(void)::id[0]) == 1
    && (v4 = *(_DWORD *)(*(_DWORD *)(v1 + 108) + 4 * UIControl::_getComponentIndex((UIControl *)v1, v3))) != 0 )
    result = LayoutComponent::hasSizeAxisType(v4, 3, 0);
  else
    result = 0;
  return result;
}


int __fastcall TextComponent::setCaretPosition(int result, int a2)
{
  *(_DWORD *)(result + 92) = a2;
  return result;
}


unsigned int __fastcall TextComponent::getLocalize(TextComponent *this)
{
  return (*((_BYTE *)this + 80) & 4u) >> 2;
}


signed int __fastcall TextComponent::_updateLayoutSize(UIComponent *a1)
{
  UIComponent *v1; // r4@1
  int v2; // r5@1
  char v3; // r0@1
  int v4; // r6@4
  UIComponent *v5; // r5@5
  UIControl *v6; // r0@7
  char *v7; // r0@7
  float v8; // r3@7
  char *v9; // r6@7
  float v10; // r3@8
  signed int v11; // r7@9
  void *v12; // r7@11
  int v13; // r0@12
  void *v14; // r6@15
  int v15; // r0@16

  v1 = a1;
  v2 = UIComponent::getOwner(a1);
  v3 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id;
  __dmb();
  if ( !(v3 & 1)
    && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id) )
  {
    type_id<UIComponent,LayoutComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
    j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id);
  }
  v4 = type_id<UIComponent,LayoutComponent>(void)::id[0];
  if ( UIControl::_hasComponent((UIControl *)v2, type_id<UIComponent,LayoutComponent>(void)::id[0]) == 1 )
    v5 = *(UIComponent **)(*(_DWORD *)(v2 + 108) + 4 * UIControl::_getComponentIndex((UIControl *)v2, v4));
  else
    v5 = 0;
  v6 = (UIControl *)UIComponent::getOwner(v1);
  v7 = UIControl::getSize(v6);
  v9 = v7;
  if ( v5 )
    if ( mce::MathUtility::floatEqualsEpsilon(*(mce::MathUtility **)v7, *((float *)v1 + 26), 0.00000011921, v8) )
    {
      v11 = 0;
    }
    else
      v12 = LayoutComponent::getVariable(v5, 2);
      if ( v12 )
      {
        v13 = UIComponent::getOwner(v1);
        LayoutVariable::overrideRenderableLayoutRule((int)v12, v13, 2);
      }
      v11 = 1;
      LayoutComponent::layout((int)v5, (int)&unk_262C150, 1, 0);
    if ( !mce::MathUtility::floatEqualsEpsilon(*((mce::MathUtility **)v9 + 1), *((float *)v1 + 27), 0.00000011921, v10) )
      v14 = LayoutComponent::getVariable(v5, 3);
      if ( v14 )
        v15 = UIComponent::getOwner(v1);
        LayoutVariable::overrideRenderableLayoutRule((int)v14, v15, 3);
      LayoutComponent::layout((int)v5, (int)&unk_262C151, 1, 0);
    v11 = 0;
  return v11;
}


int __fastcall TextComponent::setColor(int result, const Color *a2)
{
  int v2; // r2@1
  int v3; // r3@1
  int v4; // r12@1
  int v5; // r1@1

  v2 = *(_DWORD *)a2;
  v3 = *((_DWORD *)a2 + 1);
  v4 = *((_DWORD *)a2 + 2);
  v5 = *((_DWORD *)a2 + 3);
  *(_DWORD *)(result + 28) = v2;
  *(_DWORD *)(result + 32) = v3;
  *(_DWORD *)(result + 36) = v4;
  *(_DWORD *)(result + 40) = v5;
  return result;
}


void __fastcall TextComponent::~TextComponent(TextComponent *this)
{
  TextComponent::~TextComponent(this);
}


int __fastcall TextComponent::_updateCachedText(TextComponent *this)
{
  TextComponent *v1; // r4@1
  UIControl *v2; // r0@1
  int v3; // r0@1
  I18n *v4; // r0@1
  int v5; // r1@3
  char *v6; // r5@4
  _DWORD *v7; // r1@4
  size_t v8; // r2@4
  int result; // r0@8
  _BYTE *v10; // r0@9
  UIControl *v11; // r0@13
  int v12; // r6@13
  const char *v13; // r5@13
  Json::Value *v14; // r6@13
  Json::Value *v15; // r5@15
  int **v16; // r5@17
  char *v17; // r0@19
  char *v18; // r0@20
  void *v19; // r0@23
  unsigned int *v20; // r2@26
  signed int v21; // r1@28
  unsigned int *v22; // r2@34
  signed int v23; // r1@36
  unsigned int *v24; // r2@38
  signed int v25; // r1@40
  unsigned int *v26; // r2@42
  signed int v27; // r1@44
  int v28; // [sp+0h] [bp-30h]@23
  char *v29; // [sp+8h] [bp-28h]@13
  char *v30; // [sp+Ch] [bp-24h]@16
  void *s1; // [sp+10h] [bp-20h]@4
  char v32; // [sp+14h] [bp-1Ch]@16

  v1 = this;
  v2 = (UIControl *)UIComponent::getOwner(this);
  v3 = UIControl::getPropertyBag(v2);
  v4 = (I18n *)PropertyBag::getChangeVersion((PropertyBag *)(v3 + 8));
  if ( v4 != *((I18n **)v1 + 32) )
  {
    *((_DWORD *)v1 + 32) = v4;
    v4 = (I18n *)1;
    *((_BYTE *)v1 + 112) = 1;
  }
  v5 = I18n::getCurrentLanguage(v4);
  if ( v5 )
    Localization::getFullLanguageCode((Localization *)&s1, v5);
    v6 = (char *)s1;
    v7 = (_DWORD *)*((_DWORD *)v1 + 31);
    v8 = *((_DWORD *)s1 - 3);
    if ( v8 != *(v7 - 3) || memcmp(s1, v7, v8) )
    {
      EntityInteraction::setInteractText((int *)v1 + 31, (int *)&s1);
      *((_BYTE *)v1 + 112) = 1;
      v6 = (char *)s1;
    }
    if ( (int *)(v6 - 12) != &dword_28898C0 )
      v20 = (unsigned int *)(v6 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v21 = __ldrex(v20);
        while ( __strex(v21 - 1, v20) );
      }
      else
        v21 = (*v20)--;
      if ( v21 <= 0 )
        j_j_j_j_j__ZdlPv_9(v6 - 12);
  result = *((_BYTE *)v1 + 112);
  if ( *((_BYTE *)v1 + 112) )
    v10 = (_BYTE *)*((_DWORD *)v1 + 21);
    if ( !*((_DWORD *)v10 - 3) )
      goto LABEL_58;
    if ( *((_DWORD *)v10 - 1) >= 0 )
      sub_DA73C4((const void **)v1 + 21);
      v10 = (_BYTE *)*((_DWORD *)v1 + 21);
    if ( *v10 == 35 )
      v11 = (UIControl *)UIComponent::getOwner(v1);
      v12 = UIControl::getPropertyBag(v11);
      v13 = (const char *)*((_DWORD *)v1 + 21);
      sub_DA7364((void **)&v29, (const char *)&unk_257BC67);
      v14 = (Json::Value *)(v12 + 8);
      if ( Json::Value::isNull(v14)
        || Json::Value::isObject(v14) != 1
        || (v15 = (Json::Value *)Json::Value::operator[]((int)v14, v13), Json::Value::isString(v15) != 1) )
        v30 = v29;
        v29 = (char *)&unk_28898CC;
        jsonValConversion<std::string>::as((int *)&v30, (int)&v32, (int)v15);
      v16 = (int **)((char *)v1 + 116);
      xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
        (int *)v1 + 29,
        (int *)&v30);
      v17 = v30 - 12;
      if ( (int *)(v30 - 12) != &dword_28898C0 )
        v24 = (unsigned int *)(v30 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v25 = __ldrex(v24);
          while ( __strex(v25 - 1, v24) );
        }
        else
          v25 = (*v24)--;
        if ( v25 <= 0 )
          j_j_j_j_j__ZdlPv_9(v17);
      v18 = v29 - 12;
      if ( (int *)(v29 - 12) != &dword_28898C0 )
        v26 = (unsigned int *)(v29 - 4);
            v27 = __ldrex(v26);
          while ( __strex(v27 - 1, v26) );
          v27 = (*v26)--;
        if ( v27 <= 0 )
          j_j_j_j_j__ZdlPv_9(v18);
    else
LABEL_58:
      EntityInteraction::setInteractText((int *)v1 + 29, (int *)v1 + 21);
    if ( *((_BYTE *)v1 + 80) & 4 )
      I18n::get(&v28, v16);
        (int *)v1 + 30,
        &v28);
      v19 = (void *)(v28 - 12);
      if ( (int *)(v28 - 12) != &dword_28898C0 )
        v22 = (unsigned int *)(v28 - 4);
            v23 = __ldrex(v22);
          while ( __strex(v23 - 1, v22) );
          v23 = (*v22)--;
        if ( v23 <= 0 )
          j_j_j_j_j__ZdlPv_9(v19);
      EntityInteraction::setInteractText((int *)v1 + 30, (int *)v16);
    result = 0;
    *((_BYTE *)v1 + 112) = 0;
  return result;
}


void __fastcall TextComponent::~TextComponent(TextComponent *this)
{
  TextComponent *v1; // r0@1

  v1 = TextComponent::~TextComponent(this);
  j_j_j__ZdlPv_3((void *)v1);
}


int __fastcall TextComponent::setLockedAlpha(int result, float a2)
{
  *(float *)(result + 44) = a2;
  return result;
}


int __fastcall TextComponent::setShouldRenderCaret(int result, bool a2)
{
  *(_DWORD *)(result + 88) = 0;
  *(_DWORD *)(result + 24) = 0;
  *(_BYTE *)(result + 80) = *(_BYTE *)(result + 80) & 0xF5 | 2 * a2 | 8;
  return result;
}


signed int __fastcall TextComponent::overridesLayoutAxisOffset(TextComponent *a1, int a2)
{
  signed int result; // r0@3

  if ( a2 == 3 )
  {
    result = TextComponent::_hasDefaultHeightSizing(a1);
  }
  else if ( a2 == 2 )
    result = TextComponent::_hasDefaultWidthSizing(a1);
  else
    result = 0;
  return result;
}


char *__fastcall TextComponent::_generateTextMaxSize(TextComponent *this, UIComponent *a2)
{
  TextComponent *v2; // r5@1
  TextComponent *v3; // r4@1
  UIControl *v4; // r0@1
  char *v5; // r0@1
  UIControl *v12; // r0@11
  char *result; // r0@22
  UIControl *v15; // r0@23

  v2 = a2;
  v3 = this;
  v4 = (UIControl *)UIComponent::getOwner(a2);
  v5 = UIControl::getSize(v4);
  _R6 = *(_DWORD *)v5;
  *(_DWORD *)v3 = *(_DWORD *)v5;
  _R7 = *((_DWORD *)v5 + 1);
  *((_DWORD *)v3 + 1) = _R7;
  if ( TextComponent::_hasDefaultWidthSizing(v2) != 1 || TextComponent::_hasDefaultHeightSizing(v2) != 1 )
  {
    __asm { VMOV            S16, R7 }
    if ( TextComponent::_hasDefaultWidthSizing(v2) != 1 )
      goto LABEL_33;
    __asm
    {
      VLDR            S0, =1.1921e-7
      VCMPE.F32       S16, S0
      VMRS            APSR_nzcv, FPSCR
    }
    if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
LABEL_33:
      __asm { VMOV            S20, R6 }
      if ( TextComponent::_hasDefaultHeightSizing(v2) == 1 )
      {
        __asm
        {
          VLDR            S0, =1.1921e-7
          VCMPE.F32       S20, S0
          VMRS            APSR_nzcv, FPSCR
        }
        if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
          __asm { VLDRGT          S16, =32767.0 }
          *((_DWORD *)v3 + 1) = 1191181824;
      }
    else
      __asm { VLDR            S20, =32767.0 }
      *(_DWORD *)v3 = 1191181824;
  }
  else
    __asm { VLDR            S16, =32767.0 }
    *(_DWORD *)v3 = 1191181824;
    *((_DWORD *)v3 + 1) = 1191181824;
    __asm { VMOV.F32        S20, S16 }
  if ( TextComponent::_hasMaxSize(v2) == 1 )
    v12 = (UIControl *)UIComponent::getOwner(v2);
    _R0 = UIControl::getMaxSize(v12);
      VLDR            S22, [R0]
      VLDR            S18, [R0,#4]
      VCMPE.F32       S22, S0
      __asm { VMOV.F32        S22, S20 }
      __asm
        VCMPE.F32       S20, S22
        VMRS            APSR_nzcv, FPSCR
      if ( _NF ^ _VF )
        __asm { VMOVLT.F32      S22, S20 }
      __asm { VSTR            S22, [R4] }
      VCMPE.F32       S18, S0
      __asm { VMOV.F32        S18, S16 }
        VCMPE.F32       S16, S18
        __asm { VMOVLT.F32      S18, S16 }
      __asm { VSTR            S18, [R4,#4] }
      VMOV.F32        S18, S16
      VMOV.F32        S22, S20
  result = (char *)TextComponent::_hasMinSize(v2);
  if ( result == (char *)1 )
    v15 = (UIControl *)UIComponent::getOwner(v2);
    result = UIControl::getMinSize(v15);
      VLDR            S2, =1.1921e-7
      VLDR            S4, [R0]
      VLDR            S0, [R0,#4]
      VCMPE.F32       S4, S2
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        VCMPE.F32       S22, S4
      if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        __asm { VMOVGT.F32      S4, S22 }
      __asm { VSTR            S4, [R4] }
      VCMPE.F32       S0, S2
        VCMPE.F32       S18, S0
        __asm { VMOVGT.F32      S0, S18 }
      __asm { VSTR            S0, [R4,#4] }
  return result;
}


void __fastcall TextComponent::_getMeasuredText(int *a1, int a2, int a3)
{
  int *v3; // r10@1
  int v5; // r6@1
  UIControl *v6; // r0@1
  UIControl *v7; // r0@2
  float v8; // r3@2
  char *v14; // r1@4
  signed int v16; // r0@3
  float v17; // r3@3
  unsigned int v18; // r0@8
  __int64 v20; // r2@11
  int v22; // r0@11
  int v23; // r2@11
  void *v24; // r0@13
  void *v25; // r0@14
  char *v26; // r0@16
  unsigned int *v27; // r2@18
  signed int v28; // r1@20
  unsigned int *v29; // r2@26
  signed int v30; // r1@28
  unsigned int *v31; // r2@30
  signed int v32; // r1@32
  char v33; // [sp+8h] [bp-68h]@0
  int v34; // [sp+14h] [bp-5Ch]@11
  void *ptr; // [sp+20h] [bp-50h]@11
  char v36; // [sp+30h] [bp-40h]@11
  char v37; // [sp+38h] [bp-38h]@11
  int v38; // [sp+44h] [bp-2Ch]@8
  char *v39; // [sp+48h] [bp-28h]@1

  v3 = a1;
  _R5 = a2;
  v5 = a3;
  sub_DA73B4((int *)&v39, (int *)&Util::EMPTY_STRING);
  v6 = (UIControl *)UIComponent::getOwner((UIComponent *)_R5);
  if ( UIControl::getVisible(v6) == 1 )
  {
    v7 = (UIControl *)UIComponent::getOwner((UIComponent *)_R5);
    _R7 = UIControl::getSize(v7);
    __asm
    {
      VLDR            S0, [R7]
      VLDR            S2, [R7,#4]
      VLDR            S4, =1.1921e-7
      VMUL.F32        S2, S2, S0
      VABS.F32        S2, S2
      VCMPE.F32       S2, S4
      VMRS            APSR_nzcv, FPSCR
    }
    if ( _NF ^ _VF )
      sub_DA73B4(v3, (int *)&Util::EMPTY_STRING);
      v14 = v39;
      goto LABEL_16;
    __asm { VMOV            R0, S0 }
    v16 = mce::MathUtility::floatEqualsEpsilon(_R0, *(float *)(_R5 + 104), 0.00000011921, v8);
    if ( v16 == 1
      && mce::MathUtility::floatEqualsEpsilon(
           *((mce::MathUtility **)_R7 + 1),
           *(float *)(_R5 + 108),
           0.00000011921,
           v17) )
      EntityInteraction::setInteractText((int *)&v39, (int *)(_R5 + 100));
    else
      sub_DA73B4(&v38, (int *)(_R5 + 120));
      v18 = *(_DWORD *)(_R5 + 64);
      if ( v18 > 3 )
      {
        __asm { VLDR            S0, =0.0 }
      }
      else
        _R0 = (char *)&unk_261097C + 4 * v18;
        __asm { VLDR            S0, [R0] }
      __asm
        VLDR            S2, [R5,#0x44]
        VMUL.F32        S0, S2, S0
      LODWORD(v20) = *(_DWORD *)(_R5 + 72);
      __asm { VMOV            R1, S0 }
      HIDWORD(v20) = *(_BYTE *)(_R5 + 80) & 1;
      TextMeasureData::TextMeasureData(
        (TextMeasureData *)&v37,
        _R1,
        v20,
        (unsigned __int8)(*(_BYTE *)(_R5 + 80) & 2) >> 1,
        (unsigned __int8)(*(_BYTE *)(_R5 + 80) & 0x10) >> 4,
        v33);
      CaretMeasureData::CaretMeasureData(
        (CaretMeasureData *)&v36,
        *(_DWORD *)(_R5 + 92),
        (unsigned __int8)(*(_BYTE *)(_R5 + 80) & 2) >> 1);
      v22 = (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 112))(v5);
        VLDR            S0, [R7]
        VLDR            S2, [R7,#4]
      v23 = *(_DWORD *)(_R5 + 12);
        VCVTR.S32.F32   S2, S2
        VCVTR.S32.F32   S0, S0
        VSTR            S2, [SP,#0x70+var_6C]
        VSTR            S0, [SP,#0x70+var_70]
      (*(void (__fastcall **)(int *))(*(_DWORD *)v22 + 8))(&v34);
      EntityInteraction::setInteractText((int *)&v39, &v34);
      *(_DWORD *)(_R5 + 96) = 0;
      if ( ptr )
        operator delete(ptr);
      v24 = (void *)(v34 - 12);
      if ( (int *)(v34 - 12) != &dword_28898C0 )
        v29 = (unsigned int *)(v34 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v30 = __ldrex(v29);
          while ( __strex(v30 - 1, v29) );
        }
        else
          v30 = (*v29)--;
        if ( v30 <= 0 )
          j_j_j_j_j__ZdlPv_9(v24);
      v25 = (void *)(v38 - 12);
      if ( (int *)(v38 - 12) != &dword_28898C0 )
        v31 = (unsigned int *)(v38 - 4);
            v32 = __ldrex(v31);
          while ( __strex(v32 - 1, v31) );
          v32 = (*v31)--;
        if ( v32 <= 0 )
          j_j_j_j_j__ZdlPv_9(v25);
  }
  *v3 = (int)v39;
  v14 = (char *)&unk_28898CC;
  v39 = (char *)&unk_28898CC;
LABEL_16:
  v26 = v14 - 12;
  if ( (int *)(v14 - 12) != &dword_28898C0 )
    v27 = (unsigned int *)(v14 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
      v28 = (*v27)--;
    if ( v28 <= 0 )
      j_j_j_j_j__ZdlPv_9(v26);
}


char *__fastcall TextComponent::getLiteralText(TextComponent *this)
{
  return (char *)this + 84;
}


int __fastcall TextComponent::setBackupFont(int result, Font *a2)
{
  *(_DWORD *)(result + 20) = a2;
  return result;
}


TextComponent *__fastcall TextComponent::~TextComponent(TextComponent *this)
{
  TextComponent *v1; // r5@1
  void *v2; // r0@1
  int v3; // r1@3
  void *v4; // r0@3
  int v5; // r1@4
  void *v6; // r0@4
  int v7; // r1@5
  void *v8; // r0@5
  int v9; // r1@6
  void *v10; // r0@6
  int v11; // r1@7
  void *v12; // r0@7
  unsigned int *v14; // r2@9
  signed int v15; // r1@11
  unsigned int *v16; // r2@13
  signed int v17; // r1@15
  unsigned int *v18; // r2@17
  signed int v19; // r1@19
  unsigned int *v20; // r2@21
  signed int v21; // r1@23
  unsigned int *v22; // r2@25
  signed int v23; // r1@27

  v1 = this;
  *(_DWORD *)this = &off_26D6EB4;
  v2 = (void *)*((_DWORD *)this + 33);
  if ( v2 )
    operator delete(v2);
  v3 = *((_DWORD *)v1 + 31);
  v4 = (void *)(v3 - 12);
  if ( (int *)(v3 - 12) != &dword_28898C0 )
  {
    v14 = (unsigned int *)(v3 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
    }
    else
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j_j__ZdlPv_9(v4);
  }
  v5 = *((_DWORD *)v1 + 30);
  v6 = (void *)(v5 - 12);
  if ( (int *)(v5 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v5 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j_j__ZdlPv_9(v6);
  v7 = *((_DWORD *)v1 + 29);
  v8 = (void *)(v7 - 12);
  if ( (int *)(v7 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v7 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j_j__ZdlPv_9(v8);
  v9 = *((_DWORD *)v1 + 25);
  v10 = (void *)(v9 - 12);
  if ( (int *)(v9 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v9 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j_j__ZdlPv_9(v10);
  v11 = *((_DWORD *)v1 + 21);
  v12 = (void *)(v11 - 12);
  if ( (int *)(v11 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v11 - 4);
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j_j__ZdlPv_9(v12);
  RenderableComponent::~RenderableComponent(v1);
  return v1;
}


int __fastcall TextComponent::TextComponent(RenderableComponent *a1, UIControl *a2)
{
  int result; // r0@1
  __int64 v3; // r2@1

  result = RenderableComponent::RenderableComponent(a1, a2);
  *(_DWORD *)result = &off_26D6EB4;
  LODWORD(v3) = &unk_28898CC;
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 28) = 1065353216;
  *(_DWORD *)(result + 32) = 1065353216;
  *(_DWORD *)(result + 36) = 1065353216;
  *(_DWORD *)(result + 40) = 1065353216;
  *(_DWORD *)(result + 44) = 1065353216;
  *(_DWORD *)(result + 48) = 1065353216;
  *(_DWORD *)(result + 52) = 1065353216;
  *(_DWORD *)(result + 56) = 1065353216;
  *(_DWORD *)(result + 60) = 1065353216;
  *(_DWORD *)(result + 64) = 1;
  *(_DWORD *)(result + 68) = 1065353216;
  *(_DWORD *)(result + 72) = 0;
  *(_DWORD *)(result + 76) = 0;
  *(_BYTE *)(result + 80) = *(_BYTE *)(result + 80) & 0xE0 | 4;
  HIDWORD(v3) = -1;
  *(_DWORD *)(result + 84) = &unk_28898CC;
  *(_DWORD *)(result + 88) = 0;
  *(_DWORD *)(result + 92) = -1;
  *(_DWORD *)(result + 96) = 0;
  *(_DWORD *)(result + 100) = &unk_28898CC;
  *(_DWORD *)(result + 104) = 0;
  *(_DWORD *)(result + 108) = 0;
  *(_BYTE *)(result + 112) = 1;
  *(_DWORD *)(result + 116) = &unk_28898CC;
  *(_DWORD *)(result + 120) = &unk_28898CC;
  *(_QWORD *)(result + 124) = v3;
  *(_DWORD *)(result + 132) = 0;
  *(_DWORD *)(result + 136) = 0;
  *(_DWORD *)(result + 140) = 0;
  *(_DWORD *)(result + 144) = 0;
  return result;
}


void __fastcall TextComponent::clone(TextComponent *this, UIControl *a2, UIControl *a3)
{
  TextComponent *v3; // ST00_4@1
  UIControl *v4; // r5@1
  UIControl *v5; // r6@1
  void *v6; // r4@1
  char v7; // r12@1
  int v8; // r7@1
  int v9; // lr@1
  __int64 v10; // r2@1
  __int64 v11; // r2@1
  int v12; // r5@1

  v3 = this;
  v4 = a3;
  v5 = a2;
  v6 = operator new(0x94u);
  RenderableComponent::RenderableComponent((RenderableComponent *)v6, v4);
  *(_DWORD *)v6 = &off_26D6EB4;
  *((_DWORD *)v6 + 5) = 0;
  *((_DWORD *)v6 + 6) = 0;
  *((_DWORD *)v6 + 3) = 0;
  *((_DWORD *)v6 + 4) = 0;
  *((_DWORD *)v6 + 7) = 1065353216;
  *((_DWORD *)v6 + 8) = 1065353216;
  *((_DWORD *)v6 + 9) = 1065353216;
  *((_DWORD *)v6 + 10) = 1065353216;
  *((_DWORD *)v6 + 17) = 1065353216;
  *((_DWORD *)v6 + 18) = 0;
  v7 = *((_BYTE *)v6 + 80);
  *((_DWORD *)v6 + 21) = &unk_28898CC;
  *((_DWORD *)v6 + 22) = 0;
  *((_DWORD *)v6 + 23) = -1;
  *((_DWORD *)v6 + 24) = 0;
  *((_DWORD *)v6 + 25) = &unk_28898CC;
  *((_DWORD *)v6 + 26) = 0;
  *((_DWORD *)v6 + 27) = 0;
  *((_BYTE *)v6 + 112) = 1;
  *((_DWORD *)v6 + 29) = &unk_28898CC;
  *((_DWORD *)v6 + 30) = &unk_28898CC;
  *((_DWORD *)v6 + 31) = &unk_28898CC;
  v8 = (int)v6 + 124;
  v9 = (int)v6 + 48;
  *(_DWORD *)(v8 + 4) = -1;
  *(_DWORD *)(v8 + 8) = 0;
  *(_DWORD *)(v8 + 12) = 0;
  *(_DWORD *)(v8 + 16) = 0;
  *(_DWORD *)(v8 + 20) = 0;
  *((_DWORD *)v6 + 3) = *((_DWORD *)v5 + 3);
  *((_DWORD *)v6 + 4) = *((_DWORD *)v5 + 4);
  *((_DWORD *)v6 + 5) = *((_DWORD *)v5 + 5);
  *((_DWORD *)v6 + 6) = *((_DWORD *)v5 + 6);
  *(_DWORD *)(v8 - 80) = *((_DWORD *)v5 + 11);
  v10 = *(_QWORD *)((char *)v5 + 28);
  *(_QWORD *)((char *)v6 + 36) = *(_QWORD *)((char *)v5 + 36);
  *(_QWORD *)((char *)v6 + 28) = v10;
  v11 = *(_QWORD *)((char *)v5 + 52);
  v12 = *((_DWORD *)v5 + 15);
  *(_DWORD *)v9 = *((_DWORD *)v5 + 12);
  *(_QWORD *)(v9 + 4) = v11;
  *(_DWORD *)(v9 + 12) = v12;
  *(_DWORD *)(v8 - 60) = *((_DWORD *)v5 + 16);
  *(_DWORD *)(v8 - 48) = *((_DWORD *)v5 + 19);
  *((_BYTE *)v6 + 80) = v7 & 0xE0 | *((_BYTE *)v5 + 80) & 1 | *((_BYTE *)v5 + 80) & 0x10 | *((_BYTE *)v5 + 80) & 2 | *((_BYTE *)v5 + 80) & 0xC;
  EntityInteraction::setInteractText((int *)v6 + 21, (int *)v5 + 21);
  *((_DWORD *)v6 + 22) = *((_DWORD *)v5 + 22);
  *((_DWORD *)v6 + 23) = *((_DWORD *)v5 + 23);
  *((_DWORD *)v6 + 17) = *((_DWORD *)v5 + 17);
  *((_DWORD *)v6 + 18) = *((_DWORD *)v5 + 18);
  sub_DA78A4((void **)v6 + 25, (char *)&unk_257BC67, 0);
  sub_DA78A4((void **)v6 + 29, (char *)&unk_257BC67, 0);
  sub_DA78A4((void **)v6 + 30, (char *)&unk_257BC67, 0);
  sub_DA78A4((void **)v6 + 31, (char *)&unk_257BC67, 0);
  *((_DWORD *)v6 + 32) = -1;
  *(_DWORD *)v3 = v6;
}


char *__fastcall TextComponent::getColor(TextComponent *this)
{
  return (char *)this + 28;
}


int __fastcall TextComponent::setFontSize(int result, int a2)
{
  *(_DWORD *)(result + 64) = a2;
  return result;
}


int __fastcall TextComponent::updateCaretBlink(int result, float _R1)
{
  __asm
  {
    VMOV            S0, R1
    VLDR            S2, [R0,#0x58]
    VADD.F32        S0, S2, S0
    VLDR            S2, =0.3
    VCMPE.F32       S0, S2
    VSTR            S0, [R0,#0x58]
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    *(_BYTE *)(result + 80) ^= 8u;
    *(_DWORD *)(result + 88) = 0;
  return result;
}


int __fastcall TextComponent::getFontScale(TextComponent *this)
{
  unsigned int v1; // r1@1
  int result; // r0@4

  v1 = *((_DWORD *)this + 16);
  if ( v1 > 3 )
  {
    __asm { VLDR            S0, =0.0 }
  }
  else
    _R1 = (char *)&unk_261097C + 4 * v1;
    __asm { VLDR            S0, [R1] }
  __asm
    VLDR            S2, [R0,#0x44]
    VMUL.F32        S0, S2, S0
    VMOV            R0, S0
  return result;
}


int __fastcall TextComponent::_hasMinSize(TextComponent *this)
{
  int v1; // r4@1
  char v2; // r0@1
  int v3; // r5@4
  LayoutComponent *v4; // r0@5
  int result; // r0@6

  v1 = UIComponent::getOwner(this);
  v2 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id;
  __dmb();
  if ( !(v2 & 1)
    && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id) )
  {
    type_id<UIComponent,LayoutComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
    j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id);
  }
  v3 = type_id<UIComponent,LayoutComponent>(void)::id[0];
  if ( UIControl::_hasComponent((UIControl *)v1, type_id<UIComponent,LayoutComponent>(void)::id[0]) == 1
    && (v4 = *(LayoutComponent **)(*(_DWORD *)(v1 + 108) + 4 * UIControl::_getComponentIndex((UIControl *)v1, v3))) != 0 )
    result = LayoutComponent::hasMinSize(v4);
  else
    result = 0;
  return result;
}


int __fastcall TextComponent::setFontScaleFactor(int result, float a2)
{
  *(float *)(result + 68) = a2;
  return result;
}


void __fastcall TextComponent::calculateUpdatedText(TextComponent *this, int a2)
{
  TextComponent::calculateUpdatedText(this, a2);
}


int __fastcall TextComponent::getLayoutAxisOffsetOverride(int _R0, int a2)
{
  int result; // r0@5

  if ( a2 == 3 )
  {
    __asm
    {
      VLDR            S0, [R0,#0x6C]
      VMOV            R0, S0
    }
  }
  else
    if ( a2 == 2 )
      __asm { VLDREQ          S0, [R0,#0x68] }
    else
      __asm { VLDRNE          S0, =0.0 }
    __asm { VMOV            R0, S0 }
  return result;
}


char *__fastcall TextComponent::getLockedColor(TextComponent *this)
{
  return (char *)this + 48;
}


int __fastcall TextComponent::getShadow(TextComponent *this)
{
  return *((_BYTE *)this + 80) & 1;
}


int __fastcall TextComponent::setHideHyphen(int result, bool a2)
{
  *(_BYTE *)(result + 80) = *(_BYTE *)(result + 80) & 0xEF | 16 * a2;
  return result;
}


void __fastcall TextComponent::render(UIComponent *a1, int a2)
{
  int v2; // r4@1
  UIControl *v4; // r0@1
  int v5; // r0@2
  int v6; // r1@4 OVERLAPPED
  int v7; // r2@4
  int v8; // r6@5
  unsigned int v14; // r0@11
  __int64 v16; // r2@14
  int v18; // r6@16
  void (__fastcall *v19)(int, int, char *, int *); // r7@16
  int v20; // ST08_4@16
  void *v21; // r0@16
  unsigned int *v22; // r2@18
  signed int v23; // r1@20
  char v24; // [sp+8h] [bp-60h]@0
  char v25; // [sp+14h] [bp-54h]@16
  char v26; // [sp+24h] [bp-44h]@16
  char v27; // [sp+2Ch] [bp-3Ch]@14
  int v28; // [sp+38h] [bp-30h]@2

  v2 = a2;
  _R5 = a1;
  v4 = (UIControl *)UIComponent::getOwner(a1);
  if ( UIControl::getVisible(v4) == 1 )
  {
    TextComponent::_getMeasuredText(&v28, (int)_R5, v2);
    v5 = *((_DWORD *)_R5 + 23);
    if ( v5 )
    {
      if ( v5 >= 1 && (*(_QWORD *)&v6 = *(_QWORD *)((char *)_R5 + 132), v5 <= (v7 - v6) >> 2) )
        v8 = *(_DWORD *)(v6 + 4 * v5 - 4) + v5;
      else
        v8 = Util::utf8len(&v28, 0);
    }
    else
      v8 = 0;
    if ( UIComponent::isLocked(_R5) == 1 )
      __asm { VLDR            S16, [R5,#0x2C] }
      _R0 = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
      __asm { VMOV            S16, R0 }
    v14 = *((_DWORD *)_R5 + 16);
    if ( v14 > 3 )
      __asm { VLDR            S0, =0.0 }
      _R0 = (char *)&unk_261097C + 4 * v14;
      __asm { VLDR            S0, [R0] }
    __asm
      VLDR            S2, [R5,#0x44]
      VMUL.F32        S0, S2, S0
    LODWORD(v16) = *((_DWORD *)_R5 + 18);
    __asm { VMOV            R1, S0 }
    HIDWORD(v16) = *((_BYTE *)_R5 + 80) & 1;
    TextMeasureData::TextMeasureData(
      (TextMeasureData *)&v27,
      _R1,
      v16,
      (unsigned __int8)(*((_BYTE *)_R5 + 80) & 2) >> 1,
      (unsigned __int8)(*((_BYTE *)_R5 + 80) & 0x10) >> 4,
      v24);
    if ( !(*((_BYTE *)_R5 + 80) & 8) )
      v8 = -1;
    CaretMeasureData::CaretMeasureData((CaretMeasureData *)&v26, v8, (unsigned __int8)(*((_BYTE *)_R5 + 80) & 2) >> 1);
    v18 = *((_DWORD *)_R5 + 3);
    v19 = *(void (__fastcall **)(int, int, char *, int *))(*(_DWORD *)v2 + 24);
    TextComponent::_getParentArea((RectangleArea *)&v25, (int)_R5, v2);
    v20 = *((_DWORD *)_R5 + 19);
    __asm { VSTR            S16, [SP,#0x68+var_64] }
    v19(v2, v18, &v25, &v28);
    v21 = (void *)(v28 - 12);
    if ( (int *)(v28 - 12) != &dword_28898C0 )
      v22 = (unsigned int *)(v28 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v23 = __ldrex(v22);
        while ( __strex(v23 - 1, v22) );
      }
        v23 = (*v22)--;
      if ( v23 <= 0 )
        j_j_j_j_j__ZdlPv_9(v21);
  }
}


int __fastcall TextComponent::setLockedColor(int result, const Color *a2)
{
  int v2; // r2@1
  int v3; // r3@1
  int v4; // r12@1
  int v5; // r1@1

  v2 = *(_DWORD *)a2;
  v3 = *((_DWORD *)a2 + 1);
  v4 = *((_DWORD *)a2 + 2);
  v5 = *((_DWORD *)a2 + 3);
  *(_DWORD *)(result + 48) = v2;
  *(_DWORD *)(result + 52) = v3;
  *(_DWORD *)(result + 56) = v4;
  *(_DWORD *)(result + 60) = v5;
  return result;
}


void __fastcall TextComponent::clone(int result, UIControl *a2, UIControl *a3)
{
  TextComponent::clone((TextComponent *)result, a2, a3);
}


int __fastcall TextComponent::_hasMaxSize(TextComponent *this)
{
  int v1; // r4@1
  char v2; // r0@1
  int v3; // r5@4
  LayoutComponent *v4; // r0@5
  int result; // r0@6

  v1 = UIComponent::getOwner(this);
  v2 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id;
  __dmb();
  if ( !(v2 & 1)
    && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id) )
  {
    type_id<UIComponent,LayoutComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
    j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id);
  }
  v3 = type_id<UIComponent,LayoutComponent>(void)::id[0];
  if ( UIControl::_hasComponent((UIControl *)v1, type_id<UIComponent,LayoutComponent>(void)::id[0]) == 1
    && (v4 = *(LayoutComponent **)(*(_DWORD *)(v1 + 108) + 4 * UIControl::_getComponentIndex((UIControl *)v1, v3))) != 0 )
    result = LayoutComponent::hasMaxSize(v4);
  else
    result = 0;
  return result;
}


unsigned int __fastcall TextComponent::_getParentArea(RectangleArea *a1, int a2, int a3)
{
  int v3; // r9@1
  RectangleArea *v5; // r10@1
  int v6; // r0@1
  __int64 v7; // kr00_8@1
  unsigned int result; // r0@1
  UIControl *v9; // r0@2
  UIControl *v11; // r0@2
  unsigned int v17; // r0@3
  signed int v22; // r8@7
  int v23; // r0@7
  int v24; // r1@9
  void *v27; // r0@21
  void *v28; // r0@22
  unsigned int *v29; // r1@25
  unsigned int *v30; // r4@31
  unsigned int *v31; // r2@39
  signed int v32; // r1@41
  unsigned int *v33; // r2@47
  signed int v34; // r1@49
  unsigned __int64 v35; // [sp+4h] [bp-6Ch]@6
  int v36; // [sp+Ch] [bp-64h]@13
  int v37; // [sp+10h] [bp-60h]@6
  char v38; // [sp+14h] [bp-5Ch]@1
  int v39; // [sp+18h] [bp-58h]@1

  v3 = a3;
  _R6 = a2;
  v5 = a1;
  RectangleArea::RectangleArea(a1);
  v6 = UIComponent::getOwner((UIComponent *)_R6);
  UIControl::getParent((UIControl *)&v38, v6);
  v7 = *(_QWORD *)&v38;
  result = 0;
  *(_DWORD *)&v38 = 0;
  v39 = 0;
  if ( (_DWORD)v7 )
  {
    v9 = (UIControl *)UIComponent::getOwner((UIComponent *)_R6);
    _R8 = UIControl::getPosition(v9);
    v11 = (UIControl *)UIComponent::getOwner((UIComponent *)_R6);
    _R4 = UIControl::getSize(v11);
    __asm
    {
      VLDR            S16, [R8]
      VLDR            S18, [R4]
    }
    if ( *(_BYTE *)(_R6 + 80) & 2 )
      v17 = *(_DWORD *)(_R6 + 64);
      if ( v17 > 3 )
      {
        __asm { VLDR            S20, =0.0 }
      }
      else
        _R0 = (char *)&unk_261097C + 4 * v17;
        __asm { VLDR            S20, [R0] }
      TextComponent::_getMeasuredText(&v37, _R6, v3);
      __asm { VMOV            R11, S20 }
      v35 = __PAIR__((unsigned int)_R8, (unsigned int)_R4);
      _R4 = (*(int (__fastcall **)(int, _DWORD, int *, int))(*(_DWORD *)v3 + 8))(v3, *(_DWORD *)(_R6 + 12), &v37, _R11);
      _R0 = UIControl::getSize((UIControl *)v7);
      __asm
        VMOV            S0, R4
        VCVT.F32.S32    S0, S0
        VLDR            S20, [R0]
        VCMPE.F32       S0, S20
        VMRS            APSR_nzcv, FPSCR
      if ( _NF ^ _VF )
        *(_DWORD *)(_R6 + 24) = 0;
        _R8 = (UIControl *)HIDWORD(v35);
        _R4 = (char *)v35;
        v22 = *(_DWORD *)(_R6 + 92);
        v23 = Util::utf8len(&v37, 0);
        v24 = *(_DWORD *)(_R6 + 92);
        if ( v24 < 0 )
          v22 = v23;
        if ( v24 > v23 )
        Util::utf8substring((const void **)&v36, &v37, 0, v22);
        _R0 = (*(int (__fastcall **)(int, _DWORD, int *, int))(*(_DWORD *)v3 + 8))(
                v3,
                *(_DWORD *)(_R6 + 12),
                &v36,
                _R11);
        __asm
        {
          VMOV            S0, R0
          VCVT.F32.S32    S22, S0
          VLDR            S24, [R6,#0x18]
        }
        _R0 = UIControl::getPosition((UIControl *)v7);
        __asm { VADD.F32        S0, S22, S16 }
          VADD.F32        S2, S0, S24
          VMOV.F32        S0, #-1.0
          VADD.F32        S4, S2, S0
          VLDR            S0, [R0]
          VCMPE.F32       S4, S0
          VMRS            APSR_nzcv, FPSCR
        if ( _NF ^ _VF )
          __asm
          {
            VSUB.F32        S2, S0, S4
            VLDR            S4, [R6,#0x18]
          }
          _R4 = (char *)v35;
            VADD.F32        S2, S2, S4
            VSTR            S2, [R6,#0x18]
        else
          __asm { VADD.F32        S4, S0, S20 }
            VCMPE.F32       S2, S4
            VMRS            APSR_nzcv, FPSCR
          if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
            __asm { VLDR            S2, [R6,#0x18] }
          else
            __asm
            {
              VSUB.F32        S2, S4, S2
              VLDR            S4, [R6,#0x18]
              VADD.F32        S2, S2, S4
              VSTR            S2, [R6,#0x18]
            }
          VADD.F32        S2, S2, S16
          VCMPE.F32       S2, S0
        if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
            VSUBGT.F32      S0, S0, S16
            VSTRGT          S0, [R6,#0x18]
        v27 = (void *)(v36 - 12);
        if ( (int *)(v36 - 12) != &dword_28898C0 )
          v33 = (unsigned int *)(v36 - 4);
          if ( &pthread_create )
            __dmb();
            do
              v34 = __ldrex(v33);
            while ( __strex(v34 - 1, v33) );
            v34 = (*v33)--;
          if ( v34 <= 0 )
            j_j_j_j_j__ZdlPv_9(v27);
      v28 = (void *)(v37 - 12);
      if ( (int *)(v37 - 12) != &dword_28898C0 )
        v31 = (unsigned int *)(v37 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v32 = __ldrex(v31);
          while ( __strex(v32 - 1, v31) );
          v32 = (*v31)--;
        if ( v32 <= 0 )
          j_j_j_j_j__ZdlPv_9(v28);
      VADD.F32        S0, S18, S16
      VLDR            S2, [R6,#0x18]
      VADD.F32        S4, S2, S16
      VADD.F32        S0, S0, S2
      VSTR            S4, [R10]
      VSTR            S0, [R10,#4]
    result = *((_DWORD *)_R8 + 1);
    *((_DWORD *)v5 + 2) = result;
      VLDR            S0, [R4,#4]
      VMOV            S2, R0
      VSTR            S0, [R10,#0xC]
  }
  if ( HIDWORD(v7) )
    v29 = (unsigned int *)(HIDWORD(v7) + 4);
    if ( &pthread_create )
      __dmb();
      do
        result = __ldrex(v29);
      while ( __strex(result - 1, v29) );
    else
      result = (*v29)--;
    if ( result == 1 )
      v30 = (unsigned int *)(HIDWORD(v7) + 8);
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v7) + 8))(HIDWORD(v7));
      if ( &pthread_create )
        __dmb();
        do
          result = __ldrex(v30);
        while ( __strex(result - 1, v30) );
        result = (*v30)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v7) + 12))(HIDWORD(v7));
  return result;
}


int __fastcall TextComponent::setShadow(int result, bool a2)
{
  *(_BYTE *)(result + 80) = a2 | *(_BYTE *)(result + 80) & 0xFE;
  return result;
}


signed int __fastcall TextComponent::_hasDefaultWidthSizing(TextComponent *this)
{
  int v1; // r4@1
  char v2; // r0@1
  int v3; // r5@4
  int v4; // r0@5
  signed int result; // r0@6

  v1 = UIComponent::getOwner(this);
  v2 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id;
  __dmb();
  if ( !(v2 & 1)
    && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id) )
  {
    type_id<UIComponent,LayoutComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
    j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id);
  }
  v3 = type_id<UIComponent,LayoutComponent>(void)::id[0];
  if ( UIControl::_hasComponent((UIControl *)v1, type_id<UIComponent,LayoutComponent>(void)::id[0]) == 1
    && (v4 = *(_DWORD *)(*(_DWORD *)(v1 + 108) + 4 * UIControl::_getComponentIndex((UIControl *)v1, v3))) != 0 )
    result = LayoutComponent::hasSizeAxisType(v4, 2, 0);
  else
    result = 0;
  return result;
}


int __fastcall TextComponent::setLinePadding(int result, float a2)
{
  *(float *)(result + 72) = a2;
  return result;
}
