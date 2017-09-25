

void __fastcall AnchoredOffsetComponent::updateLayoutFromPropertyValue(AnchoredOffsetComponent *this)
{
  int v2; // r6@1
  char v3; // r0@1
  int v4; // r4@4
  LayoutComponent *v5; // r4@5
  int v6; // r7@6
  Json::Value *v7; // r7@6
  const char *v8; // r6@6
  int v13; // r0@8
  Json::Value *v14; // r0@9
  Json::Value *v15; // r6@9
  signed int v16; // r0@9
  char *v18; // r0@16
  unsigned int v19; // r5@16
  signed int v20; // r8@16
  int v21; // r7@16
  signed int v22; // r9@18
  signed int v23; // r10@20
  unsigned int v24; // r0@20
  unsigned int v25; // r1@27
  __int64 v27; // r0@30
  __int64 v28; // r2@31
  signed int v29; // r11@32
  int v30; // r2@33
  unsigned int v31; // r3@33
  unsigned int v32; // r2@35
  unsigned int v33; // r11@35
  char *v34; // r6@41
  __int64 v35; // kr00_8@43
  char *v36; // r2@43
  char *v37; // r12@44
  int v38; // r3@45
  int v39; // r5@45
  int v40; // r6@45
  void *v41; // r5@47
  __int64 v43; // r0@52
  __int64 v44; // r2@53
  signed int v45; // r6@54
  int v46; // r2@55
  unsigned int v47; // r6@55
  unsigned int v48; // r2@57
  unsigned int v49; // r7@57
  char *v50; // r9@63
  __int64 v51; // kr08_8@65
  char *v52; // r2@65
  __int64 v53; // kr10_8@66
  int v54; // r5@66
  void *v55; // r8@68
  int v56; // [sp+0h] [bp-78h]@52
  __int64 v57; // [sp+4h] [bp-74h]@53
  int v58; // [sp+10h] [bp-68h]@30
  __int64 v59; // [sp+14h] [bp-64h]@31
  void *ptr; // [sp+20h] [bp-58h]@16
  void *v61; // [sp+24h] [bp-54h]@30
  char *v62; // [sp+28h] [bp-50h]@30
  void *v63; // [sp+2Ch] [bp-4Ch]@52
  void *v64; // [sp+30h] [bp-48h]@52
  char *v65; // [sp+34h] [bp-44h]@52
  int v66; // [sp+38h] [bp-40h]@50
  int v67; // [sp+3Ch] [bp-3Ch]@71
  char v68; // [sp+40h] [bp-38h]@6
  const char *v69; // [sp+44h] [bp-34h]@6

  _R5 = this;
  v2 = UIComponent::getOwner(this);
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
    v5 = *(LayoutComponent **)(*(_DWORD *)(v2 + 108) + 4 * UIControl::_getComponentIndex((UIControl *)v2, v4));
    if ( v5 )
    {
      v6 = UIControl::getPropertyBag((UIControl *)v2);
      gsl::basic_string_span<char const,-1>::remove_z<23u>((int)&v68, (int)"#anchored_offset_value");
      v7 = (Json::Value *)(v6 + 8);
      v8 = v69;
      Json::Value::isNull(v7);
      __asm
      {
        VLDR            S16, =0.0
        VMOV.F32        S0, S16
      }
      if ( _ZF )
        v13 = Json::Value::isObject(v7);
        __asm { VMOV.F32        S0, S16 }
        if ( v13 == 1 )
        {
          v14 = (Json::Value *)Json::Value::operator[]((int)v7, v8);
          v15 = v14;
          v16 = Json::Value::isNumeric(v14);
          __asm { VMOV.F32        S0, S16 }
          if ( v16 == 1 )
          {
            _R0 = Json::Value::asFloat(v15, 0.0);
            __asm { VMOV            S0, R0 }
          }
        }
        VCMPE.F32       S0, #0.0
        VMRS            APSR_nzcv, FPSCR
        VMOV.F32        S2, #1.0
        VCMPE.F32       S0, S2
      if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        __asm { VMOVGT.F32      S16, S0 }
      __asm { VMRS            APSR_nzcv, FPSCR }
        __asm { VMOVGT.F32      S16, S2 }
        VLDR            S0, [R5,#8]
        VCMPE.F32       S16, S0
      if ( !_ZF )
        __asm { VSTR            S16, [R5,#8] }
        v18 = LayoutComponent::getOffset(v5);
        ui::LayoutOffset::LayoutOffset((ui::LayoutOffset *)&ptr, (const ui::LayoutOffset *)v18);
        v19 = LayoutComponent::getAnchorFrom(v5);
        LayoutComponent::setAnchorTo((int)v5, v19);
        v20 = 0;
        v21 = v19 | 1;
        if ( v19 == 8 )
          v20 = 1;
        v22 = 0;
        if ( v21 == 7 )
          v22 = 1;
        v23 = 0;
        v24 = 0;
        if ( v19 == 2 )
          v23 = 1;
        if ( v21 != 1 )
          v21 = 0;
        if ( v19 <= 6 )
          v24 = (0x49u >> (v19 & 0x7F)) & 1;
        if ( (unsigned __int8)(v19 - 2) > 6u )
          v25 = 0;
        else
          v25 = (0x49u >> ((v19 - 2) & 0x7F)) & 1;
        if ( (v25 | v24) == 1 )
          __asm { VMOV            R2, S16 }
          v61 = ptr;
          ui::AxisOffset::AxisOffset((int)&v58, 1, _R2, v24 ^ 1);
          HIDWORD(v27) = v61;
          if ( v61 == v62 )
            LODWORD(v27) = ptr;
            v30 = ((_BYTE *)v61 - (_BYTE *)ptr) >> 2;
            v31 = -1431655765 * v30;
            if ( v61 == ptr )
              v31 = 1;
            v32 = v31 + -1431655765 * v30;
            v33 = v32;
            if ( v32 > 0x15555555 )
              v33 = 357913941;
            if ( v32 < v31 )
            if ( v33 )
            {
              if ( v33 >= 0x15555556 )
                sub_119C874();
              v34 = (char *)operator new(12 * v33);
              v27 = *(_QWORD *)&ptr;
            }
            else
              v34 = 0;
            v35 = v59;
            *(_DWORD *)&v34[HIDWORD(v27) - v27] = v58;
            *(_QWORD *)&v34[HIDWORD(v27) - v27 + 4] = v35;
            v36 = v34;
            if ( HIDWORD(v27) != (_DWORD)v27 )
              v37 = v34;
              do
              {
                v38 = *(_DWORD *)v27;
                v39 = *(_DWORD *)(v27 + 4);
                v40 = *(_DWORD *)(v27 + 8);
                LODWORD(v27) = v27 + 12;
                *(_DWORD *)v36 = v38;
                *((_DWORD *)v36 + 1) = v39;
                *((_DWORD *)v36 + 2) = v40;
                v36 += 12;
              }
              while ( HIDWORD(v27) != (_DWORD)v27 );
              LODWORD(v27) = ptr;
              v34 = v37;
            v41 = v36 + 12;
            if ( (_DWORD)v27 )
              operator delete((void *)v27);
            ptr = v34;
            v61 = v41;
            v62 = &v34[12 * v33];
          else
            v28 = v59;
            *(_DWORD *)v61 = v58;
            *(_QWORD *)(HIDWORD(v27) + 4) = v28;
            v61 = (char *)v61 + 12;
          v29 = 1;
          v66 = 1;
          v29 = 0;
        if ( (v20 | v22 | v23 | v21) == 1 )
          v64 = v63;
          ui::AxisOffset::AxisOffset((int)&v56, 2, _R2, (v23 | v21) ^ 1);
          HIDWORD(v43) = v64;
          if ( v64 == v65 )
            LODWORD(v43) = v63;
            v46 = ((_BYTE *)v64 - (_BYTE *)v63) >> 2;
            v47 = -1431655765 * v46;
            if ( v64 == v63 )
              v47 = 1;
            v48 = v47 + -1431655765 * v46;
            v49 = v48;
            if ( v48 > 0x15555555 )
              v49 = 357913941;
            if ( v48 < v47 )
            if ( v49 )
              if ( v49 >= 0x15555556 )
              v50 = (char *)operator new(12 * v49);
              v43 = *(_QWORD *)&v63;
              v50 = 0;
            v51 = v57;
            *(_DWORD *)&v50[HIDWORD(v43) - v43] = v56;
            *(_QWORD *)&v50[HIDWORD(v43) - v43 + 4] = v51;
            v52 = v50;
            if ( HIDWORD(v43) != (_DWORD)v43 )
                v53 = *(_QWORD *)v43;
                v54 = *(_DWORD *)(v43 + 8);
                LODWORD(v43) = v43 + 12;
                *(_QWORD *)v52 = v53;
                *((_DWORD *)v52 + 2) = v54;
                v52 += 12;
              while ( HIDWORD(v43) != (_DWORD)v43 );
              LODWORD(v43) = v63;
            v55 = v52 + 12;
            if ( (_DWORD)v43 )
              operator delete((void *)v43);
            v63 = v50;
            v64 = v55;
            v65 = &v50[12 * v49];
            v44 = v57;
            *(_DWORD *)v64 = v56;
            *(_QWORD *)(HIDWORD(v43) + 4) = v44;
            v64 = (char *)v64 + 12;
          v45 = 1;
          v67 = 1;
          v45 = 0;
        LayoutComponent::setOffset(v5, (const ui::LayoutOffset *)&ptr);
        if ( v29 == 1 )
          LayoutComponent::reinitialize(v5, (char *)&off_262D1A0, 1);
          LayoutComponent::layout((int)v5, (int)&off_262D1A0 + 1, 1, 0);
        if ( v45 == 1 )
          LayoutComponent::reinitialize(v5, (char *)&off_262D1A0 + 2, 1);
          LayoutComponent::layout((int)v5, (int)&off_262D1A0 + 3, 1, 0);
        if ( v63 )
          operator delete(v63);
        if ( ptr )
          operator delete(ptr);
    }
}


void __fastcall AnchoredOffsetComponent::updateLayoutFromPropertyValue(AnchoredOffsetComponent *this)
{
  AnchoredOffsetComponent::updateLayoutFromPropertyValue(this);
}


signed int __fastcall AnchoredOffsetComponent::clone(AnchoredOffsetComponent *this, UIControl *a2, UIControl *a3)
{
  AnchoredOffsetComponent *v3; // r4@1
  UIControl *v4; // r6@1
  UIComponent *v5; // r5@1
  signed int result; // r0@1

  v3 = this;
  v4 = a3;
  v5 = (UIComponent *)operator new(0xCu);
  UIComponent::UIComponent(v5, v4);
  *(_DWORD *)v3 = v5;
  *(_DWORD *)v5 = &off_26DFBA0;
  result = 2139095039;
  *((_DWORD *)v5 + 2) = 2139095039;
  return result;
}


int __fastcall AnchoredOffsetComponent::AnchoredOffsetComponent(UIComponent *a1, UIControl *a2)
{
  int result; // r0@1

  result = UIComponent::UIComponent(a1, a2);
  *(_DWORD *)result = &off_26DFBA0;
  *(_DWORD *)(result + 8) = 2139095039;
  return result;
}


void __fastcall AnchoredOffsetComponent::~AnchoredOffsetComponent(AnchoredOffsetComponent *this)
{
  AnchoredOffsetComponent::~AnchoredOffsetComponent(this);
}


int __fastcall AnchoredOffsetComponent::reset(int result)
{
  *(_DWORD *)(result + 8) = 2139095039;
  return result;
}


void __fastcall AnchoredOffsetComponent::~AnchoredOffsetComponent(AnchoredOffsetComponent *this)
{
  void *v1; // r0@1

  v1 = (void *)UIComponent::~UIComponent(this);
  j_j_j__ZdlPv_4(v1);
}
