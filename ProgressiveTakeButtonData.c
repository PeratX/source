

signed int __fastcall ProgressiveTakeButtonData::reset(ProgressiveTakeButtonData *this)
{
  ProgressiveTakeButtonData *v1; // r4@1
  signed int result; // r0@1

  v1 = this;
  *(_DWORD *)this = 0;
  sub_119CAD8((void **)this + 1, (char *)&unk_257BC67, 0);
  result = -1;
  *((_DWORD *)v1 + 2) = 0;
  *((_DWORD *)v1 + 3) = -1;
  *((_BYTE *)v1 + 28) = 0;
  *((_DWORD *)v1 + 6) = 0;
  *((_DWORD *)v1 + 4) = 0;
  *((_DWORD *)v1 + 5) = 0;
  return result;
}


_DWORD *__fastcall ProgressiveTakeButtonData::setHoldReleaseBehavior(_DWORD *result, int a2)
{
  *result = a2;
  return result;
}


int __fastcall ProgressiveTakeButtonData::getHoldReleaseBehavior(ProgressiveTakeButtonData *this)
{
  return *(_DWORD *)this;
}


        || ProgressiveTakeButtonData::getAmountTaken((ProgressiveTakeButtonData *)(v3 + 520)) < 1 )
{
        goto LABEL_123;
      }
      v13 = v54 == 0;
      if ( v54 )
        v13 = v51 == 0;
      if ( v13
        || ItemInstance::isNull((ItemInstance *)&v51)
        || !v53
        || ItemInstance::matchesItem((ItemInstance *)&v51, (const ItemInstance *)&v57) == 1 )
      {
        v14 = ProgressiveTakeButtonData::getAmountTaken((ProgressiveTakeButtonData *)(v3 + 520));
        CraftingScreenController::_moveItemsAndSendFlying(v3, v14, &v62, v10, (int *)&s2, v4);
      else
LABEL_123:
        if ( !(*(_BYTE *)(v3 + 468) & 1) )
        {
          if ( CraftingContainerManagerController::isCreativeContainer(*(_DWORD *)(v3 + 628), (const void **)&v62) == 1 )
          {
            sub_119C854(&v50, &v62);
            v16 = sub_119C854(&v49, (int *)&s2);
            CraftingScreenController::_sendFlyingItem(v3, (ItemInstance *)&v57, (int)&v50, v10, (int)v16, v4);
            v17 = (void *)(v49 - 12);
            if ( (int *)(v49 - 12) != &dword_28898C0 )
            {
              v33 = (unsigned int *)(v49 - 4);
              if ( &pthread_create )
              {
                __dmb();
                do
                  v34 = __ldrex(v33);
                while ( __strex(v34 - 1, v33) );
              }
              else
                v34 = (*v33)--;
              if ( v34 <= 0 )
                j_j_j_j_j__ZdlPv_9_1(v17);
            }
            v18 = (void *)(v50 - 12);
            if ( (int *)(v50 - 12) != &dword_28898C0 )
              v35 = (unsigned int *)(v50 - 4);
                  v36 = __ldrex(v35);
                while ( __strex(v36 - 1, v35) );
                v36 = (*v35)--;
              if ( v36 <= 0 )
                j_j_j_j_j__ZdlPv_9_1(v18);
            CraftingScreenController::_overrideWithCreativeItem(v3, (int *)&s2, v4, &v62);
          }
          else if ( ItemInstance::matchesItem((ItemInstance *)&v57, (const ItemInstance *)&v51) == 1 )
            CraftingScreenController::_moveItemsAndSendFlying(v3, v59, &v62, v10, (int *)&s2, v4);
          else if ( CraftingContainerManagerController::handleSwap(
                      *(_DWORD *)(v3 + 628),
                      (const void **)&v62,
                      v10,
                      (const void **)&s2,
                      v4) == 1 )
            sub_119C854(&v48, &v62);
            v20 = sub_119C854(&v47, (int *)&s2);
            CraftingScreenController::_sendFlyingItem(v3, (ItemInstance *)&v57, (int)&v48, v10, (int)v20, v4);
            v21 = (void *)(v47 - 12);
            if ( (int *)(v47 - 12) != &dword_28898C0 )
              v37 = (unsigned int *)(v47 - 4);
                  v38 = __ldrex(v37);
                while ( __strex(v38 - 1, v37) );
                v38 = (*v37)--;
              if ( v38 <= 0 )
                j_j_j_j_j__ZdlPv_9_1(v21);
            v22 = (void *)(v48 - 12);
            if ( (int *)(v48 - 12) != &dword_28898C0 )
              v39 = (unsigned int *)(v48 - 4);
                  v40 = __ldrex(v39);
                while ( __strex(v40 - 1, v39) );
                v40 = (*v39)--;
              if ( v40 <= 0 )
                j_j_j_j_j__ZdlPv_9_1(v22);
            sub_119C854(&v46, (int *)&s2);
            v23 = sub_119C854(&v45, &v62);
            CraftingScreenController::_sendFlyingItem(v3, (ItemInstance *)&v51, (int)&v46, v4, (int)v23, v10);
            v24 = (void *)(v45 - 12);
            if ( (int *)(v45 - 12) != &dword_28898C0 )
              v41 = (unsigned int *)(v45 - 4);
                  v42 = __ldrex(v41);
                while ( __strex(v42 - 1, v41) );
                v42 = (*v41)--;
              if ( v42 <= 0 )
                j_j_j_j_j__ZdlPv_9_1(v24);
            v25 = (void *)(v46 - 12);
            if ( (int *)(v46 - 12) != &dword_28898C0 )
              v43 = (unsigned int *)(v46 - 4);
                  v44 = __ldrex(v43);
                while ( __strex(v44 - 1, v43) );
                v44 = (*v43)--;
              if ( v44 <= 0 )
                j_j_j_j_j__ZdlPv_9_1(v25);
        }
      ContainerScreenController::_resetSplitStack((ContainerScreenController *)v3);
      ContainerScreenController::_resetHeldButton((ContainerScreenController *)v3);
      ContainerScreenController::_setPointerHeldEventsHandled((ContainerScreenController *)v3, 0);
      ProgressiveTakeButtonData::setAutoHandleAtMaxStackSize((ProgressiveTakeButtonData *)(v3 + 520), 1);
      *(_WORD *)(v3 + 788) = 0;
      EntityInteraction::setInteractText((int *)(v3 + 780), (int *)&Util::EMPTY_STRING);
      *(_DWORD *)(v3 + 784) = -1;
      *(_DWORD *)(v3 + 636) |= 1u;
      if ( ptr )
        operator delete(ptr);
      if ( v55 )
        operator delete(v55);
      if ( v52 )
        (*(void (__cdecl **)(int))(*(_DWORD *)v52 + 4))(v52);
      if ( v61 )
        operator delete(v61);
      if ( v60 )
        operator delete(v60);
      if ( v58 )
        (*(void (__cdecl **)(int))(*(_DWORD *)v58 + 4))(v58);
      v26 = (void *)(v62 - 12);
      if ( (int *)(v62 - 12) != &dword_28898C0 )
        v31 = (unsigned int *)(v62 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v32 = __ldrex(v31);
          while ( __strex(v32 - 1, v31) );
        else
          v32 = (*v31)--;
        if ( v32 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v26);
    }
    v15 = 1;
  }
  else
  {
    v19 = ContainerManagerController::getItemInstance(*(_DWORD *)(v3 + 628), (int **)&s2, v4);
    if ( *(_BYTE *)(v19 + 15) )
    {
      if ( *(_DWORD *)v19 )
        if ( ItemInstance::isNull((ItemInstance *)v19) )
          v15 = 4;
        else if ( *(_BYTE *)(v19 + 14) )
          *(_BYTE *)(v3 + 789) = 1;
          EntityInteraction::setInteractText((int *)(v3 + 780), (int *)&s2);
          *(_DWORD *)(v3 + 784) = v4;
          v15 = 5;
        v15 = 4;
    else
      v15 = 4;
LABEL_57:
  v27 = (char *)s2 - 12;
  if ( (int *)((char *)s2 - 12) != &dword_28898C0 )
    v29 = (unsigned int *)((char *)s2 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
      v30 = (*v29)--;
    if ( v30 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v27);
  return v15;
}


int __fastcall ProgressiveTakeButtonData::setAutoHandleAtMaxStackSize(int result, bool a2)
{
  *(_BYTE *)(result + 29) = a2;
  return result;
}


    if ( v6 == ProgressiveTakeButtonData::getTotalStackCount(v4) )
{
      ContainerScreenController::_resetHeldButton(v2);
      ContainerScreenController::_setPointerHeldEventsHandled(v2, 0);
      ProgressiveTakeButtonData::setAutoHandleAtMaxStackSize(v4, 1);
      *((_WORD *)v2 + 394) = 0;
      EntityInteraction::setInteractText((int *)v2 + 195, (int *)&Util::EMPTY_STRING);
      *((_DWORD *)v2 + 196) = -1;
    }
    return v3;
  }
  if ( !*((_BYTE *)v2 + 553) )
    return 0;
  v4 = (ContainerScreenController *)((char *)v2 + 520);
  v3 = 1;
  *((_BYTE *)v2 + 788) = 1;
  v5 = (int *)ProgressiveTakeButtonData::getCollectionName((ContainerScreenController *)((char *)v2 + 520));
  EntityInteraction::setInteractText((int *)v2 + 195, v5);
  *((_DWORD *)v2 + 196) = ProgressiveTakeButtonData::getCollectionIndex((ContainerScreenController *)((char *)v2 + 520));
  (*(void (__fastcall **)(ContainerScreenController *, char *))(*(_DWORD *)v2 + 136))(v2, (char *)v2 + 780);
  if ( *((_BYTE *)v2 + 788) )
    goto LABEL_11;
  return v3;
}


int __fastcall ProgressiveTakeButtonData::setTotalStackCount(int result, int a2)
{
  *(_DWORD *)(result + 8) = a2;
  return result;
}


int __fastcall ProgressiveTakeButtonData::setStartHeldTime(int result, int a2)
{
  *(_DWORD *)(result + 24) = a2;
  *(_BYTE *)(result + 28) = 1;
  return result;
}


int __fastcall ProgressiveTakeButtonData::ProgressiveTakeButtonData(int a1)
{
  int v1; // r4@1
  int result; // r0@1

  v1 = a1;
  *(_DWORD *)(a1 + 4) = &unk_28898CC;
  *(_DWORD *)a1 = 0;
  sub_119CAD8((void **)(a1 + 4), (char *)&unk_257BC67, 0);
  *(_DWORD *)(v1 + 8) = 0;
  *(_DWORD *)(v1 + 12) = -1;
  result = v1;
  *(_BYTE *)(v1 + 28) = 0;
  *(_DWORD *)(v1 + 24) = 0;
  *(_DWORD *)(v1 + 16) = 0;
  *(_DWORD *)(v1 + 20) = 0;
  return result;
}


int __fastcall ProgressiveTakeButtonData::calculateHeldTime(ProgressiveTakeButtonData *this)
{
  ProgressiveTakeButtonData *v1; // r4@1
  int result; // r0@1

  v1 = this;
  result = getTimeMs() - *((_DWORD *)this + 6);
  *((_DWORD *)v1 + 5) = result;
  return result;
}


int __fastcall ProgressiveTakeButtonData::setCollectionIndex(int result, int a2)
{
  *(_DWORD *)(result + 12) = a2;
  return result;
}


int __fastcall ProgressiveTakeButtonData::getAmountTaken(ProgressiveTakeButtonData *this)
{
  signed int v1; // r1@1
  int result; // r0@2

  v1 = *((_DWORD *)this + 5);
  if ( v1 >= 300 )
  {
    _R1 = v1 - 300;
    __asm
    {
      VLDR            S2, =0.001
      VMOV            S0, R1
      VCVT.F32.S32    S0, S0
    }
    _R1 = *((_DWORD *)this + 2);
      VMOV            S4, R1
      VCVT.F32.S32    S4, S4
      VMUL.F32        S0, S0, S2
      VMUL.F32        S0, S0, S4
      VCVTR.S32.F32   S0, S0
      VMOV            R0, S0
    if ( _R1 < result )
      result = _R1;
  }
  else
    result = 0;
  return result;
}


char *__fastcall ProgressiveTakeButtonData::getCollectionName(ProgressiveTakeButtonData *this)
{
  return (char *)this + 4;
}
