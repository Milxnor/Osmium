#pragma once

// Fortnite (4.5-CL-4159770) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TakerPawn.TakerPawn_C
// 0x022C (0x1D0C - 0x1AE0)
class ATakerPawn_C : public AFortPawn_Taker
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1AE0(0x0008) (Transient, DuplicateTransient)
	class UBoxComponent*                               SwoopOverlapBox;                                          // 0x1AE8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    TrailFX;                                                  // 0x1AF0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    SoulSuckEffect;                                           // 0x1AF8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             SoulSuckSound;                                            // 0x1B00(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFortLOSComponent*                           FortLOSComponent;                                         // 0x1B08(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             SwoopSound;                                               // 0x1B10(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    UpdateMaterialParamsTL__Direction_ACBEB39C44788E2791FE33B31AFE7FC3;// 0x1B18(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x1B19(0x0007) MISSED OFFSET
	class UTimelineComponent*                          UpdateMaterialParamsTL;                                   // 0x1B20(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_0_ColorFadeOutTrack_E660A4034E5557BBA788399234042CF2;// 0x1B28(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Timeline_0_FadeInTrack_E660A4034E5557BBA788399234042CF2;  // 0x1B2C(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_E660A4034E5557BBA788399234042CF2;   // 0x1B30(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x1B31(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x1B38(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               CanDoHitReact;                                            // 0x1B40(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x1B41(0x0007) MISSED OFFSET
	class AFortPlayerPawn*                             TakerEvadeInstigator;                                     // 0x1B48(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AFortAIController*                           TakerController;                                          // 0x1B50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       SpawnFeedbackEventName;                                   // 0x1B58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  KnockTakerAwaySound;                                      // 0x1B60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SoulSuckEffectActivated;                                  // 0x1B68(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x1B69(0x0007) MISSED OFFSET
	struct FGameplayTagContainer                       TC_TakerSoulSuckVulnerability;                            // 0x1B70(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class AFortPlayerPawn*>                     TargetArray;                                              // 0x1B90(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               Temp_Disable_Elemental_Effects;                           // 0x1BA0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ElementalEnum>                         ElementalType;                                            // 0x1BA1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x6];                                       // 0x1BA2(0x0006) MISSED OFFSET
	class UMaterialInterface*                          Default_Material;                                         // 0x1BA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             Particle_Electrical_Ambient;                              // 0x1BB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             Particle_Ice_Ambient;                                     // 0x1BB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             Particle_Fire_Ambient;                                    // 0x1BC0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          Electrical_Mat;                                           // 0x1BC8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          Ice_Material;                                             // 0x1BD0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          Fire_Material;                                            // 0x1BD8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       SoulSuckMontageSection;                                   // 0x1BE0(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       SoulSuckCurrentMontageSection;                            // 0x1BE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SoulSuckGoalActorNormalizedHealth;                        // 0x1BF0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x1BF4(0x0004) MISSED OFFSET
	class AFortPawn*                                   SoulSuckGoalActor;                                        // 0x1BF8(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       Impact_MeleeSocket;                                       // 0x1C00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             ImpactParticles_Default;                                  // 0x1C08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             ImpactParticles_Wood;                                     // 0x1C10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             ImpactParticles_Stone;                                    // 0x1C18(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             ImpactParticles_Metal;                                    // 0x1C20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             ImpactParticles_HumanFlesh;                               // 0x1C28(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               MeleeImpact_UseSocketTransforms;                          // 0x1C30(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x1C31(0x0003) MISSED OFFSET
	struct FVector                                     TakerSwoopLevitateLocation;                               // 0x1C34(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              TakerSwoopLevitateNavigationError;                        // 0x1C40(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SwoopAttackStrikeTime;                                    // 0x1C44(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SwoopAttackMeleeRange;                                    // 0x1C48(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SwoopOverlapBoxXMin;                                      // 0x1C4C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SwoopOverlapBoxXMax;                                      // 0x1C50(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SwoopOverlapBoxZMin;                                      // 0x1C54(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SwoopOverlapBoxZMax;                                      // 0x1C58(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x1C5C(0x0004) MISSED OFFSET
	struct FName                                       TakerCapsuleDefaultCollisionProfileName;                  // 0x1C60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                TakerSoulSuckMontage;                                     // 0x1C68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    TakerDefaultRotationRate;                                 // 0x1C70(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x1C7C(0x0004) MISSED OFFSET
	class AActor*                                      TakerGoalActor;                                           // 0x1C80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              TakerAirborneTraceLength;                                 // 0x1C88(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TakerAirborneThreshold;                                   // 0x1C8C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Dynamic_Material_Instance;                                // 0x1C90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    Death_Effects;                                            // 0x1C98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystem*                             HQ_Death_Particle_System;                                 // 0x1CA0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HQ_DeathFX_SpawnRateScale;                                // 0x1CA8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x1CAC(0x0004) MISSED OFFSET
	class UParticleSystem*                             LQ_Death_Particle_System;                                 // 0x1CB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LQ_DeathFX_CylinderHeight;                                // 0x1CB8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LQ_DeathFX_CylinderRadius;                                // 0x1CBC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LQ_DeathFX_SpawnRateScale;                                // 0x1CC0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Sleeping;                                                 // 0x1CC4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x1CC5(0x0003) MISSED OFFSET
	class UParticleSystemComponent*                    SleepParticleSystemComp;                                  // 0x1CC8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              PushDuration;                                             // 0x1CD0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PushYawAngle;                                             // 0x1CD4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PushVelocity;                                             // 0x1CD8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x4];                                       // 0x1CDC(0x0004) MISSED OFFSET
	class AFortPawn*                                   PawnBumpedByTaker;                                        // 0x1CE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               isEnraged;                                                // 0x1CE8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x7];                                       // 0x1CE9(0x0007) MISSED OFFSET
	class UMaterialInstanceDynamic*                    Dynamic_Material_Instance_Accessory_1;                    // 0x1CF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USkeletalMeshComponent*                      ShieldSkeletalMesh;                                       // 0x1CF8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class AShielderSpringArm_C*                        ShieldArm;                                                // 0x1D00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              Slow_Shackle_Scale;                                       // 0x1D08(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TakerPawn.TakerPawn_C");
		return ptr;
	}


	void StopMaterialTimeline();
	void StopDeathFX();
	void TakerAirborneTest(struct FVector* ImpactPointOrTraceEndBelowTaker, bool* Airborne);
	void SetTakerRotationRate(float YawRate);
	void ResetTakerRotationRateToDefault();
	void OnRep_SoulSuckMontageSection();
	void MarkForDeath();
	void OnRep_SoulSuckEffectActivated();
	void ApplyPortalEffect(class ABuildingActor* BuildingActor, const struct FVector& Portal_Out_Direction);
	void UserConstructionScript();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Timeline_0__Spawn__EventFunc();
	void UpdateMaterialParamsTL__FinishedFunc();
	void UpdateMaterialParamsTL__UpdateFunc();
	void MantleStart(const struct FVector& StartPos, const struct FVector& MidPos, const struct FVector& EndPos, bool LowWall, bool MidWall, bool FullWall, bool WindowWall);
	void MantleEnd();
	void HuskEvadeStart();
	void VerifyTakerAttack(bool SpecialAttack, bool Swoop, bool Soul_Suck, bool Portal);
	void ResetTakerSpecialAttackTimer(bool Swoop, bool SoulSuckMelee, bool Portal);
	void TakerWallPortalBehavior(class AActor* BuildingPart, class UBTTask_BlueprintBase* Task, const struct FVector& DesiredMoveLocation, bool Debug);
	void IsTakerWallPortalAvailable(bool Portal_Available_);
	void TakerAttackFSM(bool SuccessfulHit);
	void PortalAdd(class ABuildingActor* BuildingActor, TArray<class ABuildingActor*>* BuildingActorList);
	void PortalClear();
	void TakerSoulSuckInterrupted();
	void PortalGet(class ABuildingActor* BuildingActor, class AActor* BT, TArray<class ABuildingActor*>* BuildingActorList);
	void PortalFX();
	void PortalCollision(bool Collide_);
	void ReceiveBeginPlay();
	void BeginTakerSwoopAttack();
	void EndTakerSwoopAttack();
	void TakerSoulSuckSoundBegin(bool Success);
	void TakerSoulSuckSoundEnd();
	void DoPortal(class ABuildingActor* BuildingActor, const struct FVector& PortalOutDirection);
	void TakerSoulSuckEffectOn();
	void TakerSoulSuckEffectOff();
	void OnDeathPlayEffects(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AFortPawn** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext);
	void BndEvt__FortLOSComponent_K2Node_ComponentBoundEvent_66_OnHasBeenFoundDelSignature__DelegateSignature(class AFortPlayerController* PlayerController);
	void GameplayCue_Impact_Physical_Creature(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void ModifySwoopOverlap();
	void StartOverlapBox();
	void StopOverlapBox();
	void OnDamagePlayEffects(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AFortPawn** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext);
	void AdditiveHitReactDelay();
	void SpawnDeathFX();
	void DoPortalFailsafe(class ABuildingActor* BuildingActor, TArray<class ABuildingSMActor*> ModifiedBuildings, const struct FVector& PortalOutDirection);
	void OnBeginSleepEffects();
	void OnEndSleepEffects();
	void BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void OnStartedEncounterSpawn();
	void OnFinishedEncounterSpawn();
	void GameplayCue_GameplayModifiers_OnLowHealth_Enrage(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Shield_Reapplied(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Shield_Destroyed(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Damage_Shielded(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void ReceivePossessed(class AController** NewController);
	void ExecuteUbergraph_TakerPawn(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
