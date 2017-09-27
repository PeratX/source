

NativeStoreListener *__fastcall NativeStoreListener::~NativeStoreListener(NativeStoreListener *this)
{
  NativeStoreListener *v1; // r4@1
  int v2; // r1@1
  int v4; // [sp+0h] [bp-10h]@1

  v1 = this;
  JavaEnv::JavaEnv((JavaEnv *)&v4);
  v2 = *((_DWORD *)v1 + 1);
  (*(void (**)(void))(*(_DWORD *)v4 + 88))();
  JavaEnv::~JavaEnv((JavaEnv *)&v4);
  return v1;
}


_QWORD *__fastcall NativeStoreListener::NativeStoreListener(_QWORD *a1, unsigned int a2)
{
  _QWORD *v2; // r4@1
  int v3; // r3@1
  int v4; // r0@1
  int v6; // [sp+8h] [bp-18h]@1

  v2 = a1;
  *a1 = a2;
  JavaEnv::JavaEnv((JavaEnv *)&v6);
  v4 = _JNIEnv::NewObject(v6, NativeStoreListenerNamespace::sClass, NativeStoreListenerNamespace::sConstructor, v3);
  *((_DWORD *)v2 + 1) = (*(int (__cdecl **)(int, int))(*(_DWORD *)v6 + 84))(v6, v4);
  JavaEnv::~JavaEnv((JavaEnv *)&v6);
  return v2;
}


_QWORD *__fastcall NativeStoreListener::NativeStoreListener(_QWORD *a1, _DWORD *a2)
{
  _DWORD *v2; // r5@1
  _QWORD *v3; // r4@1
  int v4; // r1@1
  int v6; // [sp+0h] [bp-18h]@1

  v2 = a2;
  v3 = a1;
  *a1 = *a2;
  JavaEnv::JavaEnv((JavaEnv *)&v6);
  v4 = v2[1];
  *((_DWORD *)v3 + 1) = (*(int (**)(void))(*(_DWORD *)v6 + 84))();
  JavaEnv::~JavaEnv((JavaEnv *)&v6);
  return v3;
}
