#pragma once

// Fortnite (4.5-CL-4159770) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function B_Prj_Arrow_Crossbow_Athena.B_Prj_Arrow_Crossbow_Athena_C.UserConstructionScript
struct AB_Prj_Arrow_Crossbow_Athena_C_UserConstructionScript_Params
{
};

// Function B_Prj_Arrow_Crossbow_Athena.B_Prj_Arrow_Crossbow_Athena_C.OnTouched
struct AB_Prj_Arrow_Crossbow_Athena_C_OnTouched_Params
{
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FHitResult*                                 HitResult;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool*                                              bIsOverlap;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Prj_Arrow_Crossbow_Athena.B_Prj_Arrow_Crossbow_Athena_C.ExecuteUbergraph_B_Prj_Arrow_Crossbow_Athena
struct AB_Prj_Arrow_Crossbow_Athena_C_ExecuteUbergraph_B_Prj_Arrow_Crossbow_Athena_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
