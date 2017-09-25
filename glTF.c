

int __fastcall glTF::ObjectID::activate(int result, int a2)
{
  *(_DWORD *)(result + 4) = a2;
  *(_BYTE *)result = 1;
  return result;
}


Json::Value *__fastcall glTF::Material::serialize(Json::Value *a1, int a2)
{
  int v2; // r9@1
  Json::Value *v3; // r8@1
  int v4; // r4@2
  int v5; // r0@4
  int v6; // r0@6
  int v7; // r0@8
  int v8; // r7@9
  unsigned int v9; // r11@9
  int v10; // r0@9
  int v11; // r4@10
  int v12; // r5@10
  bool v13; // zf@11
  int v14; // r6@14
  bool v15; // zf@17
  int v16; // r4@20
  const char **v17; // r9@20
  int v18; // t1@20
  Json::Value *result; // r0@20
  int v20; // r4@21
  int v21; // [sp+0h] [bp-58h]@2
  char v22; // [sp+10h] [bp-48h]@20
  char v23; // [sp+20h] [bp-38h]@21

  v2 = a2;
  v3 = a1;
  Json::Value::Value(a1, 0);
  if ( *(_DWORD *)(*(_DWORD *)v2 - 12) )
  {
    v4 = Json::Value::operator[](v3, "technique");
    Json::Value::Value((int)&v21, (const char **)v2);
    Json::Value::operator=(v4, (const Json::Value *)&v21);
    Json::Value::~Value((Json::Value *)&v21);
  }
  if ( Json::Value::size((Json::Value *)(v2 + 8)) )
    v5 = Json::Value::operator[](v3, "values");
    Json::Value::operator=(v5, (const Json::Value *)(v2 + 8));
  if ( Json::Value::size((Json::Value *)(v2 + 24)) )
    v6 = Json::Value::operator[](v3, "extensions");
    Json::Value::operator=(v6, (const Json::Value *)(v2 + 24));
  if ( Json::Value::size((Json::Value *)(v2 + 40)) )
    v7 = Json::Value::operator[](v3, "pbrMetallicRoughness");
    Json::Value::operator=(v7, (const Json::Value *)(v2 + 40));
  v8 = *(_DWORD *)(v2 + 56);
  v9 = *(_DWORD *)(v2 + 56) % (unsigned int)dword_27EF220;
  v10 = *(_DWORD *)(dword_27EF21C + 4 * v9);
  if ( !v10 )
    goto LABEL_16;
  v11 = *(_DWORD *)v10;
  v12 = *(_DWORD *)(*(_DWORD *)v10 + 12);
  while ( 1 )
    v13 = v12 == v8;
    if ( v12 == v8 )
      v13 = v8 == *(_DWORD *)(v11 + 4);
    if ( v13 )
      break;
    v14 = *(_DWORD *)v11;
    if ( *(_DWORD *)v11 )
    {
      v12 = *(_DWORD *)(v14 + 12);
      v10 = v11;
      v11 = *(_DWORD *)v11;
      if ( *(_DWORD *)(v14 + 12) % (unsigned int)dword_27EF220 == v9 )
        continue;
    }
  v15 = v10 == 0;
  if ( v10 )
    v12 = *(_DWORD *)v10;
    v15 = *(_DWORD *)v10 == 0;
  if ( v15 )
LABEL_16:
    sub_21E5A84("_Map_base::at");
  v16 = Json::Value::operator[](v3, "alphaMode");
  Json::Value::Value((int)&v22, (const char **)(v12 + 8));
  Json::Value::operator=(v16, (const Json::Value *)&v22);
  Json::Value::~Value((Json::Value *)&v22);
  v18 = *(_DWORD *)(v2 + 60);
  v17 = (const char **)(v2 + 60);
  result = *(Json::Value **)(v18 - 12);
  if ( result )
    v20 = Json::Value::operator[](v3, "name");
    Json::Value::Value((int)&v23, v17);
    Json::Value::operator=(v20, (const Json::Value *)&v23);
    result = Json::Value::~Value((Json::Value *)&v23);
  return result;
}


glTF::Accessor *__fastcall glTF::Accessor::Accessor(glTF::Accessor *this, const glTF::Accessor *a2)
{
  const glTF::Accessor *v2; // r5@1
  char *v3; // r1@1
  int v4; // r2@1
  int v5; // r3@1
  int v6; // r6@1
  int v7; // r7@1
  glTF::Accessor *v8; // r4@1
  char *v9; // r0@1
  int v10; // r3@1
  int v11; // r6@1
  int v12; // r7@1
  char *v13; // r6@1
  __int64 v14; // r0@1
  signed int v15; // r0@1
  unsigned int v16; // r7@1
  __int64 v17; // kr00_8@4
  int v18; // r7@4
  __int64 v19; // r0@6
  char *v20; // r6@6
  signed int v21; // r0@6
  unsigned int v22; // r7@6
  __int64 v23; // kr08_8@9
  int v24; // r7@9

  v2 = a2;
  v4 = *(_DWORD *)a2;
  v5 = *((_DWORD *)a2 + 1);
  v6 = *((_DWORD *)a2 + 2);
  v7 = *((_DWORD *)a2 + 3);
  v3 = (char *)a2 + 16;
  v8 = this;
  *(_DWORD *)this = v4;
  *((_DWORD *)this + 1) = v5;
  *((_DWORD *)this + 2) = v6;
  *((_DWORD *)this + 3) = v7;
  v9 = (char *)this + 16;
  v10 = *((_DWORD *)v3 + 1);
  v11 = *((_DWORD *)v3 + 2);
  v12 = *((_DWORD *)v3 + 3);
  *(_DWORD *)v9 = *(_DWORD *)v3;
  *((_DWORD *)v9 + 1) = v10;
  *((_DWORD *)v9 + 2) = v11;
  *((_DWORD *)v9 + 3) = v12;
  v13 = 0;
  v14 = *((_QWORD *)v2 + 4);
  *((_DWORD *)v8 + 8) = 0;
  *((_DWORD *)v8 + 9) = 0;
  v15 = HIDWORD(v14) - v14;
  *((_DWORD *)v8 + 10) = 0;
  v16 = v15 >> 2;
  if ( v15 >> 2 )
  {
    if ( v16 >= 0x40000000 )
      sub_21E57F4();
    v13 = (char *)operator new(v15);
  }
  *((_DWORD *)v8 + 8) = v13;
  *((_DWORD *)v8 + 9) = v13;
  *((_DWORD *)v8 + 10) = &v13[4 * v16];
  v17 = *((_QWORD *)v2 + 4);
  v18 = (HIDWORD(v17) - (signed int)v17) >> 2;
  if ( 0 != v18 )
    _aeabi_memmove4(v13, v17);
  *((_DWORD *)v8 + 9) = &v13[4 * v18];
  v19 = *(_QWORD *)((char *)v2 + 44);
  v20 = 0;
  *((_DWORD *)v8 + 11) = 0;
  *((_DWORD *)v8 + 12) = 0;
  v21 = HIDWORD(v19) - v19;
  *((_DWORD *)v8 + 13) = 0;
  v22 = v21 >> 2;
  if ( v21 >> 2 )
    if ( v22 >= 0x40000000 )
    v20 = (char *)operator new(v21);
  *((_DWORD *)v8 + 11) = v20;
  *((_DWORD *)v8 + 12) = v20;
  *((_DWORD *)v8 + 13) = &v20[4 * v22];
  v23 = *(_QWORD *)((char *)v2 + 44);
  v24 = (HIDWORD(v23) - (signed int)v23) >> 2;
  if ( 0 != v24 )
    _aeabi_memmove4(v20, v23);
  *((_DWORD *)v8 + 12) = &v20[4 * v24];
  sub_21E8AF4((int *)v8 + 14, (int *)v2 + 14);
  *((_DWORD *)v8 + 15) = *((_DWORD *)v2 + 15);
  return v8;
}


glTF::Asset *__fastcall glTF::Asset::~Asset(glTF::Asset *this)
{
  glTF::Asset *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  int v6; // r1@3
  void *v7; // r0@3
  int v8; // r1@4
  void *v9; // r0@4
  int *v10; // r0@5
  unsigned int *v12; // r2@7
  signed int v13; // r1@9
  unsigned int *v14; // r2@11
  signed int v15; // r1@13
  unsigned int *v16; // r2@15
  signed int v17; // r1@17
  unsigned int *v18; // r2@19
  signed int v19; // r1@21
  unsigned int *v20; // r2@23
  signed int v21; // r1@25

  v1 = this;
  v2 = *((_DWORD *)this + 4);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v12 = (unsigned int *)(v2 - 4);
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
      j_j_j_j__ZdlPv_9(v3);
  }
  v4 = *((_DWORD *)v1 + 3);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v4 - 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  v6 = *((_DWORD *)v1 + 2);
  v7 = (void *)(v6 - 12);
  if ( (int *)(v6 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v6 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  v8 = *((_DWORD *)v1 + 1);
  v9 = (void *)(v8 - 12);
  if ( (int *)(v8 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v8 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  v10 = (int *)(*(_DWORD *)v1 - 12);
  if ( v10 != &dword_28898C0 )
    v20 = (unsigned int *)(*(_DWORD *)v1 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  return v1;
}


int __fastcall glTF::ObjectID::ObjectID(int result, int a2)
{
  *(_BYTE *)result = ((unsigned int)a2 >> 31) ^ 1;
  *(_DWORD *)(result + 4) = a2;
  return result;
}


signed int __fastcall glTF::Primitive::getComponentTypeByteSize(int a1)
{
  unsigned int v1; // r0@1
  signed int result; // r0@2

  v1 = a1 - 5120;
  if ( v1 <= 6 )
    result = dword_262D570[v1];
  else
    result = -1;
  return result;
}


Json::Value *__fastcall glTF::Scene::serialize(glTF::Scene *this, int a2)
{
  int v2; // r9@1
  Json::Value *v3; // r8@1
  __int64 v4; // r4@1
  Json::Value *v5; // r6@2
  unsigned int v6; // r4@2
  unsigned int v7; // r5@3
  const char **v8; // r9@5
  int v9; // t1@5
  Json::Value *result; // r0@5
  int v11; // r6@6
  int v12; // [sp+0h] [bp-40h]@4
  char v13; // [sp+10h] [bp-30h]@6

  v2 = a2;
  v3 = this;
  Json::Value::Value(this, 0);
  v4 = *(_QWORD *)v2;
  if ( (_DWORD)v4 != HIDWORD(v4) )
  {
    v5 = (Json::Value *)Json::Value::operator[](v3, "nodes");
    v6 = (HIDWORD(v4) - (signed int)v4) >> 2;
    if ( v6 )
    {
      v7 = 0;
      do
      {
        Json::Value::Value((Json::Value *)&v12, *(_DWORD *)(*(_DWORD *)v2 + 4 * v7));
        Json::Value::append(v5, (const Json::Value *)&v12);
        Json::Value::~Value((Json::Value *)&v12);
        ++v7;
      }
      while ( v7 < v6 );
    }
  }
  v9 = *(_DWORD *)(v2 + 12);
  v8 = (const char **)(v2 + 12);
  result = *(Json::Value **)(v9 - 12);
  if ( result )
    v11 = Json::Value::operator[](v3, "name");
    Json::Value::Value((int)&v13, v8);
    Json::Value::operator=(v11, (const Json::Value *)&v13);
    result = Json::Value::~Value((Json::Value *)&v13);
  return result;
}


int __fastcall glTF::Image::Image(int result)
{
  *(_DWORD *)result = &unk_28898CC;
  *(_BYTE *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = -1;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = &unk_28898CC;
  return result;
}


int __fastcall glTF::BufferView::BufferView(int result)
{
  *(_BYTE *)result = 0;
  *(_DWORD *)(result + 4) = -1;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = &unk_28898CC;
  return result;
}


int __fastcall glTF::Node::~Node(int a1)
{
  int v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  int v6; // r1@3
  void *v7; // r0@3
  void *v8; // r0@4
  void *v9; // r0@6
  int *v10; // r0@8
  unsigned int *v12; // r2@10
  signed int v13; // r1@12
  unsigned int *v14; // r2@14
  signed int v15; // r1@16
  unsigned int *v16; // r2@18
  signed int v17; // r1@20
  unsigned int *v18; // r2@22
  signed int v19; // r1@24

  v1 = a1;
  v2 = *(_DWORD *)(a1 + 164);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v12 = (unsigned int *)(v2 - 4);
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
      j_j_j_j__ZdlPv_9(v3);
  }
  v4 = *(_DWORD *)(v1 + 32);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v4 - 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  v6 = *(_DWORD *)(v1 + 28);
  v7 = (void *)(v6 - 12);
  if ( (int *)(v6 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v6 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  v8 = *(void **)(v1 + 16);
  if ( v8 )
    operator delete(v8);
  v9 = *(void **)(v1 + 4);
  if ( v9 )
    operator delete(v9);
  v10 = (int *)(*(_DWORD *)v1 - 12);
  if ( v10 != &dword_28898C0 )
    v18 = (unsigned int *)(*(_DWORD *)v1 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  return v1;
}


Json::Value *__fastcall glTF::BufferView::serialize(glTF::BufferView *this, int a2)
{
  int v2; // r5@1
  Json::Value *v3; // r4@1
  int v4; // r7@2
  int v5; // r6@2
  int v6; // r6@3
  int v7; // r6@3
  const char **v8; // r5@3
  int v9; // t1@3
  Json::Value *result; // r0@3
  int v11; // r6@4
  int v12; // [sp+0h] [bp-58h]@2
  char v13; // [sp+10h] [bp-48h]@3
  char v14; // [sp+20h] [bp-38h]@3
  char v15; // [sp+30h] [bp-28h]@4

  v2 = a2;
  v3 = this;
  Json::Value::Value(this, 0);
  if ( *(_BYTE *)v2 )
  {
    v4 = *(_DWORD *)(v2 + 4);
    v5 = Json::Value::operator[](v3, "buffer");
    Json::Value::Value((Json::Value *)&v12, v4);
    Json::Value::operator=(v5, (const Json::Value *)&v12);
    Json::Value::~Value((Json::Value *)&v12);
  }
  v6 = Json::Value::operator[](v3, "byteOffset");
  Json::Value::Value((Json::Value *)&v13, *(_DWORD *)(v2 + 8));
  Json::Value::operator=(v6, (const Json::Value *)&v13);
  Json::Value::~Value((Json::Value *)&v13);
  v7 = Json::Value::operator[](v3, "byteLength");
  Json::Value::Value((Json::Value *)&v14, *(_DWORD *)(v2 + 12));
  Json::Value::operator=(v7, (const Json::Value *)&v14);
  Json::Value::~Value((Json::Value *)&v14);
  v9 = *(_DWORD *)(v2 + 16);
  v8 = (const char **)(v2 + 16);
  result = *(Json::Value **)(v9 - 12);
  if ( result )
    v11 = Json::Value::operator[](v3, "name");
    Json::Value::Value((int)&v15, v8);
    Json::Value::operator=(v11, (const Json::Value *)&v15);
    result = Json::Value::~Value((Json::Value *)&v15);
  return result;
}


_DWORD *__fastcall glTF::Mesh::Primitive::Primitive(glTF::Mesh::Primitive *this)
{
  _DWORD *result; // r0@1
  __int64 v2; // r1@1

  result = Json::Value::Value(this, 0);
  LODWORD(v2) = -1;
  HIDWORD(v2) = 4;
  *((_BYTE *)result + 16) = 0;
  result[5] = -1;
  *((_BYTE *)result + 24) = 0;
  *(_QWORD *)(result + 7) = v2;
  return result;
}


Json::Value *__fastcall glTF::Asset::Profile::serialize(glTF::Asset::Profile *this, int a2)
{
  int v2; // r5@1
  Json::Value *v3; // r4@1
  int v4; // r6@2
  const char **v5; // r5@3
  int v6; // t1@3
  Json::Value *result; // r0@3
  int v8; // r6@4
  int v9; // [sp+0h] [bp-30h]@2
  char v10; // [sp+10h] [bp-20h]@4

  v2 = a2;
  v3 = this;
  Json::Value::Value(this, 0);
  if ( *(_DWORD *)(*(_DWORD *)v2 - 12) )
  {
    v4 = Json::Value::operator[](v3, "api");
    Json::Value::Value((int)&v9, (const char **)v2);
    Json::Value::operator=(v4, (const Json::Value *)&v9);
    Json::Value::~Value((Json::Value *)&v9);
  }
  v6 = *(_DWORD *)(v2 + 4);
  v5 = (const char **)(v2 + 4);
  result = *(Json::Value **)(v6 - 12);
  if ( result )
    v8 = Json::Value::operator[](v3, "version");
    Json::Value::Value((int)&v10, v5);
    Json::Value::operator=(v8, (const Json::Value *)&v10);
    result = Json::Value::~Value((Json::Value *)&v10);
  return result;
}


Json::Value *__fastcall glTF::Node::serialize(Json::Value *a1, int a2)
{
  int v2; // r9@1
  Json::Value *v3; // r8@1
  int v4; // r6@2
  __int64 v5; // r4@3
  Json::Value *v6; // r6@4
  unsigned int v7; // r4@4
  unsigned int v8; // r5@5
  __int64 v9; // r4@7
  Json::Value *v10; // r6@8
  unsigned int v11; // r4@8
  unsigned int v12; // r5@9
  int v13; // r7@12
  int v14; // r7@14
  int v15; // r1@16
  Json::Value *v17; // r6@16
  unsigned int v19; // r5@16
  int v24; // r7@19
  int v25; // r6@19
  const char **v26; // r9@20
  int v27; // t1@20
  Json::Value *result; // r0@20
  int v29; // r6@21
  int v30; // [sp+0h] [bp-A0h]@2
  char v31; // [sp+10h] [bp-90h]@6
  char v32; // [sp+20h] [bp-80h]@10
  char v33; // [sp+30h] [bp-70h]@12
  char v34; // [sp+40h] [bp-60h]@14
  char v35; // [sp+50h] [bp-50h]@17
  char v36; // [sp+60h] [bp-40h]@19
  char v37; // [sp+70h] [bp-30h]@21

  v2 = a2;
  v3 = a1;
  Json::Value::Value(a1, 0);
  if ( *(_DWORD *)(*(_DWORD *)v2 - 12) )
  {
    v4 = Json::Value::operator[](v3, "camera");
    Json::Value::Value((int)&v30, (const char **)v2);
    Json::Value::operator=(v4, (const Json::Value *)&v30);
    Json::Value::~Value((Json::Value *)&v30);
  }
  v5 = *(_QWORD *)(v2 + 4);
  if ( (_DWORD)v5 != HIDWORD(v5) )
    v6 = (Json::Value *)Json::Value::operator[](v3, "children");
    v7 = (HIDWORD(v5) - (signed int)v5) >> 2;
    if ( v7 )
    {
      v8 = 0;
      do
      {
        Json::Value::Value((Json::Value *)&v31, *(_DWORD *)(*(_DWORD *)(v2 + 4) + 4 * v8));
        Json::Value::append(v6, (const Json::Value *)&v31);
        Json::Value::~Value((Json::Value *)&v31);
        ++v8;
      }
      while ( v8 < v7 );
    }
  v9 = *(_QWORD *)(v2 + 16);
  if ( (_DWORD)v9 != HIDWORD(v9) )
    v10 = (Json::Value *)Json::Value::operator[](v3, "skeleton");
    v11 = (HIDWORD(v9) - (signed int)v9) >> 2;
    if ( v11 )
      v12 = 0;
        Json::Value::Value((Json::Value *)&v32, *(_DWORD *)(*(_DWORD *)(v2 + 16) + 4 * v12));
        Json::Value::append(v10, (const Json::Value *)&v32);
        Json::Value::~Value((Json::Value *)&v32);
        ++v12;
      while ( v12 < v11 );
  if ( *(_DWORD *)(*(_DWORD *)(v2 + 28) - 12) )
    v13 = Json::Value::operator[](v3, "skin");
    Json::Value::Value((int)&v33, (const char **)(v2 + 28));
    Json::Value::operator=(v13, (const Json::Value *)&v33);
    Json::Value::~Value((Json::Value *)&v33);
  if ( *(_DWORD *)(*(_DWORD *)(v2 + 32) - 12) )
    v14 = Json::Value::operator[](v3, "jointName");
    Json::Value::Value((int)&v34, (const char **)(v2 + 32));
    Json::Value::operator=(v14, (const Json::Value *)&v34);
    Json::Value::~Value((Json::Value *)&v34);
  if ( *(_BYTE *)(v2 + 36) )
    v17 = (Json::Value *)Json::Value::operator[](v3, "matrix");
    _R4 = v2 + 40;
    v19 = 0;
    do
      __asm
        VLDR            S0, [R4]
        VCVT.F64.F32    D0, S0
        VMOV            R2, R3, D0
      Json::Value::Value((Json::Value *)&v35, v15, _R2);
      Json::Value::append(v17, (const Json::Value *)&v35);
      Json::Value::~Value((Json::Value *)&v35);
      ++v19;
      _R4 += 4;
    while ( v19 < 0x10 );
  if ( *(_BYTE *)(v2 + 104) )
    v24 = *(_DWORD *)(v2 + 108);
    v25 = Json::Value::operator[](v3, "mesh");
    Json::Value::Value((Json::Value *)&v36, v24);
    Json::Value::operator=(v25, (const Json::Value *)&v36);
    Json::Value::~Value((Json::Value *)&v36);
  _addGlmKey<char [9],glm::detail::tvec4<float>>(v3, "rotation", (_BYTE *)(v2 + 112));
  _addGlmKey<char [6],glm::detail::tvec3<float>>(v3, "scale", (_BYTE *)(v2 + 132));
  _addGlmKey<char [12],glm::detail::tvec3<float>>(v3, "translation", (_BYTE *)(v2 + 148));
  v27 = *(_DWORD *)(v2 + 164);
  v26 = (const char **)(v2 + 164);
  result = *(Json::Value **)(v27 - 12);
  if ( result )
    v29 = Json::Value::operator[](v3, "name");
    Json::Value::Value((int)&v37, v26);
    Json::Value::operator=(v29, (const Json::Value *)&v37);
    result = Json::Value::~Value((Json::Value *)&v37);
  return result;
}


glTF::Mesh *__fastcall glTF::Mesh::Mesh(glTF::Mesh *this, const glTF::Mesh *a2)
{
  const glTF::Mesh *v2; // r5@1
  glTF::Mesh *v3; // r4@1

  v2 = a2;
  v3 = this;
  std::vector<glTF::Mesh::Primitive,std::allocator<glTF::Mesh::Primitive>>::vector((int)this, (unsigned __int64 *)a2);
  sub_21E8AF4((int *)v3 + 3, (int *)v2 + 3);
  *((_DWORD *)v3 + 4) = *((_DWORD *)v2 + 4);
  Json::Value::Value((glTF::Mesh *)((char *)v3 + 24), (const glTF::Mesh *)((char *)v2 + 24));
  return v3;
}


int __fastcall glTF::ObjectID::ObjectID(int result)
{
  *(_BYTE *)result = 0;
  *(_DWORD *)(result + 4) = -1;
  return result;
}


int __fastcall glTF::Texture::Texture(int result)
{
  *(_BYTE *)result = 0;
  *(_DWORD *)(result + 4) = 6408;
  *(_BYTE *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 6408;
  *(_BYTE *)(result + 16) = 0;
  *(_DWORD *)(result + 20) = -1;
  *(_BYTE *)(result + 24) = 0;
  *(_DWORD *)(result + 28) = -1;
  *(_BYTE *)(result + 32) = 0;
  *(_DWORD *)(result + 36) = 3553;
  *(_BYTE *)(result + 40) = 0;
  *(_DWORD *)(result + 44) = 5121;
  *(_DWORD *)(result + 48) = &unk_28898CC;
  return result;
}


Json::Value *__fastcall glTF::Mesh::Primitive::serialize(glTF::Mesh::Primitive *this, int a2)
{
  int v2; // r5@1
  Json::Value *v3; // r4@1
  int v4; // r0@2
  int v5; // r7@4
  int v6; // r6@4
  int v7; // r7@6
  int v8; // r6@6
  int v9; // r6@7
  int v10; // r5@7
  int v12; // [sp+0h] [bp-48h]@4
  char v13; // [sp+10h] [bp-38h]@6
  char v14; // [sp+20h] [bp-28h]@7

  v2 = a2;
  v3 = this;
  Json::Value::Value(this, 0);
  if ( Json::Value::size((Json::Value *)v2) )
  {
    v4 = Json::Value::operator[](v3, "attributes");
    Json::Value::operator=(v4, (const Json::Value *)v2);
  }
  if ( *(_BYTE *)(v2 + 16) )
    v5 = *(_DWORD *)(v2 + 20);
    v6 = Json::Value::operator[](v3, "indices");
    Json::Value::Value((Json::Value *)&v12, v5);
    Json::Value::operator=(v6, (const Json::Value *)&v12);
    Json::Value::~Value((Json::Value *)&v12);
  if ( *(_BYTE *)(v2 + 24) )
    v7 = *(_DWORD *)(v2 + 28);
    v8 = Json::Value::operator[](v3, "material");
    Json::Value::Value((Json::Value *)&v13, v7);
    Json::Value::operator=(v8, (const Json::Value *)&v13);
    Json::Value::~Value((Json::Value *)&v13);
  v9 = *(_DWORD *)(v2 + 32);
  v10 = Json::Value::operator[](v3, "mode");
  Json::Value::Value((Json::Value *)&v14, v9);
  Json::Value::operator=(v10, (const Json::Value *)&v14);
  return Json::Value::~Value((Json::Value *)&v14);
}


int __fastcall glTF::Sampler::Sampler(int result)
{
  *(_BYTE *)result = 0;
  *(_DWORD *)(result + 4) = 9729;
  *(_BYTE *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 9986;
  *(_BYTE *)(result + 16) = 0;
  *(_DWORD *)(result + 20) = 10497;
  *(_BYTE *)(result + 24) = 0;
  *(_DWORD *)(result + 28) = 10497;
  *(_DWORD *)(result + 32) = &unk_28898CC;
  return result;
}


int __fastcall glTF::ObjectID::isValid(glTF::ObjectID *this)
{
  return *(_BYTE *)this;
}


Json::Value *__fastcall glTF::Buffer::serialize(glTF::Buffer *this, int a2)
{
  int v2; // r5@1
  Json::Value *v3; // r4@1
  int v4; // r6@2
  int v5; // r6@3
  const char **v6; // r5@3
  int v7; // t1@3
  Json::Value *result; // r0@3
  int v9; // r6@4
  int v10; // [sp+0h] [bp-40h]@2
  char v11; // [sp+10h] [bp-30h]@3
  char v12; // [sp+20h] [bp-20h]@4

  v2 = a2;
  v3 = this;
  Json::Value::Value(this, 0);
  if ( *(_DWORD *)(*(_DWORD *)v2 - 12) )
  {
    v4 = Json::Value::operator[](v3, "uri");
    Json::Value::Value((int)&v10, (const char **)v2);
    Json::Value::operator=(v4, (const Json::Value *)&v10);
    Json::Value::~Value((Json::Value *)&v10);
  }
  v5 = Json::Value::operator[](v3, "byteLength");
  Json::Value::Value((Json::Value *)&v11, *(_DWORD *)(v2 + 4));
  Json::Value::operator=(v5, (const Json::Value *)&v11);
  Json::Value::~Value((Json::Value *)&v11);
  v7 = *(_DWORD *)(v2 + 8);
  v6 = (const char **)(v2 + 8);
  result = *(Json::Value **)(v7 - 12);
  if ( result )
    v9 = Json::Value::operator[](v3, "name");
    Json::Value::Value((int)&v12, v6);
    Json::Value::operator=(v9, (const Json::Value *)&v12);
    result = Json::Value::~Value((Json::Value *)&v12);
  return result;
}


int __fastcall glTF::Shader::Shader(int result)
{
  __int64 v1; // r1@1

  HIDWORD(v1) = 35633;
  LODWORD(v1) = &unk_28898CC;
  *(_QWORD *)result = v1;
  *(_DWORD *)(result + 8) = &unk_28898CC;
  return result;
}


int *__fastcall glTF::Material::Material(int *a1, int *a2)
{
  int *v2; // r5@1
  int *v3; // r4@1

  v2 = a2;
  v3 = a1;
  sub_21E8AF4(a1, a2);
  Json::Value::Value((Json::Value *)(v3 + 2), (const Json::Value *)(v2 + 2));
  Json::Value::Value((Json::Value *)(v3 + 6), (const Json::Value *)(v2 + 6));
  Json::Value::Value((Json::Value *)(v3 + 10), (const Json::Value *)(v2 + 10));
  v3[14] = v2[14];
  sub_21E8AF4(v3 + 15, v2 + 15);
  v3[16] = v2[16];
  return v3;
}


Json::Value *__fastcall glTF::Accessor::serialize(glTF::Accessor *this, int a2)
{
  int v2; // r9@1
  Json::Value *v3; // r8@1
  int v4; // r5@2
  int v5; // r4@2
  int v6; // r4@3
  int v7; // r4@4
  int v8; // r5@5
  int v9; // r4@5
  int v10; // r4@5
  int v11; // r7@5
  unsigned int v12; // r11@5
  int v13; // r0@5
  int v14; // r4@6
  int v15; // r5@6
  int v17; // r6@10
  bool v18; // zf@13
  int v19; // r4@16
  __int64 v20; // r4@16
  int v21; // r1@17
  Json::Value *v23; // r10@17
  unsigned int v24; // r5@17
  int v25; // r7@18
  unsigned int v26; // r6@18
  __int64 v31; // r4@20
  int v32; // r1@21
  Json::Value *v34; // r10@21
  unsigned int v35; // r5@21
  int v36; // r7@22
  unsigned int v37; // r6@22
  const char **v39; // r9@24
  int v40; // t1@24
  Json::Value *result; // r0@24
  int v42; // r4@25
  int v43; // [sp+0h] [bp-B8h]@2
  char v44; // [sp+10h] [bp-A8h]@3
  char v45; // [sp+20h] [bp-98h]@4
  char v46; // [sp+30h] [bp-88h]@5
  char v47; // [sp+40h] [bp-78h]@5
  char v48; // [sp+50h] [bp-68h]@16
  char v49; // [sp+60h] [bp-58h]@19
  char v50; // [sp+70h] [bp-48h]@23
  char v51; // [sp+80h] [bp-38h]@25

  v2 = a2;
  v3 = this;
  Json::Value::Value(this, 0);
  if ( *(_BYTE *)v2 )
  {
    v4 = *(_DWORD *)(v2 + 4);
    v5 = Json::Value::operator[](v3, "bufferView");
    Json::Value::Value((Json::Value *)&v43, v4);
    Json::Value::operator=(v5, (const Json::Value *)&v43);
    Json::Value::~Value((Json::Value *)&v43);
  }
  v6 = Json::Value::operator[](v3, "byteOffset");
  Json::Value::Value((Json::Value *)&v44, *(_DWORD *)(v2 + 8));
  Json::Value::operator=(v6, (const Json::Value *)&v44);
  Json::Value::~Value((Json::Value *)&v44);
  if ( *(_BYTE *)(v2 + 12) )
    v7 = Json::Value::operator[](v3, "byteStride");
    Json::Value::Value((Json::Value *)&v45, *(_DWORD *)(v2 + 16));
    Json::Value::operator=(v7, (const Json::Value *)&v45);
    Json::Value::~Value((Json::Value *)&v45);
  v8 = *(_DWORD *)(v2 + 20);
  v9 = Json::Value::operator[](v3, "componentType");
  Json::Value::Value((Json::Value *)&v46, v8);
  Json::Value::operator=(v9, (const Json::Value *)&v46);
  Json::Value::~Value((Json::Value *)&v46);
  v10 = Json::Value::operator[](v3, "count");
  Json::Value::Value((Json::Value *)&v47, *(_DWORD *)(v2 + 24));
  Json::Value::operator=(v10, (const Json::Value *)&v47);
  Json::Value::~Value((Json::Value *)&v47);
  v11 = *(_DWORD *)(v2 + 28);
  v12 = *(_DWORD *)(v2 + 28) % (unsigned int)dword_27EF1E8;
  v13 = *(_DWORD *)(dword_27EF1E4 + 4 * v12);
  if ( !v13 )
    goto LABEL_12;
  v14 = *(_DWORD *)v13;
  v15 = *(_DWORD *)(*(_DWORD *)v13 + 12);
  while ( 1 )
    _ZF = v15 == v11;
    if ( v15 == v11 )
      _ZF = v11 == *(_DWORD *)(v14 + 4);
    if ( _ZF )
      break;
    v17 = *(_DWORD *)v14;
    if ( *(_DWORD *)v14 )
    {
      v15 = *(_DWORD *)(v17 + 12);
      v13 = v14;
      v14 = *(_DWORD *)v14;
      if ( *(_DWORD *)(v17 + 12) % (unsigned int)dword_27EF1E8 == v12 )
        continue;
    }
  v18 = v13 == 0;
  if ( v13 )
    v15 = *(_DWORD *)v13;
    v18 = *(_DWORD *)v13 == 0;
  if ( v18 )
LABEL_12:
    sub_21E5A84("_Map_base::at");
  v19 = Json::Value::operator[](v3, "type");
  Json::Value::Value((int)&v48, (const char **)(v15 + 8));
  Json::Value::operator=(v19, (const Json::Value *)&v48);
  Json::Value::~Value((Json::Value *)&v48);
  v20 = *(_QWORD *)(v2 + 32);
  if ( (_DWORD)v20 != HIDWORD(v20) )
    v23 = (Json::Value *)Json::Value::operator[](v3, "min");
    v24 = (HIDWORD(v20) - (signed int)v20) >> 2;
    if ( v24 )
      v25 = 0;
      v26 = 0;
      do
      {
        _R0 = *(_DWORD *)(v2 + 32) + v25;
        __asm
        {
          VLDR            S0, [R0]
          VCVT.F64.F32    D0, S0
          VMOV            R2, R3, D0
        }
        Json::Value::Value((Json::Value *)&v49, v21, _R2);
        Json::Value::append(v23, (const Json::Value *)&v49);
        Json::Value::~Value((Json::Value *)&v49);
        ++v26;
        v25 += 4;
      }
      while ( v26 < v24 );
  v31 = *(_QWORD *)(v2 + 44);
  if ( (_DWORD)v31 != HIDWORD(v31) )
    v34 = (Json::Value *)Json::Value::operator[](v3, "max");
    v35 = (HIDWORD(v31) - (signed int)v31) >> 2;
    if ( v35 )
      v36 = 0;
      v37 = 0;
        _R0 = *(_DWORD *)(v2 + 44) + v36;
        Json::Value::Value((Json::Value *)&v50, v32, _R2);
        Json::Value::append(v34, (const Json::Value *)&v50);
        Json::Value::~Value((Json::Value *)&v50);
        ++v37;
        v36 += 4;
      while ( v37 < v35 );
  v40 = *(_DWORD *)(v2 + 56);
  v39 = (const char **)(v2 + 56);
  result = *(Json::Value **)(v40 - 12);
  if ( result )
    v42 = Json::Value::operator[](v3, "name");
    Json::Value::Value((int)&v51, v39);
    Json::Value::operator=(v42, (const Json::Value *)&v51);
    result = Json::Value::~Value((Json::Value *)&v51);
  return result;
}


int __fastcall glTF::Asset::Profile::Profile(int result)
{
  *(_DWORD *)result = &unk_28898CC;
  *(_DWORD *)(result + 4) = &unk_28898CC;
  return result;
}


int __fastcall glTF::Node::Node(int result)
{
  *(_DWORD *)result = &unk_28898CC;
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 28) = &unk_28898CC;
  *(_DWORD *)(result + 32) = &unk_28898CC;
  *(_BYTE *)(result + 36) = 0;
  *(_DWORD *)(result + 48) = 0;
  *(_DWORD *)(result + 52) = 0;
  *(_DWORD *)(result + 40) = 1065353216;
  *(_DWORD *)(result + 44) = 0;
  *(_QWORD *)(result + 56) = 4575657221408423936LL;
  *(_DWORD *)(result + 72) = 0;
  *(_DWORD *)(result + 76) = 0;
  *(_DWORD *)(result + 64) = 0;
  *(_DWORD *)(result + 68) = 0;
  *(_DWORD *)(result + 88) = 0;
  *(_DWORD *)(result + 92) = 0;
  *(_DWORD *)(result + 80) = 1065353216;
  *(_DWORD *)(result + 84) = 0;
  *(_QWORD *)(result + 96) = 4575657221408423936LL;
  *(_BYTE *)(result + 104) = 0;
  *(_DWORD *)(result + 108) = -1;
  *(_BYTE *)(result + 112) = 0;
  *(_DWORD *)(result + 116) = 0;
  *(_DWORD *)(result + 120) = 0;
  *(_QWORD *)(result + 124) = 4575657221408423936LL;
  *(_BYTE *)(result + 132) = 0;
  *(_DWORD *)(result + 136) = 1065353216;
  *(_DWORD *)(result + 140) = 1065353216;
  *(_DWORD *)(result + 144) = 1065353216;
  *(_BYTE *)(result + 148) = 0;
  *(_DWORD *)(result + 152) = 0;
  *(_DWORD *)(result + 156) = 0;
  *(_DWORD *)(result + 160) = 0;
  *(_DWORD *)(result + 164) = &unk_28898CC;
  return result;
}


Json::Value *__fastcall glTF::Asset::serialize(glTF::Asset *this, int a2)
{
  int v2; // r5@1
  Json::Value *v3; // r4@1
  int v4; // r6@2
  int v5; // r7@4
  int v6; // r0@6
  const char **v7; // r5@7
  int v8; // t1@7
  Json::Value *result; // r0@7
  int v10; // r6@8
  int v11; // [sp+0h] [bp-58h]@5
  char v12; // [sp+10h] [bp-48h]@2
  char v13; // [sp+20h] [bp-38h]@4
  char v14; // [sp+30h] [bp-28h]@8

  v2 = a2;
  v3 = this;
  Json::Value::Value(this, 0);
  if ( *(_DWORD *)(*(_DWORD *)v2 - 12) )
  {
    v4 = Json::Value::operator[](v3, "copyright");
    Json::Value::Value((int)&v12, (const char **)v2);
    Json::Value::operator=(v4, (const Json::Value *)&v12);
    Json::Value::~Value((Json::Value *)&v12);
  }
  if ( *(_DWORD *)(*(_DWORD *)(v2 + 4) - 12) )
    v5 = Json::Value::operator[](v3, "generator");
    Json::Value::Value((int)&v13, (const char **)(v2 + 4));
    Json::Value::operator=(v5, (const Json::Value *)&v13);
    Json::Value::~Value((Json::Value *)&v13);
  glTF::Asset::Profile::serialize((glTF::Asset::Profile *)&v11, v2 + 8);
  if ( Json::Value::size((Json::Value *)&v11) )
    v6 = Json::Value::operator[](v3, "profile");
    Json::Value::operator=(v6, (const Json::Value *)&v11);
  Json::Value::~Value((Json::Value *)&v11);
  v8 = *(_DWORD *)(v2 + 16);
  v7 = (const char **)(v2 + 16);
  result = *(Json::Value **)(v8 - 12);
  if ( result )
    v10 = Json::Value::operator[](v3, "version");
    Json::Value::Value((int)&v14, v7);
    Json::Value::operator=(v10, (const Json::Value *)&v14);
    result = Json::Value::~Value((Json::Value *)&v14);
  return result;
}


Json::Value *__fastcall glTF::Mesh::serialize(glTF::Mesh *this, int a2)
{
  int v2; // r10@1
  Json::Value *v3; // r8@1
  __int64 v4; // r0@1
  int v5; // r5@2
  unsigned int v6; // r7@2
  unsigned int v7; // r4@2
  int v8; // r0@5
  int v9; // r0@8
  int v10; // r6@10
  int v11; // r0@12
  int v13; // [sp+0h] [bp-50h]@4
  char v14; // [sp+10h] [bp-40h]@1
  char v15; // [sp+20h] [bp-30h]@10

  v2 = a2;
  v3 = this;
  Json::Value::Value(this, 0);
  Json::Value::Value(&v14, 0);
  v4 = *(_QWORD *)v2;
  if ( HIDWORD(v4) != (_DWORD)v4 )
  {
    v5 = 0;
    v6 = -858993459 * ((HIDWORD(v4) - (signed int)v4) >> 3);
    v7 = 0;
    while ( 1 )
    {
      glTF::Mesh::Primitive::serialize((glTF::Mesh::Primitive *)&v13, v4 + v5);
      if ( Json::Value::size((Json::Value *)&v13) )
      {
        v8 = Json::Value::operator[]((int)&v14, v7);
        Json::Value::operator=(v8, (const Json::Value *)&v13);
      }
      Json::Value::~Value((Json::Value *)&v13);
      if ( ++v7 >= v6 )
        break;
      LODWORD(v4) = *(_DWORD *)v2;
      v5 += 40;
    }
  }
  if ( Json::Value::size((Json::Value *)&v14) )
    v9 = Json::Value::operator[](v3, "primitives");
    Json::Value::operator=(v9, (const Json::Value *)&v14);
  if ( *(_DWORD *)(*(_DWORD *)(v2 + 12) - 12) )
    v10 = Json::Value::operator[](v3, "name");
    Json::Value::Value((int)&v15, (const char **)(v2 + 12));
    Json::Value::operator=(v10, (const Json::Value *)&v15);
    Json::Value::~Value((Json::Value *)&v15);
  if ( Json::Value::size((Json::Value *)(v2 + 24)) )
    v11 = Json::Value::operator[](v3, "extras");
    Json::Value::operator=(v11, (const Json::Value *)(v2 + 24));
  return Json::Value::~Value((Json::Value *)&v14);
}


signed int __fastcall glTF::Accessor::getAccessorTypeSize(unsigned int a1)
{
  signed int result; // r0@2

  if ( a1 <= 6 )
    result = dword_262D590[a1];
  else
    result = -1;
  return result;
}


int __fastcall glTF::Asset::Asset(int result)
{
  *(_DWORD *)result = &unk_28898CC;
  *(_DWORD *)(result + 4) = &unk_28898CC;
  *(_DWORD *)(result + 8) = &unk_28898CC;
  *(_DWORD *)(result + 12) = &unk_28898CC;
  *(_DWORD *)(result + 16) = &unk_28898CC;
  return result;
}


Json::Value *__fastcall glTF::Sampler::serialize(glTF::Sampler *this, int a2)
{
  int v2; // r5@1
  Json::Value *v3; // r4@1
  int v4; // r7@2
  int v5; // r6@2
  int v6; // r7@4
  int v7; // r6@4
  int v8; // r7@6
  int v9; // r6@6
  int v10; // r7@8
  int v11; // r6@8
  const char **v12; // r5@9
  int v13; // t1@9
  Json::Value *result; // r0@9
  int v15; // r6@10
  int v16; // [sp+0h] [bp-68h]@2
  char v17; // [sp+10h] [bp-58h]@4
  char v18; // [sp+20h] [bp-48h]@6
  char v19; // [sp+30h] [bp-38h]@8
  char v20; // [sp+40h] [bp-28h]@10

  v2 = a2;
  v3 = this;
  Json::Value::Value(this, 0);
  if ( *(_BYTE *)v2 )
  {
    v4 = *(_DWORD *)(v2 + 4);
    v5 = Json::Value::operator[](v3, "magFilter");
    Json::Value::Value((Json::Value *)&v16, v4);
    Json::Value::operator=(v5, (const Json::Value *)&v16);
    Json::Value::~Value((Json::Value *)&v16);
  }
  if ( *(_BYTE *)(v2 + 8) )
    v6 = *(_DWORD *)(v2 + 12);
    v7 = Json::Value::operator[](v3, "minFilter");
    Json::Value::Value((Json::Value *)&v17, v6);
    Json::Value::operator=(v7, (const Json::Value *)&v17);
    Json::Value::~Value((Json::Value *)&v17);
  if ( *(_BYTE *)(v2 + 16) )
    v8 = *(_DWORD *)(v2 + 20);
    v9 = Json::Value::operator[](v3, "wrapS");
    Json::Value::Value((Json::Value *)&v18, v8);
    Json::Value::operator=(v9, (const Json::Value *)&v18);
    Json::Value::~Value((Json::Value *)&v18);
  if ( *(_BYTE *)(v2 + 24) )
    v10 = *(_DWORD *)(v2 + 28);
    v11 = Json::Value::operator[](v3, "wrapT");
    Json::Value::Value((Json::Value *)&v19, v10);
    Json::Value::operator=(v11, (const Json::Value *)&v19);
    Json::Value::~Value((Json::Value *)&v19);
  v13 = *(_DWORD *)(v2 + 32);
  v12 = (const char **)(v2 + 32);
  result = *(Json::Value **)(v13 - 12);
  if ( result )
    v15 = Json::Value::operator[](v3, "name");
    Json::Value::Value((int)&v20, v12);
    Json::Value::operator=(v15, (const Json::Value *)&v20);
    result = Json::Value::~Value((Json::Value *)&v20);
  return result;
}


int __fastcall glTF::Material::Material(int a1)
{
  int v1; // r4@1

  v1 = a1;
  *(_DWORD *)a1 = &unk_28898CC;
  Json::Value::Value((_DWORD *)(a1 + 8), 0);
  Json::Value::Value((_DWORD *)(v1 + 24), 0);
  Json::Value::Value((_DWORD *)(v1 + 40), 0);
  *(_DWORD *)(v1 + 56) = 0;
  *(_DWORD *)(v1 + 60) = &unk_28898CC;
  return v1;
}


Json::Value *__fastcall glTF::Image::serialize(glTF::Image *this, int a2)
{
  int v2; // r9@1
  Json::Value *v3; // r8@1
  int v4; // r4@2
  int v5; // r5@4
  int v6; // r4@4
  int v7; // r7@5
  unsigned int v8; // r11@5
  int v9; // r0@5
  int v10; // r4@6
  int v11; // r5@6
  bool v12; // zf@7
  int v13; // r6@10
  bool v14; // zf@13
  int v15; // r4@16
  const char **v16; // r9@16
  int v17; // t1@16
  Json::Value *result; // r0@16
  int v19; // r4@17
  int v20; // [sp+0h] [bp-68h]@2
  char v21; // [sp+10h] [bp-58h]@4
  char v22; // [sp+20h] [bp-48h]@16
  char v23; // [sp+30h] [bp-38h]@17

  v2 = a2;
  v3 = this;
  Json::Value::Value(this, 0);
  if ( *(_DWORD *)(*(_DWORD *)v2 - 12) )
  {
    v4 = Json::Value::operator[](v3, "uri");
    Json::Value::Value((int)&v20, (const char **)v2);
    Json::Value::operator=(v4, (const Json::Value *)&v20);
    Json::Value::~Value((Json::Value *)&v20);
  }
  if ( *(_BYTE *)(v2 + 4) )
    v5 = *(_DWORD *)(v2 + 8);
    v6 = Json::Value::operator[](v3, "bufferView");
    Json::Value::Value((Json::Value *)&v21, v5);
    Json::Value::operator=(v6, (const Json::Value *)&v21);
    Json::Value::~Value((Json::Value *)&v21);
  v7 = *(_DWORD *)(v2 + 12);
  v8 = *(_DWORD *)(v2 + 12) % (unsigned int)dword_27EF204;
  v9 = *(_DWORD *)(dword_27EF200 + 4 * v8);
  if ( !v9 )
    goto LABEL_12;
  v10 = *(_DWORD *)v9;
  v11 = *(_DWORD *)(*(_DWORD *)v9 + 12);
  while ( 1 )
    v12 = v11 == v7;
    if ( v11 == v7 )
      v12 = v7 == *(_DWORD *)(v10 + 4);
    if ( v12 )
      break;
    v13 = *(_DWORD *)v10;
    if ( *(_DWORD *)v10 )
    {
      v11 = *(_DWORD *)(v13 + 12);
      v9 = v10;
      v10 = *(_DWORD *)v10;
      if ( *(_DWORD *)(v13 + 12) % (unsigned int)dword_27EF204 == v8 )
        continue;
    }
  v14 = v9 == 0;
  if ( v9 )
    v11 = *(_DWORD *)v9;
    v14 = *(_DWORD *)v9 == 0;
  if ( v14 )
LABEL_12:
    sub_21E5A84("_Map_base::at");
  v15 = Json::Value::operator[](v3, "mimeType");
  Json::Value::Value((int)&v22, (const char **)(v11 + 8));
  Json::Value::operator=(v15, (const Json::Value *)&v22);
  Json::Value::~Value((Json::Value *)&v22);
  v17 = *(_DWORD *)(v2 + 16);
  v16 = (const char **)(v2 + 16);
  result = *(Json::Value **)(v17 - 12);
  if ( result )
    v19 = Json::Value::operator[](v3, "name");
    Json::Value::Value((int)&v23, v16);
    Json::Value::operator=(v19, (const Json::Value *)&v23);
    result = Json::Value::~Value((Json::Value *)&v23);
  return result;
}


glTF::Mesh *__fastcall glTF::Mesh::Mesh(glTF::Mesh *this)
{
  glTF::Mesh *v1; // r4@1
  Json::Value *v2; // r6@1
  int v3; // r5@1
  int v5; // [sp+0h] [bp-28h]@1

  v1 = this;
  v2 = (glTF::Mesh *)((char *)this + 24);
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = &unk_28898CC;
  Json::Value::Value((_DWORD *)this + 6, 0);
  v3 = Json::Value::operator[](v2, "MSFT_minecraftMesh");
  Json::Value::Value((Json::Value *)&v5, 1);
  Json::Value::operator=(v3, (const Json::Value *)&v5);
  Json::Value::~Value((Json::Value *)&v5);
  return v1;
}


Json::Value *__fastcall glTF::Shader::serialize(glTF::Shader *this, int a2)
{
  int v2; // r5@1
  Json::Value *v3; // r4@1
  int v4; // r6@2
  int v5; // r7@3
  int v6; // r6@3
  const char **v7; // r5@3
  int v8; // t1@3
  Json::Value *result; // r0@3
  int v10; // r6@4
  int v11; // [sp+0h] [bp-48h]@2
  char v12; // [sp+10h] [bp-38h]@3
  char v13; // [sp+20h] [bp-28h]@4

  v2 = a2;
  v3 = this;
  Json::Value::Value(this, 0);
  if ( *(_DWORD *)(*(_DWORD *)v2 - 12) )
  {
    v4 = Json::Value::operator[](v3, "uri");
    Json::Value::Value((int)&v11, (const char **)v2);
    Json::Value::operator=(v4, (const Json::Value *)&v11);
    Json::Value::~Value((Json::Value *)&v11);
  }
  v5 = *(_DWORD *)(v2 + 4);
  v6 = Json::Value::operator[](v3, "type");
  Json::Value::Value((Json::Value *)&v12, v5);
  Json::Value::operator=(v6, (const Json::Value *)&v12);
  Json::Value::~Value((Json::Value *)&v12);
  v8 = *(_DWORD *)(v2 + 8);
  v7 = (const char **)(v2 + 8);
  result = *(Json::Value **)(v8 - 12);
  if ( result )
    v10 = Json::Value::operator[](v3, "name");
    Json::Value::Value((int)&v13, v7);
    Json::Value::operator=(v10, (const Json::Value *)&v13);
    result = Json::Value::~Value((Json::Value *)&v13);
  return result;
}


Json::Value *__fastcall glTF::Texture::serialize(glTF::Texture *this, int a2)
{
  int v2; // r5@1
  Json::Value *v3; // r4@1
  int v4; // r7@2
  int v5; // r6@2
  int v6; // r7@4
  int v7; // r6@4
  int v8; // r7@6
  int v9; // r6@6
  int v10; // r7@8
  int v11; // r6@8
  int v12; // r7@10
  int v13; // r6@10
  int v14; // r7@12
  int v15; // r6@12
  const char **v16; // r5@13
  int v17; // t1@13
  Json::Value *result; // r0@13
  int v19; // r6@14
  int v20; // [sp+0h] [bp-88h]@2
  char v21; // [sp+10h] [bp-78h]@4
  char v22; // [sp+20h] [bp-68h]@6
  char v23; // [sp+30h] [bp-58h]@8
  char v24; // [sp+40h] [bp-48h]@10
  char v25; // [sp+50h] [bp-38h]@12
  char v26; // [sp+60h] [bp-28h]@14

  v2 = a2;
  v3 = this;
  Json::Value::Value(this, 0);
  if ( *(_BYTE *)v2 )
  {
    v4 = *(_DWORD *)(v2 + 4);
    v5 = Json::Value::operator[](v3, "format");
    Json::Value::Value((Json::Value *)&v20, v4);
    Json::Value::operator=(v5, (const Json::Value *)&v20);
    Json::Value::~Value((Json::Value *)&v20);
  }
  if ( *(_BYTE *)(v2 + 8) )
    v6 = *(_DWORD *)(v2 + 12);
    v7 = Json::Value::operator[](v3, "internalFormat");
    Json::Value::Value((Json::Value *)&v21, v6);
    Json::Value::operator=(v7, (const Json::Value *)&v21);
    Json::Value::~Value((Json::Value *)&v21);
  if ( *(_BYTE *)(v2 + 16) )
    v8 = *(_DWORD *)(v2 + 20);
    v9 = Json::Value::operator[](v3, "sampler");
    Json::Value::Value((Json::Value *)&v22, v8);
    Json::Value::operator=(v9, (const Json::Value *)&v22);
    Json::Value::~Value((Json::Value *)&v22);
  if ( *(_BYTE *)(v2 + 24) )
    v10 = *(_DWORD *)(v2 + 28);
    v11 = Json::Value::operator[](v3, "source");
    Json::Value::Value((Json::Value *)&v23, v10);
    Json::Value::operator=(v11, (const Json::Value *)&v23);
    Json::Value::~Value((Json::Value *)&v23);
  if ( *(_BYTE *)(v2 + 32) )
    v12 = *(_DWORD *)(v2 + 36);
    v13 = Json::Value::operator[](v3, "target");
    Json::Value::Value((Json::Value *)&v24, v12);
    Json::Value::operator=(v13, (const Json::Value *)&v24);
    Json::Value::~Value((Json::Value *)&v24);
  if ( *(_BYTE *)(v2 + 40) )
    v14 = *(_DWORD *)(v2 + 44);
    v15 = Json::Value::operator[](v3, "type");
    Json::Value::Value((Json::Value *)&v25, v14);
    Json::Value::operator=(v15, (const Json::Value *)&v25);
    Json::Value::~Value((Json::Value *)&v25);
  v17 = *(_DWORD *)(v2 + 48);
  v16 = (const char **)(v2 + 48);
  result = *(Json::Value **)(v17 - 12);
  if ( result )
    v19 = Json::Value::operator[](v3, "name");
    Json::Value::Value((int)&v26, v16);
    Json::Value::operator=(v19, (const Json::Value *)&v26);
    result = Json::Value::~Value((Json::Value *)&v26);
  return result;
}


int __fastcall glTF::Scene::Scene(int result)
{
  *(_DWORD *)result = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = &unk_28898CC;
  return result;
}


int __fastcall glTF::Accessor::Accessor(int result)
{
  *(_BYTE *)result = 0;
  *(_DWORD *)(result + 4) = -1;
  *(_DWORD *)(result + 8) = 0;
  *(_BYTE *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 52) = 0;
  *(_DWORD *)(result + 44) = 0;
  *(_DWORD *)(result + 48) = 0;
  *(_DWORD *)(result + 36) = 0;
  *(_DWORD *)(result + 40) = 0;
  *(_DWORD *)(result + 28) = 0;
  *(_DWORD *)(result + 32) = 0;
  *(_DWORD *)(result + 20) = 5120;
  *(_DWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 56) = &unk_28898CC;
  return result;
}


int __fastcall glTF::Buffer::Buffer(int result)
{
  *(_QWORD *)result = (unsigned int)&unk_28898CC;
  *(_DWORD *)(result + 8) = &unk_28898CC;
  return result;
}


int *__fastcall glTF::Node::Node(int *a1, int *a2)
{
  int *v2; // r5@1
  int *v3; // r4@1
  __int64 v4; // r0@1
  char *v5; // r6@1
  signed int v6; // r0@1
  unsigned int v7; // r7@1
  __int64 v8; // kr00_8@4
  int v9; // r7@4
  __int64 v10; // r0@6
  char *v11; // r6@6
  signed int v12; // r0@6
  unsigned int v13; // r7@6
  __int64 v14; // kr08_8@9
  int v15; // r7@9

  v2 = a2;
  v3 = a1;
  sub_21E8AF4(a1, a2);
  v4 = *(_QWORD *)(v2 + 1);
  v5 = 0;
  v3[1] = 0;
  v3[2] = 0;
  v6 = HIDWORD(v4) - v4;
  v3[3] = 0;
  v7 = v6 >> 2;
  if ( v6 >> 2 )
  {
    if ( v7 >= 0x40000000 )
      sub_21E57F4();
    v5 = (char *)operator new(v6);
  }
  v3[1] = (int)v5;
  v3[2] = (int)v5;
  v3[3] = (int)&v5[4 * v7];
  v8 = *(_QWORD *)(v2 + 1);
  v9 = (HIDWORD(v8) - (signed int)v8) >> 2;
  if ( 0 != v9 )
    _aeabi_memmove4(v5, v8);
  v3[2] = (int)&v5[4 * v9];
  v10 = *((_QWORD *)v2 + 2);
  v11 = 0;
  v3[4] = 0;
  v3[5] = 0;
  v12 = HIDWORD(v10) - v10;
  v3[6] = 0;
  v13 = v12 >> 2;
  if ( v12 >> 2 )
    if ( v13 >= 0x40000000 )
    v11 = (char *)operator new(v12);
  v3[4] = (int)v11;
  v3[5] = (int)v11;
  v3[6] = (int)&v11[4 * v13];
  v14 = *((_QWORD *)v2 + 2);
  v15 = (HIDWORD(v14) - (signed int)v14) >> 2;
  if ( 0 != v15 )
    _aeabi_memmove4(v11, v14);
  v3[5] = (int)&v11[4 * v15];
  sub_21E8AF4(v3 + 7, v2 + 7);
  sub_21E8AF4(v3 + 8, v2 + 8);
  *((_BYTE *)v3 + 36) = *((_BYTE *)v2 + 36);
  _aeabi_memclr4(v3 + 10, 64);
  v3[10] = v2[10];
  v3[11] = v2[11];
  v3[12] = v2[12];
  v3[13] = v2[13];
  v3[14] = v2[14];
  v3[15] = v2[15];
  v3[16] = v2[16];
  v3[17] = v2[17];
  v3[18] = v2[18];
  v3[19] = v2[19];
  v3[20] = v2[20];
  v3[21] = v2[21];
  v3[22] = v2[22];
  v3[23] = v2[23];
  v3[24] = v2[24];
  v3[25] = v2[25];
  *((_QWORD *)v3 + 13) = *((_QWORD *)v2 + 13);
  *((_BYTE *)v3 + 112) = *((_BYTE *)v2 + 112);
  v3[29] = v2[29];
  v3[30] = v2[30];
  v3[31] = v2[31];
  v3[32] = v2[32];
  *((_BYTE *)v3 + 132) = *((_BYTE *)v2 + 132);
  v3[34] = v2[34];
  v3[35] = v2[35];
  v3[36] = v2[36];
  *((_BYTE *)v3 + 148) = *((_BYTE *)v2 + 148);
  v3[38] = v2[38];
  v3[39] = v2[39];
  v3[40] = v2[40];
  sub_21E8AF4(v3 + 41, v2 + 41);
  v3[42] = v2[42];
  return v3;
}
