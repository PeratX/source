

Potion *__fastcall ThrownPotionEffectSubcomponent::doOnHitEffect(ThrownPotionEffectSubcomponent *this, ProjectileComponent *a2)
{
  ProjectileComponent *v2; // r4@1
  ThrownPotionEffectSubcomponent *v3; // r5@1

  v2 = a2;
  v3 = this;
  if ( (*(int (**)(void))(**((_DWORD **)a2 + 4) + 488))() == 4194390 )
    *((_DWORD *)v3 + 1) = j_ThrownPotion::getPotionId(*((ThrownPotion **)v2 + 4));
  return j_j_j__ZN30SplashPotionEffectSubcomponent13doOnHitEffectER19ProjectileComponent(v3, v2);
}
