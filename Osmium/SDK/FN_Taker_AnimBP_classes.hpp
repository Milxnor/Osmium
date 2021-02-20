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

// AnimBlueprintGeneratedClass Taker_AnimBP.Taker_AnimBP_C
// 0x1890 (0x1CA0 - 0x0410)
class UTaker_AnimBP_C : public UFortAIAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0410(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_082798314030DE3ADC83F8BFBDF82566;      // 0x0418(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_AB1968FA485DED492784FBAA44D0A1E2;// 0x0460(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1C22CB6042C4ACE738B397BF0A769E69;// 0x04A8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E8E5FB4F42C60B65BE04B4ADB41DDCC0;// 0x04F0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_83B2C1F64258D21959A8A7AB6E6D2EE3;// 0x0538(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_37AD8F234C1F6676446A4B87E5A69EDC;// 0x0580(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3F394D2148E0AA26A12918A2BF8D3A6C;// 0x05C8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7534B51C474595A7E43B13ABBFD64C92;// 0x0610(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_62138F6D41FD47E4B091A987F65B9FFF;// 0x0658(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_CA5FAB9A443DFAA3403AC5A4DC6E9AF5;// 0x06A0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_84F4C05B4EB44B368F15C2A7CB263C01;// 0x06E8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C24F0C5C45985D1DE37BD987E65DB2FB;// 0x0730(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_71F1304C4202A3C228F7C5ACF578B960;// 0x0778(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9DA1AC5749F1BCF282CFF09CF9C15E1E;// 0x07C0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B1307EAF4B36A5ECA8F203A314EBA756;// 0x0808(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_E8835F914BDA37D92D2C2A9BD0CC7E51;// 0x08B8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_526956A3469075583B291ABCDCFD61B7;// 0x0900(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_BD8B6C7C4A7A1F57D0CF2A83E4E52094;// 0x09B0(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_5DD183DA454A3FA648D37583DB2732C2;// 0x09F8(0x00E0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_8BFDA56D4310FC7E7ADAB7A1195A5CF1;// 0x0AD8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7CE326E146B92C62F0FFBB9C65813961;// 0x0B20(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3F6C1EB740A658BB0382CC8C4D532AD1;// 0x0B68(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_DC0DC0FE4E16B286590B3E9DA9EDE26E;// 0x0C18(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_0401C841468F6FA1CDD2EBB5211879F4;// 0x0C60(0x0128)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_F1834F2345A439F8DDA126ABA8E0E159;// 0x0D88(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_3097796A41537D2807A93B81C8DB4147;// 0x0DD0(0x00E0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_B5D00C784578EBBBAB905989F4A3D341;// 0x0EB0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_20D5258546E9A712D1D173ABFE336D7F;// 0x0EF8(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_666A8E33485554E59E5684BF79196F43;// 0x0FA8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_0ED6257F493C4D50F519E6BB08CA6207;// 0x0FF0(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_D45ACEF64909D7A0E0CE649049D74A9A;// 0x10A0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A3DE956D488498157ECE789164689FF6;// 0x10E8(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_4EC4851747233F066D31B0A1318773CF;// 0x1198(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B77264B64435B158CF01B5BAB9B72A42;// 0x11E0(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_48BB50D44D4EB95F9C86D38AD61C2E06;// 0x1290(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_76EB73E24CF8B38E78B3ED83A37BA680;// 0x12D8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_ACB6E68E4CD8809D8DFB92994CC36196;// 0x1320(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_5BE1FFE44FBAB0545D733694570344B5;// 0x13D0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_26E7129B45354DD811C95CAE5A809F1F;// 0x1418(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_A7AEE29E449BCCB9E25CABB38BE7762D;// 0x14C8(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_50BA35874D153B66A2EC479ABE631B0D;// 0x1510(0x00E0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_05CE871642AE940A56A25A83CA243DAB;// 0x15F0(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_642E163D4DB3B3CFEAEF7AA4C89D7816;// 0x1638(0x00E0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_5F3E6AB94EDE21007A90139A6BABE189;      // 0x1718(0x0070)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_0A672CDA44838D47B63F9783E1696F29;// 0x1788(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_4B1A1B9245586915A0D0179B03D0B0B1;// 0x1868(0x0050)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_8BE7B37A49E801AE1CE909B6D4C11439;// 0x18B8(0x0120)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_50D8A462467A44F737828F81AC7D8A60;// 0x19D8(0x0050)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_836E043E49B8521592D08DAFE14101DB;      // 0x1A28(0x0070)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_313C0D2048DAF29EED46DFA9B7939785;// 0x1A98(0x0200)
	float                                              LookAtAlpha;                                              // 0x1C98(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Time;                                                     // 0x1C9C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Taker_AnimBP.Taker_AnimBP_C");
		return ptr;
	}


	void IsRunningFunc(bool* IsRunning);
	void IsSprintingFunc(bool* IsSprinting);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Taker_AnimBP_AnimGraphNode_TransitionResult_E8E5FB4F42C60B65BE04B4ADB41DDCC0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Taker_AnimBP_AnimGraphNode_TransitionResult_83B2C1F64258D21959A8A7AB6E6D2EE3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Taker_AnimBP_AnimGraphNode_TransitionResult_37AD8F234C1F6676446A4B87E5A69EDC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Taker_AnimBP_AnimGraphNode_TransitionResult_3F394D2148E0AA26A12918A2BF8D3A6C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Taker_AnimBP_AnimGraphNode_TransitionResult_7534B51C474595A7E43B13ABBFD64C92();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Taker_AnimBP_AnimGraphNode_TransitionResult_62138F6D41FD47E4B091A987F65B9FFF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Taker_AnimBP_AnimGraphNode_TransitionResult_CA5FAB9A443DFAA3403AC5A4DC6E9AF5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Taker_AnimBP_AnimGraphNode_TransitionResult_AB1968FA485DED492784FBAA44D0A1E2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Taker_AnimBP_AnimGraphNode_TransitionResult_84F4C05B4EB44B368F15C2A7CB263C01();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Taker_AnimBP_AnimGraphNode_TransitionResult_C24F0C5C45985D1DE37BD987E65DB2FB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Taker_AnimBP_AnimGraphNode_TransitionResult_71F1304C4202A3C228F7C5ACF578B960();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Taker_AnimBP_AnimGraphNode_TransitionResult_9DA1AC5749F1BCF282CFF09CF9C15E1E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Taker_AnimBP_AnimGraphNode_TransitionResult_7CE326E146B92C62F0FFBB9C65813961();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Taker_AnimBP_AnimGraphNode_TransitionResult_1C22CB6042C4ACE738B397BF0A769E69();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Taker_AnimBP_AnimGraphNode_BlendSpacePlayer_0401C841468F6FA1CDD2EBB5211879F4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Taker_AnimBP_AnimGraphNode_TransitionResult_76EB73E24CF8B38E78B3ED83A37BA680();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Taker_AnimBP_AnimGraphNode_RotationOffsetBlendSpace_313C0D2048DAF29EED46DFA9B7939785();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void AnimNotify_SleepingFullyBlended();
	void ExecuteUbergraph_Taker_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
