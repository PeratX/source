

signed int __fastcall UpdateAttributesPacket::getId(UpdateAttributesPacket *this)
{
  return 29;
}


UpdateAttributesPacket::AttributeData *__fastcall UpdateAttributesPacket::AttributeData::AttributeData(UpdateAttributesPacket::AttributeData *this, const AttributeInstance *a2)
{
  UpdateAttributesPacket::AttributeData *v2; // r4@1
  AttributeInstance *v3; // r6@1
  int *v4; // r5@1
  Attribute *v5; // r0@1
  int *v6; // r0@1
  UpdateAttributesPacket::AttributeData *result; // r0@1

  v2 = this;
  v3 = a2;
  *((_DWORD *)this + 4) = &unk_28898CC;
  v4 = (int *)((char *)this + 16);
  v5 = (Attribute *)AttributeInstance::getAttribute(a2);
  v6 = (int *)Attribute::getName(v5);
  EntityInteraction::setInteractText(v4, v6);
  _R0 = AttributeInstance::getMinValue(v3);
  __asm
  {
    VMOV            S0, R0
    VSTR            S0, [R4,#4]
  }
  _R0 = AttributeInstance::getMaxValue(v3);
    VSTR            S0, [R4,#8]
  _R0 = AttributeInstance::getCurrentValue(v3);
    VSTR            S0, [R4]
  _R0 = AttributeInstance::getDefaultValue(v3, 2);
  __asm { VMOV            S0, R0 }
  result = v2;
  __asm { VSTR            S0, [R4,#0xC] }
  return result;
}


const void **__fastcall UpdateAttributesPacket::AttributeData::write(UpdateAttributesPacket::AttributeData *this, BinaryStream *a2)
{
  UpdateAttributesPacket::AttributeData *v2; // r5@1
  BinaryStream *v3; // r4@1

  v2 = this;
  v3 = a2;
  BinaryStream::writeFloat(a2, *((float *)this + 1));
  BinaryStream::writeFloat(v3, *((float *)v2 + 2));
  BinaryStream::writeFloat(v3, *(float *)v2);
  BinaryStream::writeFloat(v3, *((float *)v2 + 3));
  return j_j_j__ZN12BinaryStream11writeStringERKSs_1((int)v3, (char **)v2 + 4);
}


int __fastcall UpdateAttributesPacket::UpdateAttributesPacket(int result)
{
  *(_DWORD *)(result + 4) = 2;
  *(_DWORD *)(result + 8) = 1;
  *(_BYTE *)(result + 12) = 0;
  *(_DWORD *)result = &off_26E9D58;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 28) = 0;
  *(_DWORD *)(result + 32) = 0;
  return result;
}


int __fastcall UpdateAttributesPacket::getRuntimeId(int result, int a2)
{
  *(_QWORD *)result = *(_QWORD *)(a2 + 16);
  return result;
}


void __fastcall UpdateAttributesPacket::AttributeData::read(UpdateAttributesPacket::AttributeData *this, ReadOnlyBinaryStream *a2)
{
  ReadOnlyBinaryStream *v2; // r5@1
  UpdateAttributesPacket::AttributeData *v3; // r4@1
  void *v4; // r0@1
  unsigned int *v5; // r2@3
  signed int v6; // r1@5
  int v7; // [sp+4h] [bp-1Ch]@1

  v2 = a2;
  v3 = this;
  *((_DWORD *)this + 1) = ReadOnlyBinaryStream::getFloat(a2);
  *((_DWORD *)v3 + 2) = ReadOnlyBinaryStream::getFloat(v2);
  *(_DWORD *)v3 = ReadOnlyBinaryStream::getFloat(v2);
  *((_DWORD *)v3 + 3) = ReadOnlyBinaryStream::getFloat(v2);
  ReadOnlyBinaryStream::getString((ReadOnlyBinaryStream *)&v7, (int)v2);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)v3 + 4,
    &v7);
  v4 = (void *)(v7 - 12);
  if ( (int *)(v7 - 12) != &dword_28898C0 )
  {
    v5 = (unsigned int *)(v7 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v6 = __ldrex(v5);
      while ( __strex(v6 - 1, v5) );
    }
    else
      v6 = (*v5)--;
    if ( v6 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  }
}


void __fastcall UpdateAttributesPacket::~UpdateAttributesPacket(UpdateAttributesPacket *this)
{
  UpdateAttributesPacket::~UpdateAttributesPacket(this);
}


char *__fastcall UpdateAttributesPacket::getAttributeData(UpdateAttributesPacket *this)
{
  return (char *)this + 24;
}


UpdateAttributesPacket::AttributeData *__fastcall UpdateAttributesPacket::AttributeData::AttributeData(UpdateAttributesPacket::AttributeData *this)
{
  UpdateAttributesPacket::AttributeData *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  sub_21E94B4((void **)this + 4, "Invalid");
  return v1;
}


int __fastcall UpdateAttributesPacket::handle(UpdateAttributesPacket *this, const NetworkIdentifier *a2, NetEventCallback *a3)
{
  return (*(int (__fastcall **)(NetEventCallback *, const NetworkIdentifier *, UpdateAttributesPacket *))(*(_DWORD *)a3 + 292))(
           a3,
           a2,
           this);
}


void __fastcall UpdateAttributesPacket::AttributeData::read(UpdateAttributesPacket::AttributeData *this, ReadOnlyBinaryStream *a2)
{
  UpdateAttributesPacket::AttributeData::read(this, a2);
}


int __fastcall UpdateAttributesPacket::UpdateAttributesPacket(int a1, int a2, unsigned __int64 *a3)
{
  int v3; // r5@1
  unsigned __int64 *v4; // r7@1
  int v5; // r4@1
  unsigned __int64 *v6; // r9@1
  AttributeInstanceHandle *i; // r6@1
  AttributeInstanceHandle *v8; // r8@1
  unsigned int *v9; // r2@3
  signed int v10; // r1@5
  const AttributeInstance *v11; // r0@11
  __int64 v12; // r0@11
  int v13; // r2@12
  int v14; // r3@12
  int v15; // r4@12
  char *v16; // r1@12
  char *v17; // r0@14
  int v19; // [sp+0h] [bp-48h]@11
  int v20; // [sp+4h] [bp-44h]@12
  int v21; // [sp+8h] [bp-40h]@12
  int v22; // [sp+Ch] [bp-3Ch]@12
  char *v23; // [sp+10h] [bp-38h]@12
  char v24; // [sp+18h] [bp-30h]@1

  v3 = a1;
  v4 = a3;
  *(_DWORD *)(a1 + 4) = 2;
  *(_DWORD *)(a1 + 8) = 1;
  *(_BYTE *)(a1 + 12) = 0;
  *(_DWORD *)a1 = &off_26E9D58;
  *(_DWORD *)(a1 + 16) = 0;
  v5 = a1 + 16;
  *(_DWORD *)(v5 + 12) = 0;
  *(_DWORD *)(v5 + 16) = 0;
  *(_DWORD *)(v5 + 4) = 0;
  *(_DWORD *)(v5 + 8) = 0;
  v6 = (unsigned __int64 *)(a1 + 24);
  Entity::getRuntimeID((Entity *)&v24, a2);
  *(_QWORD *)v5 = *(_QWORD *)&v24;
  v8 = (AttributeInstanceHandle *)(*v4 >> 32);
  for ( i = (AttributeInstanceHandle *)*v4; i != v8; i = (AttributeInstanceHandle *)((char *)i + 8) )
  {
    v11 = (const AttributeInstance *)AttributeInstanceHandle::getInstance(i);
    UpdateAttributesPacket::AttributeData::AttributeData((UpdateAttributesPacket::AttributeData *)&v19, v11);
    v12 = *(_QWORD *)(v3 + 28);
    if ( (_DWORD)v12 == HIDWORD(v12) )
    {
      std::vector<UpdateAttributesPacket::AttributeData,std::allocator<UpdateAttributesPacket::AttributeData>>::_M_emplace_back_aux<UpdateAttributesPacket::AttributeData>(
        v6,
        (int)&v19);
      v16 = v23;
    }
    else
      v13 = v20;
      v14 = v21;
      v15 = v22;
      *(_DWORD *)v12 = v19;
      *(_DWORD *)(v12 + 4) = v13;
      *(_DWORD *)(v12 + 8) = v14;
      *(_DWORD *)(v12 + 12) = v15;
      *(_DWORD *)(v12 + 16) = v23;
      v16 = (char *)&unk_28898CC;
      v23 = (char *)&unk_28898CC;
      *(_DWORD *)(v3 + 28) += 20;
    v17 = v16 - 12;
    if ( (int *)(v16 - 12) != &dword_28898C0 )
      v9 = (unsigned int *)(v16 - 4);
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
        j_j_j_j__ZdlPv_9(v17);
  }
  return v3;
}


UpdateAttributesPacket *__fastcall UpdateAttributesPacket::~UpdateAttributesPacket(UpdateAttributesPacket *this)
{
  UpdateAttributesPacket *v1; // r10@1
  int v2; // r5@1
  int v3; // r7@1
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  int v6; // r1@11
  void *v7; // r0@11

  v1 = this;
  *(_DWORD *)this = &off_26E9D58;
  v3 = *((_QWORD *)this + 3) >> 32;
  v2 = *((_QWORD *)this + 3);
  if ( v2 != v3 )
  {
    do
    {
      v6 = *(_DWORD *)(v2 + 16);
      v7 = (void *)(v6 - 12);
      if ( (int *)(v6 - 12) != &dword_28898C0 )
      {
        v4 = (unsigned int *)(v6 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v5 = __ldrex(v4);
          while ( __strex(v5 - 1, v4) );
        }
        else
          v5 = (*v4)--;
        if ( v5 <= 0 )
          j_j_j_j__ZdlPv_9(v7);
      }
      v2 += 20;
    }
    while ( v2 != v3 );
    v2 = *((_DWORD *)v1 + 6);
  }
  if ( v2 )
    operator delete((void *)v2);
  return v1;
}


unsigned int __fastcall UpdateAttributesPacket::write(UpdateAttributesPacket *this, BinaryStream *a2)
{
  BinaryStream *v2; // r4@1
  UpdateAttributesPacket *v3; // r5@1
  unsigned int result; // r0@1
  __int64 i; // r6@1
  void *v6; // [sp+4h] [bp-24h]@1
  int (*v7)(void); // [sp+Ch] [bp-1Ch]@1
  const void **(__fastcall *v8)(int, BinaryStream *, int); // [sp+10h] [bp-18h]@1

  v2 = a2;
  v3 = this;
  BinaryStream::writeType<EntityRuntimeID>((int)a2, (unsigned __int64 *)this + 2);
  v6 = operator new(1u);
  v7 = (int (*)(void))sub_14C0A24;
  v8 = sub_14C09F0;
  result = BinaryStream::writeUnsignedVarInt(
             v2,
             -858993459 * ((signed int)((*((_QWORD *)v3 + 3) >> 32) - *((_QWORD *)v3 + 3)) >> 2));
  for ( i = *((_QWORD *)v3 + 3); HIDWORD(i) != (_DWORD)i; LODWORD(i) = i + 20 )
  {
    if ( !v7 )
      sub_21E5F48();
    result = (int)v8((int)&v6, v2, i);
  }
  if ( v7 )
    result = v7();
  return result;
}


void __fastcall UpdateAttributesPacket::~UpdateAttributesPacket(UpdateAttributesPacket *this)
{
  UpdateAttributesPacket *v1; // r10@1
  int v2; // r5@1
  int v3; // r7@1
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  int v6; // r1@11
  void *v7; // r0@11

  v1 = this;
  *(_DWORD *)this = &off_26E9D58;
  v3 = *((_QWORD *)this + 3) >> 32;
  v2 = *((_QWORD *)this + 3);
  if ( v2 != v3 )
  {
    do
    {
      v6 = *(_DWORD *)(v2 + 16);
      v7 = (void *)(v6 - 12);
      if ( (int *)(v6 - 12) != &dword_28898C0 )
      {
        v4 = (unsigned int *)(v6 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v5 = __ldrex(v4);
          while ( __strex(v5 - 1, v4) );
        }
        else
          v5 = (*v4)--;
        if ( v5 <= 0 )
          j_j_j_j__ZdlPv_9(v7);
      }
      v2 += 20;
    }
    while ( v2 != v3 );
    v2 = *((_DWORD *)v1 + 6);
  }
  if ( v2 )
    operator delete((void *)v2);
  operator delete((void *)v1);
}


int __fastcall UpdateAttributesPacket::read(UpdateAttributesPacket *this, BinaryStream *a2)
{
  UpdateAttributesPacket *v2; // r5@1
  BinaryStream *v3; // r4@1
  void *v5; // [sp+0h] [bp-28h]@1
  void (*v6)(void); // [sp+8h] [bp-20h]@1
  void (__fastcall *v7)(int, int, ReadOnlyBinaryStream *); // [sp+Ch] [bp-1Ch]@1
  char v8; // [sp+10h] [bp-18h]@1

  v2 = this;
  v3 = a2;
  ReadOnlyBinaryStream::getType<EntityRuntimeID>((int)&v8, (int)a2);
  *((_QWORD *)v2 + 2) = *(_QWORD *)&v8;
  v5 = operator new(1u);
  v6 = (void (*)(void))sub_14C0C14;
  v7 = sub_14C0B90;
  ReadOnlyBinaryStream::readVectorList<UpdateAttributesPacket::AttributeData>(v3, (__int64 *)v2 + 3, (int)&v5);
  if ( v6 )
    v6();
  return 0;
}
