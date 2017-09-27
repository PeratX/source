

signed int __fastcall WeaponItem::isHandEquipped(WeaponItem *this)
{
  return 1;
}


void __fastcall WeaponItem::hurtEnemy(WeaponItem *this, ItemInstance *a2, Mob *a3, Mob *a4)
{
  j_j_j__ZN12ItemInstance12hurtAndBreakEiP6Entity_0(a2, 1, a4);
}


int __fastcall WeaponItem::getDestroySpeed(WeaponItem *this, const ItemInstance *a2, const Block *a3)
{
  int result; // r0@3

  __asm
  {
    VMOV.F32        S2, #15.0
    VMOV.F32        S0, #1.5
  }
  if ( *((_BYTE *)a3 + 4) == *(_BYTE *)(Block::mWeb + 4) )
    __asm { VMOVEQ.F32      S0, S2 }
  __asm { VMOV            R0, S0 }
  return result;
}


void __fastcall WeaponItem::hurtEnemy(WeaponItem *this, ItemInstance *a2, Mob *a3, Mob *a4)
{
  WeaponItem::hurtEnemy(this, a2, a3, a4);
}


void __fastcall WeaponItem::~WeaponItem(WeaponItem *this)
{
  WeaponItem::~WeaponItem(this);
}


void __fastcall WeaponItem::~WeaponItem(WeaponItem *this)
{
  Item *v1; // r0@1

  v1 = Item::~Item(this);
  j_j_j__ZdlPv_6((void *)v1);
}


signed int __fastcall WeaponItem::getEnchantSlot(WeaponItem *this)
{
  return 16;
}


void __fastcall WeaponItem::appendFormattedHovertext(int a1, int a2, int a3, int a4, int a5)
{
  WeaponItem::appendFormattedHovertext(a1, a2, a3, a4, a5);
}


signed int __fastcall WeaponItem::canDestroySpecial(WeaponItem *this, const Block *a2)
{
  signed int result; // r0@1

  result = 0;
  if ( *((_BYTE *)a2 + 4) == *(_BYTE *)(Block::mWeb + 4) )
    result = 1;
  return result;
}


void __fastcall WeaponItem::appendFormattedHovertext(int a1, int a2, int a3, int a4, int a5)
{
  int v5; // r6@1
  const void **v6; // r4@1
  int v7; // r5@1
  const ItemInstance *v8; // r2@1
  const void **v16; // r0@1
  const void **v17; // r0@1
  __int64 v18; // kr00_8@1
  unsigned int v19; // r1@1
  const void **v20; // r0@3
  void *v21; // r0@5
  void *v22; // r0@6
  void *v23; // r0@7
  char *v24; // r0@8
  void *v25; // r0@9
  const void **v26; // r0@10
  const void **v27; // r0@10
  char *v28; // r0@10
  char *v29; // r0@11
  char *v30; // r0@12
  char *v31; // r0@13
  unsigned int *v32; // r2@15
  signed int v33; // r1@17
  unsigned int *v34; // r2@19
  signed int v35; // r1@21
  unsigned int *v36; // r2@23
  signed int v37; // r1@25
  unsigned int *v38; // r2@27
  signed int v39; // r1@29
  unsigned int *v40; // r2@31
  signed int v41; // r1@33
  unsigned int *v42; // r2@35
  signed int v43; // r1@37
  unsigned int *v44; // r2@39
  signed int v45; // r1@41
  unsigned int *v46; // r2@43
  signed int v47; // r1@45
  unsigned int *v48; // r2@47
  signed int v49; // r1@49
  char *v50; // [sp+4h] [bp-3Ch]@1
  char *v51; // [sp+8h] [bp-38h]@1
  void *v52; // [sp+Ch] [bp-34h]@1
  int v53; // [sp+10h] [bp-30h]@1
  int v54; // [sp+14h] [bp-2Ch]@1
  int v55; // [sp+18h] [bp-28h]@1
  int v56; // [sp+1Ch] [bp-24h]@1
  char *v57; // [sp+20h] [bp-20h]@1
  unsigned int v58; // [sp+24h] [bp-1Ch]@1
  char *v59; // [sp+28h] [bp-18h]@1
  int v60; // [sp+2Ch] [bp-14h]@1
  int v61; // [sp+30h] [bp-10h]@1
  char v62; // [sp+34h] [bp-Ch]@1

  v5 = a1;
  v6 = (const void **)a4;
  v7 = a2;
  Item::appendFormattedHovertext(
    a1,
    (ItemInstance *)a2,
    a3,
    a4,
    a5,
    (int)v50,
    (int)v51,
    v52,
    v53,
    v54,
    v55,
    v56,
    (int)v57,
    v58,
    (int)v59,
    v60,
    v61,
    v62);
  _R0 = EnchantUtils::getEnchantLevel((EnchantUtils *)9, v7, v8);
  __asm
  {
    VMOV            S2, R0
    VMOV.F32        S0, #1.25
    VCVT.F32.S32    S2, S2
  }
  _R0 = *(_DWORD *)(v5 + 116);
    VMOV            S4, R0
    VCVT.F32.S32    S4, S4
    VMUL.F32        S0, S2, S0
    VADD.F32        S0, S4, S0
    VMOV            R1, S0
  Util::toString((Util *)&v56, _R1);
  v16 = sub_21E82D8((const void **)&v56, 0, (unsigned int)"+", (_BYTE *)1);
  v57 = (char *)*v16;
  *v16 = &unk_28898CC;
  v17 = sub_21E7408((const void **)&v57, " ", 1u);
  v58 = (unsigned int)*v17;
  *v17 = &unk_28898CC;
  sub_21E94B4((void **)&v54, "attribute.name.generic.attackDamage");
  I18n::get(&v55, (int **)&v54);
  v18 = *(_QWORD *)(v58 - 12);
  v19 = *(_DWORD *)(v55 - 12) + v18;
  if ( v19 > HIDWORD(v18) && v19 <= *(_DWORD *)(v55 - 8) )
    v20 = sub_21E82D8((const void **)&v55, 0, v58, (_BYTE *)v18);
  else
    v20 = sub_21E72F0((const void **)&v58, (const void **)&v55);
  v59 = (char *)*v20;
  *v20 = &unk_28898CC;
  v21 = (void *)(v55 - 12);
  if ( (int *)(v55 - 12) != &dword_28898C0 )
    v32 = (unsigned int *)(v55 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v33 = __ldrex(v32);
      while ( __strex(v33 - 1, v32) );
    }
    else
      v33 = (*v32)--;
    if ( v33 <= 0 )
      j_j_j_j__ZdlPv_9(v21);
  v22 = (void *)(v54 - 12);
  if ( (int *)(v54 - 12) != &dword_28898C0 )
    v34 = (unsigned int *)(v54 - 4);
        v35 = __ldrex(v34);
      while ( __strex(v35 - 1, v34) );
      v35 = (*v34)--;
    if ( v35 <= 0 )
      j_j_j_j__ZdlPv_9(v22);
  v23 = (void *)(v58 - 12);
  if ( (int *)(v58 - 12) != &dword_28898C0 )
    v36 = (unsigned int *)(v58 - 4);
        v37 = __ldrex(v36);
      while ( __strex(v37 - 1, v36) );
      v37 = (*v36)--;
    if ( v37 <= 0 )
      j_j_j_j__ZdlPv_9(v23);
  v24 = v57 - 12;
  if ( (int *)(v57 - 12) != &dword_28898C0 )
    v38 = (unsigned int *)(v57 - 4);
        v39 = __ldrex(v38);
      while ( __strex(v39 - 1, v38) );
      v39 = (*v38)--;
    if ( v39 <= 0 )
      j_j_j_j__ZdlPv_9(v24);
  v25 = (void *)(v56 - 12);
  if ( (int *)(v56 - 12) != &dword_28898C0 )
    v40 = (unsigned int *)(v56 - 4);
        v41 = __ldrex(v40);
      while ( __strex(v41 - 1, v40) );
      v41 = (*v40)--;
    if ( v41 <= 0 )
      j_j_j_j__ZdlPv_9(v25);
  v50 = (char *)&unk_28898CC;
  sub_21E6FCC((const void **)&v50, *(_DWORD *)(dword_2806E2C - 12) + 2);
  sub_21E7408((const void **)&v50, "\n\n", 2u);
  sub_21E72F0((const void **)&v50, (const void **)&dword_2806E2C);
  v26 = sub_21E72F0((const void **)&v50, (const void **)&v59);
  v51 = (char *)*v26;
  *v26 = &unk_28898CC;
  v27 = sub_21E72F0((const void **)&v51, (const void **)&unk_2806E54);
  v52 = (void *)*v27;
  *v27 = &unk_28898CC;
  sub_21E72F0(v6, (const void **)&v52);
  v28 = (char *)v52 - 12;
  if ( (int *)((char *)v52 - 12) != &dword_28898C0 )
    v42 = (unsigned int *)((char *)v52 - 4);
        v43 = __ldrex(v42);
      while ( __strex(v43 - 1, v42) );
      v43 = (*v42)--;
    if ( v43 <= 0 )
      j_j_j_j__ZdlPv_9(v28);
  v29 = v51 - 12;
  if ( (int *)(v51 - 12) != &dword_28898C0 )
    v44 = (unsigned int *)(v51 - 4);
        v45 = __ldrex(v44);
      while ( __strex(v45 - 1, v44) );
      v45 = (*v44)--;
    if ( v45 <= 0 )
      j_j_j_j__ZdlPv_9(v29);
  v30 = v50 - 12;
  if ( (int *)(v50 - 12) != &dword_28898C0 )
    v46 = (unsigned int *)(v50 - 4);
        v47 = __ldrex(v46);
      while ( __strex(v47 - 1, v46) );
      v47 = (*v46)--;
    if ( v47 <= 0 )
      j_j_j_j__ZdlPv_9(v30);
  v31 = v59 - 12;
  if ( (int *)(v59 - 12) != &dword_28898C0 )
    v48 = (unsigned int *)(v59 - 4);
        v49 = __ldrex(v48);
      while ( __strex(v49 - 1, v48) );
      v49 = (*v48)--;
    if ( v49 <= 0 )
      j_j_j_j__ZdlPv_9(v31);
}


ItemInstance *__fastcall WeaponItem::use(WeaponItem *this, ItemInstance *a2, Player *a3)
{
  return a2;
}


int __fastcall WeaponItem::canDestroyInCreative(WeaponItem *this)
{
  return 0;
}


signed int __fastcall WeaponItem::isValidRepairItem(WeaponItem *this, const ItemInstance *a2, const ItemInstance *a3)
{
  WeaponItem *v3; // r5@1
  const ItemInstance *v4; // r4@1
  signed int v5; // r1@1
  signed int v6; // r2@1
  int v7; // r5@7
  signed int v8; // r6@7
  bool v9; // zf@14
  signed int v10; // r4@18
  int v12; // [sp+0h] [bp-A0h]@7
  int v13; // [sp+8h] [bp-98h]@11
  void *v14; // [sp+24h] [bp-7Ch]@9
  void *ptr; // [sp+34h] [bp-6Ch]@7
  int v16; // [sp+48h] [bp-58h]@1
  int v17; // [sp+4Ch] [bp-54h]@14
  int v18; // [sp+50h] [bp-50h]@24
  void *v19; // [sp+6Ch] [bp-34h]@22
  void *v20; // [sp+7Ch] [bp-24h]@20

  v3 = this;
  v4 = a3;
  Item::Tier::getTierItem((Item::Tier *)&v16, *((_DWORD **)this + 30));
  v5 = *(_DWORD *)v4;
  v6 = v16;
  if ( *(_DWORD *)v4 )
    v5 = 1;
  if ( v16 )
    v6 = 1;
  if ( v6 != v5 )
  {
LABEL_19:
    v10 = 0;
    goto LABEL_20;
  }
  if ( !v16 )
    goto LABEL_30;
  Item::Tier::getTierItem((Item::Tier *)&v12, *((_DWORD **)v3 + 30));
  v7 = v12;
  v8 = *(_DWORD *)v4;
  if ( ptr )
    operator delete(ptr);
  if ( v14 )
    operator delete(v14);
  if ( v13 )
    (*(void (**)(void))(*(_DWORD *)v13 + 4))();
  v13 = 0;
  if ( v7 != v8 )
LABEL_30:
    v9 = v17 == 0;
    if ( v17 )
    {
      v5 = *((_DWORD *)v4 + 1);
      v9 = v5 == 0;
    }
    if ( !v9 && v17 == v5 )
      v10 = 1;
      goto LABEL_20;
    goto LABEL_19;
  v10 = 1;
LABEL_20:
  if ( v20 )
    operator delete(v20);
  if ( v19 )
    operator delete(v19);
  if ( v18 )
    (*(void (**)(void))(*(_DWORD *)v18 + 4))();
  return v10;
}
