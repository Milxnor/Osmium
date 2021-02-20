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

// BlueprintGeneratedClass GA_Athena_C4_Detonate.GA_Athena_C4_Detonate_C
// 0x0008 (0x0918 - 0x0910)
class UGA_Athena_C4_Detonate_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0910(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GA_Athena_C4_Detonate.GA_Athena_C4_Detonate_C");
		return ptr;
	}


	void Cancelled_0FC6F3A9476E143A48E14F9AC0AF6604(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Targeted_0FC6F3A9476E143A48E14F9AC0AF6604(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData* EventData);
	void ExecuteUbergraph_GA_Athena_C4_Detonate(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
