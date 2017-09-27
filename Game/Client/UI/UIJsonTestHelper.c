

void __fastcall UIJsonTestHelper::loadDefsList(int a1, int *a2, unsigned int a3, int a4)
{
  int v4; // r6@1
  int v5; // r4@1
  unsigned int v6; // r5@1
  char *v7; // r0@1
  char *v8; // r0@2
  unsigned int *v9; // r2@4
  signed int v10; // r1@6
  unsigned int *v11; // r2@8
  signed int v12; // r1@10
  char *v13; // [sp+0h] [bp-20h]@1
  char *v14; // [sp+4h] [bp-1Ch]@1
  int v15; // [sp+8h] [bp-18h]@1

  v4 = *(_DWORD *)(a1 + 12);
  v5 = a4;
  v6 = a3;
  sub_119C854((int *)&v13, a2);
  v14 = v13;
  v13 = (char *)&unk_28898CC;
  v15 = 0;
  UIDefRepository::loadDefsList(v4, (int)&v14, v6, v5);
  v7 = v14 - 12;
  if ( (int *)(v14 - 12) != &dword_28898C0 )
  {
    v9 = (unsigned int *)(v14 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v7);
  }
  v8 = v13 - 12;
  if ( (int *)(v13 - 12) != &dword_28898C0 )
    v11 = (unsigned int *)(v13 - 4);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v8);
}


int __fastcall UIJsonTestHelper::UIJsonTestHelper(int a1)
{
  int v1; // r9@1
  _DWORD *v2; // r0@1
  NameRegistry *v3; // r10@1
  _DWORD *v4; // r0@1
  __int64 v5; // r0@1
  int v6; // r5@1
  _DWORD *v7; // r5@1

  v1 = a1;
  v2 = operator new(4u);
  *v2 = &off_26DF2D4;
  *(_DWORD *)v1 = v2;
  v3 = (NameRegistry *)operator new(0x20u);
  NameRegistry::NameRegistry(v3, 0);
  *(_DWORD *)(v1 + 4) = v3;
  v4 = operator new(4u);
  *v4 = &off_26DF314;
  *(_DWORD *)(v1 + 8) = v4;
  LODWORD(v5) = operator new(0x30u);
  v6 = v5;
  UIDefRepository::UIDefRepository(v5);
  *(_DWORD *)(v1 + 12) = v6;
  v7 = operator new(0x10u);
  Json::Value::Value(v7, 0);
  *(_DWORD *)(v1 + 16) = v7;
  UIMockResourceLoader::UIMockResourceLoader((UIMockResourceLoader *)(v1 + 20));
  *(_DWORD *)(v1 + 40) = 0;
  *(_DWORD *)(v1 + 44) = 0;
  return v1;
}


void __fastcall UIJsonTestHelper::loadDefsList(int a1, int *a2, int *a3)
{
  int v3; // r5@1
  int *v4; // r4@1
  int v5; // r5@1
  char *v6; // r0@1
  char *v7; // r0@2
  void *v8; // r0@3
  PackReport *v9; // r0@4
  PackReport *v10; // r4@4
  unsigned int *v11; // r2@10
  signed int v12; // r1@12
  unsigned int *v13; // r2@14
  signed int v14; // r1@16
  unsigned int *v15; // r2@18
  signed int v16; // r1@20
  char *v17; // [sp+4h] [bp-44h]@1
  char *v18; // [sp+8h] [bp-40h]@1
  int v19; // [sp+Ch] [bp-3Ch]@1
  void **v20; // [sp+10h] [bp-38h]@1
  int v21; // [sp+14h] [bp-34h]@1
  int v22; // [sp+18h] [bp-30h]@1
  int v23; // [sp+1Ch] [bp-2Ch]@1
  int v24; // [sp+20h] [bp-28h]@1
  int v25; // [sp+24h] [bp-24h]@1
  void *ptr; // [sp+28h] [bp-20h]@1
  PackReport *v27; // [sp+2Ch] [bp-1Ch]@1
  int v28; // [sp+30h] [bp-18h]@1

  v3 = a1;
  v4 = a2;
  ptr = 0;
  v27 = 0;
  v28 = 0;
  v23 = 0;
  v24 = 0;
  v21 = 0;
  v22 = 0;
  v20 = &off_26DF29C;
  sub_119C854(&v25, a3);
  v5 = *(_DWORD *)(v3 + 12);
  sub_119C854((int *)&v17, v4);
  v18 = v17;
  v17 = (char *)&unk_28898CC;
  v19 = 0;
  UIDefRepository::loadDefsList(v5, (int)&v18, (unsigned int)&v20, (int)&ptr);
  v6 = v18 - 12;
  if ( (int *)(v18 - 12) != &dword_28898C0 )
  {
    v11 = (unsigned int *)(v18 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
    }
    else
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v6);
  }
  v7 = v17 - 12;
  if ( (int *)(v17 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v17 - 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v7);
  v8 = (void *)(v25 - 12);
  if ( (int *)(v25 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v25 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v8);
  ResourcePackStack::~ResourcePackStack((ResourcePackStack *)&v20);
  v10 = v27;
  v9 = (PackReport *)ptr;
  if ( ptr != (void *)v27 )
    do
      v9 = (PackReport *)((char *)PackReport::~PackReport(v9) + 104);
    while ( v10 != v9 );
    v9 = (PackReport *)ptr;
  if ( v9 )
    operator delete((void *)v9);
}


UIJsonTestHelper *__fastcall UIJsonTestHelper::~UIJsonTestHelper(UIJsonTestHelper *this)
{
  UIJsonTestHelper *v1; // r10@1
  int v2; // r5@1
  unsigned int *v3; // r1@2
  unsigned int v4; // r0@4
  unsigned int *v5; // r4@8
  unsigned int v6; // r0@10
  void (*v7)(void); // r3@15
  Json::Value *v8; // r0@17
  Json::Value *v9; // r0@18
  int v10; // r8@19
  _DWORD *v11; // r6@20
  unsigned int *v12; // r2@22
  signed int v13; // r1@24
  _DWORD *v14; // r7@30
  UIDefNamespace *v15; // r0@30
  int v16; // r1@30
  void *v17; // r0@30
  void *v18; // r0@32
  int v19; // r0@36
  int v20; // r8@38
  unsigned __int64 *v21; // r4@39
  unsigned int *v22; // r2@41
  signed int v23; // r1@43
  unsigned __int64 *v24; // r7@49
  int v25; // r1@49
  void *v26; // r0@49
  void *v27; // r0@51

  v1 = this;
  v2 = *((_DWORD *)this + 11);
  if ( v2 )
  {
    v3 = (unsigned int *)(v2 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v4 = __ldrex(v3);
      while ( __strex(v4 - 1, v3) );
    }
    else
      v4 = (*v3)--;
    if ( v4 == 1 )
      v5 = (unsigned int *)(v2 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
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
        (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  }
  *((_DWORD *)v1 + 5) = &off_2726968;
  v7 = (void (*)(void))*((_DWORD *)v1 + 8);
  if ( v7 )
    v7();
  v8 = (Json::Value *)*((_DWORD *)v1 + 4);
  if ( v8 )
    v9 = Json::Value::~Value(v8);
    operator delete((void *)v9);
  *((_DWORD *)v1 + 4) = 0;
  v10 = *((_DWORD *)v1 + 3);
  if ( v10 )
    Json::Value::~Value((Json::Value *)(v10 + 32));
    v11 = *(_DWORD **)(v10 + 8);
    while ( v11 )
      v14 = v11;
      v15 = (UIDefNamespace *)(v11 + 2);
      v11 = (_DWORD *)*v11;
      UIDefNamespace::~UIDefNamespace(v15);
      v16 = v14[1];
      v17 = (void *)(v16 - 12);
      if ( (int *)(v16 - 12) != &dword_28898C0 )
        v12 = (unsigned int *)(v16 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v13 = __ldrex(v12);
          while ( __strex(v13 - 1, v12) );
        }
        else
          v13 = (*v12)--;
        if ( v13 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v17);
      operator delete(v14);
    _aeabi_memclr4(*(_QWORD *)v10, 4 * (*(_QWORD *)v10 >> 32));
    *(_DWORD *)(v10 + 8) = 0;
    *(_DWORD *)(v10 + 12) = 0;
    v18 = *(void **)v10;
    if ( *(_DWORD *)v10 && (void *)(v10 + 24) != v18 )
      operator delete(v18);
    operator delete((void *)v10);
  *((_DWORD *)v1 + 3) = 0;
  v19 = *((_DWORD *)v1 + 2);
  if ( v19 )
    (*(void (**)(void))(*(_DWORD *)v19 + 4))();
  *((_DWORD *)v1 + 2) = 0;
  v20 = *((_DWORD *)v1 + 1);
  if ( v20 )
    v21 = *(unsigned __int64 **)(v20 + 8);
    while ( v21 )
      v24 = v21;
      v25 = *v21 >> 32;
      v21 = (unsigned __int64 *)*v21;
      v26 = (void *)(v25 - 12);
      if ( (int *)(v25 - 12) != &dword_28898C0 )
        v22 = (unsigned int *)(v25 - 4);
            v23 = __ldrex(v22);
          while ( __strex(v23 - 1, v22) );
          v23 = (*v22)--;
        if ( v23 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v26);
      operator delete(v24);
    _aeabi_memclr4(*(_QWORD *)v20, 4 * (*(_QWORD *)v20 >> 32));
    *(_DWORD *)(v20 + 8) = 0;
    *(_DWORD *)(v20 + 12) = 0;
    v27 = *(void **)v20;
    if ( *(_DWORD *)v20 && (void *)(v20 + 24) != v27 )
      operator delete(v27);
    operator delete((void *)v20);
  *((_DWORD *)v1 + 1) = 0;
  if ( *(_DWORD *)v1 )
    (*(void (**)(void))(**(_DWORD **)v1 + 4))();
  *(_DWORD *)v1 = 0;
  return v1;
}


unsigned int __fastcall UIJsonTestHelper::loadJsonScreen(int a1, int a2, int *a3)
{
  int v3; // r11@1
  int v4; // r3@1
  int *v5; // r10@1
  int v6; // r8@1
  int v7; // r0@1
  int v8; // r1@1
  int v9; // r2@1
  const Json::Value *v10; // r3@1
  VisualTree *v11; // r6@1
  unsigned int *v12; // r0@2
  unsigned int v13; // r1@4
  int v14; // r6@7
  unsigned int *v15; // r1@8
  unsigned int v16; // r0@10
  unsigned int *v17; // r5@14
  unsigned int v18; // r0@16
  __int64 v19; // r6@21
  LayoutManager *v20; // r5@21
  __int64 v21; // kr00_8@21
  unsigned int *v22; // r1@22
  unsigned int v23; // r2@24
  unsigned int v24; // r2@29
  int v25; // r6@32
  unsigned int *v26; // r0@34
  unsigned int v27; // r1@36
  unsigned int *v28; // r1@40
  unsigned int v29; // r0@42
  unsigned int *v30; // r7@46
  unsigned int v31; // r0@48
  unsigned int *v32; // r4@55
  unsigned int v33; // r0@57
  unsigned int *v34; // r6@61
  unsigned int v35; // r0@63
  unsigned int v36; // r0@70
  unsigned int *v37; // r4@74
  unsigned int v38; // r0@76
  int v39; // r4@81
  unsigned int *v40; // r1@82
  unsigned int v41; // r0@84
  unsigned int *v42; // r5@88
  unsigned int v43; // r0@90
  int v44; // r4@95
  unsigned int *v45; // r1@96
  unsigned int v46; // r0@98
  unsigned int *v47; // r5@102
  unsigned int v48; // r0@104
  unsigned int result; // r0@109
  int v50; // r4@111
  unsigned int *v51; // r1@112
  unsigned int *v52; // r5@118
  int v53; // [sp+20h] [bp-38h]@21
  signed int v54; // [sp+24h] [bp-34h]@21
  LayoutManager *v55; // [sp+28h] [bp-30h]@21
  ScreenView *v56; // [sp+2Ch] [bp-2Ch]@21
  int v57; // [sp+30h] [bp-28h]@21
  void **v58; // [sp+34h] [bp-24h]@21
  int v59; // [sp+38h] [bp-20h]@1
  int v60; // [sp+3Ch] [bp-1Ch]@1
  int v61; // [sp+40h] [bp-18h]@1
  int v62; // [sp+44h] [bp-14h]@1
  VisualTree *v63; // [sp+48h] [bp-10h]@1
  int v64; // [sp+4Ch] [bp-Ch]@1
  int v65; // [sp+50h] [bp-8h]@1
  int v66; // [sp+54h] [bp-4h]@1
  int v67; // [sp+58h] [bp+0h]@1
  int v68; // [sp+5Ch] [bp+4h]@1
  int v69; // [sp+60h] [bp+8h]@1
  int v70; // [sp+64h] [bp+Ch]@111
  char v71; // [sp+68h] [bp+10h]@21

  v3 = a1;
  v4 = a1 + 4;
  v5 = a3;
  v6 = a2;
  v7 = *(_DWORD *)(a1 + 4);
  v8 = *(_DWORD *)(v4 + 4);
  v9 = *(_DWORD *)(v4 + 8);
  v10 = *(const Json::Value **)(v4 + 12);
  v68 = 0;
  v66 = 0;
  v67 = 0;
  v64 = 0;
  v65 = 0;
  j__ZNSt12__shared_ptrI16UIControlFactoryLN9__gnu_cxx12_Lock_policyE2EEC2ISaIS0_EJR15UIDefRepositoryRN4Json5ValueER12NameRegistryR13UISoundPlayerDnDnDnDnDnEEESt19_Sp_make_shared_tagRKT_DpOT0_(
    (int)&v69,
    (int)&v63,
    v9,
    v10,
    v7,
    v8);
  v11 = (VisualTree *)operator new(0x78u);
  VisualTree::VisualTree(v11);
  v63 = v11;
  UIControlFactory::createControlTree((int)&v61, v69, v6, (int)v11, 0, 1, 0, 0);
  v59 = v61;
  v60 = v62;
  if ( v62 )
  {
    v12 = (unsigned int *)(v62 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v13 = __ldrex(v12);
      while ( __strex(v13 + 1, v12) );
    }
    else
      ++*v12;
  }
  VisualTree::initRootControl((int)v11, (int)&v59);
  v14 = v60;
  if ( v60 )
    v15 = (unsigned int *)(v60 + 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 == 1 )
      v17 = (unsigned int *)(v14 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 8))(v14);
      if ( &pthread_create )
      {
        __dmb();
        do
          v18 = __ldrex(v17);
        while ( __strex(v18 - 1, v17) );
      }
      else
        v18 = (*v17)--;
      if ( v18 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 12))(v14);
  v58 = &off_26DF2B4;
  v19 = *(_QWORD *)v3;
  v20 = (LayoutManager *)operator new(0x1Cu);
  LayoutManager::LayoutManager(v20);
  v55 = v20;
  j__ZNSt12__shared_ptrI10ScreenViewLN9__gnu_cxx12_Lock_policyE2EEC2ISaIS0_EJR12NameRegistryR15KeyboardManagerSt10unique_ptrI16ScreenControllerSt14default_deleteISB_EESA_I10VisualTreeSC_ISF_EERSt10shared_ptrI16UIControlFactoryER21TestUIMeasureStrategySA_I13LayoutManagerSC_ISO_EEEEESt19_Sp_make_shared_tagRKT_DpOT0_(
    (int)&v56,
    (int)&v71,
    HIDWORD(v19),
    v19,
    v5,
    (int *)&v63,
    (int)&v58,
    (int *)&v55);
  std::unique_ptr<LayoutManager,std::default_delete<LayoutManager>>::~unique_ptr(&v55);
  v53 = 1148846080;
  v54 = 1148846080;
  ScreenView::setSize((int)v56, (int)&v53);
  ScreenView::onFocusGained(v56);
  v21 = *(_QWORD *)&v56;
  if ( v57 )
    v22 = (unsigned int *)(v57 + 4);
        v23 = __ldrex(v22);
      while ( __strex(v23 + 1, v22) );
      ++*v22;
        v24 = __ldrex(v22);
      while ( __strex(v24 + 1, v22) );
  *(_DWORD *)(v3 + 40) = v21;
  v25 = *(_DWORD *)(v3 + 44);
  if ( HIDWORD(v21) != v25 )
    if ( HIDWORD(v21) )
      v26 = (unsigned int *)(HIDWORD(v21) + 4);
          v27 = __ldrex(v26);
        while ( __strex(v27 + 1, v26) );
        v25 = *(_DWORD *)(v3 + 44);
        ++*v26;
    if ( v25 )
      v28 = (unsigned int *)(v25 + 4);
          v29 = __ldrex(v28);
        while ( __strex(v29 - 1, v28) );
        v29 = (*v28)--;
      if ( v29 == 1 )
        v30 = (unsigned int *)(v25 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v25 + 8))(v25);
        if ( &pthread_create )
        {
          __dmb();
          do
            v31 = __ldrex(v30);
          while ( __strex(v31 - 1, v30) );
        }
        else
          v31 = (*v30)--;
        if ( v31 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v25 + 12))(v25);
    *(_DWORD *)(v3 + 44) = HIDWORD(v21);
  if ( HIDWORD(v21) )
    v32 = (unsigned int *)(HIDWORD(v21) + 4);
        v33 = __ldrex(v32);
      while ( __strex(v33 - 1, v32) );
      v33 = (*v32)--;
    if ( v33 == 1 )
      v34 = (unsigned int *)(HIDWORD(v21) + 8);
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v21) + 8))(HIDWORD(v21));
          v35 = __ldrex(v34);
        while ( __strex(v35 - 1, v34) );
        v35 = (*v34)--;
      if ( v35 == 1 )
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v21) + 12))(HIDWORD(v21));
        v36 = __ldrex(v32);
      while ( __strex(v36 - 1, v32) );
      v36 = (*v32)--;
    if ( v36 == 1 )
      v37 = (unsigned int *)(HIDWORD(v21) + 8);
          v38 = __ldrex(v37);
        while ( __strex(v38 - 1, v37) );
        v38 = (*v37)--;
      if ( v38 == 1 )
  v39 = v57;
    v40 = (unsigned int *)(v57 + 4);
        v41 = __ldrex(v40);
      while ( __strex(v41 - 1, v40) );
      v41 = (*v40)--;
    if ( v41 == 1 )
      v42 = (unsigned int *)(v39 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v39 + 8))(v39);
          v43 = __ldrex(v42);
        while ( __strex(v43 - 1, v42) );
        v43 = (*v42)--;
      if ( v43 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v39 + 12))(v39);
  v44 = v62;
    v45 = (unsigned int *)(v62 + 4);
        v46 = __ldrex(v45);
      while ( __strex(v46 - 1, v45) );
      v46 = (*v45)--;
    if ( v46 == 1 )
      v47 = (unsigned int *)(v44 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v44 + 8))(v44);
          v48 = __ldrex(v47);
        while ( __strex(v48 - 1, v47) );
        v48 = (*v47)--;
      if ( v48 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v44 + 12))(v44);
  result = (unsigned int)v63;
  if ( v63 )
    result = (*(int (**)(void))(*(_DWORD *)v63 + 4))();
  v50 = v70;
  if ( v70 )
    v51 = (unsigned int *)(v70 + 4);
        result = __ldrex(v51);
      while ( __strex(result - 1, v51) );
      result = (*v51)--;
    if ( result == 1 )
      v52 = (unsigned int *)(v50 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v50 + 8))(v50);
          result = __ldrex(v52);
        while ( __strex(result - 1, v52) );
        result = (*v52)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v50 + 12))(v50);
  return result;
}


char *__fastcall UIJsonTestHelper::getScreenView(UIJsonTestHelper *this)
{
  return (char *)this + 40;
}
