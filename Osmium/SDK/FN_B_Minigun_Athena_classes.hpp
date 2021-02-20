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

// BlueprintGeneratedClass B_Minigun_Athena.B_Minigun_Athena_C
// 0x0070 (0x0F7C - 0x0F0C)
class AB_Minigun_Athena_C : public AB_Ranged_Generic_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0F0C(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0F10(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        BarrelGlowFX;                                             // 0x0F18(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             SpinUpSound;                                              // 0x0F20(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             SpinDownSound;                                            // 0x0F28(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    P_MinigunChargeUp;                                        // 0x0F30(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              SpinAudioVolumeTimeline_Volume_18EF57D9444836E65E22B6A5DFE3BF4A;// 0x0F38(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    SpinAudioVolumeTimeline__Direction_18EF57D9444836E65E22B6A5DFE3BF4A;// 0x0F3C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0F3D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          SpinAudioVolumeTimeline;                                  // 0x0F40(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              BarrelGlow_MuzzleGlowOpacity_6AA244864FFB6D03BB4DAA82CADCA13E;// 0x0F48(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    BarrelGlow__Direction_6AA244864FFB6D03BB4DAA82CADCA13E;   // 0x0F4C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0F4D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          BarrelGlow;                                               // 0x0F50(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMaterialInstanceDynamic*                    MuzzleGlowMID;                                            // 0x0F58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHasPlayedSpinUpSound;                                    // 0x0F60(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0F61(0x0003) MISSED OFFSET
	float                                              SpinUpAudioVolumeMultiplier;                              // 0x0F64(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAudioComponent*                             CurrentSpinAudioComponent;                                // 0x0F68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	int                                                CurrentAmmo;                                              // 0x0F70(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPlayedSpinUpAudio;                                       // 0x0F74(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPlayedSpinDownAudio;                                     // 0x0F75(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x0F76(0x0002) MISSED OFFSET
	float                                              SpinVolumeMultiplier;                                     // 0x0F78(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_Minigun_Athena.B_Minigun_Athena_C");
		return ptr;
	}


	void UserConstructionScript();
	void BarrelGlow__FinishedFunc();
	void BarrelGlow__UpdateFunc();
	void SpinAudioVolumeTimeline__FinishedFunc();
	void SpinAudioVolumeTimeline__UpdateFunc();
	void OnPlayWeaponFireFX(bool* bPersistentFire, bool* bSecondaryFire);
	void OnChargeUp();
	void OnChargeDown();
	void OnInitCosmeticAlterations(struct FFortCosmeticModification* CosmeticMod, class UMaterialInstanceDynamic** DynamicMaterialInstance);
	void MakeBarrelGlow();
	void StopBarrelGlow();
	void OnAmmoCountChanged();
	void Start_Spin_Up_Audio();
	void Start_Spin_Down_Audio();
	void OnWeaponAttached();
	void ExecuteUbergraph_B_Minigun_Athena(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
