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

// BlueprintGeneratedClass GE_Ranged_GenericDamage_Explosive.GE_Ranged_GenericDamage_Explosive_C
// 0x0000 (0x0638 - 0x0638)
class UGE_Ranged_GenericDamage_Explosive_C : public UGET_DirectPhysicalDamage_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GE_Ranged_GenericDamage_Explosive.GE_Ranged_GenericDamage_Explosive_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
