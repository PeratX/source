

int __fastcall StorageDependencyScreenController::_getAdditionalCollectionIndex(int a1, int a2, const char **a3)
{
  int v3; // r5@1
  const char **v4; // r4@1
  Json::Value *v5; // r5@1
  const Json::Value *v6; // r0@3
  Json::Value *v7; // r0@5
  int v8; // r4@5
  int v10; // [sp+0h] [bp-30h]@1
  char v11; // [sp+10h] [bp-20h]@3

  v3 = a2;
  v4 = a3;
  Json::Value::Value(&v10, 0);
  v5 = (Json::Value *)(v3 + 8);
  if ( Json::Value::isNull(v5) || Json::Value::isObject(v5) != 1 )
  {
    Json::Value::Value((Json::Value *)&v11, (const Json::Value *)&v10);
  }
  else
    v6 = (const Json::Value *)Json::Value::operator[]((int)v5, "#collections");
    Json::Value::Value((Json::Value *)&v11, v6);
  Json::Value::~Value((Json::Value *)&v10);
  v7 = (Json::Value *)Json::Value::operator[]((Json::Value *)&v11, v4);
  v8 = Json::Value::asInt(v7, -1);
  Json::Value::~Value((Json::Value *)&v11);
  return v8;
}


signed int __fastcall StorageDependencyScreenController::createDepdendencyPopup(__int64 a1)
{
  __int64 v1; // r4@1
  __int64 i; // r6@1
  unsigned int v3; // r1@2
  bool v4; // cf@2
  bool v5; // zf@2
  signed int v6; // r1@2
  signed int v7; // r2@5
  __int64 v8; // r0@8
  signed int v9; // r6@12
  int v10; // r0@13
  void *v11; // r0@14
  void (__fastcall *v12)(int *, _DWORD, signed int); // r3@15
  int v13; // r10@16 OVERLAPPED
  int v14; // r9@16 OVERLAPPED
  int v15; // r6@16
  __int64 v16; // kr08_8@18
  void *v17; // r0@18
  int v18; // r3@18
  void (*v19)(void); // r3@18
  unsigned int *v21; // r2@25
  signed int v22; // r1@27
  int v23; // [sp+4h] [bp-9Ch]@16
  int v24; // [sp+8h] [bp-98h]@18
  void (__fastcall *v25)(int *, int *, signed int); // [sp+Ch] [bp-94h]@15
  int v26; // [sp+10h] [bp-90h]@16
  int v27; // [sp+18h] [bp-88h]@13
  int v28; // [sp+1Ch] [bp-84h]@13
  const char *v29; // [sp+20h] [bp-80h]@13
  char v30; // [sp+27h] [bp-79h]@13
  char v31; // [sp+28h] [bp-78h]@13
  int v32; // [sp+54h] [bp-4Ch]@18
  int v33; // [sp+58h] [bp-48h]@18
  int v34; // [sp+5Ch] [bp-44h]@18
  __int64 v35; // [sp+60h] [bp-40h]@18
  void *v36; // [sp+68h] [bp-38h]@18
  int v37; // [sp+6Ch] [bp-34h]@18
  void (*v38)(void); // [sp+70h] [bp-30h]@18
  int v39; // [sp+74h] [bp-2Ch]@18

  v1 = a1;
  *(_DWORD *)(a1 + 444) = *(_DWORD *)(a1 + 440);
  LODWORD(a1) = *(_DWORD *)(a1 + 432);
  ContentManager::populateDependencies(a1);
  for ( i = *(_QWORD *)*(_DWORD *)(v1 + 436); HIDWORD(i) != (_DWORD)i; LODWORD(i) = i + 4 )
  {
    v3 = *(_DWORD *)(*(_DWORD *)i + 32) - 3;
    v4 = v3 >= 1;
    v5 = v3 == 1;
    v6 = 0;
    if ( !v5 && v4 )
      v6 = 1;
    if ( (unsigned __int64)(*(_QWORD *)(*(_DWORD *)i + 32) - 3LL) >> 32 )
      v7 = 1;
    else
      v7 = v6;
    if ( !v7 )
    {
      HIDWORD(v8) = *(_DWORD *)i + 332;
      LODWORD(v8) = v1;
      StorageDependencyScreenController::_populateAllDependencies(v8);
    }
  }
  if ( *(_QWORD *)(v1 + 440) >> 32 == (unsigned int)*(_QWORD *)(v1 + 440) )
    if ( !*(_DWORD *)(HIDWORD(v1) + 8) )
      sub_21E5F48();
    v9 = 0;
    (*(void (__fastcall **)(_DWORD, _DWORD))(HIDWORD(v1) + 12))(HIDWORD(v1), 0);
    *(_DWORD *)(v1 + 444) = *(_DWORD *)(v1 + 440);
  else
    v10 = UIPropertyBag::UIPropertyBag((int)&v31);
    UIPropertyBag::set<char [13]>(v10, 4, "name", "popup_dialog");
    v30 = 1;
    UIPropertyBag::set<bool>((int)&v31, 9, "exclusive", &v30);
    UIPropertyBag::set<char [25]>((int)&v31, 10, "control_id", "storage_dependency_popup");
    UIPropertyBag::set<char [36]>((int)&v31, 17, "#modal_title_text", "storageManager.dependency.titleText");
    gsl::basic_string_span<char const,-1>::remove_z<26u>((int)&v28, (int)"#modal_middle_button_text");
    UIPropertyBag::set<char [11]>((int)&v31, v28, v29, "gui.cancel");
    sub_21E94B4((void **)&v27, "popup_dialog_factory");
    if ( !*(_DWORD *)(v1 + 12) )
    (*(void (__fastcall **)(_DWORD, int *, char *))(v1 + 16))(v1 + 4, &v27, &v31);
    v11 = (void *)(v27 - 12);
    if ( (int *)(v27 - 12) != &dword_28898C0 )
      v21 = (unsigned int *)(v27 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v22 = __ldrex(v21);
        while ( __strex(v22 - 1, v21) );
      }
      else
        v22 = (*v21)--;
      if ( v22 <= 0 )
        j_j_j_j__ZdlPv_9(v11);
    v25 = 0;
    v12 = *(void (__fastcall **)(int *, _DWORD, signed int))(HIDWORD(v1) + 8);
    if ( v12 )
      v12(&v23, HIDWORD(v1), 2);
      v13 = *(_DWORD *)(HIDWORD(v1) + 12);
      v26 = *(_DWORD *)(HIDWORD(v1) + 12);
      v14 = *(_DWORD *)(HIDWORD(v1) + 8);
      v25 = *(void (__fastcall **)(int *, int *, signed int))(HIDWORD(v1) + 8);
      v15 = v1;
      v13 = v26;
      v14 = 0;
    v32 = v15;
    v16 = *(_QWORD *)&v23;
    v33 = v23;
    v34 = v24;
    v35 = *(_QWORD *)&v14;
    v38 = 0;
    v17 = operator new(0x14u);
    *((_DWORD *)v17 + 2) = HIDWORD(v16);
    *(_DWORD *)v17 = v15;
    *((_DWORD *)v17 + 1) = v16;
    LODWORD(v35) = 0;
    *(_QWORD *)((char *)v17 + 12) = *(_QWORD *)&v14;
    v36 = v17;
    v18 = v37;
    *(_QWORD *)&v36 = *(_QWORD *)(v1 + 404);
    *(_DWORD *)(v1 + 404) = v17;
    *(_DWORD *)(v1 + 408) = v18;
    v38 = *(void (**)(void))(v1 + 412);
    v19 = v38;
    *(_DWORD *)(v1 + 412) = sub_1417142;
    v39 = *(_DWORD *)(v1 + 416);
    *(_DWORD *)(v1 + 416) = sub_1417124;
    if ( v19 )
      v19();
      if ( (_DWORD)v35 )
        ((void (*)(void))v35)();
    if ( v25 )
      v25(&v23, &v23, 3);
    UIPropertyBag::~UIPropertyBag((UIPropertyBag *)&v31);
    v9 = 1;
  return v9;
}


ScreenController *__fastcall StorageDependencyScreenController::~StorageDependencyScreenController(StorageDependencyScreenController *this)
{
  MainMenuScreenController *v1; // r4@1
  void *v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_26E85A0;
  v2 = (void *)*((_DWORD *)this + 110);
  if ( v2 )
    operator delete(v2);
  return j_j_j__ZN24MainMenuScreenControllerD2Ev(v1);
}


int __fastcall StorageDependencyScreenController::StorageDependencyScreenController(int a1, int a2, int a3, int a4)
{
  int v4; // r4@1
  int v5; // r8@1
  int v6; // r0@1
  int v7; // r6@1
  unsigned int *v8; // r0@2
  unsigned int v9; // r1@4
  int v10; // r5@7
  unsigned int *v11; // r1@8
  unsigned int v12; // r0@10
  unsigned int *v13; // r7@14
  unsigned int v14; // r0@16
  int v16; // [sp+0h] [bp-20h]@1
  int v17; // [sp+4h] [bp-1Ch]@1

  v4 = a1;
  v16 = *(_DWORD *)a2;
  v5 = a4;
  v6 = *(_DWORD *)(a2 + 4);
  v7 = a3;
  v17 = v6;
  if ( v6 )
  {
    v8 = (unsigned int *)(v6 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 + 1, v8) );
    }
    else
      ++*v8;
  }
  MainMenuScreenController::MainMenuScreenController(v4, (int)&v16);
  v10 = v17;
  if ( v17 )
    v11 = (unsigned int *)(v17 + 4);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 == 1 )
      v13 = (unsigned int *)(v10 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 8))(v10);
      if ( &pthread_create )
      {
        __dmb();
        do
          v14 = __ldrex(v13);
        while ( __strex(v14 - 1, v13) );
      }
      else
        v14 = (*v13)--;
      if ( v14 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 12))(v10);
  *(_DWORD *)v4 = &off_26E85A0;
  *(_DWORD *)(v4 + 432) = v7;
  *(_DWORD *)(v4 + 436) = v5;
  *(_DWORD *)(v4 + 440) = 0;
  *(_DWORD *)(v4 + 444) = 0;
  *(_DWORD *)(v4 + 448) = 0;
  StorageDependencyScreenController::_registerBindings((StorageDependencyScreenController *)v4);
  MinecraftScreenController::_setExitBehavior(v4, 3);
  return v4;
}


void __fastcall StorageDependencyScreenController::~StorageDependencyScreenController(StorageDependencyScreenController *this)
{
  MainMenuScreenController *v1; // r4@1
  void *v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_26E85A0;
  v2 = (void *)*((_DWORD *)this + 110);
  if ( v2 )
    operator delete(v2);
  MainMenuScreenController::~MainMenuScreenController(v1);
  j_j_j__ZdlPv_5((void *)v1);
}


void __fastcall StorageDependencyScreenController::~StorageDependencyScreenController(StorageDependencyScreenController *this)
{
  StorageDependencyScreenController::~StorageDependencyScreenController(this);
}


void __fastcall StorageDependencyScreenController::_registerBindings(StorageDependencyScreenController *this)
{
  StorageDependencyScreenController::_registerBindings(this);
}


int __fastcall StorageDependencyScreenController::_populateAllDependencies(__int64 a1)
{
  int *v1; // r7@1
  int *v2; // r10@1
  int v3; // r9@1
  int v4; // r6@4
  int v5; // t1@7
  void *v6; // r11@9
  unsigned int v7; // r1@10 OVERLAPPED
  unsigned int v8; // r2@10 OVERLAPPED
  int *v9; // r3@10
  int v10; // t1@11
  char *v11; // r8@15
  unsigned int v12; // r2@15
  unsigned int v13; // r1@17
  unsigned int v14; // r4@17
  char *v15; // r6@24
  int v16; // r6@26
  __int64 v17; // r0@29

  v2 = (int *)(*(_QWORD *)HIDWORD(a1) >> 32);
  v1 = (int *)*(_QWORD *)HIDWORD(a1);
  v3 = a1;
  while ( v1 != v2 )
  {
    v4 = *v1;
    if ( *v1 )
    {
      LODWORD(a1) = *(_BYTE *)(v4 + 48);
      if ( !(a1 & 1) )
      {
        a1 = *(_QWORD *)*(_DWORD *)(v3 + 436);
        if ( (_DWORD)a1 == HIDWORD(a1) )
        {
LABEL_9:
          LODWORD(a1) = *(_QWORD *)(v3 + 440) >> 32;
          v6 = (void *)*(_QWORD *)(v3 + 440);
          if ( v6 == (void *)a1 )
          {
LABEL_13:
            if ( (_DWORD)a1 == *(_DWORD *)(v3 + 448) )
            {
              v11 = 0;
              v12 = ((signed int)a1 - (signed int)v6) >> 2;
              if ( !v12 )
                v12 = 1;
              HIDWORD(a1) = v12 + (((signed int)a1 - (signed int)v6) >> 2);
              v14 = v12 + (((signed int)a1 - (signed int)v6) >> 2);
              if ( 0 != HIDWORD(a1) >> 30 )
                v14 = 0x3FFFFFFF;
              if ( v13 < v12 )
              if ( v14 )
              {
                if ( v14 >= 0x40000000 )
                  sub_21E57F4();
                v11 = (char *)operator new(4 * v14);
                LODWORD(a1) = *(_QWORD *)(v3 + 440) >> 32;
                v6 = (void *)*(_QWORD *)(v3 + 440);
              }
              *(_DWORD *)&v11[a1 - (_DWORD)v6] = v4;
              v15 = &v11[a1 - (_DWORD)v6];
              if ( ((signed int)a1 - (signed int)v6) >> 2 )
                _aeabi_memmove4(v11, v6);
              v16 = (int)(v15 + 4);
              if ( v6 )
                operator delete(v6);
              *(_DWORD *)(v3 + 440) = v11;
              *(_DWORD *)(v3 + 444) = v16;
              *(_DWORD *)(v3 + 448) = &v11[4 * v14];
            }
            else
              *(_DWORD *)a1 = v4;
              *(_DWORD *)(v3 + 444) += 4;
            HIDWORD(v17) = *v1 + 332;
            LODWORD(v17) = v3;
            LODWORD(a1) = StorageDependencyScreenController::_populateAllDependencies(v17);
          }
          else
            *(_QWORD *)&v7 = *(_QWORD *)(v4 + 8);
            v9 = (int *)*(_QWORD *)(v3 + 440);
            while ( 1 )
              v10 = *v9;
              ++v9;
              if ( *(_QWORD *)(v10 + 8) == __PAIR__(v8, v7) )
                break;
              if ( (int *)a1 == v9 )
                goto LABEL_13;
        }
        else
          while ( 1 )
            v5 = *(_DWORD *)a1;
            LODWORD(a1) = a1 + 4;
            if ( *(_QWORD *)(v5 + 8) == *(_QWORD *)(v4 + 8) )
              break;
            if ( HIDWORD(a1) == (_DWORD)a1 )
              goto LABEL_9;
      }
    }
    ++v1;
  }
  return a1;
}


char *__fastcall StorageDependencyScreenController::_populateDependencies(__int64 this)
{
  int v1; // r4@1
  char *result; // r0@1
  int v3; // r5@1 OVERLAPPED
  int v4; // r6@1 OVERLAPPED
  unsigned int v5; // r1@2
  bool v6; // cf@2
  bool v7; // zf@2
  signed int v8; // r1@2
  signed int v9; // r2@5
  __int64 v10; // r0@8

  v1 = this;
  *(_DWORD *)(this + 444) = *(_DWORD *)(this + 440);
  LODWORD(this) = *(_DWORD *)(this + 432);
  ContentManager::populateDependencies(this);
  result = *(char **)(v1 + 436);
  for ( *(_QWORD *)&v3 = *(_QWORD *)result; v4 != v3; v3 += 4 )
  {
    result = *(char **)v3;
    v5 = *(_DWORD *)(*(_DWORD *)v3 + 32) - 3;
    v6 = v5 >= 1;
    v7 = v5 == 1;
    v8 = 0;
    if ( !v7 && v6 )
      v8 = 1;
    if ( (unsigned __int64)(*(_QWORD *)(*(_DWORD *)v3 + 32) - 3LL) >> 32 )
      v9 = 1;
    else
      v9 = v8;
    if ( !v9 )
    {
      HIDWORD(v10) = result + 332;
      LODWORD(v10) = v1;
      result = (char *)StorageDependencyScreenController::_populateAllDependencies(v10);
    }
  }
  return result;
}


void __fastcall StorageDependencyScreenController::_registerBindings(StorageDependencyScreenController *this)
{
  ScreenController *v1; // r4@1
  _DWORD *v2; // r0@1
  __int64 v3; // r1@1
  __int64 v4; // r1@1
  _DWORD *v5; // r0@5
  __int64 v6; // r1@5
  __int64 v7; // r1@5
  _DWORD *v8; // r0@9
  __int64 v9; // r1@9
  __int64 v10; // r1@9
  _DWORD *v11; // r0@13
  __int64 v12; // r1@13
  __int64 v13; // r1@13
  _DWORD *v14; // r0@17
  __int64 v15; // r1@17
  __int64 v16; // r1@17
  _DWORD *v17; // r0@21
  __int64 v18; // r1@21
  __int64 v19; // r1@21
  _DWORD *v20; // r0@25
  __int64 v21; // r1@25
  __int64 v22; // r1@25
  _DWORD *v23; // r0@29
  __int64 v24; // r1@29
  __int64 v25; // r1@29
  _DWORD *v26; // r0@33
  __int64 v27; // r1@33
  __int64 v28; // r1@33
  _DWORD *v29; // r0@37
  __int64 v30; // r1@37
  __int64 v31; // r1@37
  _DWORD *v32; // r0@41
  __int64 v33; // r1@41
  _DWORD *v34; // r0@43
  __int64 v35; // r1@43
  _DWORD *v36; // r0@45
  __int64 v37; // r1@45
  _DWORD *v38; // r0@47
  __int64 v39; // r1@47
  _DWORD *v40; // r0@49
  __int64 v41; // r1@49
  _DWORD *v42; // r0@51
  __int64 v43; // r1@51
  _DWORD *v44; // r0@53
  __int64 v45; // r1@53
  int v46; // r5@55
  _DWORD *v47; // r0@55
  __int64 v48; // r1@55
  void *v49; // r0@57
  unsigned int *v50; // r2@59
  signed int v51; // r1@61
  _DWORD *v52; // [sp+4h] [bp-25Ch]@55
  __int64 v53; // [sp+Ch] [bp-254h]@55
  int v54; // [sp+18h] [bp-248h]@55
  _DWORD *v55; // [sp+1Ch] [bp-244h]@53
  __int64 v56; // [sp+24h] [bp-23Ch]@53
  int v57; // [sp+2Ch] [bp-234h]@53
  char v58; // [sp+30h] [bp-230h]@53
  _DWORD *v59; // [sp+34h] [bp-22Ch]@51
  __int64 v60; // [sp+3Ch] [bp-224h]@51
  int v61; // [sp+44h] [bp-21Ch]@51
  char v62; // [sp+48h] [bp-218h]@51
  _DWORD *v63; // [sp+4Ch] [bp-214h]@49
  __int64 v64; // [sp+54h] [bp-20Ch]@49
  int v65; // [sp+5Ch] [bp-204h]@49
  char v66; // [sp+60h] [bp-200h]@49
  _DWORD *v67; // [sp+64h] [bp-1FCh]@47
  __int64 v68; // [sp+6Ch] [bp-1F4h]@47
  int v69; // [sp+74h] [bp-1ECh]@47
  char v70; // [sp+78h] [bp-1E8h]@47
  _DWORD *v71; // [sp+7Ch] [bp-1E4h]@45
  __int64 v72; // [sp+84h] [bp-1DCh]@45
  int v73; // [sp+8Ch] [bp-1D4h]@45
  char v74; // [sp+90h] [bp-1D0h]@45
  _DWORD *v75; // [sp+94h] [bp-1CCh]@43
  __int64 v76; // [sp+9Ch] [bp-1C4h]@43
  int v77; // [sp+A4h] [bp-1BCh]@43
  char v78; // [sp+A8h] [bp-1B8h]@43
  _DWORD *v79; // [sp+ACh] [bp-1B4h]@41
  __int64 v80; // [sp+B4h] [bp-1ACh]@41
  int v81; // [sp+BCh] [bp-1A4h]@41
  char v82; // [sp+C0h] [bp-1A0h]@41
  void *v83; // [sp+C4h] [bp-19Ch]@37
  __int64 v84; // [sp+CCh] [bp-194h]@37
  _DWORD *v85; // [sp+D4h] [bp-18Ch]@37
  __int64 v86; // [sp+DCh] [bp-184h]@37
  int v87; // [sp+E4h] [bp-17Ch]@37
  int v88; // [sp+E8h] [bp-178h]@37
  void *v89; // [sp+ECh] [bp-174h]@33
  __int64 v90; // [sp+F4h] [bp-16Ch]@33
  _DWORD *v91; // [sp+FCh] [bp-164h]@33
  __int64 v92; // [sp+104h] [bp-15Ch]@33
  int v93; // [sp+10Ch] [bp-154h]@33
  int v94; // [sp+110h] [bp-150h]@33
  void *v95; // [sp+114h] [bp-14Ch]@29
  __int64 v96; // [sp+11Ch] [bp-144h]@29
  _DWORD *v97; // [sp+124h] [bp-13Ch]@29
  __int64 v98; // [sp+12Ch] [bp-134h]@29
  int v99; // [sp+134h] [bp-12Ch]@29
  int v100; // [sp+138h] [bp-128h]@29
  void *v101; // [sp+13Ch] [bp-124h]@25
  __int64 v102; // [sp+144h] [bp-11Ch]@25
  _DWORD *v103; // [sp+14Ch] [bp-114h]@25
  __int64 v104; // [sp+154h] [bp-10Ch]@25
  int v105; // [sp+15Ch] [bp-104h]@25
  int v106; // [sp+160h] [bp-100h]@25
  void *v107; // [sp+164h] [bp-FCh]@21
  __int64 v108; // [sp+16Ch] [bp-F4h]@21
  _DWORD *v109; // [sp+174h] [bp-ECh]@21
  __int64 v110; // [sp+17Ch] [bp-E4h]@21
  int v111; // [sp+184h] [bp-DCh]@21
  int v112; // [sp+188h] [bp-D8h]@21
  void *v113; // [sp+18Ch] [bp-D4h]@17
  __int64 v114; // [sp+194h] [bp-CCh]@17
  _DWORD *v115; // [sp+19Ch] [bp-C4h]@17
  __int64 v116; // [sp+1A4h] [bp-BCh]@17
  int v117; // [sp+1ACh] [bp-B4h]@17
  int v118; // [sp+1B0h] [bp-B0h]@17
  void *v119; // [sp+1B4h] [bp-ACh]@13
  __int64 v120; // [sp+1BCh] [bp-A4h]@13
  _DWORD *v121; // [sp+1C4h] [bp-9Ch]@13
  __int64 v122; // [sp+1CCh] [bp-94h]@13
  int v123; // [sp+1D4h] [bp-8Ch]@13
  int v124; // [sp+1D8h] [bp-88h]@13
  void *v125; // [sp+1DCh] [bp-84h]@9
  __int64 v126; // [sp+1E4h] [bp-7Ch]@9
  _DWORD *v127; // [sp+1ECh] [bp-74h]@9
  __int64 v128; // [sp+1F4h] [bp-6Ch]@9
  int v129; // [sp+1FCh] [bp-64h]@9
  int v130; // [sp+200h] [bp-60h]@9
  void *v131; // [sp+204h] [bp-5Ch]@5
  __int64 v132; // [sp+20Ch] [bp-54h]@5
  _DWORD *v133; // [sp+214h] [bp-4Ch]@5
  __int64 v134; // [sp+21Ch] [bp-44h]@5
  int v135; // [sp+224h] [bp-3Ch]@5
  void *v136; // [sp+228h] [bp-38h]@1
  __int64 v137; // [sp+230h] [bp-30h]@1
  _DWORD *v138; // [sp+238h] [bp-28h]@1
  __int64 v139; // [sp+240h] [bp-20h]@1
  int v140; // [sp+248h] [bp-18h]@1

  v1 = this;
  StringHash::StringHash<char [23]>(&v140, (int)"#dependency_label_text");
  v2 = operator new(4u);
  LODWORD(v3) = sub_141787C;
  *v2 = v1;
  HIDWORD(v3) = sub_14171C8;
  v138 = v2;
  v139 = v3;
  v136 = operator new(1u);
  LODWORD(v4) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v4) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v137 = v4;
  ScreenController::bindString((int)v1, &v140, (int)&v138, (int)&v136);
  if ( (_DWORD)v137 )
    ((void (*)(void))v137)();
  if ( (_DWORD)v139 )
    ((void (*)(void))v139)();
  v135 = 2085746548;
  v5 = operator new(4u);
  LODWORD(v6) = sub_14178C0;
  *v5 = v1;
  HIDWORD(v6) = sub_14178B2;
  v133 = v5;
  v134 = v6;
  v131 = operator new(1u);
  LODWORD(v7) = ZNSt14_Function_base13_Base_managerIZN16ScreenController7bindIntERK10StringHashRKSt8functionIFivEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v7) = ZNSt17_Function_handlerIFbvEZN16ScreenController7bindIntERK10StringHashRKSt8functionIFivEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v132 = v7;
  ScreenController::bindInt((int)v1, &v135, (int)&v133, (int)&v131);
  if ( (_DWORD)v132 )
    ((void (*)(void))v132)();
  if ( (_DWORD)v134 )
    ((void (*)(void))v134)();
  v130 = 1146073234;
  v129 = 1626074817;
  v8 = operator new(4u);
  LODWORD(v9) = sub_141790C;
  *v8 = v1;
  HIDWORD(v9) = sub_14178F6;
  v127 = v8;
  v128 = v9;
  v125 = operator new(1u);
  LODWORD(v10) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v10) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v126 = v10;
  ScreenController::bindStringForCollection((int)v1, &v130, &v129, (int)&v127, (int)&v125);
  if ( (_DWORD)v126 )
    ((void (*)(void))v126)();
  if ( (_DWORD)v128 )
    ((void (*)(void))v128)();
  StringHash::StringHash<char [24]>(&v124, (int)"#sub_dependency_version");
  v123 = 1626074817;
  v11 = operator new(4u);
  LODWORD(v12) = sub_1417AD8;
  *v11 = v1;
  HIDWORD(v12) = sub_1417944;
  v121 = v11;
  v122 = v12;
  v119 = operator new(1u);
  LODWORD(v13) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v13) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v120 = v13;
  ScreenController::bindStringForCollection((int)v1, &v124, &v123, (int)&v121, (int)&v119);
  if ( (_DWORD)v120 )
    ((void (*)(void))v120)();
  if ( (_DWORD)v122 )
    ((void (*)(void))v122)();
  StringHash::StringHash<char [28]>(&v118, (int)"#sub_dependency_description");
  v117 = 1626074817;
  v14 = operator new(4u);
  LODWORD(v15) = sub_1417B24;
  *v14 = v1;
  HIDWORD(v15) = sub_1417B0E;
  v115 = v14;
  v116 = v15;
  v113 = operator new(1u);
  LODWORD(v16) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v16) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v114 = v16;
  ScreenController::bindStringForCollection((int)v1, &v118, &v117, (int)&v115, (int)&v113);
  if ( (_DWORD)v114 )
    ((void (*)(void))v114)();
  if ( (_DWORD)v116 )
    ((void (*)(void))v116)();
  v111 = 1626074817;
  v112 = 1836542952;
  v17 = operator new(4u);
  LODWORD(v18) = sub_1417B72;
  *v17 = v1;
  HIDWORD(v18) = sub_1417B5A;
  v109 = v17;
  v110 = v18;
  v107 = operator new(1u);
  LODWORD(v19) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v19) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v108 = v19;
  ScreenController::bindStringForCollection((int)v1, &v112, &v111, (int)&v109, (int)&v107);
  if ( (_DWORD)v108 )
    ((void (*)(void))v108)();
  if ( (_DWORD)v110 )
    ((void (*)(void))v110)();
  v105 = 1626074817;
  v106 = -957265789;
  v20 = operator new(4u);
  LODWORD(v21) = sub_1417BBE;
  *v20 = v1;
  HIDWORD(v21) = sub_1417BA8;
  v103 = v20;
  v104 = v21;
  v101 = operator new(1u);
  LODWORD(v22) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v22) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v102 = v22;
  ScreenController::bindStringForCollection((int)v1, &v106, &v105, (int)&v103, (int)&v101);
  if ( (_DWORD)v102 )
    ((void (*)(void))v102)();
  if ( (_DWORD)v104 )
    ((void (*)(void))v104)();
  StringHash::StringHash<char [24]>(&v100, (int)"#dependency_texture_zip");
  v99 = 1626074817;
  v23 = operator new(4u);
  LODWORD(v24) = sub_1417C0A;
  *v23 = v1;
  HIDWORD(v24) = sub_1417BF4;
  v97 = v23;
  v98 = v24;
  v95 = operator new(1u);
  LODWORD(v25) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v25) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v96 = v25;
  ScreenController::bindStringForCollection((int)v1, &v100, &v99, (int)&v97, (int)&v95);
  if ( (_DWORD)v96 )
    ((void (*)(void))v96)();
  if ( (_DWORD)v98 )
    ((void (*)(void))v98)();
  StringHash::StringHash<char [32]>(&v94, (int)"#dependency_texture_file_system");
  v93 = 1626074817;
  v26 = operator new(4u);
  LODWORD(v27) = sub_1417C56;
  *v26 = v1;
  HIDWORD(v27) = sub_1417C40;
  v91 = v26;
  v92 = v27;
  v89 = operator new(1u);
  LODWORD(v28) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v28) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v90 = v28;
  ScreenController::bindStringForCollection((int)v1, &v94, &v93, (int)&v91, (int)&v89);
  if ( (_DWORD)v90 )
    ((void (*)(void))v90)();
  if ( (_DWORD)v92 )
    ((void (*)(void))v92)();
  StringHash::StringHash<char [24]>(&v88, (int)"#dependent_packs_length");
  v87 = 1626074817;
  v29 = operator new(4u);
  LODWORD(v30) = sub_1417CB4;
  *v29 = v1;
  HIDWORD(v30) = sub_1417C8C;
  v85 = v29;
  v86 = v30;
  v83 = operator new(1u);
  LODWORD(v31) = ZNSt14_Function_base13_Base_managerIZN16ScreenController20bindIntForCollectionERK10StringHashS4_RKSt8functionIFiiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v31) = ZNSt17_Function_handlerIFbiEZN16ScreenController20bindIntForCollectionERK10StringHashS4_RKSt8functionIFiiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v84 = v31;
  ScreenController::bindIntForCollection((int)v1, &v88, &v87, (int)&v85, (int)&v83);
  if ( (_DWORD)v84 )
    ((void (*)(void))v84)();
  if ( (_DWORD)v86 )
    ((void (*)(void))v86)();
  StringHash::StringHash<char [26]>(&v82, (int)"#sub_dependent_packs_name");
  v81 = 463416168;
  v32 = operator new(4u);
  LODWORD(v33) = sub_1417D10;
  *v32 = v1;
  HIDWORD(v33) = sub_1417CEA;
  v79 = v32;
  v80 = v33;
  ScreenController::bindForCollection((int)v1, &v82, &v81, (int)&v79);
  if ( (_DWORD)v80 )
    ((void (*)(void))v80)();
  StringHash::StringHash<char [29]>(&v78, (int)"#sub_dependent_packs_version");
  v77 = 463416168;
  v34 = operator new(4u);
  LODWORD(v35) = sub_1418080;
  *v34 = v1;
  HIDWORD(v35) = sub_1417E28;
  v75 = v34;
  v76 = v35;
  ScreenController::bindForCollection((int)v1, &v78, &v77, (int)&v75);
  if ( (_DWORD)v76 )
    ((void (*)(void))v76)();
  StringHash::StringHash<char [33]>(&v74, (int)"#sub_dependent_packs_description");
  v73 = 463416168;
  v36 = operator new(4u);
  LODWORD(v37) = sub_14180DC;
  *v36 = v1;
  HIDWORD(v37) = sub_14180B6;
  v71 = v36;
  v72 = v37;
  ScreenController::bindForCollection((int)v1, &v74, &v73, (int)&v71);
  if ( (_DWORD)v72 )
    ((void (*)(void))v72)();
  StringHash::StringHash<char [26]>(&v70, (int)"#sub_dependent_packs_size");
  v69 = 463416168;
  v38 = operator new(4u);
  LODWORD(v39) = sub_1418140;
  *v38 = v1;
  HIDWORD(v39) = sub_1418112;
  v67 = v38;
  v68 = v39;
  ScreenController::bindForCollection((int)v1, &v70, &v69, (int)&v67);
  if ( (_DWORD)v68 )
    ((void (*)(void))v68)();
  StringHash::StringHash<char [25]>(&v66, (int)"#dependent_packs_texture");
  v65 = 463416168;
  v40 = operator new(4u);
  LODWORD(v41) = sub_141819C;
  *v40 = v1;
  HIDWORD(v41) = sub_1418176;
  v63 = v40;
  v64 = v41;
  ScreenController::bindForCollection((int)v1, &v66, &v65, (int)&v63);
  if ( (_DWORD)v64 )
    ((void (*)(void))v64)();
  StringHash::StringHash<char [29]>(&v62, (int)"#dependent_packs_texture_zip");
  v61 = 463416168;
  v42 = operator new(4u);
  LODWORD(v43) = sub_14181F8;
  *v42 = v1;
  HIDWORD(v43) = sub_14181D2;
  v59 = v42;
  v60 = v43;
  ScreenController::bindForCollection((int)v1, &v62, &v61, (int)&v59);
  if ( (_DWORD)v60 )
    ((void (*)(void))v60)();
  StringHash::StringHash<char [37]>(&v58, (int)"#dependent_packs_texture_file_system");
  v57 = 463416168;
  v44 = operator new(4u);
  LODWORD(v45) = sub_1418254;
  *v44 = v1;
  HIDWORD(v45) = sub_141822E;
  v55 = v44;
  v56 = v45;
  ScreenController::bindForCollection((int)v1, &v58, &v57, (int)&v55);
  if ( (_DWORD)v56 )
    ((void (*)(void))v56)();
  sub_21E94B4((void **)&v54, "button.remove_pack_button");
  v46 = MinecraftScreenController::_getNameId(v1, (int **)&v54);
  v47 = operator new(4u);
  LODWORD(v48) = sub_1418478;
  *v47 = v1;
  HIDWORD(v48) = sub_141828C;
  v52 = v47;
  v53 = v48;
  ScreenController::registerButtonClickHandler((int)v1, v46, (int)&v52);
  if ( (_DWORD)v53 )
    ((void (*)(void))v53)();
  v49 = (void *)(v54 - 12);
  if ( (int *)(v54 - 12) != &dword_28898C0 )
  {
    v50 = (unsigned int *)(v54 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v51 = __ldrex(v50);
      while ( __strex(v51 - 1, v50) );
    }
    else
      v51 = (*v50)--;
    if ( v51 <= 0 )
      j_j_j_j__ZdlPv_9(v49);
  }
}
