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

// AnimBlueprintGeneratedClass BP_Pistol_Grip_Clip_TopAction.BP_Pistol_Grip_Clip_TopAction_C
// 0x00F8 (0x0458 - 0x0360)
class UBP_Pistol_Grip_Clip_TopAction_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_6047A5F5443C843C1EB16F90E772A9EC;      // 0x0368(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_1C444D924AC74067230DFA9A23E9CEE2;      // 0x03B0(0x0070)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_FE7CFCE944C6521565A6F7AC0C7064A1;// 0x0420(0x0038)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass BP_Pistol_Grip_Clip_TopAction.BP_Pistol_Grip_Clip_TopAction_C");
		return ptr;
	}


	void ExecuteUbergraph_BP_Pistol_Grip_Clip_TopAction(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
