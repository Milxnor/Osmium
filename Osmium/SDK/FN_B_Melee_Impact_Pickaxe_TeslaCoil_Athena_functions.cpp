// Fortnite (4.5-CL-4159770) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function B_Melee_Impact_Pickaxe_TeslaCoil_Athena.B_Melee_Impact_Pickaxe_TeslaCoil_Athena_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_Melee_Impact_Pickaxe_TeslaCoil_Athena_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Melee_Impact_Pickaxe_TeslaCoil_Athena.B_Melee_Impact_Pickaxe_TeslaCoil_Athena_C.UserConstructionScript");

	AB_Melee_Impact_Pickaxe_TeslaCoil_Athena_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
