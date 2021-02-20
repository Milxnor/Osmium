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

// Function B_Prj_Athena_SmokeGrenade.B_Prj_Athena_SmokeGrenade_C.UserConstructionScript
struct AB_Prj_Athena_SmokeGrenade_C_UserConstructionScript_Params
{
};

// Function B_Prj_Athena_SmokeGrenade.B_Prj_Athena_SmokeGrenade_C.OnBounce
struct AB_Prj_Athena_SmokeGrenade_C_OnBounce_Params
{
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function B_Prj_Athena_SmokeGrenade.B_Prj_Athena_SmokeGrenade_C.OnExploded
struct AB_Prj_Athena_SmokeGrenade_C_OnExploded_Params
{
	TArray<class AActor*>*                             HitActors;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FHitResult>*                         HitResults;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function B_Prj_Athena_SmokeGrenade.B_Prj_Athena_SmokeGrenade_C.BndEvt__OverlapCapsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct AB_Prj_Athena_SmokeGrenade_C_BndEvt__OverlapCapsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function B_Prj_Athena_SmokeGrenade.B_Prj_Athena_SmokeGrenade_C.FuseEnded
struct AB_Prj_Athena_SmokeGrenade_C_FuseEnded_Params
{
};

// Function B_Prj_Athena_SmokeGrenade.B_Prj_Athena_SmokeGrenade_C.ExecuteUbergraph_B_Prj_Athena_SmokeGrenade
struct AB_Prj_Athena_SmokeGrenade_C_ExecuteUbergraph_B_Prj_Athena_SmokeGrenade_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
