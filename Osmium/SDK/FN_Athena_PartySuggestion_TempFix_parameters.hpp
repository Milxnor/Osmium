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

// Function Athena_PartySuggestion_TempFix.Athena_PartySuggestion_TempFix_C.TempFix_TintMainBrushes
struct UAthena_PartySuggestion_TempFix_C_TempFix_TintMainBrushes_Params
{
	struct FLinearColor                                NewColor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function Athena_PartySuggestion_TempFix.Athena_PartySuggestion_TempFix_C.SetupMIDReferences
struct UAthena_PartySuggestion_TempFix_C_SetupMIDReferences_Params
{
};

// Function Athena_PartySuggestion_TempFix.Athena_PartySuggestion_TempFix_C.SetMainMIDs
struct UAthena_PartySuggestion_TempFix_C_SetMainMIDs_Params
{
	class UMaterialInstanceDynamic*                    BorderMID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    TailMID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    SparklesMID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena_PartySuggestion_TempFix.Athena_PartySuggestion_TempFix_C.InitPhysAnim
struct UAthena_PartySuggestion_TempFix_C_InitPhysAnim_Params
{
};

// Function Athena_PartySuggestion_TempFix.Athena_PartySuggestion_TempFix_C.InitMIDs
struct UAthena_PartySuggestion_TempFix_C_InitMIDs_Params
{
};

// Function Athena_PartySuggestion_TempFix.Athena_PartySuggestion_TempFix_C.InitNewPartySuggestion
struct UAthena_PartySuggestion_TempFix_C_InitNewPartySuggestion_Params
{
	struct FFortPartySuggestion                        NewPartySuggestion;                                       // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Athena_PartySuggestion_TempFix.Athena_PartySuggestion_TempFix_C.OnMouseButtonDown_1
struct UAthena_PartySuggestion_TempFix_C_OnMouseButtonDown_1_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Athena_PartySuggestion_TempFix.Athena_PartySuggestion_TempFix_C.PlayOutro
struct UAthena_PartySuggestion_TempFix_C_PlayOutro_Params
{
};

// Function Athena_PartySuggestion_TempFix.Athena_PartySuggestion_TempFix_C.DismissSuggestion
struct UAthena_PartySuggestion_TempFix_C_DismissSuggestion_Params
{
};

// Function Athena_PartySuggestion_TempFix.Athena_PartySuggestion_TempFix_C.ClobberSuggestion
struct UAthena_PartySuggestion_TempFix_C_ClobberSuggestion_Params
{
};

// Function Athena_PartySuggestion_TempFix.Athena_PartySuggestion_TempFix_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_107_OnButtonHoverEvent__DelegateSignature
struct UAthena_PartySuggestion_TempFix_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_107_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function Athena_PartySuggestion_TempFix.Athena_PartySuggestion_TempFix_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_120_OnButtonHoverEvent__DelegateSignature
struct UAthena_PartySuggestion_TempFix_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_120_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function Athena_PartySuggestion_TempFix.Athena_PartySuggestion_TempFix_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
struct UAthena_PartySuggestion_TempFix_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Athena_PartySuggestion_TempFix.Athena_PartySuggestion_TempFix_C.ForceAcceptSuggestion
struct UAthena_PartySuggestion_TempFix_C_ForceAcceptSuggestion_Params
{
};

// Function Athena_PartySuggestion_TempFix.Athena_PartySuggestion_TempFix_C.Construct
struct UAthena_PartySuggestion_TempFix_C_Construct_Params
{
};

// Function Athena_PartySuggestion_TempFix.Athena_PartySuggestion_TempFix_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_31_CommonButtonClicked__DelegateSignature
struct UAthena_PartySuggestion_TempFix_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_31_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Athena_PartySuggestion_TempFix.Athena_PartySuggestion_TempFix_C.PlayIntro
struct UAthena_PartySuggestion_TempFix_C_PlayIntro_Params
{
};

// Function Athena_PartySuggestion_TempFix.Athena_PartySuggestion_TempFix_C.Tick
struct UAthena_PartySuggestion_TempFix_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena_PartySuggestion_TempFix.Athena_PartySuggestion_TempFix_C.UpdatePartySuggestion
struct UAthena_PartySuggestion_TempFix_C_UpdatePartySuggestion_Params
{
	struct FFortPartySuggestion                        PartySuggestionStruct;                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Athena_PartySuggestion_TempFix.Athena_PartySuggestion_TempFix_C.UpdateDisplay
struct UAthena_PartySuggestion_TempFix_C_UpdateDisplay_Params
{
};

// Function Athena_PartySuggestion_TempFix.Athena_PartySuggestion_TempFix_C.NewPartySuggestion
struct UAthena_PartySuggestion_TempFix_C_NewPartySuggestion_Params
{
	struct FFortPartySuggestion                        Party_Suggestion_Struct;                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Athena_PartySuggestion_TempFix.Athena_PartySuggestion_TempFix_C.HidePartySuggestion
struct UAthena_PartySuggestion_TempFix_C_HidePartySuggestion_Params
{
};

// Function Athena_PartySuggestion_TempFix.Athena_PartySuggestion_TempFix_C.PreConstruct
struct UAthena_PartySuggestion_TempFix_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena_PartySuggestion_TempFix.Athena_PartySuggestion_TempFix_C.OnUnhovered
struct UAthena_PartySuggestion_TempFix_C_OnUnhovered_Params
{
};

// Function Athena_PartySuggestion_TempFix.Athena_PartySuggestion_TempFix_C.OnHovered
struct UAthena_PartySuggestion_TempFix_C_OnHovered_Params
{
};

// Function Athena_PartySuggestion_TempFix.Athena_PartySuggestion_TempFix_C.ExecuteUbergraph_Athena_PartySuggestion_TempFix
struct UAthena_PartySuggestion_TempFix_C_ExecuteUbergraph_Athena_PartySuggestion_TempFix_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena_PartySuggestion_TempFix.Athena_PartySuggestion_TempFix_C.OnSuggestionMouseDown__DelegateSignature
struct UAthena_PartySuggestion_TempFix_C_OnSuggestionMouseDown__DelegateSignature_Params
{
};

// Function Athena_PartySuggestion_TempFix.Athena_PartySuggestion_TempFix_C.PartyFocused__DelegateSignature
struct UAthena_PartySuggestion_TempFix_C_PartyFocused__DelegateSignature_Params
{
	class UAthena_LFG_SuggestedPartyItem_C*            FocusedPartyItem;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
