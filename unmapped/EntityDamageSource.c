

signed int __fastcall EntityDamageSource::getEntityType(EntityDamageSource *this)
{
  return 1;
}


void __fastcall EntityDamageSource::getDeathMessage(int a1, int a2, int *a3, int _R3)
{
  EntityDamageSource::getDeathMessage(a1, a2, a3, _R3);
}


void __fastcall EntityDamageSource::getDeathMessage(int a1, int a2, int *a3, int _R3)
{
  int v4; // r4@1
  __int64 v5; // r5@2
  int v6; // r1@2
  void *v7; // r0@2
  unsigned int *v8; // r2@3
  signed int v9; // r1@5
  __int64 v10; // r5@7
  int v11; // r1@7
  __int64 v12; // r5@12
  int v13; // r1@12
  __int64 v14; // r5@17
  int v15; // r1@17
  __int64 v16; // r5@22
  int v17; // r1@22
  __int64 v18; // r5@27
  int v19; // r1@27
  __int64 v20; // r5@32
  int v21; // r1@32
  __int64 v22; // r5@37
  int v23; // r1@37
  __int64 v24; // r5@42
  int v25; // r1@42
  __int64 v30; // r5@49
  int v31; // r1@49
  __int64 v32; // r5@54
  int v33; // r1@54
  __int64 v34; // r5@59
  int v35; // r1@59
  __int64 v36; // r5@64
  int v37; // r1@64
  __int64 v38; // r5@69
  int v39; // r1@69
  __int64 v40; // r5@74
  int v41; // r1@74
  __int64 v42; // r5@79
  int v43; // r1@79
  int v44; // [sp+0h] [bp-A8h]@37
  int v45; // [sp+4h] [bp-A4h]@7
  int v46; // [sp+8h] [bp-A0h]@7
  int v47; // [sp+Ch] [bp-9Ch]@12
  int v48; // [sp+10h] [bp-98h]@12
  int v49; // [sp+14h] [bp-94h]@17
  int v50; // [sp+18h] [bp-90h]@17
  int v51; // [sp+1Ch] [bp-8Ch]@2
  int v52; // [sp+20h] [bp-88h]@2
  int v53; // [sp+24h] [bp-84h]@27
  int v54; // [sp+28h] [bp-80h]@54
  int v55; // [sp+2Ch] [bp-7Ch]@54
  int v56; // [sp+30h] [bp-78h]@22
  int v57; // [sp+34h] [bp-74h]@22
  int v58; // [sp+38h] [bp-70h]@49
  int v59; // [sp+3Ch] [bp-6Ch]@42
  char v60; // [sp+40h] [bp-68h]@42

  v4 = a1;
  switch ( *(_DWORD *)(a2 + 4) )
  {
    case 0xA:
    case 0xB:
      sub_21E8AF4(&v51, a3);
      LODWORD(v5) = operator new(4u);
      HIDWORD(v5) = std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                      (int)&v51,
                      (int)&v52,
                      v5);
      sub_21E94B4((void **)v4, "death.attack.explosion");
      *(_QWORD *)(v4 + 4) = v5;
      v6 = v51;
      *(_DWORD *)(v4 + 12) = v5 + 4;
      v7 = (void *)(v6 - 12);
      if ( (int *)(v6 - 12) != &dword_28898C0 )
      {
        v8 = (unsigned int *)(v6 - 4);
        if ( !&pthread_create )
          goto LABEL_84;
        __dmb();
        do
          v9 = __ldrex(v8);
        while ( __strex(v9 - 1, v8) );
        goto LABEL_85;
      }
      break;
    case 0x15:
      sub_21E8AF4(&v45, a3);
      LODWORD(v10) = operator new(4u);
      HIDWORD(v10) = std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                       (int)&v45,
                       (int)&v46,
                       v10);
      sub_21E94B4((void **)v4, "death.attack.flyIntoWall");
      *(_QWORD *)(v4 + 4) = v10;
      v11 = v45;
      *(_DWORD *)(v4 + 12) = v10 + 4;
      v7 = (void *)(v11 - 12);
      if ( (int *)(v11 - 12) != &dword_28898C0 )
        v8 = (unsigned int *)(v11 - 4);
    case 0xF:
      sub_21E8AF4(&v47, a3);
      LODWORD(v12) = operator new(4u);
      HIDWORD(v12) = std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                       (int)&v47,
                       (int)&v48,
                       v12);
      sub_21E94B4((void **)v4, "death.attack.wither");
      *(_QWORD *)(v4 + 4) = v12;
      v13 = v47;
      *(_DWORD *)(v4 + 12) = v12 + 4;
      v7 = (void *)(v13 - 12);
      if ( (int *)(v13 - 12) != &dword_28898C0 )
        v8 = (unsigned int *)(v13 - 4);
    case 0x11:
      sub_21E8AF4(&v49, a3);
      LODWORD(v14) = operator new(4u);
      HIDWORD(v14) = std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                       (int)&v49,
                       (int)&v50,
                       v14);
      sub_21E94B4((void **)v4, "death.attack.anvil");
      *(_QWORD *)(v4 + 4) = v14;
      v15 = v49;
      *(_DWORD *)(v4 + 12) = v14 + 4;
      v7 = (void *)(v15 - 12);
      if ( (int *)(v15 - 12) != &dword_28898C0 )
        v8 = (unsigned int *)(v15 - 4);
    case 6:
      sub_21E8AF4(&v56, a3);
      LODWORD(v16) = operator new(4u);
      HIDWORD(v16) = std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                       (int)&v56,
                       (int)&v57,
                       v16);
      sub_21E94B4((void **)v4, "death.attack.inFire");
      *(_QWORD *)(v4 + 4) = v16;
      v17 = v56;
      *(_DWORD *)(v4 + 12) = v16 + 4;
      v7 = (void *)(v17 - 12);
      if ( (int *)(v17 - 12) != &dword_28898C0 )
        v8 = (unsigned int *)(v17 - 4);
    case 9:
      sub_21E8AF4(&v52, a3);
      LODWORD(v18) = operator new(4u);
      HIDWORD(v18) = std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                       (int)&v52,
                       (int)&v53,
                       v18);
      sub_21E94B4((void **)v4, "death.attack.drown");
      *(_QWORD *)(v4 + 4) = v18;
      v19 = v52;
      *(_DWORD *)(v4 + 12) = v18 + 4;
      v7 = (void *)(v19 - 12);
      if ( (int *)(v19 - 12) != &dword_28898C0 )
        v8 = (unsigned int *)(v19 - 4);
    case 0x10:
      sub_21E8AF4(&v48, a3);
      LODWORD(v20) = operator new(4u);
      HIDWORD(v20) = std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                       v20);
      sub_21E94B4((void **)v4, "death.attack.starve");
      *(_QWORD *)(v4 + 4) = v20;
      v21 = v48;
      *(_DWORD *)(v4 + 12) = v20 + 4;
      v7 = (void *)(v21 - 12);
      if ( (int *)(v21 - 12) != &dword_28898C0 )
        v8 = (unsigned int *)(v21 - 4);
    default:
      sub_21E8AF4(&v44, a3);
      LODWORD(v22) = operator new(4u);
      HIDWORD(v22) = std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                       (int)&v44,
                       v22);
      sub_21E94B4((void **)v4, "death.attack.generic");
      *(_QWORD *)(v4 + 4) = v22;
      v23 = v44;
      *(_DWORD *)(v4 + 12) = v22 + 4;
      v7 = (void *)(v23 - 12);
      if ( (int *)(v23 - 12) != &dword_28898C0 )
        v8 = (unsigned int *)(v23 - 4);
    case 4:
      sub_21E8AF4(&v59, a3);
      LODWORD(v24) = operator new(4u);
      HIDWORD(v24) = std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                       (int)&v59,
                       (int)&v60,
                       v24);
      sub_21E94B4((void **)v4, "death.attack.inWall");
      *(_QWORD *)(v4 + 4) = v24;
      v25 = v59;
      *(_DWORD *)(v4 + 12) = v24 + 4;
      v7 = (void *)(v25 - 12);
      if ( (int *)(v25 - 12) != &dword_28898C0 )
        v8 = (unsigned int *)(v25 - 4);
    case 5:
      if ( !_R3 )
        goto LABEL_90;
      __asm
        VMOV.F32        S0, #5.0
        VLDR            S2, [R3,#0xE0]
        VCMPE.F32       S2, S0
        VMRS            APSR_nzcv, FPSCR
      if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
LABEL_90:
        sub_21E8AF4(&v57, a3);
        LODWORD(v42) = operator new(4u);
        HIDWORD(v42) = std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                         (int)&v57,
                         (int)&v58,
                         v42);
        sub_21E94B4((void **)v4, "death.attack.fall");
        *(_QWORD *)(v4 + 4) = v42;
        v43 = v57;
        *(_DWORD *)(v4 + 12) = v42 + 4;
        v7 = (void *)(v43 - 12);
        if ( (int *)(v43 - 12) != &dword_28898C0 )
        {
          v8 = (unsigned int *)(v43 - 4);
          if ( !&pthread_create )
            goto LABEL_84;
          __dmb();
          do
            v9 = __ldrex(v8);
          while ( __strex(v9 - 1, v8) );
          goto LABEL_85;
        }
      else
        sub_21E8AF4(&v58, a3);
        LODWORD(v30) = operator new(4u);
        HIDWORD(v30) = std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                         (int)&v59,
                         v30);
        sub_21E94B4((void **)v4, "death.fell.accident.generic");
        *(_QWORD *)(v4 + 4) = v30;
        v31 = v58;
        *(_DWORD *)(v4 + 12) = v30 + 4;
        v7 = (void *)(v31 - 12);
        if ( (int *)(v31 - 12) != &dword_28898C0 )
          v8 = (unsigned int *)(v31 - 4);
    case 0x17:
      sub_21E8AF4(&v54, a3);
      LODWORD(v32) = operator new(4u);
      HIDWORD(v32) = std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                       (int)&v54,
                       (int)&v55,
                       v32);
      sub_21E94B4((void **)v4, "death.attack.fireworks");
      *(_QWORD *)(v4 + 4) = v32;
      v33 = v54;
      *(_DWORD *)(v4 + 12) = v32 + 4;
      v7 = (void *)(v33 - 12);
      if ( (int *)(v33 - 12) != &dword_28898C0 )
        v8 = (unsigned int *)(v33 - 4);
    case 7:
      sub_21E8AF4(&v55, a3);
      LODWORD(v34) = operator new(4u);
      HIDWORD(v34) = std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                       v34);
      sub_21E94B4((void **)v4, "death.attack.onFire");
      *(_QWORD *)(v4 + 4) = v34;
      v35 = v55;
      *(_DWORD *)(v4 + 12) = v34 + 4;
      v7 = (void *)(v35 - 12);
      if ( (int *)(v35 - 12) != &dword_28898C0 )
        v8 = (unsigned int *)(v35 - 4);
    case 8:
      sub_21E8AF4(&v53, a3);
      LODWORD(v36) = operator new(4u);
      HIDWORD(v36) = std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                       v36);
      sub_21E94B4((void **)v4, "death.attack.lava");
      *(_QWORD *)(v4 + 4) = v36;
      v37 = v53;
      *(_DWORD *)(v4 + 12) = v36 + 4;
      v7 = (void *)(v37 - 12);
      if ( (int *)(v37 - 12) != &dword_28898C0 )
        v8 = (unsigned int *)(v37 - 4);
    case 0xE:
      sub_21E8AF4(&v46, a3);
      LODWORD(v38) = operator new(4u);
      HIDWORD(v38) = std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                       v38);
      sub_21E94B4((void **)v4, "death.attack.magic");
      *(_QWORD *)(v4 + 4) = v38;
      v39 = v46;
      *(_DWORD *)(v4 + 12) = v38 + 4;
      v7 = (void *)(v39 - 12);
      if ( (int *)(v39 - 12) != &dword_28898C0 )
        v8 = (unsigned int *)(v39 - 4);
    case 0xC:
      sub_21E8AF4(&v50, a3);
      LODWORD(v40) = operator new(4u);
      HIDWORD(v40) = std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                       (int)&v51,
                       v40);
      sub_21E94B4((void **)v4, "death.attack.outOfWorld");
      *(_QWORD *)(v4 + 4) = v40;
      v41 = v50;
      *(_DWORD *)(v4 + 12) = v40 + 4;
      v7 = (void *)(v41 - 12);
      if ( (int *)(v41 - 12) != &dword_28898C0 )
        v8 = (unsigned int *)(v41 - 4);
        if ( &pthread_create )
        else
LABEL_84:
          v9 = (*v8)--;
LABEL_85:
        if ( v9 <= 0 )
          j_j_j_j__ZdlPv_9(v7);
  }
}


signed int __fastcall EntityDamageSource::lookupCause(int **a1)
{
  int v1; // r0@1
  signed int result; // r0@2

  v1 = std::_Hashtable<std::string,std::pair<std::string const,EntityDamageCause>,std::allocator<std::pair<std::string const,EntityDamageCause>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
         (unsigned __int64 *)&unk_27FDF14,
         a1);
  if ( v1 )
    result = *(_DWORD *)(v1 + 8);
  else
    result = -1;
  return result;
}


int __fastcall EntityDamageSource::getDamagingEntityUniqueID(int result)
{
  *(_DWORD *)result = -1;
  *(_DWORD *)(result + 4) = -1;
  return result;
}


int __fastcall EntityDamageSource::getDamagingEntityCategories(EntityDamageSource *this)
{
  return 0;
}


int __fastcall EntityDamageSource::isBlockSource(EntityDamageSource *this)
{
  return 0;
}


signed int __fastcall EntityDamageSource::getDamagingEntityType(EntityDamageSource *this)
{
  return 1;
}


_DWORD *__fastcall EntityDamageSource::EntityDamageSource(_DWORD *a1, int **a2)
{
  _DWORD *v2; // r4@1
  int v3; // r0@1
  signed int v4; // r0@2

  v2 = a1;
  *a1 = &off_26F13E0;
  v3 = std::_Hashtable<std::string,std::pair<std::string const,EntityDamageCause>,std::allocator<std::pair<std::string const,EntityDamageCause>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
         (unsigned __int64 *)&unk_27FDF14,
         a2);
  if ( v3 )
    v4 = *(_DWORD *)(v3 + 8);
  else
    v4 = -1;
  v2[1] = v4;
  return v2;
}


int __fastcall EntityDamageSource::getDamagingEntityIsWorldBuilder(EntityDamageSource *this)
{
  return 0;
}


int __fastcall EntityDamageSource::getIsCreative(EntityDamageSource *this)
{
  return 0;
}


int __fastcall EntityDamageSource::EntityDamageSource(int result, int a2)
{
  *(_DWORD *)result = &off_26F13E0;
  *(_DWORD *)(result + 4) = a2;
  return result;
}


int __fastcall EntityDamageSource::getDamagingEntityIsCreative(EntityDamageSource *this)
{
  return 0;
}


int __fastcall EntityDamageSource::isChildEntitySource(EntityDamageSource *this)
{
  return 0;
}


int __fastcall EntityDamageSource::getEntityUniqueID(int result)
{
  *(_DWORD *)result = -1;
  *(_DWORD *)(result + 4) = -1;
  return result;
}


int __fastcall EntityDamageSource::getIsWorldBuilder(EntityDamageSource *this)
{
  return 0;
}


int __fastcall EntityDamageSource::getEntityCategories(EntityDamageSource *this)
{
  return 0;
}


int __fastcall EntityDamageSource::isEntitySource(EntityDamageSource *this)
{
  return 0;
}
