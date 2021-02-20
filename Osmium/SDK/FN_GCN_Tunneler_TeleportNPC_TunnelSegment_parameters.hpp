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

// Function GCN_Tunneler_TeleportNPC_TunnelSegment.GCN_Tunneler_TeleportNPC_TunnelSegment_C.UserConstructionScript
struct AGCN_Tunneler_TeleportNPC_TunnelSegment_C_UserConstructionScript_Params
{
};

// Function GCN_Tunneler_TeleportNPC_TunnelSegment.GCN_Tunneler_TeleportNPC_TunnelSegment_C.K2_HandleGameplayCue
struct AGCN_Tunneler_TeleportNPC_TunnelSegment_C_K2_HandleGameplayCue_Params
{
	class AActor**                                     MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGameplayCueEvent>*                    EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters*                     Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GCN_Tunneler_TeleportNPC_TunnelSegment.GCN_Tunneler_TeleportNPC_TunnelSegment_C.ExecuteUbergraph_GCN_Tunneler_TeleportNPC_TunnelSegment
struct AGCN_Tunneler_TeleportNPC_TunnelSegment_C_ExecuteUbergraph_GCN_Tunneler_TeleportNPC_TunnelSegment_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
