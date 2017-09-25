

TouchControlSet *__fastcall TouchControlSet::~TouchControlSet(TouchControlSet *this)
{
  TouchControlSet *v1; // r4@1
  char *v2; // r5@1 OVERLAPPED
  char *v3; // r6@1 OVERLAPPED

  v1 = this;
  *(_QWORD *)&v2 = *(_QWORD *)((char *)this + 12);
  if ( v2 != v3 )
  {
    do
    {
      if ( *(_DWORD *)v2 )
        (*(void (**)(void))(**(_DWORD **)v2 + 4))();
      *(_DWORD *)v2 = 0;
      v2 += 4;
    }
    while ( v3 != v2 );
    v2 = (char *)*((_DWORD *)v1 + 3);
  }
  if ( v2 )
    operator delete(v2);
  if ( *(_DWORD *)v1 )
    operator delete(*(void **)v1);
  return v1;
}


int __fastcall TouchControlSet::addTurnInteract(TouchControlSet *this, const BindingFactory *a2, NameRegistry *a3, const TouchTurnInteractBinding *a4)
{
  TouchControlSet *v4; // r4@1
  unsigned __int64 *v6; // r6@1
  __int16 v7; // r8@1
  __int16 v8; // r9@1
  __int16 v9; // r0@1
  __int16 v14; // r10@1
  void *v15; // r0@1
  __int64 v16; // r2@1
  int v17; // r5@1
  void (__fastcall *v18)(char *, char *, signed int); // r1@2
  __int64 v19; // r0@4
  int result; // r0@5
  int v21; // [sp+4h] [bp-4Ch]@4
  char v22; // [sp+8h] [bp-48h]@1
  void (__fastcall *v23)(char *, char *, signed int); // [sp+10h] [bp-40h]@1
  void *v24; // [sp+14h] [bp-3Ch]@2
  char v25; // [sp+18h] [bp-38h]@2
  void (__fastcall *v26)(char *, char *, signed int); // [sp+20h] [bp-30h]@1
  void *v27; // [sp+24h] [bp-2Ch]@2

  v4 = this;
  _R5 = a4;
  v6 = (unsigned __int64 *)a3;
  (*(void (__fastcall **)(char *))(*(_DWORD *)a2 + 20))(&v22);
  v7 = NameRegistry::getNameId(v6, (int **)_R5);
  v8 = NameRegistry::getNameId(v6, (int **)_R5 + 1);
  v9 = NameRegistry::getNameId(v6, (int **)_R5 + 2);
  __asm
  {
    VMOV.F32        S0, #-0.5
    VLDR            S2, [R5,#0x10]
    VMOV.F32        S4, #1.0
  }
  v14 = v9;
    VADD.F32        S0, S2, S0
    VLDR            S2, =0.2
    VMUL.F32        S0, S0, S2
    VADD.F32        S16, S0, S4
  v15 = operator new(0x50u);
  HIDWORD(v16) = v23;
  v17 = (int)v15;
  v26 = 0;
  if ( v23 )
    v23(&v25, &v22, 2);
    v15 = v24;
    v18 = v23;
    v27 = v24;
    v26 = v23;
    v16 = *(_QWORD *)&v25;
  else
    v18 = 0;
  *(_QWORD *)(v17 + 4) = v16;
  *(_DWORD *)(v17 + 12) = v18;
  *(_DWORD *)(v17 + 16) = v15;
  *(_DWORD *)(v17 + 28) = &unk_28898CC;
  *(_DWORD *)v17 = &off_26E8AD8;
  *(_WORD *)(v17 + 32) = v7;
  *(_WORD *)(v17 + 34) = v8;
  *(_WORD *)(v17 + 36) = v14;
  *(_DWORD *)(v17 + 40) = 1082130432;
  __asm { VSTR            S16, [R5,#0x2C] }
  *(_DWORD *)(v17 + 48) = 0;
  *(_DWORD *)(v17 + 52) = -1;
  *(_DWORD *)(v17 + 56) = 0;
  *(_DWORD *)(v17 + 60) = 0;
  *(_DWORD *)(v17 + 64) = 0;
  *(_BYTE *)(v17 + 68) = 0;
  *(_DWORD *)(v17 + 72) = 0;
  *(_DWORD *)(v17 + 76) = 0;
  v21 = v17;
  *((_DWORD *)v4 + 6) = v17;
  *(_QWORD *)(v17 + 20) = *(_QWORD *)((char *)v4 + 28);
  v19 = *((_QWORD *)v4 + 2);
  if ( (_DWORD)v19 == HIDWORD(v19) )
    std::vector<std::unique_ptr<TouchControl,std::default_delete<TouchControl>>,std::allocator<std::unique_ptr<TouchControl,std::default_delete<TouchControl>>>>::_M_emplace_back_aux<std::unique_ptr<TouchTurnInteractControl,std::default_delete<TouchTurnInteractControl>>>(
      (TouchControlSet *)((char *)v4 + 12),
      &v21);
    result = v21;
    if ( v21 )
      result = (*(int (**)(void))(*(_DWORD *)v21 + 4))();
    v21 = 0;
    *(_DWORD *)v19 = v17;
    result = v19 + 4;
    *((_DWORD *)v4 + 4) = result;
    result = ((int (*)(void))v23)();
  return result;
}


unsigned __int64 *__fastcall TouchControlSet::getTouchIdsWithFlags(unsigned __int64 *result, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  int v4; // r7@1
  int v5; // r1@2
  int v6; // r1@9 OVERLAPPED
  int v7; // r2@9
  unsigned __int64 *v8; // [sp+4h] [bp-1Ch]@2

  v2 = a2;
  *(_DWORD *)(a2 + 4) = *(_DWORD *)a2;
  v4 = *result >> 32;
  v3 = *result;
  if ( v3 != v4 )
  {
    while ( 1 )
    {
      v8 = 0;
      v5 = *(_DWORD *)(v3 + 20);
      result = *(unsigned __int64 **)(v3 + 20);
      if ( v5 != 1 )
        result = 0;
      v8 = result;
      if ( *(_BYTE *)(v3 + 16) )
        break;
      if ( v5 == 1 )
        goto LABEL_9;
LABEL_12:
      v3 += 24;
      if ( v4 == v3 )
        return result;
    }
    result = (unsigned __int64 *)2;
    if ( v5 == 1 )
      result = (unsigned __int64 *)3;
    v8 = result;
LABEL_9:
    *(_QWORD *)&v6 = *(_QWORD *)(v2 + 4);
    if ( v6 == v7 )
      result = (unsigned __int64 *)std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::_M_emplace_back_aux<int &,int &>(
                                     (unsigned __int64 *)v2,
                                     (_DWORD *)v3,
                                     &v8);
    else
      *(_DWORD *)v6 = *(_DWORD *)v3;
      *(_DWORD *)(v6 + 4) = result;
      result = (unsigned __int64 *)(v6 + 8);
      *(_DWORD *)(v2 + 4) = v6 + 8;
    goto LABEL_12;
  }
  return result;
}


int __fastcall TouchControlSet::addTextButton(TouchControlSet *this, const BindingFactory *a2, NameRegistry *a3, const TouchTextButtonBinding *a4)
{
  const BindingFactory *v4; // r5@1
  TouchControlSet *v5; // r11@1
  const TouchTextButtonBinding *v6; // r6@1
  unsigned __int64 *v7; // r7@1
  __int64 v8; // ST08_8@1
  __int64 v9; // r0@1
  int result; // r0@5
  int v11; // [sp+24h] [bp-5Ch]@1
  __int16 v12; // [sp+2Ah] [bp-56h]@1
  char v13; // [sp+2Ch] [bp-54h]@1
  int (*v14)(void); // [sp+34h] [bp-4Ch]@5
  char v15; // [sp+3Ch] [bp-44h]@1
  int (*v16)(void); // [sp+44h] [bp-3Ch]@7
  char v17; // [sp+4Ch] [bp-34h]@1
  int (*v18)(void); // [sp+54h] [bp-2Ch]@9

  v4 = a2;
  v5 = this;
  v6 = a4;
  v7 = (unsigned __int64 *)a3;
  (*(void (__fastcall **)(char *))(*(_DWORD *)a2 + 16))(&v17);
  (*(void (__fastcall **)(char *, const BindingFactory *, char *))(*(_DWORD *)v4 + 8))(&v15, v4, (char *)v6 + 8);
  (*(void (__fastcall **)(char *, const BindingFactory *, char *))(*(_DWORD *)v4 + 12))(&v13, v4, (char *)v6 + 12);
  v12 = NameRegistry::getNameId(v7, (int **)v6);
  LODWORD(v8) = (char *)v6 + 48;
  HIDWORD(v8) = (char *)v6 + 52;
  std::make_unique<TouchTextButtonControl,std::function<glm::detail::tvec2<float> ()(void)> &,std::function&<bool ()(void)>,std::function&<std::string ()(void)>,short &,ButtonColors const&,int const&,int const&,int const&,int const&,bool const&,int const&>(
    &v11,
    (int)&v17,
    (int)&v15,
    (int)&v13,
    &v12,
    (int)v6 + 16,
    v8,
    (int *)v6 + 14,
    (int *)v6 + 15,
    (char *)v6 + 64,
    (int *)v6 + 17);
  v9 = *((_QWORD *)v5 + 2);
  if ( (_DWORD)v9 == HIDWORD(v9) )
  {
    std::vector<std::unique_ptr<TouchControl,std::default_delete<TouchControl>>,std::allocator<std::unique_ptr<TouchControl,std::default_delete<TouchControl>>>>::_M_emplace_back_aux<std::unique_ptr<TouchTextButtonControl,std::default_delete<TouchTextButtonControl>>>(
      (TouchControlSet *)((char *)v5 + 12),
      &v11);
    if ( v11 )
      (*(void (**)(void))(*(_DWORD *)v11 + 4))();
  }
  else
    HIDWORD(v9) = v11;
    v11 = 0;
    *(_DWORD *)v9 = HIDWORD(v9);
    *((_DWORD *)v5 + 4) = v9 + 4;
  result = 0;
  v11 = 0;
  if ( v14 )
    result = v14();
  if ( v16 )
    result = v16();
  if ( v18 )
    result = v18();
  return result;
}


signed int __fastcall TouchControlSet::isTurnInteractActive(TouchControlSet *this)
{
  int v1; // r1@1
  signed int result; // r0@1

  v1 = *((_DWORD *)this + 6);
  result = 0;
  if ( v1 )
  {
    if ( *(_DWORD *)(v1 + 52) != -1 )
      result = 1;
  }
  return result;
}


int __fastcall TouchControlSet::TouchControlSet(int a1)
{
  int v1; // r4@1

  v1 = a1;
  _aeabi_memclr4(a1, 36);
  return v1;
}


char *__fastcall TouchControlSet::addPointer(float a1, int a2, int a3, int a4, int a5, int a6, char a7)
{
  int v12; // [sp+0h] [bp-18h]@0

  __asm
  {
    VLDR            S0, [SP,#0x18+arg_0]
    VSTR            S0, [SP,#0x18+var_18]
  }
  return TouchPointResults::addPointer(a1, a2, a3, a4, v12, a6, a7);
}


int __fastcall TouchControlSet::tick(TouchControlSet *this, InputEventQueue *a2, int a3)
{
  TouchControlSet *v3; // r4@1
  int *v4; // r5@1
  int *v5; // r7@1
  int v6; // t1@2
  __int64 i; // r0@3

  v3 = this;
  v4 = (int *)(*(_QWORD *)((char *)this + 12) >> 32);
  v5 = (int *)*(_QWORD *)((char *)this + 12);
  while ( v4 != v5 )
  {
    v6 = *v5;
    ++v5;
    (*(void (**)(void))(*(_DWORD *)v6 + 12))();
  }
  for ( i = *(_QWORD *)v3; HIDWORD(i) != (_DWORD)i; LODWORD(i) = i + 24 )
    if ( !*(_DWORD *)(i + 4) )
      *(_DWORD *)(i + 4) = 1;
  return i;
}


int __fastcall TouchControlSet::clearControls(TouchControlSet *this, InputEventQueue *a2)
{
  TouchControlSet *v2; // r8@1
  __int64 v3; // r4@1
  int v4; // r7@1
  int v5; // t1@2
  int v6; // r6@4
  int result; // r0@8

  v2 = this;
  v4 = *(_QWORD *)((char *)this + 12) >> 32;
  LODWORD(v3) = *(_QWORD *)((char *)this + 12);
  if ( (_DWORD)v3 != v4 )
  {
    do
    {
      v5 = *(_DWORD *)v3;
      LODWORD(v3) = v3 + 4;
      (*(void (**)(void))(*(_DWORD *)v5 + 16))();
    }
    while ( v4 != (_DWORD)v3 );
    v3 = *(_QWORD *)((char *)v2 + 12);
    if ( HIDWORD(v3) != (_DWORD)v3 )
      v6 = v3;
      do
      {
        if ( *(_DWORD *)v6 )
          (*(void (**)(void))(**(_DWORD **)v6 + 4))();
        *(_DWORD *)v6 = 0;
        v6 += 4;
      }
      while ( HIDWORD(v3) != v6 );
  }
  result = 0;
  *((_DWORD *)v2 + 4) = v3;
  *((_DWORD *)v2 + 6) = 0;
  return result;
}


int __fastcall TouchControlSet::render(int result, InputRenderContext *a2)
{
  int *v2; // r5@1 OVERLAPPED
  int *v3; // r6@1 OVERLAPPED
  int v4; // t1@2

  for ( *(_QWORD *)&v2 = *(_QWORD *)(result + 12); v3 != v2; result = (*(int (**)(void))(*(_DWORD *)v4 + 8))() )
  {
    v4 = *v2;
    ++v2;
  }
  return result;
}


int __fastcall TouchControlSet::addGuiPassthrough(int a1, int a2, unsigned __int64 *a3, int a4, int **a5)
{
  int v5; // r4@1
  unsigned __int64 *v6; // r5@1
  __int16 v7; // r8@1
  void *v8; // r0@1
  __int64 v9; // r2@1
  int v10; // r5@1
  void (__fastcall *v11)(char *, char *, signed int); // r1@2
  __int64 v12; // r0@4
  int result; // r0@8
  int v14; // [sp+4h] [bp-44h]@4
  char v15; // [sp+8h] [bp-40h]@1
  void (__fastcall *v16)(char *, char *, signed int); // [sp+10h] [bp-38h]@1
  void *v17; // [sp+14h] [bp-34h]@2
  char v18; // [sp+18h] [bp-30h]@2
  void (__fastcall *v19)(char *, char *, signed int); // [sp+20h] [bp-28h]@1
  void *v20; // [sp+24h] [bp-24h]@2

  v5 = a1;
  v6 = a3;
  (*(void (__fastcall **)(char *))(*(_DWORD *)a2 + 20))(&v15);
  v7 = NameRegistry::getNameId(v6, a5);
  v8 = operator new(0x24u);
  HIDWORD(v9) = v16;
  v10 = (int)v8;
  v19 = 0;
  if ( v16 )
  {
    v16(&v18, &v15, 2);
    v8 = v17;
    v11 = v16;
    v20 = v17;
    v19 = v16;
    v9 = *(_QWORD *)&v18;
  }
  else
    v11 = 0;
  *(_QWORD *)(v10 + 4) = v9;
  *(_DWORD *)(v10 + 12) = v11;
  *(_DWORD *)(v10 + 16) = v8;
  *(_DWORD *)(v10 + 20) = 0;
  *(_DWORD *)(v10 + 24) = 0;
  *(_DWORD *)(v10 + 28) = &unk_28898CC;
  *(_DWORD *)v10 = &off_26E8AF4;
  *(_BYTE *)(v10 + 32) = 2;
  *(_WORD *)(v10 + 34) = v7;
  v14 = v10;
  v12 = *(_QWORD *)(v5 + 16);
  if ( (_DWORD)v12 == HIDWORD(v12) )
    std::vector<std::unique_ptr<TouchControl,std::default_delete<TouchControl>>,std::allocator<std::unique_ptr<TouchControl,std::default_delete<TouchControl>>>>::_M_emplace_back_aux<std::unique_ptr<TouchGuiPassthroughControl,std::default_delete<TouchGuiPassthroughControl>>>(
      (_QWORD *)(v5 + 12),
      &v14);
    if ( v14 )
      (*(void (**)(void))(*(_DWORD *)v14 + 4))();
    v14 = 0;
    *(_DWORD *)v12 = v10;
    *(_DWORD *)(v5 + 16) = v12 + 4;
  result = 0;
  v14 = 0;
    result = ((int (*)(void))v16)();
  return result;
}


int __fastcall TouchControlSet::clearPointers(int result)
{
  *(_DWORD *)(result + 4) = *(_DWORD *)result;
  return result;
}


int __fastcall TouchControlSet::setWindowSize(int result, __int64 a2)
{
  int *i; // r3@1
  int *v3; // r12@1
  int v4; // t1@2

  *(_QWORD *)(result + 28) = a2;
  v3 = (int *)(*(_QWORD *)(result + 12) >> 32);
  for ( i = (int *)*(_QWORD *)(result + 12); v3 != i; *(_QWORD *)(v4 + 20) = a2 )
  {
    v4 = *i;
    ++i;
    result = v4;
  }
  return result;
}


int __fastcall TouchControlSet::addGlyphButton(int a1, int a2, unsigned __int64 *a3, int a4)
{
  int v4; // r7@1
  int v5; // r4@1
  int v6; // r5@1
  unsigned __int64 *v7; // r6@1
  __int64 v8; // ST20_8@1
  __int64 v9; // r0@1
  int result; // r0@5
  char *v11; // [sp+28h] [bp-48h]@0
  int v12; // [sp+2Ch] [bp-44h]@1
  __int16 v13; // [sp+32h] [bp-3Eh]@1
  char v14; // [sp+34h] [bp-3Ch]@1
  int (*v15)(void); // [sp+3Ch] [bp-34h]@5
  char v16; // [sp+44h] [bp-2Ch]@1
  int (*v17)(void); // [sp+4Ch] [bp-24h]@7

  v4 = a2;
  v5 = a1;
  v6 = a4;
  v7 = a3;
  (*(void (__fastcall **)(char *))(*(_DWORD *)a2 + 20))(&v16);
  (*(void (__fastcall **)(char *, int, int))(*(_DWORD *)v4 + 8))(&v14, v4, v6 + 8);
  v13 = NameRegistry::getNameId(v7, (int **)v6);
  LODWORD(v8) = v6;
  HIDWORD(v8) = v6 + 72;
  std::make_unique<TouchGlyphButtonControl,std::function<RectangleArea ()(void)> &,std::function&<bool ()(void)>,short &,ButtonColors const&,int const&,int const&,int const&,int const&,bool const&,int const&,float const&,std::string const&,bool const&>(
    &v12,
    (int)&v16,
    (int)&v14,
    &v13,
    v6 + 12,
    (int *)(v6 + 44),
    (int *)(v6 + 48),
    (int *)(v6 + 52),
    (int *)(v6 + 56),
    (char *)(v6 + 60),
    (int *)(v6 + 64),
    v6 + 68,
    v8,
    v11);
  v9 = *(_QWORD *)(v5 + 16);
  if ( (_DWORD)v9 == HIDWORD(v9) )
  {
    std::vector<std::unique_ptr<TouchControl,std::default_delete<TouchControl>>,std::allocator<std::unique_ptr<TouchControl,std::default_delete<TouchControl>>>>::_M_emplace_back_aux<std::unique_ptr<TouchGlyphButtonControl,std::default_delete<TouchGlyphButtonControl>>>(
      (_QWORD *)(v5 + 12),
      &v12);
    if ( v12 )
      (*(void (**)(void))(*(_DWORD *)v12 + 4))();
  }
  else
    HIDWORD(v9) = v12;
    v12 = 0;
    *(_DWORD *)v9 = HIDWORD(v9);
    *(_DWORD *)(v5 + 16) = v9 + 4;
  result = 0;
  v12 = 0;
  if ( v15 )
    result = v15();
  if ( v17 )
    result = v17();
  return result;
}
