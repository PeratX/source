

int __fastcall Skin::Skin(int a1, SkinPack *a2, int *a3, const void **a4, int *a5, int a6)
{
  int v6; // r5@1
  SkinPack *v7; // r7@1
  int *v8; // r6@1
  const void **v9; // r9@1
  const void **v10; // r4@1
  const void **v11; // r4@1
  const void **v12; // r0@1
  const void **v13; // r0@1
  char *v14; // r0@1
  char *v15; // r0@2
  int *v16; // r0@3
  const void **v17; // r0@3
  void *v18; // r0@3
  int v19; // r0@4
  unsigned int *v21; // r2@5
  signed int v22; // r1@7
  unsigned int *v23; // r2@9
  signed int v24; // r1@11
  unsigned int *v25; // r2@13
  signed int v26; // r1@15
  int v27; // [sp+8h] [bp-30h]@3
  char *v28; // [sp+Ch] [bp-2Ch]@1
  char *v29; // [sp+10h] [bp-28h]@1

  v6 = a1;
  v7 = a2;
  v8 = a3;
  *(_DWORD *)a1 = a2;
  v9 = (const void **)(a1 + 4);
  v10 = a4;
  sub_119C854((int *)(a1 + 4), a3);
  sub_119C8A4(v9, v10);
  v11 = (const void **)SkinPack::getName(v7);
  v28 = (char *)&unk_28898CC;
  sub_119CAF8((const void **)&v28, *((_DWORD *)*v11 - 3) + 5);
  sub_119C894((const void **)&v28, "skin.", 5u);
  sub_119C8A4((const void **)&v28, v11);
  v12 = sub_119C894((const void **)&v28, ".", 1u);
  v29 = (char *)*v12;
  *v12 = &unk_28898CC;
  v13 = sub_119C8A4((const void **)&v29, (const void **)v8);
  *(_DWORD *)(v6 + 8) = *v13;
  *v13 = &unk_28898CC;
  v14 = v29 - 12;
  if ( (int *)(v29 - 12) != &dword_28898C0 )
  {
    v21 = (unsigned int *)(v29 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v14);
  }
  v15 = v28 - 12;
  if ( (int *)(v28 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)(v28 - 4);
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v15);
  v16 = (int *)SkinPack::getSerializableName(v7);
  sub_119C854(&v27, v16);
  sub_119C894((const void **)&v27, "_", 1u);
  v17 = sub_119C8A4((const void **)&v27, (const void **)v8);
  *(_DWORD *)(v6 + 12) = *v17;
  *v17 = &unk_28898CC;
  v18 = (void *)(v27 - 12);
  if ( (int *)(v27 - 12) != &dword_28898C0 )
    v25 = (unsigned int *)(v27 - 4);
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v18);
  sub_119C884((void **)(v6 + 16), (const char *)&unk_257BC67);
  sub_119C884((void **)(v6 + 20), (const char *)&unk_257BC67);
  sub_119C854((int *)(v6 + 24), a5);
  sub_119C854((int *)(v6 + 28), (int *)a6);
  *(_DWORD *)(v6 + 32) = *(_DWORD *)(a6 + 4);
  *(_DWORD *)(v6 + 36) = &unk_28898CC;
  v19 = v6 + 40;
  *(_DWORD *)v19 = 0;
  *(_DWORD *)(v19 + 4) = 1;
  *(_DWORD *)(v19 + 8) = -1;
  return v6;
}


int __fastcall Skin::setSkinIndex(int result, int a2)
{
  *(_DWORD *)(result + 48) = a2;
  return result;
}


char *__fastcall Skin::getCapeTextureName(Skin *this)
{
  return (char *)this + 20;
}


int __fastcall Skin::getSkinPack(Skin *this)
{
  return *(_DWORD *)this;
}


int __fastcall Skin::isCustomSkin(Skin *this)
{
  int result; // r0@1

  result = *((_DWORD *)this + 11) | 1;
  if ( result != 1 )
    result = 0;
  return result;
}


int __fastcall Skin::Skin(int a1, int a2)
{
  int v2; // r6@1
  int v3; // r5@1
  int *v4; // r4@1

  v2 = a2;
  v3 = a1;
  v4 = (int *)(a2 + 8);
  *(_DWORD *)a1 = *(_DWORD *)a2;
  sub_119C854((int *)(a1 + 4), (int *)(a2 + 4));
  sub_119C854((int *)(v3 + 8), v4);
  sub_119C854((int *)(v3 + 12), (int *)(v2 + 12));
  sub_119C854((int *)(v3 + 16), (int *)(v2 + 16));
  sub_119C854((int *)(v3 + 20), (int *)(v2 + 20));
  sub_119C854((int *)(v3 + 24), (int *)(v2 + 24));
  sub_119C854((int *)(v3 + 28), (int *)(v2 + 28));
  *(_DWORD *)(v3 + 32) = *(_DWORD *)(v2 + 32);
  sub_119C854((int *)(v3 + 36), (int *)(v2 + 36));
  *(_DWORD *)(v3 + 40) = *(_DWORD *)(v2 + 40);
  *(_QWORD *)(v3 + 44) = *(_QWORD *)(v2 + 44);
  return v3;
}


char *__fastcall Skin::getGeometryName(Skin *this)
{
  return (char *)this + 24;
}


int *__fastcall Skin::syncCapeTextureData(Skin *this, mce::TextureGroup *a2)
{
  Skin *v2; // r5@1
  mce::TextureGroup *v3; // r4@1
  char v4; // r0@1
  int v5; // r1@4
  int *result; // r0@5

  v2 = this;
  v3 = a2;
  v4 = byte_27CC530;
  __dmb();
  if ( !(v4 & 1) && j___cxa_guard_acquire((unsigned int *)&byte_27CC530) )
  {
    dword_27CC538 = 0;
    unk_27CC53C = 0;
    unk_27CC540 = 0;
    _cxa_atexit(std::vector<unsigned char,std::allocator<unsigned char>>::~vector);
    j___cxa_guard_release((unsigned int *)&byte_27CC530);
  }
  v5 = *((_DWORD *)v2 + 11);
  if ( v5 == 1 )
    result = &dword_27CC538;
  else
    result = (int *)sub_E7B5BC(*(_DWORD *)v2, v5, v3, (int)v2 + 20, (Skin *)((char *)v2 + 36));
  return result;
}


signed int __fastcall Skin::isFree(Skin *this)
{
  int v1; // r1@1
  signed int result; // r0@1

  v1 = *((_DWORD *)this + 11);
  result = 0;
  if ( v1 != 3 )
    result = 1;
  return result;
}


int __fastcall Skin::isCustomUserSkin(Skin *this)
{
  int result; // r0@1

  result = *((_DWORD *)this + 11);
  if ( result != 1 )
    result = 0;
  return result;
}


char *__fastcall Skin::getLocName(Skin *this)
{
  return (char *)this + 8;
}


int __fastcall Skin::Skin(int a1, SkinPack *a2, int *a3, int *a4, int *a5, int *a6, int *a7)
{
  int v7; // r11@1
  SkinPack *v8; // r9@1
  int *v9; // r4@1
  int *v10; // r8@1
  const void **v11; // r6@1
  const void **v12; // r0@1
  const void **v13; // r0@1
  char *v14; // r0@1
  char *v15; // r0@2
  int *v16; // r0@3
  const void **v17; // r0@3
  void *v18; // r0@3
  signed int v19; // r4@5
  _BYTE *v20; // r0@10
  Pack *v21; // r7@11
  int v22; // r6@11
  PackManifest *v23; // r0@11
  int v24; // r7@11
  int *v25; // r0@11
  __int64 v26; // r1@11
  int v27; // r0@11
  int v28; // r3@11
  char *v29; // r0@11
  char *v30; // r0@12
  int v31; // r0@13
  __int64 v32; // r2@13
  int v33; // r6@13
  char *v34; // r0@13
  char *v35; // r0@14
  unsigned int *v37; // r2@18
  signed int v38; // r1@20
  unsigned int *v39; // r2@22
  signed int v40; // r1@24
  unsigned int *v41; // r2@26
  signed int v42; // r1@28
  unsigned int *v43; // r2@30
  signed int v44; // r1@32
  unsigned int *v45; // r2@34
  signed int v46; // r1@36
  unsigned int *v47; // r2@38
  signed int v48; // r1@40
  unsigned int *v49; // r2@42
  signed int v50; // r1@44
  unsigned int *v51; // r2@46
  signed int v52; // r1@48
  char *v53; // [sp+10h] [bp-880h]@13
  char *v54; // [sp+14h] [bp-87Ch]@13
  int v55; // [sp+18h] [bp-878h]@13
  char *v56; // [sp+1Ch] [bp-874h]@11
  char *v57; // [sp+20h] [bp-870h]@11
  int v58; // [sp+24h] [bp-86Ch]@11
  _BYTE *v59; // [sp+28h] [bp-868h]@4
  int v60; // [sp+2Ch] [bp-864h]@3
  char *v61; // [sp+30h] [bp-860h]@1
  char *v62; // [sp+34h] [bp-85Ch]@1
  int v63; // [sp+38h] [bp-858h]@11
  int v64; // [sp+3Ch] [bp-854h]@11
  __int64 v65; // [sp+40h] [bp-850h]@11
  char v66; // [sp+58h] [bp-838h]@13
  int v67; // [sp+5Ch] [bp-834h]@13
  char v68; // [sp+460h] [bp-430h]@11
  int v69; // [sp+464h] [bp-42Ch]@11
  RakNet *v70; // [sp+868h] [bp-28h]@1

  v7 = a1;
  v8 = a2;
  v9 = a3;
  v10 = a4;
  v70 = _stack_chk_guard;
  *(_DWORD *)a1 = a2;
  sub_119C854((int *)(a1 + 4), a3);
  v11 = (const void **)SkinPack::getName(v8);
  v61 = (char *)&unk_28898CC;
  sub_119CAF8((const void **)&v61, *((_DWORD *)*v11 - 3) + 5);
  sub_119C894((const void **)&v61, "skin.", 5u);
  sub_119C8A4((const void **)&v61, v11);
  v12 = sub_119C894((const void **)&v61, ".", 1u);
  v62 = (char *)*v12;
  *v12 = &unk_28898CC;
  v13 = sub_119C8A4((const void **)&v62, (const void **)v9);
  *(_DWORD *)(v7 + 8) = *v13;
  *v13 = &unk_28898CC;
  v14 = v62 - 12;
  if ( (int *)(v62 - 12) != &dword_28898C0 )
  {
    v37 = (unsigned int *)(v62 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v14);
  }
  v15 = v61 - 12;
  if ( (int *)(v61 - 12) != &dword_28898C0 )
    v39 = (unsigned int *)(v61 - 4);
        v40 = __ldrex(v39);
      while ( __strex(v40 - 1, v39) );
      v40 = (*v39)--;
    if ( v40 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v15);
  v16 = (int *)SkinPack::getSerializableName(v8);
  sub_119C854(&v60, v16);
  sub_119C894((const void **)&v60, "_", 1u);
  v17 = sub_119C8A4((const void **)&v60, (const void **)v9);
  *(_DWORD *)(v7 + 12) = *v17;
  *v17 = &unk_28898CC;
  v18 = (void *)(v60 - 12);
  if ( (int *)(v60 - 12) != &dword_28898C0 )
    v41 = (unsigned int *)(v60 - 4);
        v42 = __ldrex(v41);
      while ( __strex(v42 - 1, v41) );
      v42 = (*v41)--;
    if ( v42 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v18);
  sub_119C854((int *)(v7 + 16), v10);
  sub_119C854((int *)(v7 + 20), a5);
  sub_119C854((int *)(v7 + 24), a6);
  *(_DWORD *)(v7 + 28) = &unk_28898CC;
  *(_DWORD *)(v7 + 32) = 0;
  *(_DWORD *)(v7 + 36) = &unk_28898CC;
  *(_DWORD *)(v7 + 40) = 0;
  sub_119C854((int *)&v59, a7);
  if ( Util::compareNoCase(*((_DWORD *)v59 - 3), v59, 4, "free") )
    v19 = 2;
  else if ( Util::compareNoCase(*((_DWORD *)v59 - 3), v59, 6, "custom") )
    v19 = 0;
  else
    v19 = 3;
    if ( Util::compareNoCase(*((_DWORD *)v59 - 3), v59, 11, "custom_user") )
      v19 = 1;
  v20 = v59 - 12;
  if ( (int *)(v59 - 12) != &dword_28898C0 )
    v43 = (unsigned int *)(v59 - 4);
        v44 = __ldrex(v43);
      while ( __strex(v44 - 1, v43) );
      v44 = (*v43)--;
    if ( v44 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v20);
  *(_DWORD *)(v7 + 44) = v19;
  *(_DWORD *)(v7 + 48) = -1;
  v21 = (Pack *)SkinPack::getPack(v8);
  v22 = Pack::getAccessStrategy(v21);
  v23 = (PackManifest *)Pack::getManifest(v21);
  v24 = *((_DWORD *)PackManifest::getLocation(v23) + 1);
  v25 = (int *)(*(int (__fastcall **)(int))(*(_DWORD *)v22 + 16))(v22);
  LODWORD(v26) = *v10;
  v27 = *v25;
  HIDWORD(v26) = *(_DWORD *)(*v10 - 12);
  v28 = *(_DWORD *)(v27 - 12);
  v63 = v27;
  v64 = v28;
  v65 = v26;
  Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v68, (int)&v63, 2);
  sub_119C884((void **)&v56, (const char *)&v69);
  v57 = v56;
  v58 = v24;
  v56 = (char *)&unk_28898CC;
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)(v7 + 28),
    (int *)&v57);
  *(_DWORD *)(v7 + 32) = v58;
  v29 = v57 - 12;
  if ( (int *)(v57 - 12) != &dword_28898C0 )
    v45 = (unsigned int *)(v57 - 4);
        v46 = __ldrex(v45);
      while ( __strex(v46 - 1, v45) );
      v46 = (*v45)--;
    if ( v46 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v29);
  v30 = v56 - 12;
  if ( (int *)(v56 - 12) != &dword_28898C0 )
    v47 = (unsigned int *)(v56 - 4);
        v48 = __ldrex(v47);
      while ( __strex(v48 - 1, v47) );
      v48 = (*v47)--;
    if ( v48 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v30);
  v31 = *(_DWORD *)(*(int (__fastcall **)(int))(*(_DWORD *)v22 + 16))(v22);
  LODWORD(v32) = *a5;
  v33 = *(_DWORD *)(v31 - 12);
  HIDWORD(v32) = *(_DWORD *)(*a5 - 12);
  v63 = v31;
  v64 = v33;
  v65 = v32;
  Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v66, (int)&v63, 2);
  sub_119C884((void **)&v53, (const char *)&v67);
  v54 = v53;
  v55 = v24;
  v53 = (char *)&unk_28898CC;
    (int *)(v7 + 36),
    (int *)&v54);
  *(_DWORD *)(v7 + 40) = v55;
  v34 = v54 - 12;
  if ( (int *)(v54 - 12) != &dword_28898C0 )
    v49 = (unsigned int *)(v54 - 4);
        v50 = __ldrex(v49);
      while ( __strex(v50 - 1, v49) );
      v50 = (*v49)--;
    if ( v50 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v34);
  v35 = v53 - 12;
  if ( (int *)(v53 - 12) != &dword_28898C0 )
    v51 = (unsigned int *)(v53 - 4);
        v52 = __ldrex(v51);
      while ( __strex(v52 - 1, v51) );
      v52 = (*v51)--;
    if ( v52 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v35);
  if ( _stack_chk_guard != v70 )
    _stack_chk_fail(_stack_chk_guard - v70);
  return v7;
}


int __fastcall Skin::Skin(int result)
{
  int v1; // r1@1

  *(_DWORD *)result = 0;
  *(_DWORD *)(result + 4) = &unk_28898CC;
  *(_DWORD *)(result + 8) = &unk_28898CC;
  *(_DWORD *)(result + 12) = &unk_28898CC;
  *(_DWORD *)(result + 16) = &unk_28898CC;
  *(_DWORD *)(result + 20) = &unk_28898CC;
  *(_DWORD *)(result + 24) = &unk_28898CC;
  *(_DWORD *)(result + 28) = &unk_28898CC;
  *(_DWORD *)(result + 32) = 0;
  *(_DWORD *)(result + 36) = &unk_28898CC;
  v1 = result + 40;
  *(_DWORD *)v1 = 0;
  *(_DWORD *)(v1 + 4) = 2;
  *(_DWORD *)(v1 + 8) = -1;
  return result;
}


char *__fastcall Skin::getName(Skin *this)
{
  return (char *)this + 4;
}


char *__fastcall Skin::getSerializable(Skin *this)
{
  return (char *)this + 12;
}


char *__fastcall Skin::getSkinPackId(Skin *this)
{
  SkinPack *v1; // r0@1
  char *result; // r0@2

  v1 = *(SkinPack **)this;
  if ( v1 )
    result = SkinPack::getId(v1);
  else
    result = (char *)&mce::UUID::EMPTY;
  return result;
}


void __fastcall Skin::getSerializedGeometryData(Skin *this, SkinPack **a2)
{
  Skin::getSerializedGeometryData(this, a2);
}


Skin *__fastcall Skin::~Skin(Skin *this)
{
  Skin *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  int v6; // r1@3
  void *v7; // r0@3
  int v8; // r1@4
  void *v9; // r0@4
  int v10; // r1@5
  void *v11; // r0@5
  int v12; // r1@6
  void *v13; // r0@6
  int v14; // r1@7
  void *v15; // r0@7
  int v16; // r1@8
  void *v17; // r0@8
  unsigned int *v19; // r2@10
  signed int v20; // r1@12
  unsigned int *v21; // r2@14
  signed int v22; // r1@16
  unsigned int *v23; // r2@18
  signed int v24; // r1@20
  unsigned int *v25; // r2@22
  signed int v26; // r1@24
  unsigned int *v27; // r2@26
  signed int v28; // r1@28
  unsigned int *v29; // r2@30
  signed int v30; // r1@32
  unsigned int *v31; // r2@34
  signed int v32; // r1@36
  unsigned int *v33; // r2@38
  signed int v34; // r1@40

  v1 = this;
  v2 = *((_DWORD *)this + 9);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v19 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
    }
    else
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v3);
  }
  v4 = *((_DWORD *)v1 + 7);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v4 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v5);
  v6 = *((_DWORD *)v1 + 6);
  v7 = (void *)(v6 - 12);
  if ( (int *)(v6 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)(v6 - 4);
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v7);
  v8 = *((_DWORD *)v1 + 5);
  v9 = (void *)(v8 - 12);
  if ( (int *)(v8 - 12) != &dword_28898C0 )
    v25 = (unsigned int *)(v8 - 4);
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v9);
  v10 = *((_DWORD *)v1 + 4);
  v11 = (void *)(v10 - 12);
  if ( (int *)(v10 - 12) != &dword_28898C0 )
    v27 = (unsigned int *)(v10 - 4);
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
      v28 = (*v27)--;
    if ( v28 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v11);
  v12 = *((_DWORD *)v1 + 3);
  v13 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
    v29 = (unsigned int *)(v12 - 4);
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
      v30 = (*v29)--;
    if ( v30 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v13);
  v14 = *((_DWORD *)v1 + 2);
  v15 = (void *)(v14 - 12);
  if ( (int *)(v14 - 12) != &dword_28898C0 )
    v31 = (unsigned int *)(v14 - 4);
        v32 = __ldrex(v31);
      while ( __strex(v32 - 1, v31) );
      v32 = (*v31)--;
    if ( v32 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v15);
  v16 = *((_DWORD *)v1 + 1);
  v17 = (void *)(v16 - 12);
  if ( (int *)(v16 - 12) != &dword_28898C0 )
    v33 = (unsigned int *)(v16 - 4);
        v34 = __ldrex(v33);
      while ( __strex(v34 - 1, v33) );
      v34 = (*v33)--;
    if ( v34 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v17);
  return v1;
}


int __fastcall Skin::setSkinPackSourceOverride(Skin *this, const ResourceLocation *a2)
{
  Skin *v2; // r5@1
  const ResourceLocation *v3; // r4@1
  int result; // r0@1

  v2 = this;
  v3 = a2;
  EntityInteraction::setInteractText((int *)this + 7, (int *)a2);
  result = *((_DWORD *)v3 + 1);
  *((_DWORD *)v2 + 8) = result;
  return result;
}


void __fastcall Skin::getSerializedGeometryData(Skin *this, SkinPack **a2)
{
  Skin *v2; // r4@1
  char *v3; // r2@1
  Pack *v4; // r0@2
  int v5; // r0@2
  int v6; // r5@2
  int (__fastcall *v7)(int, int *, char **); // r6@2
  int v8; // r5@2
  void *v9; // r0@2
  char *v10; // r0@7
  unsigned int *v11; // r2@9
  signed int v12; // r1@11
  unsigned int *v13; // r2@13
  signed int v14; // r1@15
  int v15; // [sp+8h] [bp-28h]@2
  char *v16; // [sp+Ch] [bp-24h]@1

  v2 = this;
  v3 = (char *)&unk_28898CC;
  v16 = (char *)&unk_28898CC;
  if ( *a2 )
  {
    v4 = (Pack *)SkinPack::getPack(*a2);
    v5 = Pack::getAccessStrategy(v4);
    v6 = v5;
    v7 = *(int (__fastcall **)(int, int *, char **))(*(_DWORD *)v5 + 40);
    sub_119C884((void **)&v15, "geometry.json");
    v8 = v7(v6, &v15, &v16);
    v9 = (void *)(v15 - 12);
    if ( (int *)(v15 - 12) != &dword_28898C0 )
    {
      v13 = (unsigned int *)(v15 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v14 = __ldrex(v13);
        while ( __strex(v14 - 1, v13) );
      }
      else
        v14 = (*v13)--;
      if ( v14 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v9);
    }
    if ( v8 )
      *(_DWORD *)v2 = v16;
      v3 = (char *)&unk_28898CC;
      v16 = (char *)&unk_28898CC;
      goto LABEL_7;
    v3 = v16;
  }
  *(_DWORD *)v2 = &unk_28898CC;
LABEL_7:
  v10 = v3 - 12;
  if ( (int *)(v3 - 12) != &dword_28898C0 )
    v11 = (unsigned int *)(v3 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
    else
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v10);
}
