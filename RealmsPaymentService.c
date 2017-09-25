

int __fastcall RealmsPaymentService::sendReceiptFromWindowsStore(int a1, int *a2, int *a3, int *a4, int *a5, int *a6, char a7, int a8)
{
  int v8; // r4@1
  int v9; // r0@1
  int result; // r0@1
  int v11; // r4@1
  unsigned int *v12; // r1@2
  unsigned int *v13; // r5@8
  int v14; // r4@15
  unsigned int *v15; // r1@16
  unsigned int *v16; // r5@22
  int v17; // r4@29
  unsigned int *v18; // r1@30
  unsigned int *v19; // r5@36
  int v20; // [sp+10h] [bp-30h]@1
  int v21; // [sp+14h] [bp-2Ch]@1
  int v22; // [sp+18h] [bp-28h]@1
  int v23; // [sp+1Ch] [bp-24h]@1
  char v24; // [sp+20h] [bp-20h]@1
  int v25; // [sp+24h] [bp-1Ch]@29
  char v26; // [sp+2Bh] [bp-15h]@1
  char v27; // [sp+2Ch] [bp-14h]@1

  v8 = a1;
  v26 = a7;
  v9 = j__ZNSt12__shared_ptrI26ReceiptDetailsWindowsStoreLN9__gnu_cxx12_Lock_policyE2EEC2ISaIS0_EJRKSsS7_S7_RbS7_S7_EEESt19_Sp_make_shared_tagRKT_DpOT0_(
         (int)&v24,
         (int)&v27,
         a2,
         a3,
         a4,
         &v26,
         a5,
         a6);
  j__ZNSt12__shared_ptrI17SendReceiptRealmsLN9__gnu_cxx12_Lock_policyE2EEC2ISaIS0_EJR20RealmsPaymentServiceRKSsS9_RSt8functionIFvbN6Realms5WorldEEESt10shared_ptrI26ReceiptDetailsWindowsStoreEEEESt19_Sp_make_shared_tagRKT_DpOT0_(
    (int)&v20,
    (int)&v27,
    v8,
    (int *)(v8 + 40),
    (int *)(v8 + 44),
    a8,
    v9);
  v22 = v20;
  v23 = v21;
  v20 = 0;
  v21 = 0;
  result = ServiceClient::_submitRequest(v8, (int)&v22);
  v11 = v23;
  if ( v23 )
  {
    v12 = (unsigned int *)(v23 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        result = __ldrex(v12);
      while ( __strex(result - 1, v12) );
    }
    else
      result = (*v12)--;
    if ( result == 1 )
      v13 = (unsigned int *)(v11 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 8))(v11);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v13);
        while ( __strex(result - 1, v13) );
      }
      else
        result = (*v13)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v11 + 12))(v11);
  }
  v14 = v21;
  if ( v21 )
    v15 = (unsigned int *)(v21 + 4);
        result = __ldrex(v15);
      while ( __strex(result - 1, v15) );
      result = (*v15)--;
      v16 = (unsigned int *)(v14 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 8))(v14);
          result = __ldrex(v16);
        while ( __strex(result - 1, v16) );
        result = (*v16)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v14 + 12))(v14);
  v17 = v25;
  if ( v25 )
    v18 = (unsigned int *)(v25 + 4);
        result = __ldrex(v18);
      while ( __strex(result - 1, v18) );
      result = (*v18)--;
      v19 = (unsigned int *)(v17 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v17 + 8))(v17);
          result = __ldrex(v19);
        while ( __strex(result - 1, v19) );
        result = (*v19)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v17 + 12))(v17);
  return result;
}


int __fastcall RealmsPaymentService::checkReceiptsForAppleAppStore(int a1, __int64 *a2, int a3)
{
  int v3; // r5@1
  int v4; // r4@1
  int v5; // r0@1
  int result; // r0@1
  int v7; // r4@1
  unsigned int *v8; // r1@2
  unsigned int *v9; // r5@8
  int v10; // r4@15
  unsigned int *v11; // r1@16
  unsigned int *v12; // r5@22
  int v13; // r4@29
  unsigned int *v14; // r1@30
  unsigned int *v15; // r5@36
  int v16; // [sp+Ch] [bp-2Ch]@1
  int v17; // [sp+10h] [bp-28h]@1
  int v18; // [sp+14h] [bp-24h]@1
  int v19; // [sp+18h] [bp-20h]@1
  char v20; // [sp+1Ch] [bp-1Ch]@1
  int v21; // [sp+20h] [bp-18h]@29
  char v22; // [sp+24h] [bp-14h]@1

  v3 = a3;
  v4 = a1;
  v5 = j__ZNSt12__shared_ptrI32CheckReceiptDetailsAppleAppStoreLN9__gnu_cxx12_Lock_policyE2EEC2ISaIS0_EJRKSt6vectorI17ReceiptData_AppleSaIS7_EEEEESt19_Sp_make_shared_tagRKT_DpOT0_(
         (int)&v20,
         (int)&v22,
         a2);
  j__ZNSt12__shared_ptrI19CheckReceiptsRealmsLN9__gnu_cxx12_Lock_policyE2EEC2ISaIS0_EJR20RealmsPaymentServiceRKSsS9_RSt8functionIFvb18ReceiptFulfillmentEESt10shared_ptrI32CheckReceiptDetailsAppleAppStoreEEEESt19_Sp_make_shared_tagRKT_DpOT0_(
    (int)&v16,
    (int)&v22,
    v4,
    (int *)(v4 + 40),
    (int *)(v4 + 44),
    v3,
    v5);
  v18 = v16;
  v19 = v17;
  v16 = 0;
  v17 = 0;
  result = ServiceClient::_submitRequest(v4, (int)&v18);
  v7 = v19;
  if ( v19 )
  {
    v8 = (unsigned int *)(v19 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        result = __ldrex(v8);
      while ( __strex(result - 1, v8) );
    }
    else
      result = (*v8)--;
    if ( result == 1 )
      v9 = (unsigned int *)(v7 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 8))(v7);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v9);
        while ( __strex(result - 1, v9) );
      }
      else
        result = (*v9)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v7 + 12))(v7);
  }
  v10 = v17;
  if ( v17 )
    v11 = (unsigned int *)(v17 + 4);
        result = __ldrex(v11);
      while ( __strex(result - 1, v11) );
      result = (*v11)--;
      v12 = (unsigned int *)(v10 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 8))(v10);
          result = __ldrex(v12);
        while ( __strex(result - 1, v12) );
        result = (*v12)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v10 + 12))(v10);
  v13 = v21;
  if ( v21 )
    v14 = (unsigned int *)(v21 + 4);
        result = __ldrex(v14);
      while ( __strex(result - 1, v14) );
      result = (*v14)--;
      v15 = (unsigned int *)(v13 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 8))(v13);
          result = __ldrex(v15);
        while ( __strex(result - 1, v15) );
        result = (*v15)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v13 + 12))(v13);
  return result;
}


int __fastcall RealmsPaymentService::sendReceiptFromAmazonAppStore(int a1, int *a2, int *a3, int *a4, int *a5, int *a6, char a7, int a8)
{
  int v8; // r4@1
  int v9; // r0@1
  int result; // r0@1
  int v11; // r4@1
  unsigned int *v12; // r1@2
  unsigned int *v13; // r5@8
  int v14; // r4@15
  unsigned int *v15; // r1@16
  unsigned int *v16; // r5@22
  int v17; // r4@29
  unsigned int *v18; // r1@30
  unsigned int *v19; // r5@36
  int v20; // [sp+10h] [bp-30h]@1
  int v21; // [sp+14h] [bp-2Ch]@1
  int v22; // [sp+18h] [bp-28h]@1
  int v23; // [sp+1Ch] [bp-24h]@1
  char v24; // [sp+20h] [bp-20h]@1
  int v25; // [sp+24h] [bp-1Ch]@29
  char v26; // [sp+2Bh] [bp-15h]@1
  char v27; // [sp+2Ch] [bp-14h]@1

  v8 = a1;
  v26 = a7;
  v9 = j__ZNSt12__shared_ptrI28ReceiptDetailsAmazonAppStoreLN9__gnu_cxx12_Lock_policyE2EEC2ISaIS0_EJRKSsS7_S7_RbS7_S7_EEESt19_Sp_make_shared_tagRKT_DpOT0_(
         (int)&v24,
         (int)&v27,
         a2,
         a3,
         a4,
         &v26,
         a5,
         a6);
  j__ZNSt12__shared_ptrI17SendReceiptRealmsLN9__gnu_cxx12_Lock_policyE2EEC2ISaIS0_EJR20RealmsPaymentServiceRKSsS9_RSt8functionIFvbN6Realms5WorldEEESt10shared_ptrI28ReceiptDetailsAmazonAppStoreEEEESt19_Sp_make_shared_tagRKT_DpOT0_(
    (int)&v20,
    (int)&v27,
    v8,
    (int *)(v8 + 40),
    (int *)(v8 + 44),
    a8,
    v9);
  v22 = v20;
  v23 = v21;
  v20 = 0;
  v21 = 0;
  result = ServiceClient::_submitRequest(v8, (int)&v22);
  v11 = v23;
  if ( v23 )
  {
    v12 = (unsigned int *)(v23 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        result = __ldrex(v12);
      while ( __strex(result - 1, v12) );
    }
    else
      result = (*v12)--;
    if ( result == 1 )
      v13 = (unsigned int *)(v11 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 8))(v11);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v13);
        while ( __strex(result - 1, v13) );
      }
      else
        result = (*v13)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v11 + 12))(v11);
  }
  v14 = v21;
  if ( v21 )
    v15 = (unsigned int *)(v21 + 4);
        result = __ldrex(v15);
      while ( __strex(result - 1, v15) );
      result = (*v15)--;
      v16 = (unsigned int *)(v14 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 8))(v14);
          result = __ldrex(v16);
        while ( __strex(result - 1, v16) );
        result = (*v16)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v14 + 12))(v14);
  v17 = v25;
  if ( v25 )
    v18 = (unsigned int *)(v25 + 4);
        result = __ldrex(v18);
      while ( __strex(result - 1, v18) );
      result = (*v18)--;
      v19 = (unsigned int *)(v17 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v17 + 8))(v17);
          result = __ldrex(v19);
        while ( __strex(result - 1, v19) );
        result = (*v19)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v17 + 12))(v17);
  return result;
}


int __fastcall RealmsPaymentService::sendReceiptFromGooglePlayStore(int a1, int *a2, int *a3, int *a4, int *a5, int *a6, char a7, int a8)
{
  int v8; // r4@1
  int v9; // r0@1
  int result; // r0@1
  int v11; // r4@1
  unsigned int *v12; // r1@2
  unsigned int *v13; // r5@8
  int v14; // r4@15
  unsigned int *v15; // r1@16
  unsigned int *v16; // r5@22
  int v17; // r4@29
  unsigned int *v18; // r1@30
  unsigned int *v19; // r5@36
  int v20; // [sp+10h] [bp-30h]@1
  int v21; // [sp+14h] [bp-2Ch]@1
  int v22; // [sp+18h] [bp-28h]@1
  int v23; // [sp+1Ch] [bp-24h]@1
  char v24; // [sp+20h] [bp-20h]@1
  int v25; // [sp+24h] [bp-1Ch]@29
  char v26; // [sp+2Bh] [bp-15h]@1
  char v27; // [sp+2Ch] [bp-14h]@1

  v8 = a1;
  v26 = a7;
  v9 = j__ZNSt12__shared_ptrI29ReceiptDetailsGooglePlayStoreLN9__gnu_cxx12_Lock_policyE2EEC2ISaIS0_EJRKSsS7_S7_RbS7_S7_EEESt19_Sp_make_shared_tagRKT_DpOT0_(
         (int)&v24,
         (int)&v27,
         a2,
         a3,
         a4,
         &v26,
         a5,
         a6);
  j__ZNSt12__shared_ptrI17SendReceiptRealmsLN9__gnu_cxx12_Lock_policyE2EEC2ISaIS0_EJR20RealmsPaymentServiceRKSsS9_RSt8functionIFvbN6Realms5WorldEEESt10shared_ptrI29ReceiptDetailsGooglePlayStoreEEEESt19_Sp_make_shared_tagRKT_DpOT0_(
    (int)&v20,
    (int)&v27,
    v8,
    (int *)(v8 + 40),
    (int *)(v8 + 44),
    a8,
    v9);
  v22 = v20;
  v23 = v21;
  v20 = 0;
  v21 = 0;
  result = ServiceClient::_submitRequest(v8, (int)&v22);
  v11 = v23;
  if ( v23 )
  {
    v12 = (unsigned int *)(v23 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        result = __ldrex(v12);
      while ( __strex(result - 1, v12) );
    }
    else
      result = (*v12)--;
    if ( result == 1 )
      v13 = (unsigned int *)(v11 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 8))(v11);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v13);
        while ( __strex(result - 1, v13) );
      }
      else
        result = (*v13)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v11 + 12))(v11);
  }
  v14 = v21;
  if ( v21 )
    v15 = (unsigned int *)(v21 + 4);
        result = __ldrex(v15);
      while ( __strex(result - 1, v15) );
      result = (*v15)--;
      v16 = (unsigned int *)(v14 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 8))(v14);
          result = __ldrex(v16);
        while ( __strex(result - 1, v16) );
        result = (*v16)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v14 + 12))(v14);
  v17 = v25;
  if ( v25 )
    v18 = (unsigned int *)(v25 + 4);
        result = __ldrex(v18);
      while ( __strex(result - 1, v18) );
      result = (*v18)--;
      v19 = (unsigned int *)(v17 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v17 + 8))(v17);
          result = __ldrex(v19);
        while ( __strex(result - 1, v19) );
        result = (*v19)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v17 + 12))(v17);
  return result;
}


int __fastcall RealmsPaymentService::sendReceiptFromOneStore(int a1, int *a2, int *a3, int *a4, int *a5, int *a6, int *a7, int *a8, char a9, int a10)
{
  int v10; // r4@1
  int v11; // r0@1
  int result; // r0@1
  int v13; // r4@1
  unsigned int *v14; // r1@2
  unsigned int *v15; // r5@8
  int v16; // r4@15
  unsigned int *v17; // r1@16
  unsigned int *v18; // r5@22
  int v19; // r4@29
  unsigned int *v20; // r1@30
  unsigned int *v21; // r5@36
  int v22; // [sp+18h] [bp-30h]@1
  int v23; // [sp+1Ch] [bp-2Ch]@1
  int v24; // [sp+20h] [bp-28h]@1
  int v25; // [sp+24h] [bp-24h]@1
  char v26; // [sp+28h] [bp-20h]@1
  int v27; // [sp+2Ch] [bp-1Ch]@29
  char v28; // [sp+33h] [bp-15h]@1
  char v29; // [sp+34h] [bp-14h]@1

  v10 = a1;
  v28 = a9;
  v11 = j__ZNSt12__shared_ptrI22ReceiptDetailsOneStoreLN9__gnu_cxx12_Lock_policyE2EEC2ISaIS0_EJRKSsS7_S7_RbS7_S7_S7_S7_EEESt19_Sp_make_shared_tagRKT_DpOT0_(
          (int)&v26,
          (int)&v29,
          a2,
          a3,
          a4,
          &v28,
          a5,
          a6,
          a7,
          a8);
  j__ZNSt12__shared_ptrI17SendReceiptRealmsLN9__gnu_cxx12_Lock_policyE2EEC2ISaIS0_EJR20RealmsPaymentServiceRKSsS9_RSt8functionIFvbN6Realms5WorldEEESt10shared_ptrI22ReceiptDetailsOneStoreEEEESt19_Sp_make_shared_tagRKT_DpOT0_(
    (int)&v22,
    (int)&v29,
    v10,
    (int *)(v10 + 40),
    (int *)(v10 + 44),
    a10,
    v11);
  v24 = v22;
  v25 = v23;
  v22 = 0;
  v23 = 0;
  result = ServiceClient::_submitRequest(v10, (int)&v24);
  v13 = v25;
  if ( v25 )
  {
    v14 = (unsigned int *)(v25 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        result = __ldrex(v14);
      while ( __strex(result - 1, v14) );
    }
    else
      result = (*v14)--;
    if ( result == 1 )
      v15 = (unsigned int *)(v13 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 8))(v13);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v15);
        while ( __strex(result - 1, v15) );
      }
      else
        result = (*v15)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v13 + 12))(v13);
  }
  v16 = v23;
  if ( v23 )
    v17 = (unsigned int *)(v23 + 4);
        result = __ldrex(v17);
      while ( __strex(result - 1, v17) );
      result = (*v17)--;
      v18 = (unsigned int *)(v16 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v16 + 8))(v16);
          result = __ldrex(v18);
        while ( __strex(result - 1, v18) );
        result = (*v18)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v16 + 12))(v16);
  v19 = v27;
  if ( v27 )
    v20 = (unsigned int *)(v27 + 4);
        result = __ldrex(v20);
      while ( __strex(result - 1, v20) );
      result = (*v20)--;
      v21 = (unsigned int *)(v19 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v19 + 8))(v19);
          result = __ldrex(v21);
        while ( __strex(result - 1, v21) );
        result = (*v21)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v19 + 12))(v19);
  return result;
}


int __fastcall RealmsPaymentService::checkReceiptsForAmazonAppStore(int a1, __int64 *a2, int a3)
{
  int v3; // r5@1
  int v4; // r4@1
  int v5; // r0@1
  int result; // r0@1
  int v7; // r4@1
  unsigned int *v8; // r1@2
  unsigned int *v9; // r5@8
  int v10; // r4@15
  unsigned int *v11; // r1@16
  unsigned int *v12; // r5@22
  int v13; // r4@29
  unsigned int *v14; // r1@30
  unsigned int *v15; // r5@36
  int v16; // [sp+Ch] [bp-2Ch]@1
  int v17; // [sp+10h] [bp-28h]@1
  int v18; // [sp+14h] [bp-24h]@1
  int v19; // [sp+18h] [bp-20h]@1
  char v20; // [sp+1Ch] [bp-1Ch]@1
  int v21; // [sp+20h] [bp-18h]@29
  char v22; // [sp+24h] [bp-14h]@1

  v3 = a3;
  v4 = a1;
  v5 = j__ZNSt12__shared_ptrI33CheckReceiptDetailsAmazonAppStoreLN9__gnu_cxx12_Lock_policyE2EEC2ISaIS0_EJRKSt6vectorI18ReceiptData_AmazonSaIS7_EEEEESt19_Sp_make_shared_tagRKT_DpOT0_(
         (int)&v20,
         (int)&v22,
         a2);
  j__ZNSt12__shared_ptrI19CheckReceiptsRealmsLN9__gnu_cxx12_Lock_policyE2EEC2ISaIS0_EJR20RealmsPaymentServiceRKSsS9_RSt8functionIFvb18ReceiptFulfillmentEESt10shared_ptrI33CheckReceiptDetailsAmazonAppStoreEEEESt19_Sp_make_shared_tagRKT_DpOT0_(
    (int)&v16,
    (int)&v22,
    v4,
    (int *)(v4 + 40),
    (int *)(v4 + 44),
    v3,
    v5);
  v18 = v16;
  v19 = v17;
  v16 = 0;
  v17 = 0;
  result = ServiceClient::_submitRequest(v4, (int)&v18);
  v7 = v19;
  if ( v19 )
  {
    v8 = (unsigned int *)(v19 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        result = __ldrex(v8);
      while ( __strex(result - 1, v8) );
    }
    else
      result = (*v8)--;
    if ( result == 1 )
      v9 = (unsigned int *)(v7 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 8))(v7);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v9);
        while ( __strex(result - 1, v9) );
      }
      else
        result = (*v9)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v7 + 12))(v7);
  }
  v10 = v17;
  if ( v17 )
    v11 = (unsigned int *)(v17 + 4);
        result = __ldrex(v11);
      while ( __strex(result - 1, v11) );
      result = (*v11)--;
      v12 = (unsigned int *)(v10 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 8))(v10);
          result = __ldrex(v12);
        while ( __strex(result - 1, v12) );
        result = (*v12)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v10 + 12))(v10);
  v13 = v21;
  if ( v21 )
    v14 = (unsigned int *)(v21 + 4);
        result = __ldrex(v14);
      while ( __strex(result - 1, v14) );
      result = (*v14)--;
      v15 = (unsigned int *)(v13 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 8))(v13);
          result = __ldrex(v15);
        while ( __strex(result - 1, v15) );
        result = (*v15)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v13 + 12))(v13);
  return result;
}


int __fastcall RealmsPaymentService::checkReceiptsForGooglePlayStore(int a1, __int64 *a2, int a3)
{
  int v3; // r5@1
  int v4; // r4@1
  int v5; // r0@1
  int result; // r0@1
  int v7; // r4@1
  unsigned int *v8; // r1@2
  unsigned int *v9; // r5@8
  int v10; // r4@15
  unsigned int *v11; // r1@16
  unsigned int *v12; // r5@22
  int v13; // r4@29
  unsigned int *v14; // r1@30
  unsigned int *v15; // r5@36
  int v16; // [sp+Ch] [bp-2Ch]@1
  int v17; // [sp+10h] [bp-28h]@1
  int v18; // [sp+14h] [bp-24h]@1
  int v19; // [sp+18h] [bp-20h]@1
  char v20; // [sp+1Ch] [bp-1Ch]@1
  int v21; // [sp+20h] [bp-18h]@29
  char v22; // [sp+24h] [bp-14h]@1

  v3 = a3;
  v4 = a1;
  v5 = j__ZNSt12__shared_ptrI34CheckReceiptDetailsGooglePlayStoreLN9__gnu_cxx12_Lock_policyE2EEC2ISaIS0_EJRKSt6vectorI18ReceiptData_GoogleSaIS7_EEEEESt19_Sp_make_shared_tagRKT_DpOT0_(
         (int)&v20,
         (int)&v22,
         a2);
  j__ZNSt12__shared_ptrI19CheckReceiptsRealmsLN9__gnu_cxx12_Lock_policyE2EEC2ISaIS0_EJR20RealmsPaymentServiceRKSsS9_RSt8functionIFvb18ReceiptFulfillmentEESt10shared_ptrI34CheckReceiptDetailsGooglePlayStoreEEEESt19_Sp_make_shared_tagRKT_DpOT0_(
    (int)&v16,
    (int)&v22,
    v4,
    (int *)(v4 + 40),
    (int *)(v4 + 44),
    v3,
    v5);
  v18 = v16;
  v19 = v17;
  v16 = 0;
  v17 = 0;
  result = ServiceClient::_submitRequest(v4, (int)&v18);
  v7 = v19;
  if ( v19 )
  {
    v8 = (unsigned int *)(v19 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        result = __ldrex(v8);
      while ( __strex(result - 1, v8) );
    }
    else
      result = (*v8)--;
    if ( result == 1 )
      v9 = (unsigned int *)(v7 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 8))(v7);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v9);
        while ( __strex(result - 1, v9) );
      }
      else
        result = (*v9)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v7 + 12))(v7);
  }
  v10 = v17;
  if ( v17 )
    v11 = (unsigned int *)(v17 + 4);
        result = __ldrex(v11);
      while ( __strex(result - 1, v11) );
      result = (*v11)--;
      v12 = (unsigned int *)(v10 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 8))(v10);
          result = __ldrex(v12);
        while ( __strex(result - 1, v12) );
        result = (*v12)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v10 + 12))(v10);
  v13 = v21;
  if ( v21 )
    v14 = (unsigned int *)(v21 + 4);
        result = __ldrex(v14);
      while ( __strex(result - 1, v14) );
      result = (*v14)--;
      v15 = (unsigned int *)(v13 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 8))(v13);
          result = __ldrex(v15);
        while ( __strex(result - 1, v15) );
        result = (*v15)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v13 + 12))(v13);
  return result;
}


void __fastcall RealmsPaymentService::~RealmsPaymentService(RealmsPaymentService *this)
{
  RealmsPaymentService::~RealmsPaymentService(this);
}


int __fastcall RealmsPaymentService::sendReceiptFromOculusStore(int a1, int *a2, int *a3, int *a4, int *a5, int a6, __int64 a7, int *a8, char a9, int a10)
{
  int v10; // r4@1
  int v11; // r0@1
  int result; // r0@1
  int v13; // r4@1
  unsigned int *v14; // r1@2
  unsigned int *v15; // r5@8
  int v16; // r4@15
  unsigned int *v17; // r1@16
  unsigned int *v18; // r5@22
  int v19; // r4@29
  unsigned int *v20; // r1@30
  unsigned int *v21; // r5@36
  int v22; // [sp+14h] [bp-3Ch]@1
  int v23; // [sp+18h] [bp-38h]@1
  int v24; // [sp+1Ch] [bp-34h]@1
  int v25; // [sp+20h] [bp-30h]@1
  char v26; // [sp+24h] [bp-2Ch]@1
  int v27; // [sp+28h] [bp-28h]@29
  char v28; // [sp+2Fh] [bp-21h]@1
  __int64 v29; // [sp+30h] [bp-20h]@1
  char v30; // [sp+3Ch] [bp-14h]@1

  v10 = a1;
  v29 = a7;
  v28 = a9;
  v11 = j__ZNSt12__shared_ptrI25ReceiptDetailsOculusStoreLN9__gnu_cxx12_Lock_policyE2EEC2ISaIS0_EJRKSsS7_S7_RbS7_RyS7_EEESt19_Sp_make_shared_tagRKT_DpOT0_(
          (int)&v26,
          (int)&v30,
          a2,
          a3,
          a4,
          &v28,
          a5,
          &v29,
          a8);
  j__ZNSt12__shared_ptrI17SendReceiptRealmsLN9__gnu_cxx12_Lock_policyE2EEC2ISaIS0_EJR20RealmsPaymentServiceRKSsS9_RSt8functionIFvbN6Realms5WorldEEESt10shared_ptrI25ReceiptDetailsOculusStoreEEEESt19_Sp_make_shared_tagRKT_DpOT0_(
    (int)&v22,
    (int)&v30,
    v10,
    (int *)(v10 + 40),
    (int *)(v10 + 44),
    a10,
    v11);
  v24 = v22;
  v25 = v23;
  v22 = 0;
  v23 = 0;
  result = ServiceClient::_submitRequest(v10, (int)&v24);
  v13 = v25;
  if ( v25 )
  {
    v14 = (unsigned int *)(v25 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        result = __ldrex(v14);
      while ( __strex(result - 1, v14) );
    }
    else
      result = (*v14)--;
    if ( result == 1 )
      v15 = (unsigned int *)(v13 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 8))(v13);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v15);
        while ( __strex(result - 1, v15) );
      }
      else
        result = (*v15)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v13 + 12))(v13);
  }
  v16 = v23;
  if ( v23 )
    v17 = (unsigned int *)(v23 + 4);
        result = __ldrex(v17);
      while ( __strex(result - 1, v17) );
      result = (*v17)--;
      v18 = (unsigned int *)(v16 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v16 + 8))(v16);
          result = __ldrex(v18);
        while ( __strex(result - 1, v18) );
        result = (*v18)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v16 + 12))(v16);
  v19 = v27;
  if ( v27 )
    v20 = (unsigned int *)(v27 + 4);
        result = __ldrex(v20);
      while ( __strex(result - 1, v20) );
      result = (*v20)--;
      v21 = (unsigned int *)(v19 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v19 + 8))(v19);
          result = __ldrex(v21);
        while ( __strex(result - 1, v21) );
        result = (*v21)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v19 + 12))(v19);
  return result;
}


int __fastcall RealmsPaymentService::getServiceStatus(int a1, int a2)
{
  int v2; // r4@1
  int result; // r0@1
  int v4; // r4@1
  unsigned int *v5; // r1@2
  unsigned int *v6; // r5@8
  int v7; // r4@15
  unsigned int *v8; // r1@16
  unsigned int *v9; // r5@22
  int v10; // [sp+Ch] [bp-24h]@1
  int v11; // [sp+10h] [bp-20h]@1
  int v12; // [sp+14h] [bp-1Ch]@1
  int v13; // [sp+18h] [bp-18h]@1
  char v14; // [sp+1Ch] [bp-14h]@1

  v2 = a1;
  j__ZNSt12__shared_ptrI29GetRealmsPaymentServiceStatusLN9__gnu_cxx12_Lock_policyE2EEC2ISaIS0_EJR20RealmsPaymentServiceRKSsS9_RSt8functionIFvbEEEEESt19_Sp_make_shared_tagRKT_DpOT0_(
    (int)&v10,
    (int)&v14,
    v2,
    (int *)(v2 + 40),
    (int *)(a1 + 44),
    a2);
  v12 = v10;
  v13 = v11;
  v10 = 0;
  v11 = 0;
  result = ServiceClient::_submitRequest(v2, (int)&v12);
  v4 = v13;
  if ( v13 )
  {
    v5 = (unsigned int *)(v13 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        result = __ldrex(v5);
      while ( __strex(result - 1, v5) );
    }
    else
      result = (*v5)--;
    if ( result == 1 )
      v6 = (unsigned int *)(v4 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v6);
        while ( __strex(result - 1, v6) );
      }
      else
        result = (*v6)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
  }
  v7 = v11;
  if ( v11 )
    v8 = (unsigned int *)(v11 + 4);
        result = __ldrex(v8);
      while ( __strex(result - 1, v8) );
      result = (*v8)--;
      v9 = (unsigned int *)(v7 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 8))(v7);
          result = __ldrex(v9);
        while ( __strex(result - 1, v9) );
        result = (*v9)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v7 + 12))(v7);
  return result;
}


void __fastcall RealmsPaymentService::~RealmsPaymentService(RealmsPaymentService *this)
{
  RealmsPaymentService *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  unsigned int *v6; // r2@4
  signed int v7; // r1@6
  unsigned int *v8; // r2@8
  signed int v9; // r1@10

  v1 = this;
  *(_DWORD *)this = &off_26E6F6C;
  v2 = *((_DWORD *)this + 11);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v6 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v7 = __ldrex(v6);
      while ( __strex(v7 - 1, v6) );
    }
    else
      v7 = (*v6)--;
    if ( v7 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  }
  v4 = *((_DWORD *)v1 + 10);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v8 = (unsigned int *)(v4 - 4);
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
      v9 = (*v8)--;
    if ( v9 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  ServiceClient::~ServiceClient(v1);
  operator delete((void *)v1);
}


int __fastcall RealmsPaymentService::RealmsPaymentService(int a1, int *a2, int *a3, int a4)
{
  int *v4; // r5@1
  int *v5; // r7@1
  int v6; // r4@1

  v4 = a3;
  v5 = a2;
  v6 = a1;
  ServiceClient::ServiceClient(a1, a4, 0);
  *(_DWORD *)v6 = &off_26E6F6C;
  sub_21E8AF4((int *)(v6 + 40), v5);
  sub_21E8AF4((int *)(v6 + 44), v4);
  return v6;
}


RealmsPaymentService *__fastcall RealmsPaymentService::~RealmsPaymentService(RealmsPaymentService *this)
{
  RealmsPaymentService *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  unsigned int *v7; // r2@4
  signed int v8; // r1@6
  unsigned int *v9; // r2@8
  signed int v10; // r1@10

  v1 = this;
  *(_DWORD *)this = &off_26E6F6C;
  v2 = *((_DWORD *)this + 11);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v7 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
    }
    else
      v8 = (*v7)--;
    if ( v8 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  }
  v4 = *((_DWORD *)v1 + 10);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v9 = (unsigned int *)(v4 - 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  ServiceClient::~ServiceClient(v1);
  return v1;
}


int __fastcall RealmsPaymentService::sendReceiptFromAppleAppStore(int a1, int *a2, int *a3, int *a4, int *a5, int *a6, char a7, int a8)
{
  int v8; // r4@1
  int v9; // r0@1
  int result; // r0@1
  int v11; // r4@1
  unsigned int *v12; // r1@2
  unsigned int *v13; // r5@8
  int v14; // r4@15
  unsigned int *v15; // r1@16
  unsigned int *v16; // r5@22
  int v17; // r4@29
  unsigned int *v18; // r1@30
  unsigned int *v19; // r5@36
  int v20; // [sp+10h] [bp-30h]@1
  int v21; // [sp+14h] [bp-2Ch]@1
  int v22; // [sp+18h] [bp-28h]@1
  int v23; // [sp+1Ch] [bp-24h]@1
  char v24; // [sp+20h] [bp-20h]@1
  int v25; // [sp+24h] [bp-1Ch]@29
  char v26; // [sp+2Bh] [bp-15h]@1
  char v27; // [sp+2Ch] [bp-14h]@1

  v8 = a1;
  v26 = a7;
  v9 = j__ZNSt12__shared_ptrI27ReceiptDetailsAppleAppStoreLN9__gnu_cxx12_Lock_policyE2EEC2ISaIS0_EJRKSsS7_S7_RbS7_S7_EEESt19_Sp_make_shared_tagRKT_DpOT0_(
         (int)&v24,
         (int)&v27,
         a2,
         a3,
         a4,
         &v26,
         a5,
         a6);
  j__ZNSt12__shared_ptrI17SendReceiptRealmsLN9__gnu_cxx12_Lock_policyE2EEC2ISaIS0_EJR20RealmsPaymentServiceRKSsS9_RSt8functionIFvbN6Realms5WorldEEESt10shared_ptrI27ReceiptDetailsAppleAppStoreEEEESt19_Sp_make_shared_tagRKT_DpOT0_(
    (int)&v20,
    (int)&v27,
    v8,
    (int *)(v8 + 40),
    (int *)(v8 + 44),
    a8,
    v9);
  v22 = v20;
  v23 = v21;
  v20 = 0;
  v21 = 0;
  result = ServiceClient::_submitRequest(v8, (int)&v22);
  v11 = v23;
  if ( v23 )
  {
    v12 = (unsigned int *)(v23 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        result = __ldrex(v12);
      while ( __strex(result - 1, v12) );
    }
    else
      result = (*v12)--;
    if ( result == 1 )
      v13 = (unsigned int *)(v11 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 8))(v11);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v13);
        while ( __strex(result - 1, v13) );
      }
      else
        result = (*v13)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v11 + 12))(v11);
  }
  v14 = v21;
  if ( v21 )
    v15 = (unsigned int *)(v21 + 4);
        result = __ldrex(v15);
      while ( __strex(result - 1, v15) );
      result = (*v15)--;
      v16 = (unsigned int *)(v14 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 8))(v14);
          result = __ldrex(v16);
        while ( __strex(result - 1, v16) );
        result = (*v16)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v14 + 12))(v14);
  v17 = v25;
  if ( v25 )
    v18 = (unsigned int *)(v25 + 4);
        result = __ldrex(v18);
      while ( __strex(result - 1, v18) );
      result = (*v18)--;
      v19 = (unsigned int *)(v17 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v17 + 8))(v17);
          result = __ldrex(v19);
        while ( __strex(result - 1, v19) );
        result = (*v19)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v17 + 12))(v17);
  return result;
}
